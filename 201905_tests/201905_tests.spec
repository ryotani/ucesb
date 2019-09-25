#include "spec/spec.spec"
#include "../land_common/barrier.spec"
#include "../land_common/gsi_clocktdc.spec"
#include "../land_common/gsi_tamex3.spec"
#include "../land_common/land_vme.spec"
#include "../land_common/vme_gsi_vftx2.spec"
#include "spec/vme_mesytec_mtdc32.spec"

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
		barrier = BARRIER();
	}
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
		ctdc[0] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=0);
		ctdc[1] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=1);
		ctdc[2] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=2);
		ctdc[3] = GSI_CLOCKTDC_ITEM(sfp=0, tdc=3);
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

EVENT
{
	los_vme = los_vme_subev(type=88, subtype=8800, control=1);
	los_tamex = los_tamex_subev(type=102, subtype=10200, control=2);
	fib1ab = fib1ab_subev(type=102, subtype=10200, control=3);
	ignore_unknown_subevent;
}

#include "mapping.hh"
