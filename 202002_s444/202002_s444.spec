#define EXT_SST_HAS_BRANCH 1

#include "spec/spec.spec"
#include "sst_ext.spec"
#include "../land_common/barrier.spec"
#include "../land_common/gsi_clocktdc.spec"
#include "../land_common/gsi_tamex3.spec"
#include "../land_common/gsi_tamex3_flexheader.spec"
#include "../land_common/gsi_febex_v2.spec"
#include "../land_common/land_vme.spec"
#include "../land_common/trloii.spec"
#include "../land_common/vme_gsi_vftx2.spec"
#include "../land_common/whiterabbit.spec"
#include "spec/vme_mesytec_mtdc32.spec"
#include "spec/vme_mesytec_mqdc32.spec"
#include "../land_common/vme_mesytec_vmmr8.spec"

SUBEVENT(ams_wr)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x600);
}

GSI_SAM_PADDING()
{
	UINT32 padding NOENCODE {
		0_31: 0x5a5a5a5a;
	}
}

SUBEVENT(ams_siderem1_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		padd = GSI_SAM_PADDING();
		external sst[0] = EXT_SST(siderem=1, gtb=0, sam=4, branch=0);
		external sst[1] = EXT_SST(siderem=2, gtb=0, sam=4, branch=0);
		external sst[2] = EXT_SST(siderem=1, gtb=1, sam=4, branch=0);
	}
}

SUBEVENT(ams_siderem2_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		padd = GSI_SAM_PADDING();
		external sst[0] = EXT_SST(siderem=1, gtb=0, sam=5, branch=0);
		external sst[1] = EXT_SST(siderem=2, gtb=0, sam=5, branch=0);
		external sst[2] = EXT_SST(siderem=1, gtb=1, sam=5, branch=0);
	}
}

#define NUM_SFP_MODULES 8
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

SUBEVENT(CALIFA_MESSEL)
{
	// Extract White Rabbit Timestamp after CALIFA_SYSTEM_ID identifier
	ts400 = TIMESTAMP_WHITERABBIT(id=0x400);
	select several{
		febex3 = FEBEX3_CALIFA_BASE();
	}
}

SUBEVENT(CALIFA_WIXHAUSEN)
{
	// Extract White Rabbit Timestamp after CALIFA_SYSTEM_ID identifier
	ts500 = TIMESTAMP_WHITERABBIT(id=0x500);
	select several{
		febex3 = FEBEX3_CALIFA_BASE();
	}
}

SUBEVENT(los_wr)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x300);
}

MEGA_PULSER()
{
	UINT32 mega;
}

SUBEVENT(lmu_subev)
{
	scalers = TRLOII_LMU_SCALERS(id=0xc7);
	pulser = MEGA_PULSER();
}

SUBEVENT(wr_sofia)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x500);
}

SUBEVENT(wr_neuland)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x900);
}

los_tamex_data()
{
	land_vme = LAND_STD_VME();
	select several {
		padding = TAMEX3_PADDING();
	}
	select several {
		tamex = TAMEX3_SFP(sfp=0, card=0);
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
		vftx21 = VME_GSI_VFTX2_7PS(id=0);
		vftx22 = VME_GSI_VFTX2_7PS(id=1);
		mtdc32 = VME_MESYTEC_MTDC32(geom=2);
	}
}

SUBEVENT(los_vme_subev)
{
	select several {
		data = los_vme_subev_data();
	}
}

fib1a_data()
{
	land_vme = LAND_STD_VME();
	select several {
		ctdc[0] = GSI_CLOCKTDC_16PH_ITEM(sfp=0, tdc=0);
		ctdc[1] = GSI_CLOCKTDC_16PH_ITEM(sfp=0, tdc=1);
		ctdc[2] = GSI_CLOCKTDC_16PH_ITEM(sfp=0, tdc=2);
		ctdc[3] = GSI_CLOCKTDC_16PH_ITEM(sfp=0, tdc=3);
	}
	barrier = BARRIER();
	select several {
		tamex[0] = TAMEX3_SFP(sfp=1, card=0);
		tamex[1] = TAMEX3_SFP(sfp=1, card=1);
	}
}

SUBEVENT(fib1ab_subev)
{
	select several {
		data = fib1a_data();
	}
}

neuland_sfp(sfp)
{
	select several {
		card[ 0] = TAMEX3_FH_SFP(sfp = sfp, card =  0);
		card[ 1] = TAMEX3_FH_SFP(sfp = sfp, card =  1);
		card[ 2] = TAMEX3_FH_SFP(sfp = sfp, card =  2);
		card[ 3] = TAMEX3_FH_SFP(sfp = sfp, card =  3);
		card[ 4] = TAMEX3_FH_SFP(sfp = sfp, card =  4);
		card[ 5] = TAMEX3_FH_SFP(sfp = sfp, card =  5);
		card[ 6] = TAMEX3_FH_SFP(sfp = sfp, card =  6);
		card[ 7] = TAMEX3_FH_SFP(sfp = sfp, card =  7);
		card[ 8] = TAMEX3_FH_SFP(sfp = sfp, card =  8);
		card[ 9] = TAMEX3_FH_SFP(sfp = sfp, card =  9);
		card[10] = TAMEX3_FH_SFP(sfp = sfp, card = 10);
		card[11] = TAMEX3_FH_SFP(sfp = sfp, card = 11);
		card[12] = TAMEX3_FH_SFP(sfp = sfp, card = 12);
		card[13] = TAMEX3_FH_SFP(sfp = sfp, card = 13);
		card[14] = TAMEX3_FH_SFP(sfp = sfp, card = 14);
		card[15] = TAMEX3_FH_SFP(sfp = sfp, card = 15);
		card[16] = TAMEX3_FH_SFP(sfp = sfp, card = 16);
		card[17] = TAMEX3_FH_SFP(sfp = sfp, card = 17);
		card[18] = TAMEX3_FH_SFP(sfp = sfp, card = 18);
		card[19] = TAMEX3_FH_SFP(sfp = sfp, card = 19);
		card[20] = TAMEX3_FH_SFP(sfp = sfp, card = 20);
		card[21] = TAMEX3_FH_SFP(sfp = sfp, card = 21);
		card[22] = TAMEX3_FH_SFP(sfp = sfp, card = 22);
		card[23] = TAMEX3_FH_SFP(sfp = sfp, card = 23);
		card[24] = TAMEX3_FH_SFP(sfp = sfp, card = 24);
		card[25] = TAMEX3_FH_SFP(sfp = sfp, card = 25);
		card[26] = TAMEX3_FH_SFP(sfp = sfp, card = 26);
		card[27] = TAMEX3_FH_SFP(sfp = sfp, card = 27);
		card[28] = TAMEX3_FH_SFP(sfp = sfp, card = 28);
		card[29] = TAMEX3_FH_SFP(sfp = sfp, card = 29);
		card[30] = TAMEX3_FH_SFP(sfp = sfp, card = 30);
		card[31] = TAMEX3_FH_SFP(sfp = sfp, card = 31);
		card[32] = TAMEX3_FH_SFP(sfp = sfp, card = 32);
		card[33] = TAMEX3_FH_SFP(sfp = sfp, card = 33);
		card[34] = TAMEX3_FH_SFP(sfp = sfp, card = 34);
	}
}

neuland_tamex_subev_data()
{
	land_vme = LAND_STD_VME();
	select several {
		padding0 = TAMEX3_PADDING();
	}
	sfp[0] = neuland_sfp(sfp = 0);
}

SUBEVENT(neuland_tamex_subev)
{
	select several {
		data = neuland_tamex_subev_data();
	}
}

SUBEVENT(los_sampler_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		los = TRLOII_SAMPLER(mark=0x1050);
		ms = TRLOII_SAMPLER(mark=0x1060);
	}
}

sofia_tof_subev_data()
{
	land_vme = LAND_STD_VME();
	select several {
		vftx2[0] = VME_GSI_VFTX2_7PS(id=0);
		vftx2[1] = VME_GSI_VFTX2_7PS(id=1);
		vftx2[2] = VME_GSI_VFTX2_7PS(id=2);
		vftx2[3] = VME_GSI_VFTX2_7PS(id=3);
	}
}
SUBEVENT(sofia_tof_subev)
{
	select several {
		data = sofia_tof_subev_data();
	}
}
sofia_mwpc_subev_data()
{
	land_vme = LAND_STD_VME();
	select several {
		vmmr8     = VME_MESYTEC_VMMR8(geom=0);
		madc32[0] = VME_MESYTEC_MADC32(geom=1);
		madc32[1] = VME_MESYTEC_MADC32(geom=2);
	}
}
SUBEVENT(sofia_mwpc_subev)
{
	select several {
		data = sofia_mwpc_subev_data();
	}
}
sofia_twim_subev_data()
{
	land_vme = LAND_STD_VME();
	select several {
		mdpp16[0] = VME_MESYTEC_MDPP16(geom=0);
		mdpp16[1] = VME_MESYTEC_MDPP16(geom=1);
	}
}
SUBEVENT(sofia_twim_subev)
{
	select several {
		data = sofia_twim_subev_data();
	}
}
sofia_trim_subev_data()
{
	land_vme = LAND_STD_VME();
	select several {
		mdpp = VME_MESYTEC_MDPP16(geom=0);
		vmmr8  = VME_MESYTEC_VMMR8(geom=1);
	}
}
SUBEVENT(sofia_trim_subev)
{
	select several {
		data = sofia_trim_subev_data();
	}
}

fibsipm_data()
{
	land_vme = LAND_STD_VME();
	select several {
		ctdc[0] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=0);
		ctdc[1] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=1);
		ctdc[2] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=2);
		ctdc[3] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=3);
	}
}

SUBEVENT(fibsipm_subev)
{
	select several {
		data = fibsipm_data();
	}
}

SUBEVENT(wr_s2)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x200);
}

s2_vme_subev_data()
{
	land_vme = LAND_STD_VME();
	b1 = BARRIER();
	ts = WR_MULTI();
	b2 = BARRIER();
	vftx21 = VME_GSI_VFTX2_7PS(id=2);
	mqdc = VME_MESYTEC_MQDC32(geom=3);
}

SUBEVENT(s2_vme_subev)
{
	select several {
		data = s2_vme_subev_data();
	}
}

SUBEVENT(s8_wr)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x800);
}

SUBEVENT(s8_tpat_subev)
{
	land_vme = LAND_STD_VME();
	tpat = TRLOII_TPAT(id=0xcf);
}

s8_vme_subev_data()
{
	land_vme = LAND_STD_VME();
	select several {
		vftx21 = VME_GSI_VFTX2_7PS(id=0);
	}
}

SUBEVENT(s8_vme_subev)
{
	select several {
		data = s8_vme_subev_data();
	}
}

EVENT
{
	los_ts = los_wr(type=10, subtype=1, control=1);
	los_lmu = lmu_subev(type=37, subtype=3700, control=1);
	los_vme = los_vme_subev(type=88, subtype=8800, control=1);
	los_tamex = los_tamex_subev(type=102, subtype=10200, control=2);
	los_sampler = los_sampler_subev(type=39, subtype=3900, control=1);

	fib1ab = fib1ab_subev(type=102, subtype=10200, control=3);

	neuland_ts = wr_neuland(type=10, subtype=1, control=21);
	neuland_tamex_1 = neuland_tamex_subev(type = 102, subtype = 10200, control = 21);
	neuland_tamex_2 = neuland_tamex_subev(type = 102, subtype = 10200, control = 22);
	neuland_tamex_3 = neuland_tamex_subev(type = 102, subtype = 10200, control = 23);
	neuland_tamex_4 = neuland_tamex_subev(type = 102, subtype = 10200, control = 24);

	revisit califa_messel = CALIFA_MESSEL(type = 100, subtype = 10000, subcrate = 2, procid = 2, control = 9);
	revisit califa_wixhausen = CALIFA_WIXHAUSEN(type = 100, subtype = 10000, subcrate = 2, procid = 2, control = 10);
	ams_ts = ams_wr(type=10, subtype=1, control=40);
	ams_siderem_1 = ams_siderem1_subev(type=82, subtype=8200, control=40);
	ams_siderem_2 = ams_siderem2_subev(type=82, subtype=8200, control=41);

	sofia_tof = sofia_tof_subev(type = 88, subtype = 8800, control = 101);
	sofia_mwpc = sofia_mwpc_subev(type = 88, subtype = 8800, control = 102);
	sofia_twim = sofia_twim_subev(type = 88, subtype = 8800, control = 103);
	sofia_trim = sofia_trim_subev(type = 88, subtype = 8800, control = 104);

	fibsipm = fibsipm_subev(type = 103, subtype = 10300, control = 50);

	s2_ts = wr_s2(type = 10, subtype = 1, control = 20, procid = 35);
	s2_vme = s2_vme_subev(type = 12, subtype = 1, control = 20, procid = 35);

	s8_ts = s8_wr(type = 10, subtype = 1, control = 80);
	s8_tpat = s8_tpat_subev(type = 36, subtype = 3600, control = 80);
	s8_vme = s8_vme_subev(type = 88, subtype = 8800, control = 80);

	ignore_unknown_subevent;
}

#include "mapping.hh"
