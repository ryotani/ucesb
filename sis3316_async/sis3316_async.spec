#include "../land_common/whiterabbit.spec"
#include "../land_common/trloii.spec"
#include "../land_common/barrier.spec"
#include "vme_struck_sis3316_async.spec"

SUBEVENT_HEADER()
{
	UINT32 zeros NOENCODE
	{
		0_31: zero = 0;
	}
}

//external VME_STRUCK_SIS3316_MODULE_ASYNC_EXT(id);

SUBEVENT(sis3316_async_subev)
{
	header = SUBEVENT_HEADER();

	select several
	{
		//external fadc = VME_STRUCK_SIS3316_MODULE_ASYNC_EXT(id = 3);
		barrier = BARRIER();
		fadc[0] = VME_STRUCK_SIS3316_ASYNC(id = 3);
		fadc[1] = VME_STRUCK_SIS3316_ASYNC(id = 4);
	}
}

SUBEVENT(trloii_subev)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x100);
	ts_multi = WR_MULTI();
}

SUBEVENT(trloii_tpat_subev)
{
	tpat = TRLOII_TPAT(id=0x0);
}

SUBEVENT(FFFF)
{
}

EVENT
{
	vme_ts = trloii_subev(type=10, subtype=1, subcrate=0);
	vme_tpat = trloii_tpat_subev(type=36, subtype=3600, subcrate=0);
	vme = sis3316_async_subev(type=88, subtype=8800, subcrate=0);
	ffff = FFFF(type=0xffff, subtype=0xffff);
}

SIGNAL(ZERO_SUPPRESS_MULTI(MAX_HITS): TS_LOW_1);
SIGNAL(ZERO_SUPPRESS_MULTI(MAX_HITS): TS_HIGH_1);
SIGNAL(TS_LOW_1,  /* from user_function */, DATA32);
SIGNAL(TS_LOW_32,  /* from user_function */, DATA32);
SIGNAL(TS_HIGH_1,  /* from user_function */, DATA32);
SIGNAL(TS_HIGH_32,  /* from user_function */, DATA32);
