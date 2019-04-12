#define EXT_SST_HAS_BRANCH 1

#include "spec/spec.spec"
#include "sst_ext.spec"
#include "../land_common/barrier.spec"
#include "../land_common/gsi_clocktdc.spec"
#include "../land_common/gsi_febex_v2.spec"
#include "../land_common/gsi_tamex3.spec"
#include "../land_common/land_vme.spec"
#include "../land_common/trloii.spec"
#include "../land_common/vme_gsi_vftx2.spec"
#include "../land_common/whiterabbit.spec"

SUBEVENT(ams_siderem_subev)
{
	ts300 = TIMESTAMP_WHITERABBIT(id=0x300);
	select several {
		external sst[0] = EXT_SST(siderem=1, gtb=0, sam=5, branch=0);
		external sst[1] = EXT_SST(siderem=2, gtb=0, sam=5, branch=0);
		external sst[2] = EXT_SST(siderem=1, gtb=1, sam=5, branch=0);
		external sst[3] = EXT_SST(siderem=2, gtb=1, sam=5, branch=0);
	}
}

#define NUM_SFP_MODULES 2
#define CHANNELS_PER_FEBEX 16
#define FEBEX_MODULES_PER_SFP 16

FEBEX3_CALIFA_BASE(){

	MEMBER(DATA16 energy[NUM_SFP_MODULES*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX]  ZERO_SUPPRESS);
	MEMBER(DATA32 ts_lsb[NUM_SFP_MODULES*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX]   ZERO_SUPPRESS);
	MEMBER(DATA32 ts_msb[NUM_SFP_MODULES*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX]   ZERO_SUPPRESS);
	MEMBER(DATA16 n_f[NUM_SFP_MODULES*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX]   ZERO_SUPPRESS);
	MEMBER(DATA16 n_s[NUM_SFP_MODULES*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX]   ZERO_SUPPRESS);

	several UINT32 PADDING NOENCODE{
		0_19: irrelevant;
		20_31: all = MATCH(0xadd);
	}

	// Decoding GOSIP
	UINT32 HEADER NOENCODE{
		0_7: header_size;
		8_11: trigger;
		12_15: sfp_id;        //fiberConnector;
		16_23: module_id;     //card;
		24_31: submemory_id;  //channel;
	}

	UINT32 DATASIZE NOENCODE{
		0_15: sizebytes;
		16_31: 0x0000;
	}

	if(DATASIZE.sizebytes>0){
		if(HEADER.submemory_id==0xff){
			// NOTE FROM PHILIPP: IIRC, Max uses the 0xff channel for timestamp synchronization.
			// after timestitching one does not need it anymore, in my view.
			list (0 <= index < DATASIZE.sizebytes/4){
				UINT32 SYNCHRO NOENCODE;
			}
		}
		else{
			UINT32 HEADER_MAGIC NOENCODE{
				0_15: sizebytes = MATCH(DATASIZE.sizebytes);
				16_31: magic;
			}
			if(HEADER_MAGIC.magic==0x115A){
				UINT32 eventid NOENCODE;
				UINT32 timestamp_lsb NOENCODE;
				UINT32 timestamp_msb NOENCODE;

				UINT16 cfd_sample_val1 NOENCODE;
				UINT16 cfd_sample_val2 NOENCODE;
				UINT16 cfd_sample_val3 NOENCODE;
				UINT16 cfd_sample_val4 NOENCODE;

				UINT32 FLAGS NOENCODE{
					0_23:  ov;
					24_31: selftrigger;
				}

				UINT16 pileup NOENCODE;
				UINT16 discard NOENCODE;

				UINT32 ENERGY_VALUE NOENCODE{
					0_15:  eneval;
					16_31: reservedbits;
				}
				UINT32 INTEGRAL_VALUE NOENCODE{
					0_15:  nf;
					16_31: ns;
				}

				ENCODE(energy[HEADER.sfp_id*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX+HEADER.module_id*CHANNELS_PER_FEBEX+HEADER.submemory_id], (value=ENERGY_VALUE.eneval));
				ENCODE(ts_lsb[HEADER.sfp_id*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX+HEADER.module_id*CHANNELS_PER_FEBEX+HEADER.submemory_id], (value=timestamp_lsb));
				ENCODE(ts_msb[HEADER.sfp_id*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX+HEADER.module_id*CHANNELS_PER_FEBEX+HEADER.submemory_id], (value=timestamp_msb));
				ENCODE(n_f[HEADER.sfp_id*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX+HEADER.module_id*CHANNELS_PER_FEBEX+HEADER.submemory_id], (value=INTEGRAL_VALUE.nf));
				ENCODE(n_s[HEADER.sfp_id*FEBEX_MODULES_PER_SFP*CHANNELS_PER_FEBEX+HEADER.module_id*CHANNELS_PER_FEBEX+HEADER.submemory_id], (value=INTEGRAL_VALUE.ns));

				if(DATASIZE.sizebytes>40){
					UINT32 HEADER_TOT NOENCODE{
						0_15: tot;
						16_31: magic_beef = MATCH(0xBEEF);
					}
					UINT16 trace_sample_val1 NOENCODE;
					UINT16 trace_sample_val2 NOENCODE;
					UINT16 trace_sample_val3 NOENCODE;
					UINT16 trace_sample_val4 NOENCODE;
				}
				if(DATASIZE.sizebytes>52){
					UINT32 HEADER_TRACE NOENCODE{
						0_15: datalength; //2*num samples+8
						16_31: magic_2bad = MATCH(0x2BAD);
					}
					list (0 <= index < (HEADER_TRACE.datalength/4)-1){
						// Should be properly encoded if traces are needed
						UINT32 TRACE_SAMPLES NOENCODE;
					}
				}
			}
			else if(HEADER_MAGIC.magic==0xB00B){
				// The 0xB00B stuff is related to patricks pulser. Again, support for that is not very urgent,
				// but might come in handy at some point.
				UINT32 pul_eventid NOENCODE;
				UINT32 pul_timestamp_lsb NOENCODE;
				UINT32 pul_timestamp_msb NOENCODE;

				UINT32 N_S_TOT NOENCODE{
					0_7: pul_n_s;
					8_31: pul_nothingofinterest;
				}
				UINT32 N_F_TOT NOENCODE{
					0_7: pul_firstterm;
					8_11: pul_secondterm;
					12_15: pul_nothingofinterest2;
					16_23: pul_nothingofinterest3;
					24_31: pul_n_f;
				}
				UINT32 pul_throwme NOENCODE;
			}
		}
	}
}

SUBEVENT(CALIFA)
{
	// Extract White Rabbit Timestamp after CALIFA_SYSTEM_ID identifier
	ts400 = TIMESTAMP_WHITERABBIT(id=0x400);
	select several{
		febex3 = FEBEX3_CALIFA_BASE();
	}
}

febex_subev_data()
{
	land_vme = LAND_STD_VME();
	select several {
		header0 = FEBEX_GOOD_EVENTHEADER();
	}
	select several {
		padding0 = FEBEX_PADDING();
	}
	select several {
		febex_0[ 0] = FEBEX_NOTRACE(sfp=0, card=0);
		febex_0[ 1] = FEBEX_NOTRACE(sfp=0, card=1);
		febex_0[ 2] = FEBEX_NOTRACE(sfp=0, card=2);
		febex_0[ 3] = FEBEX_NOTRACE(sfp=0, card=3);
		febex_0[ 4] = FEBEX_NOTRACE(sfp=0, card=4);
		febex_0[ 5] = FEBEX_NOTRACE(sfp=0, card=5);
		febex_0[ 6] = FEBEX_NOTRACE(sfp=0, card=6);
		febex_0[ 7] = FEBEX_NOTRACE(sfp=0, card=7);
		febex_0[ 8] = FEBEX_NOTRACE(sfp=0, card=8);
		febex_0[ 9] = FEBEX_NOTRACE(sfp=0, card=9);
		febex_0[10] = FEBEX_NOTRACE(sfp=0, card=10);
		febex_0[11] = FEBEX_NOTRACE(sfp=0, card=11);
		febex_0[12] = FEBEX_NOTRACE(sfp=0, card=12);
		febex_0[13] = FEBEX_NOTRACE(sfp=0, card=13);
		febex_0[14] = FEBEX_NOTRACE(sfp=0, card=14);
		febex_0[15] = FEBEX_NOTRACE(sfp=0, card=15);
//		febextrace_0[ 0] = FEBEX_TRACE(sfp=0, card=0);
//		febextrace_0[ 1] = FEBEX_TRACE(sfp=0, card=1);
//		febextrace_0[ 2] = FEBEX_TRACE(sfp=0, card=2);
//		febextrace_0[ 3] = FEBEX_TRACE(sfp=0, card=3);
//		febextrace_0[ 4] = FEBEX_TRACE(sfp=0, card=4);
//		febextrace_0[ 5] = FEBEX_TRACE(sfp=0, card=5);
//		febextrace_0[ 6] = FEBEX_TRACE(sfp=0, card=6);
//		febextrace_0[ 7] = FEBEX_TRACE(sfp=0, card=7);
//		febextrace_0[ 8] = FEBEX_TRACE(sfp=0, card=8);
//		febextrace_0[ 9] = FEBEX_TRACE(sfp=0, card=9);
//		febextrace_0[10] = FEBEX_TRACE(sfp=0, card=10);
//		febextrace_0[11] = FEBEX_TRACE(sfp=0, card=11);
//		febextrace_0[12] = FEBEX_TRACE(sfp=0, card=12);
//		febextrace_0[13] = FEBEX_TRACE(sfp=0, card=13);
//		febextrace_0[14] = FEBEX_TRACE(sfp=0, card=14);
//		febextrace_0[15] = FEBEX_TRACE(sfp=0, card=15);
	}
}

SUBEVENT(febex_subev)
{
	select several {
		data = febex_subev_data();
	}
}

fib_ctdc0_subev_data()
{
	land_vme = LAND_STD_VME();
	select several {
		padding = GSI_CLOCKTDC_PADDING();
	}
	select several {
		ctdc[0] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=0);
		ctdc[1] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=1);
		ctdc[2] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=2);
		ctdc[3] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=3);
	}
}

SUBEVENT(fib_ctdc0_subev)
{
	select several {
		data = fib_ctdc0_subev_data();
	}
}

fib_ctdc0_fib3_subev_data()
{
	land_vme = LAND_STD_VME();
	select several {
		padding = GSI_CLOCKTDC_PADDING();
	}
	select several {
		ctdc3[0] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=0);
		ctdc3[1] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=1);
		ctdc3[2] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=2);
		ctdc3[3] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=3);
	}
}

SUBEVENT(fib_ctdc0_fib3_subev)
{
	select several {
		data = fib_ctdc0_fib3_subev_data();
	}
}

fib_tamex_data()
{
	land_vme = LAND_STD_VME();
	select several {
		padding = TAMEX3_PADDING();
	}
	select several {
		tamex[0] = TAMEX3_SFP(sfp=0, card=0);
		tamex[1] = TAMEX3_SFP(sfp=0, card=1);
		tamex[2] = TAMEX3_SFP(sfp=0, card=2);
		tamex[3] = TAMEX3_SFP(sfp=0, card=3);
	}
}

SUBEVENT(fib_tamex_subev)
{
	select several {
		data = fib_tamex_data();
	}
}

lmu_scalers_data()
{
	UINT32 beam;
}

SUBEVENT(lmu_scalers_subev)
{
	select several {
		scalers = lmu_scalers_data();
	}
}

SUBEVENT(tofd_sampler_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		tofd = TRLOII_SAMPLER_TWO(mark=0x1050);
		ms = TRLOII_SAMPLER_TWO(mark=0x1060);
	}
}

los_scalers_data()
{
	UINT32 beam;
}

SUBEVENT(los_scalers_subev)
{
	select several {
		scalers = los_scalers_data();
	}
}

los_tamex_data()
{
	land_vme = LAND_STD_VME();
	select several {
		padding = TAMEX3_PADDING();
	}
	select several {
		tamex = TAMEX3_SFP(sfp=2, card=0);
	}
}

SUBEVENT(los_tamex_subev)
{
	select several {
		data = los_tamex_data();
	}
}

los_vme_subev_data()
{
	land_vme = LAND_STD_VME();
	select several {
		barrier = BARRIER();
	}
	select several {
		vftx2 = VME_GSI_VFTX2_7PS(id=1);
	}
}

SUBEVENT(los_vme_subev)
{
	select several {
		data = los_vme_subev_data();
	}
}

master_beammon_subev_data()
{
	land_vme = LAND_STD_VME();
	select several {
		v830 = VME_CAEN_V830(geom=3);
	}
}

SUBEVENT(master_beammon_subev)
{
	select several {
		data = master_beammon_subev_data();
	}
}

master_scalers_data()
{
	UINT32 mega;
	list (0 <= i < 32) {
		UINT32 poisson NOENCODE;
	}
}

SUBEVENT(master_scalers_subev)
{
	scalers = master_scalers_data();
}

neuland_sfp(sfp)
{
	select several {
		card[ 0] = TAMEX3_SFP(sfp = sfp, card =  0);
		card[ 1] = TAMEX3_SFP(sfp = sfp, card =  1);
		card[ 2] = TAMEX3_SFP(sfp = sfp, card =  2);
		card[ 3] = TAMEX3_SFP(sfp = sfp, card =  3);
		card[ 4] = TAMEX3_SFP(sfp = sfp, card =  4);
		card[ 5] = TAMEX3_SFP(sfp = sfp, card =  5);
		card[ 6] = TAMEX3_SFP(sfp = sfp, card =  6);
		card[ 7] = TAMEX3_SFP(sfp = sfp, card =  7);
		card[ 8] = TAMEX3_SFP(sfp = sfp, card =  8);
		card[ 9] = TAMEX3_SFP(sfp = sfp, card =  9);
		card[10] = TAMEX3_SFP(sfp = sfp, card = 10);
		card[11] = TAMEX3_SFP(sfp = sfp, card = 11);
		card[12] = TAMEX3_SFP(sfp = sfp, card = 12);
		card[13] = TAMEX3_SFP(sfp = sfp, card = 13);
		card[14] = TAMEX3_SFP(sfp = sfp, card = 14);
		card[15] = TAMEX3_SFP(sfp = sfp, card = 15);
		card[16] = TAMEX3_SFP(sfp = sfp, card = 16);
		card[17] = TAMEX3_SFP(sfp = sfp, card = 17);
		card[18] = TAMEX3_SFP(sfp = sfp, card = 18);
		card[19] = TAMEX3_SFP(sfp = sfp, card = 19);
		card[20] = TAMEX3_SFP(sfp = sfp, card = 20);
		card[21] = TAMEX3_SFP(sfp = sfp, card = 21);
		card[22] = TAMEX3_SFP(sfp = sfp, card = 22);
		card[23] = TAMEX3_SFP(sfp = sfp, card = 23);
		card[24] = TAMEX3_SFP(sfp = sfp, card = 24);
		card[25] = TAMEX3_SFP(sfp = sfp, card = 25);
		card[26] = TAMEX3_SFP(sfp = sfp, card = 26);
		card[27] = TAMEX3_SFP(sfp = sfp, card = 27);
		card[28] = TAMEX3_SFP(sfp = sfp, card = 28);
		card[29] = TAMEX3_SFP(sfp = sfp, card = 29);
		card[30] = TAMEX3_SFP(sfp = sfp, card = 30);
		card[31] = TAMEX3_SFP(sfp = sfp, card = 31);
		card[32] = TAMEX3_SFP(sfp = sfp, card = 32);
		card[33] = TAMEX3_SFP(sfp = sfp, card = 33);
		card[34] = TAMEX3_SFP(sfp = sfp, card = 34);
	}
}

neuland_window()
{
	UINT32 window;
}

neuland_tamex_subev_data()
{
	land_vme = LAND_STD_VME();
	select several {
		padding0 = TAMEX3_PADDING();
	}
	sfp[0] = neuland_sfp(sfp = 0);
}

/* This readout scheme shaves 6 us off the PC deadtime */
neuland_tamex_subev_data_swapped()
{
	land_vme = LAND_STD_VME();
	select several {
		padding0 = TAMEX3_PADDING();
	}
	sfp[1] = neuland_sfp(sfp = 1);
	select several {
		barrier = BARRIER();
		padding1 = TAMEX3_PADDING();
	}
	sfp[0] = neuland_sfp(sfp = 0);
}

SUBEVENT(neuland_tamex_subev)
{
	select several {
		data = neuland_tamex_subev_data();
	}
}

SUBEVENT(neuland_tamex_swapped_subev)
{
	select several {
		data = neuland_tamex_subev_data_swapped();
	}
}

tofd_tamex_subev_data()
{
	land_vme = LAND_STD_VME();
	select several {
		padding = TAMEX3_PADDING();
	}
	select several {
		tamex[ 0] = TAMEX3_SFP(sfp=0, card= 0);
		tamex[ 1] = TAMEX3_SFP(sfp=0, card= 1);
		tamex[ 2] = TAMEX3_SFP(sfp=0, card= 2);
		tamex[ 3] = TAMEX3_SFP(sfp=0, card= 3);
		tamex[ 4] = TAMEX3_SFP(sfp=0, card= 4);
		tamex[ 5] = TAMEX3_SFP(sfp=0, card= 5);
		tamex[ 6] = TAMEX3_SFP(sfp=0, card= 6);
		tamex[ 7] = TAMEX3_SFP(sfp=0, card= 7);
		tamex[ 8] = TAMEX3_SFP(sfp=0, card= 8);
		tamex[ 9] = TAMEX3_SFP(sfp=0, card= 9);
		tamex[10] = TAMEX3_SFP(sfp=0, card=10);
		tamex[11] = TAMEX3_SFP(sfp=0, card=11);
	}
}

SUBEVENT(tofd_tamex_subev)
{
	select several {
		data = tofd_tamex_subev_data();
	}
}

SUBEVENT(tpat_subev)
{
	tpat = TRLOII_TPAT(id=0xcf);
}

SUBEVENT(wr_100)
{
	ts100 = TIMESTAMP_WHITERABBIT(id=0x100);
	wr_multi = WR_MULTI();
}

SUBEVENT(wr_500)
{
	ts500 = TIMESTAMP_WHITERABBIT(id=0x500);
	wr_multi = WR_MULTI();
}

EVENT
{
	master_ts = wr_100(type=10, subtype=1, control=0);
	master_tpat = tpat_subev(type=36, subtype=3600, control=0);
	master_lmu_scalers = lmu_scalers_subev(type=37, subtype=3700, control=0);
	master_scalers = master_scalers_subev(type=38, subtype=3800, control=0);
	tofd_sampler = tofd_sampler_subev(type=39, subtype=3900, control=0);
	master_beammon = master_beammon_subev(type=88, subtype=8800, control=0);
	fib_tamex = fib_tamex_subev(type=102, subtype=10200, control=1);
	fib3_ctdc  = fib_ctdc0_subev(type=103, subtype=10300, control=2);
	fib10_ctdc = fib_ctdc0_subev(type=103, subtype=10300, control=3);
	fib11_ctdc = fib_ctdc0_subev(type=103, subtype=10300, control=4);
	fib12_ctdc = fib_ctdc0_subev(type=103, subtype=10300, control=5);
	fib13_ctdc = fib_ctdc0_subev(type=103, subtype=10300, control=6);
	tofd_tamex_1 = tofd_tamex_subev(type=102, subtype=10200, control=7);
	tofd_tamex_2 = tofd_tamex_subev(type=102, subtype=10200, control=8);
	tofd_tamex_3 = tofd_tamex_subev(type=102, subtype=10200, control=9);
	tofd_tamex_4 = tofd_tamex_subev(type=102, subtype=10200, control=10);
	//pspx = febex_subev(type=101, subtype=10100, control=6);
	//pspx2 = febex_subev(type=101, subtype=10100, control=16);
	//pspx3 = febex_subev(type=101, subtype=10100, control=17);
	//los_scalers = los_scalers_subev(type=38, subtype=3800, control=1);
	//los_vme = los_vme_subev(type=88, subtype=8800, control=1);
	//los_tamex = los_tamex_subev(type=102, subtype=10200, control=2);
	//ams_siderem = ams_siderem_subev(type=82, subtype=8200, control=7);
	revisit califa = CALIFA(type = 100, subtype = 10000, subcrate = 2, procid = 2, control = 9);
	neuland_ts = wr_500(type=10, subtype=1, control=20);
	neuland_tpat = tpat_subev(type=36, subtype=3600, control=20);
	neuland_tamex_1 = neuland_tamex_subev(type = 102, subtype = 10200, control = 21);
	neuland_tamex_2 = neuland_tamex_subev(type = 102, subtype = 10200, control = 22);
	neuland_tamex_3 = neuland_tamex_subev(type = 102, subtype = 10200, control = 23);
	neuland_tamex_4 = neuland_tamex_subev(type = 102, subtype = 10200, control = 24);
	//fibsipm_ctdc = fib_ctdc0_subev(type=103, subtype=10300, control=18);
	ignore_unknown_subevent;
}

#include "mapping.hh"
