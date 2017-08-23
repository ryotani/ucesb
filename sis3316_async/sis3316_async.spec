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
		fadc[2] = VME_STRUCK_SIS3316_ASYNC(id = 5);
		fadc[3] = VME_STRUCK_SIS3316_ASYNC(id = 6);
	}
}

SUBEVENT(trloii_subev_200)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x200);
	ts_multi = WR_MULTI();
}

SUBEVENT(trloii_subev_100)
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
	vme_ts_left = trloii_subev_100(type=10, subtype=1, subcrate=0,
	    control=0);
	vme_ts_right = trloii_subev_200(type=10, subtype=1, subcrate=0,
	    control=1);
	vme_tpat_left = trloii_tpat_subev(type=36, subtype=3600, subcrate=0,
	    control=0);
	vme_tpat_right = trloii_tpat_subev(type=36, subtype=3600, subcrate=0,
	    control=1);
	vme_left = sis3316_async_subev(type=88, subtype=8800, subcrate=0,
	    control=0);
	vme_right = sis3316_async_subev(type=88, subtype=8800, subcrate=0,
	    control=1);
	ffff = FFFF(type=0xffff, subtype=0xffff);
}

/* Whiterabbit timestamp */
SIGNAL(WR_HIGH, /* from user_function */, DATA32);
SIGNAL(WR_LOW, /* from user_function */, DATA32);

/* sis timestamps (unchanged) */
SIGNAL(ZERO_SUPPRESS_MULTI(MAX_HITS): TS_LOW_1);
SIGNAL(ZERO_SUPPRESS_MULTI(MAX_HITS): TS_HIGH_1);
SIGNAL(TS_LOW_1,  /* from user_function */, DATA32);
SIGNAL(TS_LOW_64,  /* from user_function */, DATA32);
SIGNAL(TS_HIGH_1,  /* from user_function */, DATA32);
SIGNAL(TS_HIGH_64,  /* from user_function */, DATA32);

/* sis timestamps (recalculated) */
SIGNAL(ZERO_SUPPRESS_MULTI(MAX_HITS): WRTS_LOW_1);
SIGNAL(ZERO_SUPPRESS_MULTI(MAX_HITS): WRTS_HIGH_1);
SIGNAL(WRTS_LOW_1,  /* from user_function */, DATA32);
SIGNAL(WRTS_LOW_64,  /* from user_function */, DATA32);
SIGNAL(WRTS_HIGH_1,  /* from user_function */, DATA32);
SIGNAL(WRTS_HIGH_64,  /* from user_function */, DATA32);

/* sis energy value */
SIGNAL(ZERO_SUPPRESS_MULTI(MAX_HITS): E_1);
SIGNAL(E_1, /* from user function */, DATA32);
SIGNAL(E_64, /* from user function */, DATA32);
SIGNAL(ZERO_SUPPRESS_MULTI(MAX_HITS): BE_1);
SIGNAL(BE_1, /* from user function */, DATA32);
SIGNAL(BE_64, /* from user function */, DATA32);
SIGNAL(ZERO_SUPPRESS_MULTI(MAX_HITS): EE_1);
SIGNAL(EE_1, /* from user function */, DATA32);
SIGNAL(EE_64, /* from user function */, DATA32);
