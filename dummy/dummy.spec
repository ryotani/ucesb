// -*- C++ -*-

#include "../land_common/whiterabbit.spec"
#include "../land_common/land_vme.spec"

#define N_CHANNELS 32

DUMMY(id)
{
	MEMBER(DATA32 time_lo);
	MEMBER(DATA32 time_hi);
	MEMBER(DATA32 data[N_CHANNELS] ZERO_SUPPRESS);

	UINT32 header NOENCODE
	{
		0_15: wordcount;
		16_31: id = MATCH(id);
	}

	UINT32 timestamp_hi NOENCODE
	{
		0_31: value;
		ENCODE(time_hi, (value=value));
	}
	UINT32 timestamp_lo NOENCODE
	{
		0_31: value;
		ENCODE(time_lo, (value=value));
	}

	list (0 <= ch < 32) {
		UINT32 item NOENCODE
		{
			0_23: value;
			24_31: channel;
			ENCODE(data[channel], (value=value));
		}
	}

	UINT32 footer NOENCODE
	{
		0_31: event_number;
	}
}

SUBEVENT(vme_subevent)
{
	header = LAND_STD_VME();
	select several
	{
		multi dummy[0] = DUMMY(id = 0x1234);
	}
}

SUBEVENT(wr_ts_100)
{
	ts = TIMESTAMP_WHITERABBIT(id=0x100);
}

EVENT
{
	ts = wr_ts_100(type=10, subtype=1, control=0, subcrate=0);
	vme = vme_subevent(type=88, subtype=8800, control=0, subcrate=0);
}

