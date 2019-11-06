#include "spec/spec.spec"
#include "../land_common/barrier.spec"
#include "../land_common/gsi_clocktdc.spec"
#include "../land_common/gsi_tamex3.spec"
#include "../land_common/gsi_tamex3_flexheader.spec"
#include "../land_common/land_vme.spec"
#include "../land_common/trloii.spec"
#include "../land_common/vme_gsi_vftx2.spec"
#include "../land_common/whiterabbit.spec"
#include "spec/vme_mesytec_mtdc32.spec"

SUBEVENT(wr_300)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x300);
	select several {
		wr_multi = WR_MULTI();
	}
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
	wr_multi = WR_MULTI();
	barrier = BARRIER();
	select several {
		vftx2 = VME_GSI_VFTX2_7PS(id=1);
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

SUBEVENT(sampler_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		los = TRLOII_SAMPLER(mark=0x1050);
		ms = TRLOII_SAMPLER(mark=0x1060);
	}
}

EVENT
{
	los_ts = wr_300(type=10, subtype=1, control=1);
	los_vme = los_vme_subev(type=88, subtype=8800, control=1);
	los_tamex = los_tamex_subev(type=102, subtype=10200, control=2);
	fib1ab = fib1ab_subev(type=102, subtype=10200, control=3);
	neuland_tamex_1 = neuland_tamex_subev(type = 102, subtype = 10200, control = 21);
	neuland_tamex_2 = neuland_tamex_subev(type = 102, subtype = 10200, control = 22);
	neuland_tamex_3 = neuland_tamex_subev(type = 102, subtype = 10200, control = 23);
	neuland_tamex_4 = neuland_tamex_subev(type = 102, subtype = 10200, control = 24);
	sampler = sampler_subev(type=39, subtype=3900, control=1);
	ignore_unknown_subevent;
}

#include "mapping.hh"
