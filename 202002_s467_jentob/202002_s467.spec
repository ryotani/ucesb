#define EXT_SST_HAS_BRANCH 1

#include "spec/spec.spec"
#include "../land_common/barrier.spec"
#include "../land_common/gsi_clocktdc.spec"
#include "../land_common/gsi_tamex3.spec"
#include "../land_common/gsi_tamex3_flexheader.spec"
#include "../land_common/gsi_febex_v2.spec"
#include "../land_common/land_vme.spec"
#include "../land_common/trloii.spec"
#include "../land_common/vme_gsi_vftx2.spec"
#include "../land_common/whiterabbit.spec"
#include "../land_common/vme_struck_sis3820scaler.spec"
#include "spec/vme_mesytec_mtdc32.spec"
#include "spec/vme_mesytec_mqdc32.spec"
#include "../land_common/vme_mesytec_vmmr8.spec"
#include "../califa/califa_tot_s467.spec"

SUBEVENT(main_wr)
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

SUBEVENT(sofia_wr)
{
	ts = TIMESTAMP_WHITERABBIT(id=0xe00);
}

SUBEVENT(wr_neuland)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x900);
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

SUBEVENT(sofia_sampler_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		sofstart = TRLOII_SAMPLER(mark=0x1050);
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
		sis3820scaler[0] = VME_SIS_3820_SCALER(geom=4);
		b = BARRIER();
		sis3820scaler[1] = VME_SIS_3820_SCALER(geom=5);
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
		mdpp16[0]     = VME_MESYTEC_MDPP16(geom=0);
		mdpp16[1]     = VME_MESYTEC_MDPP16(geom=1);
		sis3820scaler = VME_SIS_3820_SCALER(geom=2);
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
	barrier = BARRIER();
	vftx21 = VME_GSI_VFTX2(id=1);
	mqdc = VME_MESYTEC_MQDC32(geom=2);
}

SUBEVENT(s2_vme_subev)
{
	select several {
		data = s2_vme_subev_data();
	}
}

scalers_subev_data()
{
	scalers = TRLOII_LMU_SCALERS(id=0xc7);
	pulser = MEGA_PULSER();
}

SUBEVENT(s2_scalers_subev)
{
	select several {
		data = scalers_subev_data();
	}
}
SUBEVENT(s8_scalers_subev)
{
	select several {
		data = scalers_subev_data();
	}
}
SUBEVENT(main_scalers_subev)
{
	select several {
		data = scalers_subev_data();
	}
}

SUBEVENT(s8_wr)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x800);
}

SUBEVENT(main_tpat_subev)
{
	land_vme = LAND_STD_VME();
	tpat = TRLOII_TPAT(id=0xcf);
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
	main_ts = main_wr(type=10, subtype=1, control=30);
	main_tpat = main_tpat_subev(type = 36, subtype = 3600, control = 30);
	main_scalers = main_scalers_subev(type = 37, subtype = 3700, control = 30);
	sofia_sampler = sofia_sampler_subev(type = 39, subtype = 3900, control = 30);

	neuland_ts = wr_neuland(type=10, subtype=1, control=21);
	neuland_tamex_1 = neuland_tamex_subev(type = 102, subtype = 10200, control = 21);
	neuland_tamex_2 = neuland_tamex_subev(type = 102, subtype = 10200, control = 22);
	neuland_tamex_3 = neuland_tamex_subev(type = 102, subtype = 10200, control = 23);
	neuland_tamex_4 = neuland_tamex_subev(type = 102, subtype = 10200, control = 24);

	revisit califa_messel = CALIFAM(type = 100, subtype = 10000, subcrate = 2, procid = 2, control = 9);
	revisit califa_wixhausen = CALIFAW(type = 100, subtype = 10000, subcrate = 2, procid = 2, control = 10);

	sofia_ts = sofia_wr(type=10, subtype=1, control=101);
	sofia_tof = sofia_tof_subev(type = 88, subtype = 8800, control = 101);
	sofia_mwpc = sofia_mwpc_subev(type = 88, subtype = 8800, control = 102);
	sofia_twim = sofia_twim_subev(type = 88, subtype = 8800, control = 103);
	sofia_trim = sofia_trim_subev(type = 88, subtype = 8800, control = 104);

	fibsipm = fibsipm_subev(type = 103, subtype = 10300, control = 50);

	s2_ts = wr_s2(type = 10, subtype = 1, control = 20, procid = 35);
	s2_vme = s2_vme_subev(type = 12, subtype = 1, control = 20, procid = 35);
	s2_scalers = s2_scalers_subev(type = 37, subtype = 3700, control = 20);

	s8_ts = s8_wr(type = 10, subtype = 1, control = 80);
	s8_tpat = s8_tpat_subev(type = 36, subtype = 3600, control = 80);
	s8_vme = s8_vme_subev(type = 88, subtype = 8800, control = 80);
	s8_scalers = s8_scalers_subev(type = 37, subtype = 3700, control = 80);

	ignore_unknown_subevent;
}

#include "mapping.hh"
