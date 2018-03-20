// -*- C++ -*-
/* vim:set ft=cpp cindent: */

#include "../land_common/whiterabbit.spec"

SERIAL_TS()
{
  UINT32 header NOENCODE {
    0_31: multi_events;
  }

  list (0 <= i < header.multi_events) {
    multi event = SERIAL_TS_EVENT();
  }
}

SERIAL_TS_EVENT() {
  MEMBER(DATA32 ts_hi);
  MEMBER(DATA32 ts_lo);

  UINT32 ts_lsb NOENCODE {
    0_31: t_lsb;
    ENCODE(ts_lo, (value = t_lsb));
  };

  UINT32 ts_msb NOENCODE {
    0_30: t_msb;
    31: missed_event;
    ENCODE(ts_hi, (value = t_msb));
  };
}

TRIGBUF(multi_events)
{
  UINT32 header {
    0_11: entries;
    12_31: multi_events;
  }

  list (0 <= i < multi_events) {
    multi entry = TRIGBUF_ENTRY();
  }
}

TRIGBUF_ENTRY()
{
  MEMBER(DATA32 ts_hi);
  MEMBER(DATA32 ts_lo);
  MEMBER(DATA32 tpat);
  MEMBER(DATA8 trig);

  UINT32 ts_lsb NOENCODE {
    0_31: t_lsb;
    ENCODE(ts_lo, (value = t_lsb));
  };

  UINT32 ts_msb NOENCODE {
    0_30: t_msb;
    31: missed_event;
    ENCODE(ts_hi, (value = t_msb));
  };

  UINT32 info NOENCODE {
    0_23: tpat;
    24_27: trig;
    28_31: cnt;
    ENCODE(tpat, (value = tpat));
    ENCODE(trig, (value = trig));
  };
}

TRLO(id, multi_events)
{
  wr_ts = TIMESTAMP_WHITERABBIT(id = id);
  serial_ts = SERIAL_TS();
  trigbuf = TRIGBUF(multi_events = multi_events);
}

