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

// Specific FRS modules
#include "spec/frs_vme_caen_v830.spec"
#include "spec/frs_vme_caen_v775.spec"

GSI_SAM_PADDING()
{
	UINT32 padding NOENCODE {
		0_31: 0xadadadad;
	}
}


SUBEVENT(ams_siderem_subev)
{
//	land_vme = LAND_STD_VME();

        select several {
	        padd = GSI_SAM_PADDING();
		external sst[0] = EXT_SST(siderem=1, gtb=0, sam=4, branch=0);
		external sst[1] = EXT_SST(siderem=2, gtb=0, sam=4, branch=0);
		external sst[2] = EXT_SST(siderem=1, gtb=1, sam=4, branch=0);
	}
}


SUBEVENT(frs_tpcs2_subev)
{
  land_vme = LAND_STD_VME();
  select several
    { 
      tdc0 = VME_CAEN_V775_FRS(geom=8);
      adc0 = VME_CAEN_V785_FRS(geom=12);
    }
}

SUBEVENT(frs_tpcs4_subev)
{
  land_vme = LAND_STD_VME();
  select several
    { 
      tdc0 = VME_CAEN_V775_FRS(geom=0);
      adc0 = VME_CAEN_V785_FRS(geom=1);
    }
}

SUBEVENT(frs_subev)
{
  land_vme = LAND_STD_VME();
  select several {
      scaler_0 = VME_CAEN_V830_FRS(geom=0);    
      tdc0 = VME_CAEN_V775_FRS(geom=8);
      tdc1 = VME_CAEN_V775_FRS(geom=9);
      adc0 = VME_CAEN_V785_FRS(geom=3);
      adc1 = VME_CAEN_V785_FRS(geom=12);
    }
}

SUBEVENT(frs_master_subev)
{
  land_vme = LAND_STD_VME();
  barrier = BARRIER();
  select several {
      tdc0 = VME_CAEN_V1290(geom=1);
  }
  barrier = BARRIER();
  select several {
      scaler0 = VME_CAEN_V830_FRS(geom=8);
      qdc0 = VME_CAEN_V792_FRS(geom=11); 
  }
  //wr_multi = WR_MULTI();
}

EVENT
{
//        frsmaster = frs_master_subev(type=12,subtype=1,procid=10);
        frs = frs_subev(type=12,subtype=1,procid=30);
        tpc_s2 = frs_tpcs2_subev(type=12,subtype=1,procid=25);
        tpc_s4 = frs_tpcs4_subev(type=12,subtype=1,procid=20);

	ams_siderem = ams_siderem_subev(procid=100, type=12, subtype=1, control=20);

	ignore_unknown_subevent;
}

#include "mapping.hh"
