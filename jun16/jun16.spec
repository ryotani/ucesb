#include "../land_common/barrier.spec"
#include "../land_common/gsi_tamex3.spec"
#include "../land_common/land_vme.spec"
#include "../land_common/trloii.spec"
#include "../land_common/vme_gsi_vftx2.spec"
#include "../land_common/whiterabbit.spec"

SUBEVENT(wr_100)
{
	ts100 = TIMESTAMP_WHITERABBIT(id=0x100);
}

SUBEVENT(wr_200)
{
	ts200 = TIMESTAMP_WHITERABBIT(id=0x200);
}

SUBEVENT(los_subev)
{
	land_vme = LAND_STD_VME();
	barrier = BARRIER();
	select several {
		vftx2 = VME_GSI_VFTX2_7PS(id=1);
	}
}

SUBEVENT(master_subev)
{
	land_vme = LAND_STD_VME();
	barrier = BARRIER();
}

SUBEVENT(tbm_subev)
{
	land_vme = LAND_STD_VME();
}

SUBEVENT(tofd_tamex_subev)
{
	header = TAMEX3_HEADER();
	select several {
		padding = TAMEX3_PADDING();
	}
	select several {
		tamex_1 = TAMEX3_SFP(sfp=2, card=0);
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

EVENT
{
	master_ts = wr_100(type=10, subtype=1, control=0);
	master_trloii = trloii_subev(type=36, subtype=3600, control=0);
	master_vme = master_subev(type=88, subtype=8800, control=0);
	los = los_subev(type=88, subtype=8800, control=1);
	tofd_vme = tofd_vme_subev(type=88, subtype=8800, control=2);
	tbm_ts = wr_200(type=10, subtype=1, control=3);
	tbm_trloii = trloii_subev(type=36, subtype=3600, control=3);
	tbm_vme = tbm_subev(type=88, subtype=8800, control=3);
	tofd_tamex = tofd_tamex_subev(type=102, subtype=10200, control=4);
}

#include "mapping.hh"
