// -*- C++ -*-
// vim: ft=cpp:

#define MAX_HITS 4000
#define N_CHANNELS 16
#define N_TS 2
#define N_GATES 8
#define N_MAW 3
#define N_MAXE 2
// #define HAS_MODULE_HEADER

VME_STRUCK_SIS3316_ASYNC(id)
{
	MEMBER(DATA32 ts[N_CHANNELS * N_TS] ZERO_SUPPRESS_MULTI(MAX_HITS));
	MEMBER(DATA32 gate[N_CHANNELS * N_GATES] ZERO_SUPPRESS_MULTI(MAX_HITS));
	MEMBER(DATA32 maw[N_CHANNELS * N_MAW] ZERO_SUPPRESS_MULTI(MAX_HITS));
	MEMBER(DATA32 maxe[N_CHANNELS * N_MAXE] ZERO_SUPPRESS_MULTI(MAX_HITS));

#ifdef HAS_MODULE_HEADER
	UINT32 header NOENCODE
	{
		16_31: module = MATCH(0x3316);
		8_15: number_of_channels;
		0_7: id = MATCH(id);
	}
#endif

	select several
	{
		data = VME_STRUCK_SIS3316_CHANNEL(id=id,
		    ts=ts,
		    gate=gate,
		    maw=maw,
		    maxe=maxe);
	}
}

VME_STRUCK_SIS3316_CHANNEL(id, ts, gate, maw, maxe)
{
	MEMBER(DATA32 ts[N_CHANNELS * N_TS] ZERO_SUPPRESS_MULTI(MAX_HITS));
	MEMBER(DATA32 gate[N_CHANNELS * N_GATES] ZERO_SUPPRESS_MULTI(MAX_HITS));
	MEMBER(DATA32 maw[N_CHANNELS * N_MAW] ZERO_SUPPRESS_MULTI(MAX_HITS));
	MEMBER(DATA32 maxe[N_CHANNELS * N_MAXE] ZERO_SUPPRESS_MULTI(MAX_HITS));

	UINT32 channel_header NOENCODE
	{
		16_31: module = MATCH(0x3316);
		12_15: padding_words;
		8_11: ch;
		0_7: id = MATCH(id);
	}

	list (0 <= n < channel_header.padding_words)
	{
		UINT32 padding NOENCODE
		{
			16_31: module = MATCH(0x3316);
			8_15: ch = MATCH(channel_header.ch);
			0_7: id = MATCH(id);
		}
	}

	select several {
		data = VME_STRUCK_SIS3316_CHANNEL_DATA(id=id,
		    ch=channel_header.ch,
		    ts=ts,
		    gate=gate,
		    maw=maw,
		    maxe=maxe);
	}
}

VME_STRUCK_SIS3316_CHANNEL_DATA(id, ch, ts, gate, maw, maxe)
{
	MEMBER(DATA32 ts[N_CHANNELS * N_TS] ZERO_SUPPRESS_MULTI(MAX_HITS));
	MEMBER(DATA32 gate[N_CHANNELS * N_GATES] ZERO_SUPPRESS_MULTI(MAX_HITS));
	MEMBER(DATA32 maw[N_CHANNELS * N_MAW] ZERO_SUPPRESS_MULTI(MAX_HITS));
	MEMBER(DATA32 maxe[N_CHANNELS * N_MAXE] ZERO_SUPPRESS_MULTI(MAX_HITS));
#if 0
	MEMBER(DATA32 mawe[2] ZERO_SUPPRESS);
#endif

	UINT32 header0 NOENCODE
	{
		0:     has_acc6;
		1:     has_acc2;
		2:     has_maw;
		3:     has_e;
		4_7:   chanNo = MATCH(ch);
		8_15:  id = MATCH(id);
		16_31: timeS;
		ENCODE(ts[ch * N_TS], (value=timeS));
	}

	UINT32 header2 NOENCODE
	{
		0_31:  timeS;
		ENCODE(ts[ch * N_TS + 1], (value=timeS));
	}

	if (header0.has_acc6) {
		UINT32 peak NOENCODE
		{
			0_15:	peakValue;
			16_31:	peakIndex;
		}

		/* Accumulator sum of Gate 1 */
		UINT32 gate_group_1 NOENCODE
		{
			0_23:   sum;
			24_27:  reserved;
			28:     has_pileup;
			29:     has_repileup;
			30:     has_underflow;
			31:     has_overflow;
				ENCODE(gate[ch * N_GATES],(value=sum));
		}

		/* Accumulator sum of Gate 2_6 */
		list (1<=i<6)
		{
			UINT32 gate_group_2_6 NOENCODE
			{
				0_27: sum;
				28_31: 0;
				       ENCODE(gate[ch * N_GATES + i],
					   (value=sum));
			}
		}
	}

	if (header0.has_acc2) {
		/* Accumulator sum of Gate 7_8 */
		list (6<=i<8)
		{
			UINT32 gate_group_7_8 NOENCODE
			{
				0_27: sum;
				28_31: 0;
				ENCODE(gate[ch * N_GATES + i],
				    (value=sum));
			}
		}
	}

	if (header0.has_maw) {
		UINT32 maw1 NOENCODE
		{
			0_31:  max;
		       ENCODE(maw[ch * N_MAW],(value=max));
		}

		UINT32 maw2 NOENCODE
		{
			0_31:  after;
		       ENCODE(maw[ch * N_MAW + 1],(value=after));
		}

		UINT32 maw3 NOENCODE
		{
			0_31:  before;
		       ENCODE(maw[ch * N_MAW + 2],(value=before));
		}
	}

	if (header0.has_e) {
		UINT32 maxe1 NOENCODE
		{
			0_31:  start;
		       ENCODE(maxe[ch * N_MAXE],(value=start + 0x08000000));
		}

		UINT32 maxe2 NOENCODE
		{
			0_31:  max;
		       ENCODE(maxe[ch * N_MAXE + 1],(value=max + 0x08000000));
		}
	}

	UINT32 header3 NOENCODE
	{
		0_25:  sampleLength;
		26:    pileup;
		27:    mawFlag;
		28_31: 0xE;
	}

	list (0 <= index < header3.sampleLength * 2)
	{
		UINT16 sample NOENCODE;
	}
#if 0
	if (header3.mawFlag) {
		UINT32 maw_e1 NOENCODE
		{
0_31: value;
      ENCODE(mawe[0],(value=value+0x08000000));
		}
		UINT32 maw_e2 NOENCODE
		{
0_31: value;
      ENCODE(mawe[1],(value=value+0x08000000));
		}
	}
#endif
}

