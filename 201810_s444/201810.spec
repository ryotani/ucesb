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
		padding = TAMEX3_PADDING();
	}
	select several {
		tamex[0] = TAMEX3_SFP(sfp=1, card=0);
		tamex[1] = TAMEX3_SFP(sfp=1, card=1);
		tamex[2] = TAMEX3_SFP(sfp=1, card=2);
		tamex[3] = TAMEX3_SFP(sfp=1, card=3);
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
}

#include "mapping.hh"
