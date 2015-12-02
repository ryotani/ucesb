// -*- C++ -*-

#define N_CHANNELS 16

VME_STRUCK_SIS3316(id)
{
  MEMBER(DATA8 n_ch);
	
  UINT32 header NOENCODE
	{
		16_31: module = MATCH(0x3316);
		8_15: nofCH;
		0_7: id = MATCH(id);
    ENCODE(n_ch, (value = nofCH));
	}

  select several
  {
    channel[0] = VME_STRUCK_SIS3316_CHANNEL(ch=0, id=id);
    channel[1] = VME_STRUCK_SIS3316_CHANNEL(ch=1, id=id);
    channel[2] = VME_STRUCK_SIS3316_CHANNEL(ch=2, id=id);
    channel[3] = VME_STRUCK_SIS3316_CHANNEL(ch=3, id=id);
    channel[4] = VME_STRUCK_SIS3316_CHANNEL(ch=4, id=id);
    channel[5] = VME_STRUCK_SIS3316_CHANNEL(ch=5, id=id);
    channel[6] = VME_STRUCK_SIS3316_CHANNEL(ch=6, id=id);
    channel[7] = VME_STRUCK_SIS3316_CHANNEL(ch=7, id=id);
    channel[8] = VME_STRUCK_SIS3316_CHANNEL(ch=8, id=id);
    channel[9] = VME_STRUCK_SIS3316_CHANNEL(ch=9, id=id);
    channel[10] = VME_STRUCK_SIS3316_CHANNEL(ch=10, id=id);
    channel[11] = VME_STRUCK_SIS3316_CHANNEL(ch=11, id=id);
    channel[12] = VME_STRUCK_SIS3316_CHANNEL(ch=12, id=id);
    channel[13] = VME_STRUCK_SIS3316_CHANNEL(ch=13, id=id);
    channel[14] = VME_STRUCK_SIS3316_CHANNEL(ch=14, id=id);
    channel[15] = VME_STRUCK_SIS3316_CHANNEL(ch=15, id=id);
  }
}

VME_STRUCK_SIS3316_CHANNEL(id, ch)
{
  UINT32 channel_header NOENCODE
  {
    16_31: module = MATCH(0x3316);
    12_15: padding_words;
    8_11: ch = MATCH(ch);
    0_7: id = MATCH(id);
  }

  list (0 <= n < channel_header.padding_words)
  {
    UINT32 padding NOENCODE
    {
      16_31: module = MATCH(0x3316);
      8_15: ch = MATCH(ch);
      0_7: id = MATCH(id);
    }
  }

  select several {
    multi data = VME_STRUCK_SIS3316_CHANNEL_DATA(id=id, ch=ch);
  }
}

VME_STRUCK_SIS3316_CHANNEL_DATA(id, ch)
{
	MEMBER(DATA32 ts[2] ZERO_SUPPRESS);
	MEMBER(DATA32 gate[8] ZERO_SUPPRESS);
	MEMBER(DATA32 maw[3] ZERO_SUPPRESS);
	MEMBER(DATA32 maxe[2] ZERO_SUPPRESS);
#if 0
	MEMBER(DATA32 mawe[2] ZERO_SUPPRESS);
#endif
  
  UINT32 header0
  {
    0:     has_acc6;
    1:     has_acc2;
    2:     has_maw;
    3:     has_e;
    4_7:   chanNo = MATCH(ch);
    8_15:  id = MATCH(id);
    16_31: timeS;
    ENCODE(ts[0],(value=timeS));
  }

  UINT32 header2
  {
    0_31:  timeS;
    ENCODE(ts[1],(value=timeS));
  }

  if (header0.has_acc6) {
    UINT32 peak NOENCODE
    {
      0_15:	peakValue;
      16_31:	peakIndex;
    }

    /* Accumulator sum of Gate 1 */
    UINT32 gate_group_1
    {
      0_23:   sum;
      24_27:  reserved;
      28:     has_pileup;
      29:     has_repileup;
      30:     has_underflow;
      31:     has_overflow;
      ENCODE(gate[0],(value=sum));
    }

    /* Accumulator sum of Gate 2_6 */
    list (1<=i<6) 
    {
      UINT32 gate_group_2_6
      {
          0_27: sum;
          28_31: 0;
          ENCODE(gate[i],(value=sum));
      }
    }
  }

  if (header0.has_acc2) {
    /* Accumulator sum of Gate 7_8 */
    list (6<=i<8) 
    {
      UINT32 gate_group_7_8
      {
        0_27: sum;
        28_31: 0;
        ENCODE(gate[i],(value=sum));
      }
    }
  }

  if (header0.has_maw) {
    UINT32 maw1
    {
      0_31:  max;
      ENCODE(maw[0],(value=max));
    }
  
    UINT32 maw2
    {
      0_31:  after;
      ENCODE(maw[1],(value=after));
    }
  
    UINT32 maw3
    {
      0_31:  before;
      ENCODE(maw[2],(value=before));
    }
  }

  if (header0.has_e) {	
    UINT32 maxe1
    {
      0_31:  start;
      ENCODE(maxe[0],(value=start+0x08000000));
    }
  
    UINT32 maxe2
    {
      0_31:  max;
      ENCODE(maxe[1],(value=max+0x08000000));
    }
  }

  UINT32 header3
  {
    0_25:  sampleLength;
    26:    pileup;
    27:    mawFlag;  
    28_31: 0xE;
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

