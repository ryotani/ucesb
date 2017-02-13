TIMESTAMP_WHITERABBIT(id)
{
	UINT32 header {
		0_11:  id = MATCH(id);
		12_32: 0;
	};
	UINT32 d1 {
		0_15:  t1;
		16_31: 0x03e1;
	};
	UINT32 d2 {
		0_15:  t2;
		16_31: 0x04e1;
	};
	UINT32 d3 {
		0_15:  t3;
		16_31: 0x05e1;
	};
	UINT32 d4 {
		0_15:  t4;
		16_31: 0x06e1;
	};
}

WR_MULTI()
{
	MEMBER(DATA32 time_hi);
	MEMBER(DATA32 time_lo);

	UINT32 hi NOENCODE {
		0_31: time;
		ENCODE(time_hi, (value = time));
	}
	UINT32 lo NOENCODE {
		0_31: time;
		ENCODE(time_lo, (value = time));
	}
}

