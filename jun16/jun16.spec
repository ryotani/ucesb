#include "../land_common/barrier.spec"
#include "../land_common/gsi_febex.spec"
#include "../land_common/land_vme.spec"
#include "../land_common/trloii.spec"
#include "../land_common/vme_gsi_vftx2.spec"
#include "../land_common/whiterabbit.spec"
#include "gsi_tamex3.spec"

SCALER()
{
	UINT32	scaler;
}

SUBEVENT(wr_100)
{
	ts100 = TIMESTAMP_WHITERABBIT(id=0x100);
}

SUBEVENT(wr_200)
{
	ts200 = TIMESTAMP_WHITERABBIT(id=0x200);
}

SUBEVENT(empty_subev)
{
}

SUBEVENT(lmu_scalers_subev)
{
	scalers = TRLOII_LMU_SCALERS(id=0xc7);
}

SUBEVENT(los_subev)
{
	land_vme = LAND_STD_VME();
	barrier1 = BARRIER();
	barrier2 = BARRIER();
	select several {
		vftx2 = VME_GSI_VFTX2_7PS(id=2);
	}
}

SUBEVENT(los_scalers_subev)
{
	select several {
		scaler = SCALER();
	}
}

SUBEVENT(los_sampler_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		sampler = TRLOII_SAMPLER(mark=0x1050);
	}
}

SUBEVENT(master_subev)
{
	land_vme = LAND_STD_VME();
	barrier = BARRIER();
}

SUBEVENT(tracking_febex_subev)
{
	header0 = FEBEX_EVENTHEADER();
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
	}
	header2 = FEBEX_EVENTHEADER();
	select several {
		febex_2[ 0] = FEBEX_NOTRACE(sfp=2, card=0);
		febex_2[ 1] = FEBEX_NOTRACE(sfp=2, card=1);
		febex_2[ 2] = FEBEX_NOTRACE(sfp=2, card=2);
		febex_2[ 3] = FEBEX_NOTRACE(sfp=2, card=3);
		febex_2[ 4] = FEBEX_NOTRACE(sfp=2, card=4);
		febex_2[ 5] = FEBEX_NOTRACE(sfp=2, card=5);
		febex_2[ 6] = FEBEX_NOTRACE(sfp=2, card=6);
		febex_2[ 7] = FEBEX_NOTRACE(sfp=2, card=7);
		febex_2[ 8] = FEBEX_NOTRACE(sfp=2, card=8);
		febex_2[ 9] = FEBEX_NOTRACE(sfp=2, card=9);
		febex_2[10] = FEBEX_NOTRACE(sfp=2, card=10);
		febex_2[11] = FEBEX_NOTRACE(sfp=2, card=11);
	}
}

SUBEVENT(tbm_subev)
{
	land_vme = LAND_STD_VME();
}

SUBEVENT(tofd_tamex_subev)
{
	header = TAMEX3_HEADER();
	select several {
		padding1 = TAMEX3_PADDING();
	}
	select several {
		tamex_1 = TAMEX3_SFP(sfp=2, card=0);
		tamex_2 = TAMEX3_SFP(sfp=2, card=1);
	}
	select several {
		padding2 = TAMEX3_PADDING();
	}
	select several {
		tamex_3 = TAMEX3_SFP(sfp=3, card=0);
		tamex_4 = TAMEX3_SFP(sfp=3, card=1);
	}
}

SUBEVENT(tofd_vme_subev)
{
	land_vme = LAND_STD_VME();
	barrier = BARRIER();
	select several {
		vftx2_1 = VME_GSI_VFTX2_7PS(id=1);
		vftx2_2 = VME_GSI_VFTX2_7PS(id=2);
		vftx2_3 = VME_GSI_VFTX2_7PS(id=3);
	}
}

SUBEVENT(tpat_subev)
{
	tpat = TRLOII_TPAT(id=0xcf);
}

EVENT
{
	master_ts = wr_100(type=10, subtype=1, control=0);
	master_tpat = tpat_subev(type=36, subtype=3600, control=0);
	master_lmu_scalers = lmu_scalers_subev(type=37, subtype=3700, control=0);
	master_vme = master_subev(type=88, subtype=8800, control=0);
	los = los_subev(type=88, subtype=8800, control=1);
	los_scalers = los_scalers_subev(type=38, subtype=3800, control=1);
	los_sampler = los_sampler_subev(type=39, subtype=3900, control=1);
	tofd_vme = tofd_vme_subev(type=88, subtype=8800, control=2);
	tbm_ts = wr_200(type=10, subtype=1, control=3);
	tbm_tpat = tpat_subev(type=36, subtype=3600, control=3);
	tbm_vme = tbm_subev(type=88, subtype=8800, control=3);
	tofd_tamex = tofd_tamex_subev(type=102, subtype=10200, control=4);
	tracking_febex = tracking_febex_subev(type=100, subtype=10000, control=5);

	los_empty = empty_subev(type=10, subtype=1, control=1);
	tofd_empty = empty_subev(type=10, subtype=1, control=2);
}

#include "mapping.hh"
