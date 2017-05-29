// -*- C++ -*-

MESYTEC_MADC32_PADDING()
{
    UINT32 padding NOENCODE
    {
        0_31: value = MATCH(0x32323232);
    }
}

MESYTEC_MADC32(geom)
{
  MEMBER(DATA16 data[32] ZERO_SUPPRESS);
  
  UINT32 header NOENCODE
  {
    0_11:  word_number;
    12_14: adc_resol;
    15:	   out_form;
    16_23: geom = MATCH(geom);
    24_29: 0b000000;
    30_31: 0b01;
  }

  list(0<=index<header.word_number-1)
  {
    UINT32 ch_data NOENCODE
    {
      0_12:  value;
      14:    outofrange;
      16_20: channel;
      21_29: 0b000100000;
      30_31: 0b00;

      ENCODE(data[channel],(value=value));
    }
  }

  UINT32 end_of_event NOENCODE
  {
    0_29:   counter;
    30_31: 0b11;
  }
}
