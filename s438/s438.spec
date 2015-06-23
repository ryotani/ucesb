// -*- C++ -*-

#define SOFT_SCALER32_CHANNELS 16

#include "spec/spec.spec"
#include "spec/land_std_vme.spec"
#include "../land_common/land_camac_converter.spec"
#include "../land_common/land_camac_scaler.spec"
#include "../land_common/nxyter.spec"
#include "../land_common/tacquila.spec"
#include "../land_common/titris.spec"
#include "sis3316_s438.spec"
#include "tridi_scalers_s438.spec"
#include "vme_caen_v1290_s438.spec"
#include "vme_gsi_vftx2_s438.spec"
#include "vuprom_v35_s438.spec"

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

SUBEVENT(titris_100)
{
	select several {
		ts100 = TIMESTAMP_TITRIS(id=0x100);
	}
}

SUBEVENT(titris_200)
{
	select several {
		ts200 = TIMESTAMP_TITRIS(id=0x200);
	}
}

SUBEVENT(master_tridi_ts)
{
	land_vme = LAND_STD_VME();
	tridi_ts = TRIDI();
}

SUBEVENT(mark_event_time)
{
	land_vme = LAND_STD_VME();
	select several {
		sampler_los = TRLO_SAMPLER(id=0xdf);
		sampler_cb_sum = TRLO_SAMPLER(id=0xd7);
	}
}

SUBEVENT(neuland_subevent)
{
	select several {
		data_sam7_gtb0 = TACQUILA_DATA(sam=7,gtb=0);
		data_sam7_gtb1 = TACQUILA_DATA(sam=7,gtb=1);
	}
}

SUBEVENT(CB_VME_RIGHT)
{
	vme = LAND_STD_VME();
	select several
	{
		adc[0] = VME_MESYTEC_MADC32(geom=0);
		adc[1] = VME_MESYTEC_MADC32(geom=1);
		adc[2] = VME_MESYTEC_MADC32(geom=2);
		adc[3] = VME_MESYTEC_MADC32(geom=3);
		tdc    = VME_VUPROM_V35_S438(geom=4);
		scaler = TRIDI_SCALERS_S438();
	}
}

SUBEVENT(CB_VME_LEFT)
{
	vme = LAND_STD_VME();
	select several
	{
		adc[0] = VME_MESYTEC_MADC32(geom=0);
		adc[1] = VME_MESYTEC_MADC32(geom=1);
		adc[2] = VME_MESYTEC_MADC32(geom=2);
		adc[3] = VME_MESYTEC_MADC32(geom=3);
		madc0_psp = VME_MESYTEC_MADC32(geom=4);
		tdc    = VME_VUPROM_V35_S438(geom=4);
		scaler = TRIDI_SCALERS_S438();
	}
}

SUBEVENT(los_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		vftx2 = VME_GSI_VFTX2_S438(id=0);
		madc32 = VME_MESYTEC_MADC32(geom=1);
	}
}

SUBEVENT(tof13_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		vftx2_1 = VME_GSI_VFTX2_S438(id=0);
		vftx2_2 = VME_GSI_VFTX2_S438(id=1);
		v1290_1 = VME_CAEN_V1290_S438(geom=0x02);
		v1290_2 = VME_CAEN_V1290_S438(geom=0x03);
	}
}

SUBEVENT(actar_subev)
{
	land_vme = LAND_STD_VME();
	tridi_ts = TRIDI();
	select several {
		tridi_scaler = TRIDI_SCALERS_S438();
		sis3316_scalers = SIS3316_SCALERS_S438();
		sis3316_3 = SIS3316_ACTAR_S438(id=3);
		sis3316_4 = SIS3316_ACTAR_S438(id=4);
		sis3316_5 = SIS3316_ACTAR_S438(id=5);
		sis3316_6 = SIS3316_ACTAR_S438(id=6);
		sis3316_7 = SIS3316_ACTAR_S438(id=7);
	}
}

SUBEVENT(psp_subev)
{
	land_vme = LAND_STD_VME();
	tridi_ts = TRIDI();
	select several {
		tridi_scaler = TRIDI_SCALERS_S438();
		sis3316_scalers = SIS3316_SCALERS_S438();
		sis3316_3 = SIS3316_PSP_S438(id=3);
		sis3316_4 = SIS3316_PSP_S438(id=4);
		sis3316_5 = SIS3316_PSP_S438(id=5);
		sis3316_6 = SIS3316_PSP_S438(id=6);
		sis3316_7 = SIS3316_PSP_S438(id=7);
	}
}

SUBEVENT(s2_struck_subev)
{
	land_vme = LAND_STD_VME();
	tridi_ts = TRIDI();
	select several {
		tridi_scaler = TRIDI_SCALERS_S438();
		sis3316_scalers = SIS3316_S2_SCALERS_S438();
		sis3316_3 = SIS3316_S2_S438(id=3);
		sis3316_4 = SIS3316_S2_S438(id=4);
	}
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

EVENT
{
	ts_master   = titris_100(type=10, subtype=1, control=1, subcrate=0);
	tridi_ts    = master_tridi_ts(type=88, subtype=8800, control=1, subcrate=5);
	event_time  = mark_event_time(type=88, subtype=8800, control=1, subcrate=6);
	scaler      = LAND_CAMAC_SCALER(type=34, subtype=3100, control=1, subcrate=2);
	tpat_and_co = LAND_CAMAC_CONVERTER(type=34, subtype=3200, control=1, subcrate=2);
	los         = los_subev(type=88, subtype=8800, control=5, subcrate=7);
	tof13       = tof13_subev(type=88, subtype=8800, control=5, subcrate=8);
	neuland     = neuland_subevent(type=94, subtype=9400);

	ts_xbr      = titris_100(type=10, subtype=1, control=5, subcrate=3);
	xbr         = CB_VME_RIGHT(type=88, subtype=8800, control=5,
			subcrate=3);

	ts_xbl      = titris_200(type=10, subtype=1, control=5, subcrate=4);
	xbl         = CB_VME_LEFT(type=88, subtype=8800, control=5,
			subcrate=4);

	// This matches the PSP timestamps also! ... */
	ts_actar    = titris_200(type=10, subtype=1, control=5, subcrate=0,
			procid=12);
	actar       = actar_subev(type=88, subtype=8800, control=5, subcrate=9);

	psp         = psp_subev(type=88, subtype=8800, control=5, subcrate=10);

	ts_s2       = titris_200(type=10, subtype=1, control=5, subcrate=0,
			procid=10);
	s2_struck   = s2_struck_subev(type=88, subtype=8800, control=5, subcrate=11);
	s2_mfi      = mfi_subev(type=97, subtype=9700);
}

#include "mapping.hh"
