// Modified header
FEBEX_EVENTHEADER()
{
	UINT32 Identifier NOENCODE
	{
		0_31: 0xfebe0000;
	}

	UINT32 febexcards
	{
		0_7: N_febex1;
		8_15: N_febex2;
		16_23: N_febex3;
		24_31: N_febex4;
	}
}

FEBEX_PADDING()
{
	UINT32 pads_data NOENCODE
	{
		0_11:	counter;
		12_19:	index;
		20_31:	0xadd;
	}
}

FEBEX_NOTRACE(sfp, card)
{
	MEMBER(DATA8 Nhit[16]);
	MEMBER(DATA12 t[16] ZERO_SUPPRESS_MULTI(10));
	MEMBER(DATA32 E[16] ZERO_SUPPRESS_MULTI(10));

	UINT32 indicator NOENCODE
	{
		0_7: 0x34;
		8_11: trigger_type;
		12_15: sfp =  MATCH(sfp);
		16_23: card = MATCH(card);
		24_31: 0xff;

	}

	UINT32 ETsize NOENCODE
	{
		0_31: channelsize;
	}

	UINT32 head NOENCODE
	{
		0_23: notused;
		24_31: 0xaf;
	}

	UINT32 triggertime NOENCODE
	{
		0_31: triggertime;
	}

	UINT32 time NOENCODE
	{
		0_31: time;
	}

	list (0<=i<((ETsize.channelsize - 16) >> 3))
	{
		UINT32 hittime NOENCODE
		{
			0_11: data;
			12_14: notused1;
			15: sign;
			16_19: notused2;
			20_23: multihit;
			24_27: Nhit;
			28_31: channel_id;
			ENCODE(t[channel_id],(value=data));
			ENCODE(Nhit[channel_id],(value=Nhit));
		}

		UINT32 energy NOENCODE
		{
			0_21: data;
			22: notused1;
			23: sign;
			24_27: notused2;
			28_31: channel_id;
			ENCODE(E[channel_id],(value=data|sign<<23));
		}
	}
	UINT32 trail NOENCODE
	{
		0_23: notused;
		24_31: 0xbf;
	}

}

