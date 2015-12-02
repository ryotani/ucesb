// -*- C++ -*-

TRLO_TRIG_SCALER(id)
{
  MEMBER(DATA32 before_lmu[16] ZERO_SUPPRESS);
  MEMBER(DATA32 before_lmu_mux[ 1] ZERO_SUPPRESS);
  MEMBER(DATA32 before_lmu_aux[ 4] ZERO_SUPPRESS);
  MEMBER(DATA32 before_deadtime[16] ZERO_SUPPRESS);
  MEMBER(DATA32 after_deadtime[16] ZERO_SUPPRESS);
  MEMBER(DATA32 after_reduction[16] ZERO_SUPPRESS);

  UINT32 header
    {
      0_5:      before_lmu     = RANGE(0,16); /* Tridi 8 */
      6_10:     before_lmu_mux = RANGE(0,1);  /* Tridi 1 */
      11_15:    before_lmu_aux = RANGE(0,4);  /* Tridi 4 */
      16_21:    after_lmu      = RANGE(0,16); /* Tridi 8 */
      24_31:    id = MATCH(id);
    }

#if 0
  UINT32 header
    {
      0_5:      before_lmu     = RANGE(0,16); /* Vulom 16 */
      6_10:     before_lmu_mux = RANGE(0,1);  /* Vulom 1 */
      11_15:    before_lmu_aux = RANGE(0,4);  /* Vulom 4 */
      16_21:    after_lmu      = RANGE(0,16); /* Vulom 16 */
      24_31:    id = MATCH(id);
    }
#endif


  /* Raw scalers */
  list(0 <= index < header.before_lmu) {
    UINT32 b_lmu NOENCODE {
    0_31: value;
      ENCODE(before_lmu[index],(value=value));
    }
  }
  list(0 <= index < header.before_lmu_mux) {
    UINT32 b_lmu_mux NOENCODE {
    0_31: value;
      ENCODE(before_lmu_mux[index],(value=value));
    }
  }
  list(0 <= index < header.before_lmu_aux) {
    UINT32 b_lmu_aux NOENCODE {
    0_31: value;
      ENCODE(before_lmu_aux[index],(value=value));
    }
  }
  /* Before deadtime */
  list(0 <= index < header.after_lmu) {
    UINT32 b_deadtime NOENCODE {
    0_31: value;
      ENCODE(before_deadtime[index],(value=value));
    }
  }
  /* After deadtime */
  list(0 <= index < header.after_lmu) {
    UINT32 a_deadtime NOENCODE {
    0_31: value;
      ENCODE(after_deadtime[index],(value=value));
    }
  }
  /* After reduction */
  list(0 <= index < header.after_lmu) {
    UINT32 a_reduction NOENCODE {
    0_31: value;
      ENCODE(after_reduction[index],(value=value));
    }
  }
  /* Skip those zeros */
  /*list(0 <= index < 16) {*/ /* Tridi 8, Vulom 16 */
  list(0 <= index < 8) { /* Tridi 8, Vulom 16 */
    UINT32 val;
  }
}

TRLO_SAMPLER(id)
{
  MEMBER(DATA32 stamps[512] NO_INDEX_LIST);

  UINT32 header
    {
      0_9:      count; // for easy skip (max 511 entries)
      10:       missing_at_end; // recordings lost at end
      24_31:    id = MATCH(id);
    }


  list(0 <= index < header.count)
    {
      UINT32 data NOENCODE
        {
          // in principle: bit 31: entries were lost (buffer overflow), 30-0: timestamp

          0_31: stamp;

          ENCODE(stamps APPEND_LIST,(value=stamp));
        }
    }
}

TRLO_EVENT_TRIGGER()
{
  UINT32 time_lo
  {
    0_31: val; // to be similar as time_hi
  }
  UINT32 time_hi
  {
    0_30: val;
    31: missed_event;
  }
  UINT32 status
  {
    0_23:  tpat;
    24_27: trig;
    28_31: count;
  };
}


