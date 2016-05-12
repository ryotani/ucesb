// -*- C++ -*-

#define SOFT_SCALER32_CHANNELS 16

#include "spec/spec.spec"
#include "spec/land_std_vme.spec"
#include "../land_common/land_camac_converter.spec"
#include "../land_common/land_camac_scaler.spec"
#include "../land_common/nxyter.spec"
#include "../land_common/tacquila.spec"
#include "../land_common/vme_struck_sis3316.spec"
#include "../land_common/whiterabbit.spec"
#include "febex_notrace.spec"
#include "tacquila_s438b.spec"
#include "tamex.spec"
#include "sis3316_s438b.spec"
#include "../s438/vme_caen_v1290_s438.spec"
#include "vftx_s438b.spec"
#include "vftx_7ps.spec" // produces zero suppressed multi hit data!!!

DUMMY_WORD()
{
	UINT32 dummy_word;
}

TRIDI()
{
	UINT32 header {
		 0_15: tpat;
		16_31: 0x3d00;
	}
	UINT32 ts_msb;
	UINT32 ts_lsb;
}

TRLO_SCALER(crate_id)
{
	MEMBER(DATA32 stamps[16] NO_INDEX_LIST);

	UINT32 header {
		0_7: crate_id = MATCH(crate_id);
		8_31: 0x721009;
	}

	list(0 <= index < 16) {
		UINT32 data NOENCODE {
			0_31: value;

			ENCODE(stamps APPEND_LIST, (value = value));
		}
	}
}

TRLO_SAMPLER(id)
{
	MEMBER(DATA32 stamps[512] NO_INDEX_LIST);

	UINT32 header {
		0_9:      count; // for easy skip (max 511 entries)
		24_31:    id = MATCH(id);
	}

	list(0 <= index < header.count) {
		UINT32 data NOENCODE {
			// in principle: bit 31: entries were lost (buffer overflow), 30-0: timestamp
			0_31: stamp;
			ENCODE(stamps APPEND_LIST, (value=stamp));
		}
	}
}

DAQ_STATUS()
{
	UINT32 spill_nr;
	UINT32 trigger;
	UINT32 time;

	MEMBER(DATA32 scaler[48] ZERO_SUPPRESS);
	list(0 <= i < 48) {
		UINT32 count NOENCODE {
			0_31: value;
			ENCODE(scaler[i], (value = value));
		}
	}

	// UDP DAQ status.
#define NUM_TRIGGERS 16
	MEMBER(DATA32 trig_count[NUM_TRIGGERS] ZERO_SUPPRESS);
	list(0 <= i < NUM_TRIGGERS) {
		UINT32 count NOENCODE {
			0_31: value;
			ENCODE(trig_count[i], (value = value));
		}
	}

	UINT32 events;
	UINT32 errors;

	UINT32 errors_data_corrupt;
	UINT32 errors_data_missing;
	UINT32 errors_data_too_much;
	UINT32 errors_event_counter_mismatch;
	UINT32 errors_event_counter_incr_mismatch;
	UINT32 errors_trigger_mismatch;

	UINT32 ticks_count;
	UINT32 ticks_deadtime;
	MEMBER(DATA32 ticks_dt_trig[NUM_TRIGGERS] ZERO_SUPPRESS);
	list(0 <= i < NUM_TRIGGERS) {
		UINT32 count NOENCODE {
			0_31: value;
			ENCODE(ticks_dt_trig[i], (value = value));
		}
	}
}

SUBEVENT(wr_100)
{
	ts100 = TIMESTAMP_WHITERABBIT(id=0x100);
}

SUBEVENT(wr_300)
{
	ts300 = TIMESTAMP_WHITERABBIT(id=0x300);
}

SUBEVENT(wr_500)
{
	ts500 = TIMESTAMP_WHITERABBIT(id=0x500);
}

SUBEVENT(mark_event_time)
{
	land_vme = LAND_STD_VME();
	select several {
		sampler_los = TRLO_SAMPLER(id=0xdf);
		sampler_cb_sum = TRLO_SAMPLER(id=0xd7);
	}
}

SUBEVENT(daq_status_subev)
{
	status = DAQ_STATUS();
}

SUBEVENT(los_psp_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		vftx2_1 = VME_GSI_VFTX2_7PS(id=0); // LOS1 : std vftc - unused?
		vftx2_2 = VME_GSI_VFTX2_7PS(id=1); // LOS2 : 7ps vftx ch 0..3 for LOS2; 15 for master trigger
		madc32 = VME_MESYTEC_MADC32(geom=2);
	}
}

SUBEVENT(los_scaler_subev)
{
	scaler = TRLO_SCALER(crate_id=1);
}

SUBEVENT(tof13_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		vftx2_1 = VME_GSI_VFTX2_S438(id=0);
		vftx2_2 = VME_GSI_VFTX2_S438(id=1);
		vftx2_3 = VME_GSI_VFTX2_S438(id=2);
		vftx2_4 = VME_GSI_VFTX2_S438(id=3);
		v1290_1 = VME_CAEN_V1290_S438(geom=4);
	}
}

SUBEVENT(neuland_subevent)
{
	select several {
		data_sam5_gtb0 = TACQUILA_DATA_S438B(sam=5,gtb=0);
		data_sam5_gtb1 = TACQUILA_DATA_S438B(sam=5,gtb=1);
		data_sam6_gtb0 = TACQUILA_DATA_S438B(sam=6,gtb=0);
		data_sam6_gtb1 = TACQUILA_DATA_S438B(sam=6,gtb=1);
		data_sam7_gtb0 = TACQUILA_DATA_S438B(sam=7,gtb=0);
		data_sam7_gtb1 = TACQUILA_DATA_S438B(sam=7,gtb=1);
	}
}

SUBEVENT(sit_subev)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x200);
	select several {
		dummy = DUMMY_WORD();
	}
}

SUBEVENT(fiber_subev)
{
	evhe=FEBEX_EVENTHEADER();
	select several {
	  GFI0=FEBEX_NOTRACE(sfp = 0, card = 0);
	  GFI1=FEBEX_NOTRACE(sfp = 0, card = 1);
	  GFI2=FEBEX_NOTRACE(sfp = 0, card = 2);
	  GFI3=FEBEX_NOTRACE(sfp = 0, card = 3);
	  GFI4=FEBEX_NOTRACE(sfp = 0, card = 4);
	  fi4[0] = FEBEX_NOTRACE(sfp = 0, card = 5);
	  fi4[1] = FEBEX_NOTRACE(sfp = 0, card = 6);
	  fi4[2] = FEBEX_NOTRACE(sfp = 0, card = 7);
	  fi4[3] = FEBEX_NOTRACE(sfp = 0, card = 8);
	}
/*
	select several {
		dummy = DUMMY_WORD();
	}
	*/
}

SUBEVENT(psp_febex_subev)
{
	eh=FEBEX_EVENTHEADER();
		
	select several {
		febex1 = FEBEX_NOTRACE(sfp=1, card=0); // positive signals
		febex2 = FEBEX_NOTRACE(sfp=1, card=1); // positive signals
		febex3 = FEBEX_NOTRACE(sfp=1, card=2); // negative signals
		febex4 = FEBEX_NOTRACE(sfp=1, card=3); // ...
		febex5 = FEBEX_NOTRACE(sfp=1, card=4);
		febex6 = FEBEX_NOTRACE(sfp=1, card=5);
		febex7 = FEBEX_NOTRACE(sfp=1, card=6);
		febex8 = FEBEX_NOTRACE(sfp=1, card=7);
		febex9 = FEBEX_NOTRACE(sfp=1, card=8);
		febex10= FEBEX_NOTRACE(sfp=1, card=9);
	}
}

SUBEVENT(neuland_tamex_subev)
{
	UINT32 trigger_window {
		16_26: ns_before_trigger;
		 0_10: ns_after_trigger;
	}

	tamex[ 0] = TAMEX_CHANNEL(sfp = 0, card =  0);
	tamex[ 1] = TAMEX_CHANNEL(sfp = 0, card =  1);
	tamex[ 2] = TAMEX_CHANNEL(sfp = 0, card =  2);
	tamex[ 3] = TAMEX_CHANNEL(sfp = 0, card =  3);
	tamex[ 4] = TAMEX_CHANNEL(sfp = 0, card =  4);
	tamex[ 5] = TAMEX_CHANNEL(sfp = 0, card =  5);
	tamex[ 6] = TAMEX_CHANNEL(sfp = 0, card =  6);
	tamex[ 7] = TAMEX_CHANNEL(sfp = 0, card =  7);
	tamex[ 8] = TAMEX_CHANNEL(sfp = 0, card =  8);
	tamex[ 9] = TAMEX_CHANNEL(sfp = 0, card =  9);
	tamex[10] = TAMEX_CHANNEL(sfp = 0, card = 10);
	tamex[11] = TAMEX_CHANNEL(sfp = 0, card = 11);
	tamex[12] = TAMEX_CHANNEL(sfp = 0, card = 12);
}

SUBEVENT(tof13_tamex_subev)
{
	UINT32 trigger_window {
		16_26: ns_before_trigger;
		 0_10: ns_after_trigger;
	}

	tamex[0] = TAMEX_CHANNEL(sfp = 0, card = 0);
	tamex[1] = TAMEX_CHANNEL(sfp = 0, card = 1);
}

SUBEVENT(mfi_subev)
{
	select several
	{
		pads = NXYTER_PADDING();
		data00 = NXYTER(gem=0,nxy=0);
		data01 = NXYTER(gem=0,nxy=1);
		data10 = NXYTER(gem=1,nxy=0);
		data11 = NXYTER(gem=1,nxy=1);
		data20 = NXYTER(gem=2,nxy=0);
		data21 = NXYTER(gem=2,nxy=1);
		data30 = NXYTER(gem=3,nxy=0);
		data31 = NXYTER(gem=3,nxy=1);
	}
}

SUBEVENT(califa_subev)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x400);
	select several {
		dummy = DUMMY_WORD();
	}
}

SUBEVENT(psp_subev)
{
	land_vme = LAND_STD_VME();
	tridi_ts = TRIDI();
	select several {
		sis3316_3 = SIS3316_ACTAR_S438(id=3);
		sis3316_4 = SIS3316_ACTAR_S438(id=4);
		sis3316_5 = SIS3316_ACTAR_S438(id=5);
		sis3316_6 = SIS3316_ACTAR_S438(id=6);
		sis3316_7 = SIS3316_ACTAR_S438(id=7);
		sis3316_8 = SIS3316_ACTAR_S438(id=8);
	}
}

SUBEVENT(empty_subev)
{
}

EVENT
{
	master_ts     = wr_100(type=10, subtype=1, control=1, subcrate=0);
	event_time    = mark_event_time(type=88, subtype=8800, control=1, subcrate=0);
	daq_status    = daq_status_subev(type=89, subtype=8900, control=1, subcrate=2);
	tpat_and_co   = LAND_CAMAC_CONVERTER(type=34, subtype=3200, control=1, subcrate=2);
	scalers       = LAND_CAMAC_SCALER(type=34, subtype=3100, control=1, subcrate=2);
	neuland_tacq  = neuland_subevent(type=94, subtype=9400, control=3,
		         subcrate=0);
	los_psp       = los_psp_subev(type=88, subtype=8800, control=9, subcrate=1);
	los_scaler    = los_scaler_subev(type=34, subtype=3300, control=9, subcrate=1);
	tof13         = tof13_subev(type=88, subtype=8800, control=9, subcrate=2);

	sit           = sit_subev(type=104, subtype=10400, control=37, subcrate=0);

	tbm_ts        = wr_300(type=10, subtype=1, control=5, subcrate=4);
	fiber         = fiber_subev(type=100, subtype=10000, control=9, subcrate=0);
	psp_febex     = psp_febex_subev(type=100, subtype=10000, control=9, subcrate=1);
	neuland_tamex = neuland_tamex_subev(type=102, subtype=10200, control=9, subcrate=0);
	tof13_tamex   = tof13_tamex_subev(type=102, subtype=10200, control=9, subcrate=1);
	mfi           = mfi_subev(type=97, subtype=9700, control=9, subcrate=0);

	califa        = califa_subev(type=100, subtype=10000, control=9, subcrate=2);

	psp_ts        = wr_500(type=10, subtype=1, control=5, subcrate=0);
	psp_struck    = psp_subev(type=88, subtype=8800, control=5, subcrate=3);

	// Uh, why did we put empty events here?
	empty_1       = empty_subev(type=10, subtype=1, control=9, subcrate=1);
	empty_2       = empty_subev(type=10, subtype=1, control=9, subcrate=2);
}

#include "mapping.hh"
#include "mapping_neuland.hh"
#include "mapping_psp_zerosuppressed.hh"
//#include "mapping_fi4.hh"
