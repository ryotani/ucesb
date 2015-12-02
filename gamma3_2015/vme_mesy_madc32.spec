// -*- C++ -*-

VME_MESY_MADC32(geom)
{
  MEMBER(DATA16 data[32] ZERO_SUPPRESS);
  /*MEMBER(DATA12_OVERFLOW data[32] ZERO_SUPPRESS);*/

/*  optional UINT32 padding NOENCODE
  {
    0_31: value = MATCH(0x32323232);
  }*/
  
  UINT32 header NOENCODE
  {
    0_11:  word_number;
    12_14: adc_resol;
    15:	   out_form;
    16_23: geom = MATCH(geom);
    24_29: 0b000000;
    30_31: 0b01;
  }

  MATCH_END;

  list(0<=index<header.word_number-1)
  {
    UINT32 ch_data NOENCODE
    {
      0_12:  value;
      14:    outofrange;
      16_20: channel;
      21_29: 0b000100000;
      30_31: 0b00;

      /*ENCODE(data[channel],(value=value,overflow=outofrange));*/
      ENCODE(data[channel],(value=value));
    }
  }

  UINT32 end_of_event NOENCODE
  {
    0_29:   counter;
    30_31: 0b11;
  }
}
