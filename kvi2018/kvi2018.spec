#include "../land_common/barrier.spec"
#include "../land_common/gsi_febex_v2.spec"
#include "../land_common/land_vme.spec"
#include "../land_common/trloii.spec"
#include "../land_common/vme_gsi_vftx2.spec"
#include "../land_common/whiterabbit.spec"
#include "../land_common/gsi_tamex3.spec"
#include "../land_common/gsi_clocktdc.spec"
//#include "gsi_vftx2_straw.spec"

SCALER()
{
	UINT32	scaler;
}

VFTX2_STATUS()
{
	UINT32 status;
}

SUBEVENT(wr_100)
{
	ts100 = TIMESTAMP_WHITERABBIT(id=0x100);
	multi_ = WR_MULTI();
}

SUBEVENT(empty_subev)
{
}

SUBEVENT(lmu_scalers_subev)
{
	scalers = TRLOII_LMU_SCALERS(id=0xc7);
}

SUBEVENT(tpat_subev)
{
	tpat = TRLOII_TPAT(id=0xcf);
}

SUBEVENT(los_subev)
{
	land_vme = LAND_STD_VME();
	barrier = BARRIER();
	select several {
		vftx2 = VME_GSI_VFTX2_7PS(id=1);
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

SUBEVENT(febex_subev)
{
	select optional {
		header0 = FEBEX_EVENTHEADER();
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
		febextrace_0[ 0] = FEBEX_TRACE(sfp=0, card=0);
		febextrace_0[ 1] = FEBEX_TRACE(sfp=0, card=1);
		febextrace_0[ 2] = FEBEX_TRACE(sfp=0, card=2);
		febextrace_0[ 3] = FEBEX_TRACE(sfp=0, card=3);
		febextrace_0[ 4] = FEBEX_TRACE(sfp=0, card=4);
		febextrace_0[ 5] = FEBEX_TRACE(sfp=0, card=5);
		febextrace_0[ 6] = FEBEX_TRACE(sfp=0, card=6);
		febextrace_0[ 7] = FEBEX_TRACE(sfp=0, card=7);
		febextrace_0[ 8] = FEBEX_TRACE(sfp=0, card=8);
		febextrace_0[ 9] = FEBEX_TRACE(sfp=0, card=9);
		febextrace_0[10] = FEBEX_TRACE(sfp=0, card=10);
		febextrace_0[11] = FEBEX_TRACE(sfp=0, card=11);
		febextrace_0[12] = FEBEX_TRACE(sfp=0, card=12);
		febextrace_0[13] = FEBEX_TRACE(sfp=0, card=13);
		febextrace_0[14] = FEBEX_TRACE(sfp=0, card=14);
		febextrace_0[15] = FEBEX_TRACE(sfp=0, card=15);
	}
}

SUBEVENT(tamex_subev)
{
	header = TAMEX3_HEADER();
	// PTOF TAMEX
	select several {
		padding1 = TAMEX3_PADDING();
	}
	select several {
		ptof_0 = TAMEX3_SFP(sfp=0, card=0);
		fiber_1 = TAMEX3_SFP(sfp=0, card=1);
		fiber_2 = TAMEX3_SFP(sfp=0, card=2);
		fiber_3 = TAMEX3_SFP(sfp=0, card=3);
	}
	// LOS TAMEX
	select several {
		padding2 = TAMEX3_PADDING();
	}
	select several {
		los_0 = TAMEX3_SFP(sfp=2, card=0);
		los_1 = TAMEX3_SFP(sfp=2, card=1);
	}
}

SUBEVENT(clocktdc_subev)
{
	select several {
#if defined(UNPACKER_IS_kvi2018_001_060) \
 || defined(UNPACKER_IS_kvi2018_013_020)
		header = GSI_CLOCKTDC_FUSER(a_sfp0_num=4, a_sfp1_num=4, a_sfp2_num=0, a_sfp3_num=0, ch_per_ctdc=128);
#endif
#if defined(UNPACKER_IS_kvi2018_061_068) \
 || defined(UNPACKER_IS_kvi2018_los_padi_099_101)
		header = GSI_CLOCKTDC_FUSER(a_sfp0_num=4, a_sfp1_num=2, a_sfp2_num=2, a_sfp3_num=0, ch_per_ctdc=128);
#endif
#if defined(UNPACKER_IS_kvi2018_069_101) \
 || defined(UNPACKER_IS_kvi2018_086_101) \
 || defined(UNPACKER_IS_kvi2018_los_padi_086_098)
		header = GSI_CLOCKTDC_FUSER(a_sfp0_num=4, a_sfp1_num=2, a_sfp2_num=0, a_sfp3_num=2, ch_per_ctdc=128);
#endif
		bad00bad = GSI_CLOCKTDC_BAD00BAD();
	}
	select several {
		padding1 = GSI_CLOCKTDC_PADDING();
	}
	select several {
		fibone_0 = GSI_CLOCKTDC_ITEM(sfp=0, tdc=0);
		fibone_1 = GSI_CLOCKTDC_ITEM(sfp=0, tdc=1);
		fibone_2 = GSI_CLOCKTDC_ITEM(sfp=0, tdc=2);
		fibone_3 = GSI_CLOCKTDC_ITEM(sfp=0, tdc=3);
	}
	select several {
		padding2 = GSI_CLOCKTDC_PADDING();
	}
	select several {
		fibfour_0 = GSI_CLOCKTDC_ITEM(sfp=1, tdc=0);
		fibfour_1 = GSI_CLOCKTDC_ITEM(sfp=1, tdc=1);
		fibfour_2 = GSI_CLOCKTDC_ITEM(sfp=1, tdc=2);
		fibfour_3 = GSI_CLOCKTDC_ITEM(sfp=1, tdc=3);
	}
	select several {
		padding3 = GSI_CLOCKTDC_PADDING();
	}
	select several {
		fibfive_0 = GSI_CLOCKTDC_ITEM(sfp=2, tdc=0);
		fibfive_1 = GSI_CLOCKTDC_ITEM(sfp=2, tdc=1);
	}
	select several {
		padding4 = GSI_CLOCKTDC_PADDING();
	}
	select several {
		fibsix_0 = GSI_CLOCKTDC_ITEM(sfp=3, tdc=0);
		fibsix_1 = GSI_CLOCKTDC_ITEM(sfp=3, tdc=1);
	}
}

SUBEVENT(mppc_subev)
{
	select several {
		header = GSI_CLOCKTDC_FUSER(a_sfp0_num=0, a_sfp1_num=0, a_sfp2_num=0, a_sfp3_num=1, ch_per_ctdc=128);
		bad00bad = GSI_CLOCKTDC_BAD00BAD();
	}
	select several {
		padding1 = GSI_CLOCKTDC_PADDING();
	}
	select several {
		mppc_0 = GSI_CLOCKTDC_ITEM(sfp=3, tdc=0);
	}
}

EVENT
{
	master_ts = wr_100(type=10, subtype=1, control=0);
	master_tpat = tpat_subev(type=36, subtype=3600, control=0);
	los_lmu_scalers = lmu_scalers_subev(type=37, subtype=3700, control=0);
	los = los_subev(type=88, subtype=8800, control=0);
	los_scalers = los_scalers_subev(type=38, subtype=3800, control=1);
	los_sampler = los_sampler_subev(type=39, subtype=3900, control=1);

#if defined(UNPACKER_IS_kvi2018_pre_kvi)
	febex = febex_subev(type=101, subtype=10100, control=10);
#else
	febex = febex_subev(type=101, subtype=10100, control=5);
#endif
	tamex = tamex_subev(type=102, subtype=10200, control=9);
	clocktdc = clocktdc_subev(type=103, subtype=10300, control=7);
	mppc = mppc_subev(type=104, subtype=10400, control=7);

	los_empty = empty_subev(type=10, subtype=1, control=1);
	tofd_empty = empty_subev(type=10, subtype=1, control=2);
	tamex_empty = empty_subev(type=10, subtype=1, control=9);
	febex_empty = empty_subev(type=10, subtype=1, control=10);
}

#include "mapping.hh"
