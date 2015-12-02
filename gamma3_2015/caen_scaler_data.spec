// -*- C++ -*-

CAEN_V830_SCALER(id)
{
  MEMBER(DATA32 data[32] ZERO_SUPPRESS);

  UINT32 sc_header {
    0_6:    count = RANGE(0,31);
    24_31:  id = MATCH(id);
  }

  UINT32  header {
    0_15:   event_number;
    16_17:  ts;
    18_23:  count;
    24_25:  undefined;
    26:     1;
    27_31:  geom;
  }

  list(0 <= index < header.count) {
    UINT32 sc NOENCODE {
      0_25:   value;
      26:     0;
      27_31:  channel;
      ENCODE(data[channel],(value=value));
    }
  }
}
