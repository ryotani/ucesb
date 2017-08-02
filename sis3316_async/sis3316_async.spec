#include "vme_struck_sis3316_async.spec"

SUBEVENT_HEADER()
{
	UINT32 zeros NOENCODE
	{
		0_31: zero = 0;
	}
	UINT32 barrier NOENCODE
	{
		0_31: baba = 0xbabababa;
	}
}

//external VME_STRUCK_SIS3316_MODULE_ASYNC_EXT(id);

SUBEVENT(sis3316_async_subev)
{
	header = SUBEVENT_HEADER();

	select several
	{
		//external fadc = VME_STRUCK_SIS3316_MODULE_ASYNC_EXT(id = 3);
		fadc = VME_STRUCK_SIS3316_ASYNC(id = 3);
	}
}

SUBEVENT(FFFF)
{
}

EVENT
{
	vme = sis3316_async_subev(type=88, subtype=8800, subcrate=0);
	ffff = FFFF(type=0xffff, subtype=0xffff);
}
