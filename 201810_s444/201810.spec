#define EXT_SST_HAS_BRANCH 1

#include "spec/spec.spec"
#include "sst_ext.spec"
#include "../land_common/barrier.spec"
#include "../land_common/gsi_clocktdc.spec"
#include "../land_common/gsi_tamex3.spec"
#include "../land_common/land_vme.spec"
#include "../land_common/trloii.spec"
#include "../land_common/vme_gsi_vftx2.spec"
#include "../land_common/whiterabbit.spec"

SUBEVENT(ams_siderem_subev)
{
	select several {
		external sst[0] = EXT_SST(siderem=1, gtb=0, sam=5, branch=1);
		external sst[1] = EXT_SST(siderem=2, gtb=0, sam=5, branch=1);
		external sst[2] = EXT_SST(siderem=3, gtb=0, sam=5, branch=1);
		external sst[3] = EXT_SST(siderem=4, gtb=0, sam=5, branch=1);
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

	// ADDING THE NEXT TEN LINES PRODUCES
	// califa.spec:162: Subevent:   100/10000 (id:2,crate:2,ctrl:9) not completely read.
	//
	// Extract White Rabbit Timestamp after CALIFA_SYSTEM_ID identifier
	// optional UINT32 CALIFA_SYSTEM_ID NOENCODE{
	//   0_31: system_id = MATCH(0x400);
	// }
	// if(CALIFA_SYSTEM_ID.system_id == 0x400){
	//   //Should be encoded for a multidetector environment
	//   list (0 <= index < 4){
	//     UINT32 WRTS NOENCODE;
	//   }
	// }

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

SUBEVENT(CALIFA){
	select several{
		febex3 = FEBEX3_CALIFA_BASE();
	}
}

SUBEVENT(fib_ctdc_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		ctdc_padding = GSI_CLOCKTDC_PADDING();
	}
	select several {
		fibseven[0] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=0);
		fibseven[1] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=1);
		fibseven[2] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=2);
		fibseven[3] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=3);
	}
}

SUBEVENT(fib_tamex_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		tamex_padding = TAMEX3_PADDING();
	}
	select several {
		tamex[0] = TAMEX3_SFP(sfp=0, card=0);
		tamex[1] = TAMEX3_SFP(sfp=0, card=1);
		tamex[2] = TAMEX3_SFP(sfp=0, card=2);
		tamex[3] = TAMEX3_SFP(sfp=0, card=3);
	}
}

SUBEVENT(lmu_scalers_subev)
{
	scalers = TRLOII_LMU_SCALERS(id=0xc7);
}

SUBEVENT(los_tamex_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		padding = TAMEX3_PADDING();
	}
	tamex = TAMEX3_SFP(sfp=2, card=0);
}

SUBEVENT(los_vme_subev)
{
	land_vme = LAND_STD_VME();
	barrier = BARRIER();
	vftx2 = VME_GSI_VFTX2_7PS(id=1);
}

SUBEVENT(tofd_tamex_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		padding0 = TAMEX3_PADDING();
	}
	tamex0[ 0] = TAMEX3_SFP(sfp=0, card= 0);
	tamex0[ 1] = TAMEX3_SFP(sfp=0, card= 1);
	tamex0[ 2] = TAMEX3_SFP(sfp=0, card= 2);
	tamex0[ 3] = TAMEX3_SFP(sfp=0, card= 3);
	tamex0[ 4] = TAMEX3_SFP(sfp=0, card= 4);
	tamex0[ 5] = TAMEX3_SFP(sfp=0, card= 5);
	tamex0[ 6] = TAMEX3_SFP(sfp=0, card= 6);
	tamex0[ 7] = TAMEX3_SFP(sfp=0, card= 7);
	tamex0[ 8] = TAMEX3_SFP(sfp=0, card= 8);
	barrier2 = BARRIER();
	select several {
		padding2 = TAMEX3_PADDING();
	}
	select several {
		tamex2[ 0] = TAMEX3_SFP(sfp=2, card= 0);
		tamex2[ 1] = TAMEX3_SFP(sfp=2, card= 1);
		tamex2[ 2] = TAMEX3_SFP(sfp=2, card= 2);
		tamex2[ 3] = TAMEX3_SFP(sfp=2, card= 3);
		tamex2[ 4] = TAMEX3_SFP(sfp=2, card= 4);
		tamex2[ 5] = TAMEX3_SFP(sfp=2, card= 5);
		tamex2[ 6] = TAMEX3_SFP(sfp=2, card= 6);
		tamex2[ 7] = TAMEX3_SFP(sfp=2, card= 7);
		tamex2[ 8] = TAMEX3_SFP(sfp=2, card= 8);
		tamex2[ 9] = TAMEX3_SFP(sfp=2, card= 9);
		tamex2[10] = TAMEX3_SFP(sfp=2, card=10);
		tamex2[11] = TAMEX3_SFP(sfp=2, card=11);
		tamex2[12] = TAMEX3_SFP(sfp=2, card=12);
		tamex2[13] = TAMEX3_SFP(sfp=2, card=13);
		tamex2[14] = TAMEX3_SFP(sfp=2, card=14);
	}
}

SUBEVENT(tpat_subev)
{
	select several {
		tpat = TRLOII_TPAT(id=0xcf);
	}
}

SUBEVENT(wr_100)
{
	ts100 = TIMESTAMP_WHITERABBIT(id=0x100);
	wr_multi = WR_MULTI();
}

EVENT
{
	master_ts = wr_100(type=10, subtype=1, control=0);
	master_tpat = tpat_subev(type=36, subtype=3600, control=0);
	master_lmu_scalers = lmu_scalers_subev(type=37, subtype=3700, control=0);
	los_vme = los_vme_subev(type=88, subtype=8800, control=1);
	los_tamex = los_tamex_subev(type=102, subtype=10200, control=2);
	tofd_tamex = tofd_tamex_subev(type=102, subtype=10200, control=3);
	fib_ctdc = fib_ctdc_subev(type=103, subtype=10300, control=4);
	fib_tamex = fib_tamex_subev(type=102, subtype=10200, control=5);
	ams_siderem = ams_siderem_subev(type=82, subtype=8200, control=6);
	califa = CALIFA(type = 100, subtype = 10000, subcrate = 2, procid = 2, control = 9);
}

#include "mapping.hh"
