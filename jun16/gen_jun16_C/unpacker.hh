/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for BARRIER.
 *
 * Do not edit - automatically generated.
 */

// BARRIER()
template<typename __data_src_t>
void BARRIER::__unpack(__data_src_t &__buffer)
{
  // UINT32 barrier
  // {
    //  0_31: 0xbabababa;
  // }
  READ_FROM_BUFFER_FULL(56,uint32 ,barrier,barrier.u32);
  CHECK_BITS_EQUAL(55,barrier.unnamed_0_31,0xbabababa);
}
FORCE_IMPL_DATA_SRC_FCN(void,BARRIER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FEBEX_BAD_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_BAD_EVENTHEADER()
template<typename __data_src_t>
void FEBEX_BAD_EVENTHEADER::__unpack(__data_src_t &__buffer)
{
  // UINT32 badbad
  // {
    //  0_31: 0xbad00bad;
  // }
  READ_FROM_BUFFER_FULL(75,uint32 ,badbad,badbad.u32);
  CHECK_BITS_EQUAL(74,badbad.unnamed_0_31,0xbad00bad);
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_BAD_EVENTHEADER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FEBEX_GOOD_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_GOOD_EVENTHEADER()
template<typename __data_src_t>
void FEBEX_GOOD_EVENTHEADER::__unpack(__data_src_t &__buffer)
{
  // UINT32 febexcards
  // {
    //  0_07: n_febex_sfp0 = RANGE(0,64);
    //  8_15: n_febex_sfp1 = RANGE(0,64);
    // 16_23: n_febex_sfp2 = RANGE(0,64);
    // 24_31: n_febex_sfp3 = RANGE(0,64);
  // }
  READ_FROM_BUFFER_FULL(85,uint32 ,febexcards,febexcards.u32);
  CHECK_BITS_RANGE_MAX(81,febexcards.n_febex_sfp0,64);
  CHECK_BITS_RANGE_MAX(82,febexcards.n_febex_sfp1,64);
  CHECK_BITS_RANGE_MAX(83,febexcards.n_febex_sfp2,64);
  CHECK_BITS_RANGE_MAX(84,febexcards.n_febex_sfp3,64);
  // UINT32 trig_length
  // {
    //  0_15: trace_length;
    // 16_31: trigger_delay;
  // }
  READ_FROM_BUFFER_FULL(89,uint32 ,trig_length,trig_length.u32);
  // UINT32 energy_filter
  // {
    //  0_10: sum_b;
    // 11_20: gap;
    // 21_31: sum_a;
  // }
  READ_FROM_BUFFER_FULL(94,uint32 ,energy_filter,energy_filter.u32);
  // UINT32 polarity1
  // {
    //  0_31: pola;
  // }
  READ_FROM_BUFFER_FULL(97,uint32 ,polarity1,polarity1.u32);
  // UINT32 polarity2
  // {
    //  0_31: pola;
  // }
  READ_FROM_BUFFER_FULL(100,uint32 ,polarity2,polarity2.u32);
  // UINT32 polarity3
  // {
    //  0_31: pola;
  // }
  READ_FROM_BUFFER_FULL(103,uint32 ,polarity3,polarity3.u32);
  // UINT32 polarity4
  // {
    //  0_31: pola;
  // }
  READ_FROM_BUFFER_FULL(106,uint32 ,polarity4,polarity4.u32);
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_GOOD_EVENTHEADER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FEBEX_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_EVENTHEADER()
template<typename __data_src_t>
void FEBEX_EVENTHEADER::__unpack(__data_src_t &__buffer)
{
  // select

    // good = FEBEX_GOOD_EVENTHEADER();
    // bad = FEBEX_BAD_EVENTHEADER();
  do
  {
    int __match_no = 0;
    // optimized match 1: FEBEX_GOOD_EVENTHEADER good: (s32) => (0x80808080,0x00000000)
    // optimized match 2: FEBEX_BAD_EVENTHEADER bad: (s32) => (0xffffffff,0xbad00bad)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(68,uint32,__match_peek);
    // differ = bad00bad : 0 2 3 5 7 8 9 11 20 22 23 25 27 28 29 31
    MATCH_DECL_QUICK(66,__match_no,1,good,__match_peek,0x80808080,0x00000000);
    MATCH_DECL_QUICK(67,__match_no,2,bad,__match_peek,0xffffffff,0xbad00bad);
    // last_subevent_item = 0
    }
    if (!__match_no) ERROR_U_LOC(68,"No match for select statement.");
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(66,spurious_match_abort_loop_0,FEBEX_GOOD_EVENTHEADER);
        UNPACK_DECL(66,FEBEX_GOOD_EVENTHEADER,good);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(67,spurious_match_abort_loop_0,FEBEX_BAD_EVENTHEADER);
        UNPACK_DECL(67,FEBEX_BAD_EVENTHEADER,bad);
        break;
    }
  }
  while (0);
  spurious_match_abort_loop_0:;
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_EVENTHEADER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FEBEX_NOTRACE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_NOTRACE(sfp,card)
template<typename __data_src_t>
void FEBEX_NOTRACE::__unpack(__data_src_t &__buffer,uint32 sfp,uint32 card)
{
  // MEMBER(DATA8 n_hit[16]);
  // MEMBER(DATA12 t[16] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA32 e[16] ZERO_SUPPRESS_MULTI(32));
  // UINT32 indicator NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: 255;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_7 : 8; // 0..7
      uint32 trigger_type : 4; // 8..11
      uint32 sfp : 4; // 12..15
      uint32 card : 8; // 16..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 card : 8; // 16..23
      uint32 sfp : 4; // 12..15
      uint32 trigger_type : 4; // 8..11
      uint32 unnamed_0_7 : 8; // 0..7
#endif
    };
    uint32  u32;
  } indicator;
  READ_FROM_BUFFER_FULL(130,uint32 ,indicator,indicator.u32);
  CHECK_BITS_EQUAL(125,indicator.unnamed_0_7,52);
  CHECK_BITS_EQUAL(127,indicator.sfp,sfp);
  CHECK_BITS_EQUAL(128,indicator.card,card);
  CHECK_BITS_EQUAL(129,indicator.unnamed_24_31,255);
  // UINT32 data_size NOENCODE
  // {
    //  0_31: size;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 size : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 size : 32; // 0..31
#endif
    };
    uint32  u32;
  } data_size;
  READ_FROM_BUFFER_FULL(134,uint32 ,data_size,data_size.u32);
  // UINT32 head NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 175;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unused : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 unused : 24; // 0..23
#endif
    };
    uint32  u32;
  } head;
  READ_FROM_BUFFER_FULL(139,uint32 ,head,head.u32);
  CHECK_BITS_EQUAL(138,head.unnamed_24_31,175);
  // UINT32 triggertime NOENCODE
  // {
    //  0_31: trigger_time;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 trigger_time : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 trigger_time : 32; // 0..31
#endif
    };
    uint32  u32;
  } triggertime;
  READ_FROM_BUFFER_FULL(143,uint32 ,triggertime,triggertime.u32);
  // UINT32 time NOENCODE
  // {
    //  0_31: time;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 time : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 time : 32; // 0..31
#endif
    };
    uint32  u32;
  } time;
  READ_FROM_BUFFER_FULL(147,uint32 ,time,time.u32);
  // list(0<=i<((data_size.size - 16) >> 3))

  for (uint32 i = 0; i < (uint32) (((data_size.size - 16) >> 3)); ++i)
  {
    // UINT32 time NOENCODE
    // {
      //  0_10: time;
      // 11_14: unused1;
      //    15: sign;
      // 16_19: unused2;
      // 20_23: multi_hit;
      // 24_27: n_hit;
      // 28_31: channel_id;
      // ENCODE(t[channel_id],(value=((time | (sign << 11)) & 0xfff)));
      // ENCODE(n_hit[channel_id],(value=n_hit));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time : 11; // 0..10
        uint32 unused1 : 4; // 11..14
        uint32 sign : 1; // 15
        uint32 unused2 : 4; // 16..19
        uint32 multi_hit : 4; // 20..23
        uint32 n_hit : 4; // 24..27
        uint32 channel_id : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 channel_id : 4; // 28..31
        uint32 n_hit : 4; // 24..27
        uint32 multi_hit : 4; // 20..23
        uint32 unused2 : 4; // 16..19
        uint32 sign : 1; // 15
        uint32 unused1 : 4; // 11..14
        uint32 time : 11; // 0..10
#endif
      };
      uint32  u32;
    } time;
    READ_FROM_BUFFER_FULL(160,uint32 ,time,time.u32);
    {
      typedef __typeof__(*(&(t))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = t.insert_index(158,time.channel_id);
      __item.value = ((time.time | (time.sign << 11)) & 0xfff);
    }
    {
      typedef __typeof__(*(&(n_hit))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = n_hit.insert_index(159,time.channel_id);
      __item.value = time.n_hit;
    }
    // UINT32 energy NOENCODE
    // {
      //  0_21: energy;
      //    22: unused1;
      //    23: sign;
      // 24_27: unused2;
      // 28_31: channel_id;
      // ENCODE(e[channel_id],(value=(energy | (sign << 23))));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 energy : 22; // 0..21
        uint32 unused1 : 1; // 22
        uint32 sign : 1; // 23
        uint32 unused2 : 4; // 24..27
        uint32 channel_id : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 channel_id : 4; // 28..31
        uint32 unused2 : 4; // 24..27
        uint32 sign : 1; // 23
        uint32 unused1 : 1; // 22
        uint32 energy : 22; // 0..21
#endif
      };
      uint32  u32;
    } energy;
    READ_FROM_BUFFER_FULL(169,uint32 ,energy,energy.u32);
    {
      typedef __typeof__(*(&(e))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = e.insert_index(168,energy.channel_id);
      __item.value = (energy.energy | (energy.sign << 23));
    }
  }
  // UINT32 trailer NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 191;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unused : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 unused : 24; // 0..23
#endif
    };
    uint32  u32;
  } trailer;
  READ_FROM_BUFFER_FULL(175,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(174,trailer.unnamed_24_31,191);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FEBEX_NOTRACE::__unpack,uint32 sfp,uint32 card);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FEBEX_PADDING.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_PADDING()
template<typename __data_src_t>
void FEBEX_PADDING::__unpack(__data_src_t &__buffer)
{
  // UINT32 pads_data NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 counter : 12; // 0..11
      uint32 index : 8; // 12..19
      uint32 unnamed_20_31 : 12; // 20..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_20_31 : 12; // 20..31
      uint32 index : 8; // 12..19
      uint32 counter : 12; // 0..11
#endif
    };
    uint32  u32;
  } pads_data;
  READ_FROM_BUFFER_FULL(115,uint32 ,pads_data,pads_data.u32);
  CHECK_BITS_EQUAL(114,pads_data.unnamed_20_31,0xadd);
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_PADDING::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FEBEX_TRACE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_TRACE(sfp,card)
template<typename __data_src_t>
void FEBEX_TRACE::__unpack(__data_src_t &__buffer,uint32 sfp,uint32 card)
{
  // MEMBER(DATA32 trace_length[16] ZERO_SUPPRESS);
  // MEMBER(DATA16 trace[16][1000] ZERO_SUPPRESS);
  // MEMBER(DATA32 filter[16][1000] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: channel_id = RANGE(0,254);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_7 : 8; // 0..7
      uint32 trigger_type : 4; // 8..11
      uint32 sfp : 4; // 12..15
      uint32 card : 8; // 16..23
      uint32 channel_id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 channel_id : 8; // 24..31
      uint32 card : 8; // 16..23
      uint32 sfp : 4; // 12..15
      uint32 trigger_type : 4; // 8..11
      uint32 unnamed_0_7 : 8; // 0..7
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(190,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(185,header.unnamed_0_7,52);
  CHECK_BITS_EQUAL(187,header.sfp,sfp);
  CHECK_BITS_EQUAL(188,header.card,card);
  CHECK_BITS_RANGE_MAX(189,header.channel_id,254);
  // UINT32 trace_size NOENCODE
  // {
    //  0_31: size;
    // ENCODE(trace_length[header.channel_id],(value=((size / 2) - 4)));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 size : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 size : 32; // 0..31
#endif
    };
    uint32  u32;
  } trace_size;
  READ_FROM_BUFFER_FULL(195,uint32 ,trace_size,trace_size.u32);
  {
    typedef __typeof__(*(&(trace_length))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = trace_length.insert_index(194,header.channel_id);
    __item.value = ((trace_size.size / 2) - 4);
  }
  // UINT32 trace_header NOENCODE
  // {
    //  0_17: notused1;
    //    18: filter_mode;
    //    19: filter_onoff;
    // 20_22: notused2;
    //    23: adc_type;
    // 24_31: 170;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 notused1 : 18; // 0..17
      uint32 filter_mode : 1; // 18
      uint32 filter_onoff : 1; // 19
      uint32 notused2 : 3; // 20..22
      uint32 adc_type : 1; // 23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 adc_type : 1; // 23
      uint32 notused2 : 3; // 20..22
      uint32 filter_onoff : 1; // 19
      uint32 filter_mode : 1; // 18
      uint32 notused1 : 18; // 0..17
#endif
    };
    uint32  u32;
  } trace_header;
  READ_FROM_BUFFER_FULL(204,uint32 ,trace_header,trace_header.u32);
  CHECK_BITS_EQUAL(203,trace_header.unnamed_24_31,170);
  // if((trace_header.filter_onoff == 0))

  // else

  if ((trace_header.filter_onoff == 0))
  {
    // list(0<=i<((trace_size.size / 4) - 2))

    for (uint32 i = 0; i < (uint32) (((trace_size.size / 4) - 2)); ++i)
    {
      // UINT32 channel_trace NOENCODE
      // {
        //  0_13: data1;
        // 14_15: nik_knows;
        // 16_29: data2;
        // 30_31: nik_knows2;
        // ENCODE(trace[header.channel_id][((2 * i) + 0)],(value=data1));
        // ENCODE(trace[header.channel_id][((2 * i) + 1)],(value=data2));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 data1 : 14; // 0..13
          uint32 nik_knows : 2; // 14..15
          uint32 data2 : 14; // 16..29
          uint32 nik_knows2 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 nik_knows2 : 2; // 30..31
          uint32 data2 : 14; // 16..29
          uint32 nik_knows : 2; // 14..15
          uint32 data1 : 14; // 0..13
#endif
        };
        uint32  u32;
      } channel_trace;
      READ_FROM_BUFFER_FULL(216,uint32 ,channel_trace,channel_trace.u32);
      {
        typedef __typeof__(*(&(trace[header.channel_id]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = trace[header.channel_id].insert_index(214,((2 * i) + 0));
        __item.value = channel_trace.data1;
      }
      {
        typedef __typeof__(*(&(trace[header.channel_id]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = trace[header.channel_id].insert_index(215,((2 * i) + 1));
        __item.value = channel_trace.data2;
      }
    }
  }

  else
  {
    // list(0<=i<((trace_size.size / 8) - 1))

    for (uint32 i = 0; i < (uint32) (((trace_size.size / 8) - 1)); ++i)
    {
      // UINT32 channel_trace NOENCODE
      // {
        //  0_13: data1;
        // 14_31: nik_knows;
        // ENCODE(trace[header.channel_id][i],(value=data1));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 data1 : 14; // 0..13
          uint32 nik_knows : 18; // 14..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 nik_knows : 18; // 14..31
          uint32 data1 : 14; // 0..13
#endif
        };
        uint32  u32;
      } channel_trace;
      READ_FROM_BUFFER_FULL(225,uint32 ,channel_trace,channel_trace.u32);
      {
        typedef __typeof__(*(&(trace[header.channel_id]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = trace[header.channel_id].insert_index(224,i);
        __item.value = channel_trace.data1;
      }
      // UINT32 channel_filter NOENCODE
      // {
        //  0_22: data1;
        //    23: sign;
        // 24_31: nik_knows2;
        // ENCODE(filter[header.channel_id][i],(value=(data1 * (1 - (2 * sign)))));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 data1 : 23; // 0..22
          uint32 sign : 1; // 23
          uint32 nik_knows2 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 nik_knows2 : 8; // 24..31
          uint32 sign : 1; // 23
          uint32 data1 : 23; // 0..22
#endif
        };
        uint32  u32;
      } channel_filter;
      READ_FROM_BUFFER_FULL(232,uint32 ,channel_filter,channel_filter.u32);
      {
        typedef __typeof__(*(&(filter[header.channel_id]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = filter[header.channel_id].insert_index(231,i);
        __item.value = (channel_filter.data1 * (1 - (2 * channel_filter.sign)));
      }
    }
  }
  // UINT32 trace_trailer NOENCODE
  // {
    //  0_23: notused;
    // 24_31: 187;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 notused : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 notused : 24; // 0..23
#endif
    };
    uint32  u32;
  } trace_trailer;
  READ_FROM_BUFFER_FULL(239,uint32 ,trace_trailer,trace_trailer.u32);
  CHECK_BITS_EQUAL(238,trace_trailer.unnamed_24_31,187);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FEBEX_TRACE::__unpack,uint32 sfp,uint32 card);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for LAND_STD_VME.
 *
 * Do not edit - automatically generated.
 */

// LAND_STD_VME()
template<typename __data_src_t>
void LAND_STD_VME::__unpack(__data_src_t &__buffer)
{
  // UINT32 failure
  // {
    //     0: fail_general;
    //     1: fail_data_corrupt;
    //     2: fail_data_missing;
    //     3: fail_data_too_much;
    //     4: fail_event_counter_mismatch;
    //     5: fail_readout_error_driver;
    //     6: fail_unexpected_trigger;
    //     7: fail_firmware_mismatch;
    //    22: has_multi_trlo_ii_counter0;
    //    23: has_clock_counter_stamp;
    //    24: has_continous_event_counter;
    //    25: has_update_qdc_iped_value;
    //    26: spurious_start_before_tcal;
    //    27: has_no_zero_suppression;
    //    28: has_multi_adctdc_counter0;
    //    29: has_multi_scaler_counter0;
    //    30: has_multi_event;
    //    31: has_time_stamp;
  // }
  READ_FROM_BUFFER_FULL(270,uint32 ,failure,failure.u32);
  CHECK_UNNAMED_BITS_ZERO(270,failure.u32,0x003fff00);
  // if(failure.has_continous_event_counter)

  if (failure.has_continous_event_counter)
  {
    // UINT32 continous_event_counter;
    READ_FROM_BUFFER(273,uint32 ,continous_event_counter);
  }
  // if(failure.has_time_stamp)

  if (failure.has_time_stamp)
  {
    // UINT32 time_stamp;
    READ_FROM_BUFFER(277,uint32 ,time_stamp);
  }
  // if(failure.has_clock_counter_stamp)

  if (failure.has_clock_counter_stamp)
  {
    // UINT32 clock_counter_stamp;
    READ_FROM_BUFFER(281,uint32 ,clock_counter_stamp);
  }
  // if(failure.has_update_qdc_iped_value)

  if (failure.has_update_qdc_iped_value)
  {
    // UINT32 iped;
    READ_FROM_BUFFER(285,uint32 ,iped);
  }
  // if(failure.has_multi_event)

  if (failure.has_multi_event)
  {
    // UINT32 multi_events;
    READ_FROM_BUFFER(289,uint32 ,multi_events);
  }
  // if(failure.has_multi_trlo_ii_counter0)

  if (failure.has_multi_trlo_ii_counter0)
  {
    // UINT32 multi_trlo_ii_counter0;
    READ_FROM_BUFFER(293,uint32 ,multi_trlo_ii_counter0);
  }
  // if(failure.has_multi_scaler_counter0)

  if (failure.has_multi_scaler_counter0)
  {
    // UINT32 multi_scaler_counter0;
    READ_FROM_BUFFER(297,uint32 ,multi_scaler_counter0);
  }
  // if(failure.has_multi_adctdc_counter0)

  if (failure.has_multi_adctdc_counter0)
  {
    // UINT32 multi_adctdc_counter0;
    READ_FROM_BUFFER(301,uint32 ,multi_adctdc_counter0);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_STD_VME::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SCALER.
 *
 * Do not edit - automatically generated.
 */

// SCALER()
template<typename __data_src_t>
void SCALER::__unpack(__data_src_t &__buffer)
{
  // UINT32 scaler;
  READ_FROM_BUFFER(741,uint32 ,scaler);
}
FORCE_IMPL_DATA_SRC_FCN(void,SCALER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX3_HEADER.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_HEADER()
template<typename __data_src_t>
void TAMEX3_HEADER::__unpack(__data_src_t &__buffer)
{
  // UINT32 trigger_window
  // {
    //  0_15: post_trig_ns;
    // 16_31: pre_trig_ns;
  // }
  READ_FROM_BUFFER_FULL(619,uint32 ,trigger_window,trigger_window.u32);
}
FORCE_IMPL_DATA_SRC_FCN(void,TAMEX3_HEADER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX3_PADDING.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_PADDING()
template<typename __data_src_t>
void TAMEX3_PADDING::__unpack(__data_src_t &__buffer)
{
  // UINT32 padding NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 counter : 12; // 0..11
      uint32 index : 8; // 12..19
      uint32 unnamed_20_31 : 12; // 20..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_20_31 : 12; // 20..31
      uint32 index : 8; // 12..19
      uint32 counter : 12; // 0..11
#endif
    };
    uint32  u32;
  } padding;
  READ_FROM_BUFFER_FULL(628,uint32 ,padding,padding.u32);
  CHECK_BITS_EQUAL(627,padding.unnamed_20_31,0xadd);
}
FORCE_IMPL_DATA_SRC_FCN(void,TAMEX3_PADDING::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX3_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_SFP(sfp,card)
template<typename __data_src_t>
void TAMEX3_SFP::__unpack(__data_src_t &__buffer,uint32 sfp,uint32 card)
{
  // MEMBER(DATA16 time_coarse[34] ZERO_SUPPRESS_MULTI(200));
  // MEMBER(DATA12 time_fine[34] ZERO_SUPPRESS_MULTI(200));
  // UINT32 indicator NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_7 : 8; // 0..7
      uint32 trigger_type : 4; // 8..11
      uint32 sfp : 4; // 12..15
      uint32 card : 8; // 16..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 card : 8; // 16..23
      uint32 sfp : 4; // 12..15
      uint32 trigger_type : 4; // 8..11
      uint32 unnamed_0_7 : 8; // 0..7
#endif
    };
    uint32  u32;
  } indicator;
  READ_FROM_BUFFER_FULL(649,uint32 ,indicator,indicator.u32);
  CHECK_BITS_EQUAL(644,indicator.unnamed_0_7,52);
  CHECK_BITS_EQUAL(646,indicator.sfp,sfp);
  CHECK_BITS_EQUAL(647,indicator.card,card);
  CHECK_BITS_EQUAL(648,indicator.unnamed_24_31,0);
  // MATCH_END;
  // UINT32 data_size NOENCODE
  // {
    //  0_31: bytes;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 bytes : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 bytes : 32; // 0..31
#endif
    };
    uint32  u32;
  } data_size;
  READ_FROM_BUFFER_FULL(656,uint32 ,data_size,data_size.u32);
  // UINT32 tdc_header NOENCODE
  // {
    //  0_15: lec;
    //    16: buf_no;
    // 17_19: reserved;
    // 20_23: trigger_type;
    // 24_31: 170;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 lec : 16; // 0..15
      uint32 buf_no : 1; // 16
      uint32 reserved : 3; // 17..19
      uint32 trigger_type : 4; // 20..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 trigger_type : 4; // 20..23
      uint32 reserved : 3; // 17..19
      uint32 buf_no : 1; // 16
      uint32 lec : 16; // 0..15
#endif
    };
    uint32  u32;
  } tdc_header;
  READ_FROM_BUFFER_FULL(664,uint32 ,tdc_header,tdc_header.u32);
  CHECK_BITS_EQUAL(663,tdc_header.unnamed_24_31,170);
  // list(0<=i<((data_size.bytes / 4) - 3))

  for (uint32 i = 0; i < (uint32) (((data_size.bytes / 4) - 3)); ++i)
  {
    // UINT32 data NOENCODE
    // {
      //  0_10: coarse;
      //    11: is_leading;
      // 12_21: fine;
      // 22_28: channel_index;
      // 29_31: type;
      // ENCODE(time_coarse[(((4 <= type) * channel_index) + ((4 > type) * 33))],(value=coarse));
      // ENCODE(time_fine[(((4 <= type) * channel_index) + ((4 > type) * 33))],(value=fine));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 coarse : 11; // 0..10
        uint32 is_leading : 1; // 11
        uint32 fine : 10; // 12..21
        uint32 channel_index : 7; // 22..28
        uint32 type : 3; // 29..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 type : 3; // 29..31
        uint32 channel_index : 7; // 22..28
        uint32 fine : 10; // 12..21
        uint32 is_leading : 1; // 11
        uint32 coarse : 11; // 0..10
#endif
      };
      uint32  u32;
    } data;
    READ_FROM_BUFFER_FULL(683,uint32 ,data,data.u32);
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(678,(((4 <= data.type) * data.channel_index) + ((4 > data.type) * 33)));
      __item.value = data.coarse;
    }
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(682,(((4 <= data.type) * data.channel_index) + ((4 > data.type) * 33)));
      __item.value = data.fine;
    }
  }
  // UINT32 error_bits NOENCODE
  // {
    //  0_23: bits;
    // 24_31: 238;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 bits : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 bits : 24; // 0..23
#endif
    };
    uint32  u32;
  } error_bits;
  READ_FROM_BUFFER_FULL(689,uint32 ,error_bits,error_bits.u32);
  CHECK_BITS_EQUAL(688,error_bits.unnamed_24_31,238);
  // UINT32 trailer NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 187;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unused : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 unused : 24; // 0..23
#endif
    };
    uint32  u32;
  } trailer;
  READ_FROM_BUFFER_FULL(694,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(693,trailer.unnamed_24_31,187);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX3_SFP::__unpack,uint32 sfp,uint32 card);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TIMESTAMP_WHITERABBIT.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT(id)
template<typename __data_src_t>
void TIMESTAMP_WHITERABBIT::__unpack(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA12 subsystem_id);
  // MEMBER(DATA16 t1);
  // MEMBER(DATA16 t2);
  // MEMBER(DATA16 t3);
  // MEMBER(DATA16 t4);
  // UINT32 header NOENCODE
  // {
    //  0_11: id = MATCH(id);
    // 12_15: 0;
    //    16: error_bit;
    // 17_31: 0;
    // ENCODE(subsystem_id,(value=id));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 12; // 0..11
      uint32 unnamed_12_15 : 4; // 12..15
      uint32 error_bit : 1; // 16
      uint32 unnamed_17_31 : 15; // 17..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_17_31 : 15; // 17..31
      uint32 error_bit : 1; // 16
      uint32 unnamed_12_15 : 4; // 12..15
      uint32 id : 12; // 0..11
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(575,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(570,header.id,id);
  CHECK_BITS_EQUAL(571,header.unnamed_12_15,0);
  CHECK_BITS_EQUAL(573,header.unnamed_17_31,0);
  {
    subsystem_id.value = header.id;
  }
  // UINT32 d1 NOENCODE
  // {
    //  0_15: t1;
    // 16_31: 0x3e1;
    // ENCODE(t1,(value=t1));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t1 : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 t1 : 16; // 0..15
#endif
    };
    uint32  u32;
  } d1;
  READ_FROM_BUFFER_FULL(580,uint32 ,d1,d1.u32);
  CHECK_BITS_EQUAL(578,d1.unnamed_16_31,0x3e1);
  {
    t1.value = d1.t1;
  }
  // UINT32 d2 NOENCODE
  // {
    //  0_15: t2;
    // 16_31: 0x4e1;
    // ENCODE(t2,(value=t2));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t2 : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 t2 : 16; // 0..15
#endif
    };
    uint32  u32;
  } d2;
  READ_FROM_BUFFER_FULL(585,uint32 ,d2,d2.u32);
  CHECK_BITS_EQUAL(583,d2.unnamed_16_31,0x4e1);
  {
    t2.value = d2.t2;
  }
  // UINT32 d3 NOENCODE
  // {
    //  0_15: t3;
    // 16_31: 0x5e1;
    // ENCODE(t3,(value=t3));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t3 : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 t3 : 16; // 0..15
#endif
    };
    uint32  u32;
  } d3;
  READ_FROM_BUFFER_FULL(590,uint32 ,d3,d3.u32);
  CHECK_BITS_EQUAL(588,d3.unnamed_16_31,0x5e1);
  {
    t3.value = d3.t3;
  }
  // UINT32 d4 NOENCODE
  // {
    //  0_15: t4;
    // 16_31: 0x6e1;
    // ENCODE(t4,(value=t4));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t4 : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 t4 : 16; // 0..15
#endif
    };
    uint32  u32;
  } d4;
  READ_FROM_BUFFER_FULL(595,uint32 ,d4,d4.u32);
  CHECK_BITS_EQUAL(593,d4.unnamed_16_31,0x6e1);
  {
    t4.value = d4.t4;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TIMESTAMP_WHITERABBIT::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLOII_LMU_SCALERS.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_LMU_SCALERS(id)
template<typename __data_src_t>
void TRLOII_LMU_SCALERS::__unpack(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 before_lmu[63] ZERO_SUPPRESS);
  // MEMBER(DATA32 before_lmu_mux[31] ZERO_SUPPRESS);
  // MEMBER(DATA32 before_lmu_aux[31] ZERO_SUPPRESS);
  // MEMBER(DATA32 before_dt[127] ZERO_SUPPRESS);
  // MEMBER(DATA32 after_dt[127] ZERO_SUPPRESS);
  // MEMBER(DATA32 after_reduction[127] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_05: before_lmu;
    //  6_10: before_lmu_mux;
    // 11_15: before_lmu_aux;
    // 16_23: after_lmu;
    // 24_31: id = MATCH(id);
  // }
  READ_FROM_BUFFER_FULL(321,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(320,header.id,id);
  // list(0<=i<header.before_lmu)

  for (uint32 i = 0; i < (uint32) (header.before_lmu); ++i)
  {
    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu[i],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 value : 32; // 0..31
#endif
      };
      uint32  u32;
    } scaler;
    READ_FROM_BUFFER_FULL(327,uint32 ,scaler,scaler.u32);
    {
      typedef __typeof__(*(&(before_lmu))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = before_lmu.insert_index(326,i);
      __item.value = scaler.value;
    }
  }
  // list(0<=i<header.before_lmu_mux)

  for (uint32 i = 0; i < (uint32) (header.before_lmu_mux); ++i)
  {
    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_mux[i],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 value : 32; // 0..31
#endif
      };
      uint32  u32;
    } scaler;
    READ_FROM_BUFFER_FULL(333,uint32 ,scaler,scaler.u32);
    {
      typedef __typeof__(*(&(before_lmu_mux))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = before_lmu_mux.insert_index(332,i);
      __item.value = scaler.value;
    }
  }
  // list(0<=i<header.before_lmu_aux)

  for (uint32 i = 0; i < (uint32) (header.before_lmu_aux); ++i)
  {
    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_aux[i],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 value : 32; // 0..31
#endif
      };
      uint32  u32;
    } scaler;
    READ_FROM_BUFFER_FULL(339,uint32 ,scaler,scaler.u32);
    {
      typedef __typeof__(*(&(before_lmu_aux))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = before_lmu_aux.insert_index(338,i);
      __item.value = scaler.value;
    }
  }
  // list(0<=i<header.after_lmu)

  for (uint32 i = 0; i < (uint32) (header.after_lmu); ++i)
  {
    // UINT32 scaler_bdt NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_dt[i],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 value : 32; // 0..31
#endif
      };
      uint32  u32;
    } scaler_bdt;
    READ_FROM_BUFFER_FULL(346,uint32 ,scaler_bdt,scaler_bdt.u32);
    {
      typedef __typeof__(*(&(before_dt))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = before_dt.insert_index(345,i);
      __item.value = scaler_bdt.value;
    }
    // UINT32 scaler_adt NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_dt[i],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 value : 32; // 0..31
#endif
      };
      uint32  u32;
    } scaler_adt;
    READ_FROM_BUFFER_FULL(350,uint32 ,scaler_adt,scaler_adt.u32);
    {
      typedef __typeof__(*(&(after_dt))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = after_dt.insert_index(349,i);
      __item.value = scaler_adt.value;
    }
    // UINT32 scaler_ard NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_reduction[i],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 value : 32; // 0..31
#endif
      };
      uint32  u32;
    } scaler_ard;
    READ_FROM_BUFFER_FULL(354,uint32 ,scaler_ard,scaler_ard.u32);
    {
      typedef __typeof__(*(&(after_reduction))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = after_reduction.insert_index(353,i);
      __item.value = scaler_ard.value;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_LMU_SCALERS::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLOII_SAMPLER.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER(mark)
template<typename __data_src_t>
void TRLOII_SAMPLER::__unpack(__data_src_t &__buffer,uint32 mark)
{
  // MEMBER(DATA32 sampler[512] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_09: word_num;
    //    10: overflow;
    // 16_31: mark = MATCH(mark);
  // }
  READ_FROM_BUFFER_FULL(367,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(366,header.mark,mark);
  CHECK_UNNAMED_BITS_ZERO(367,header.u32,0x0000f800);
  // list(0<=index<header.word_num)

  for (uint32 index = 0; index < (uint32) (header.word_num); ++index)
  {
    // UINT32 time_lo NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler[index],(value=time));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time : 30; // 0..29
        uint32 dunno : 1; // 30
        uint32 overflow : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 overflow : 1; // 31
        uint32 dunno : 1; // 30
        uint32 time : 30; // 0..29
#endif
      };
      uint32  u32;
    } time_lo;
    READ_FROM_BUFFER_FULL(375,uint32 ,time_lo,time_lo.u32);
    {
      typedef __typeof__(*(&(sampler))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = sampler.insert_index(374,index);
      __item.value = time_lo.time;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_SAMPLER::__unpack,uint32 mark);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLOII_SAMPLER_TWO.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER_TWO(mark)
template<typename __data_src_t>
void TRLOII_SAMPLER_TWO::__unpack(__data_src_t &__buffer,uint32 mark)
{
  // MEMBER(DATA32 sampler_hi[512] ZERO_SUPPRESS);
  // MEMBER(DATA32 sampler_lo[512] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_09: word_num;
    //    10: overflow;
    // 16_31: mark = MATCH(mark);
  // }
  READ_FROM_BUFFER_FULL(388,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(387,header.mark,mark);
  CHECK_UNNAMED_BITS_ZERO(388,header.u32,0x0000f800);
  // list(0<=index<(header.word_num / 2))

  for (uint32 index = 0; index < (uint32) ((header.word_num / 2)); ++index)
  {
    // UINT32 time_lo NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler_lo[index],(value=time));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time : 30; // 0..29
        uint32 dunno : 1; // 30
        uint32 overflow : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 overflow : 1; // 31
        uint32 dunno : 1; // 30
        uint32 time : 30; // 0..29
#endif
      };
      uint32  u32;
    } time_lo;
    READ_FROM_BUFFER_FULL(396,uint32 ,time_lo,time_lo.u32);
    {
      typedef __typeof__(*(&(sampler_lo))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = sampler_lo.insert_index(395,index);
      __item.value = time_lo.time;
    }
    // UINT32 time_hi NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler_hi[index],(value=time));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time : 30; // 0..29
        uint32 dunno : 1; // 30
        uint32 overflow : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 overflow : 1; // 31
        uint32 dunno : 1; // 30
        uint32 time : 30; // 0..29
#endif
      };
      uint32  u32;
    } time_hi;
    READ_FROM_BUFFER_FULL(402,uint32 ,time_hi,time_hi.u32);
    {
      typedef __typeof__(*(&(sampler_hi))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = sampler_hi.insert_index(401,index);
      __item.value = time_hi.time;
    }
  }
  // if(((header.word_num % 2) == 1))

  if (((header.word_num % 2) == 1))
  {
    // UINT32 last_word NOENCODE;
    uint32  last_word;READ_FROM_BUFFER(406,uint32 ,last_word);
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_SAMPLER_TWO::__unpack,uint32 mark);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLOII_TPAT.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_TPAT(id)
template<typename __data_src_t>
void TRLOII_TPAT::__unpack(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 n);
  // MEMBER(DATA16 tpat[170] NO_INDEX_LIST);
  // MEMBER(DATA8 trig[170] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_lo[170] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_hi[170] NO_INDEX_LIST);
  // UINT32 header NOENCODE
  // {
    //  0_11: uint32_num;
    // 12_23: event_num;
    // 24_31: id = MATCH(id);
    // ENCODE(n,(value=(uint32_num / 3)));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 uint32_num : 12; // 0..11
      uint32 event_num : 12; // 12..23
      uint32 id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 8; // 24..31
      uint32 event_num : 12; // 12..23
      uint32 uint32_num : 12; // 0..11
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(424,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(422,header.id,id);
  {
    n.value = (header.uint32_num / 3);
  }
  // list(0<=index<(header.uint32_num / 3))

  for (uint32 index = 0; index < (uint32) ((header.uint32_num / 3)); ++index)
  {
    // UINT32 time_lo NOENCODE
    // {
      //  0_31: t;
      // ENCODE(ts_lo APPEND_LIST,(value=t));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 t : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 t : 32; // 0..31
#endif
      };
      uint32  u32;
    } time_lo;
    READ_FROM_BUFFER_FULL(430,uint32 ,time_lo,time_lo.u32);
    {
      typedef __typeof__(*(&(ts_lo))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts_lo.append_item(429);
      __item.value = time_lo.t;
    }
    // UINT32 time_hi NOENCODE
    // {
      //  0_30: t;
      //    31: overflow;
      // ENCODE(ts_hi APPEND_LIST,(value=t));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 t : 31; // 0..30
        uint32 overflow : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 overflow : 1; // 31
        uint32 t : 31; // 0..30
#endif
      };
      uint32  u32;
    } time_hi;
    READ_FROM_BUFFER_FULL(435,uint32 ,time_hi,time_hi.u32);
    {
      typedef __typeof__(*(&(ts_hi))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts_hi.append_item(434);
      __item.value = time_hi.t;
    }
    // UINT32 trigger NOENCODE
    // {
      //  0_15: tpat;
      // 16_23: dunno;
      // 24_27: encoded;
      // 28_31: lec;
      // ENCODE(tpat APPEND_LIST,(value=tpat));
      // ENCODE(trig APPEND_LIST,(value=encoded));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 tpat : 16; // 0..15
        uint32 dunno : 8; // 16..23
        uint32 encoded : 4; // 24..27
        uint32 lec : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 lec : 4; // 28..31
        uint32 encoded : 4; // 24..27
        uint32 dunno : 8; // 16..23
        uint32 tpat : 16; // 0..15
#endif
      };
      uint32  u32;
    } trigger;
    READ_FROM_BUFFER_FULL(443,uint32 ,trigger,trigger.u32);
    {
      typedef __typeof__(*(&(tpat))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = tpat.append_item(441);
      __item.value = trigger.tpat;
    }
    {
      typedef __typeof__(*(&(trig))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = trig.append_item(442);
      __item.value = trigger.encoded;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_TPAT::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VFTX2_STATUS.
 *
 * Do not edit - automatically generated.
 */

// VFTX2_STATUS()
template<typename __data_src_t>
void VFTX2_STATUS::__unpack(__data_src_t &__buffer)
{
  // UINT32 status;
  READ_FROM_BUFFER(746,uint32 ,status);
}
FORCE_IMPL_DATA_SRC_FCN(void,VFTX2_STATUS::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_GSI_VFTX2.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2(id)
template<typename __data_src_t>
void VME_GSI_VFTX2::__unpack(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA12 time_fine[32] ZERO_SUPPRESS_MULTI(100));
  // MEMBER(DATA16 time_coarse[32] ZERO_SUPPRESS_MULTI(100));
  // MEMBER(DATA16 time_trigger);
  // UINT32 custom_header
  // {
    //  0_04: id = MATCH(id);
    //  5_08: internal_status;
    //  9_17: count;
    // 24_31: 171;
  // }
  READ_FROM_BUFFER_FULL(459,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(455,custom_header.id,id);
  CHECK_BITS_EQUAL(458,custom_header.unnamed_24_31,171);
  CHECK_UNNAMED_BITS_ZERO(459,custom_header.u32,0x00fc0000);
  // if((0 < custom_header.count))

  if ((0 < custom_header.count))
  {
    // UINT32 event_header
    // {
      //  0_07: 170;
      // 11_23: trigger_timestamp;
      // 29_30: 1;
      //    31: 1;
      // ENCODE(time_trigger,(value=trigger_timestamp));
    // }
    READ_FROM_BUFFER_FULL(469,uint32 ,event_header,event_header.u32);
    CHECK_BITS_EQUAL(463,event_header.unnamed_0_7,170);
    CHECK_BITS_EQUAL(465,event_header.unnamed_29_30,1);
    CHECK_BITS_EQUAL(466,event_header.unnamed_31_31,1);
    CHECK_UNNAMED_BITS_ZERO(469,event_header.u32,0x1f000700);
    {
      time_trigger.value = event_header.trigger_timestamp;
    }
  }
  // list(1<=index<custom_header.count)

  for (uint32 index = 1; index < (uint32) (custom_header.count); ++index)
  {
    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_29: channel;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time_fine : 11; // 0..10
        uint32 time_coarse : 13; // 11..23
        uint32 future : 1; // 24
        uint32 channel : 5; // 25..29
        uint32 dummy_30_31 : 2;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 dummy_30_31 : 2;
        uint32 channel : 5; // 25..29
        uint32 future : 1; // 24
        uint32 time_coarse : 13; // 11..23
        uint32 time_fine : 11; // 0..10
#endif
      };
      uint32  u32;
    } event;
    READ_FROM_BUFFER_FULL(482,uint32 ,event,event.u32);
    CHECK_UNNAMED_BITS_ZERO(482,event.u32,0xc0000000);
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(480,event.channel);
      __item.value = event.time_fine;
    }
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(481,event.channel);
      __item.value = event.time_coarse;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_GSI_VFTX2::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_GSI_VFTX2_7PS.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_7PS(id)
template<typename __data_src_t>
void VME_GSI_VFTX2_7PS::__unpack(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA12 time_fine[32] ZERO_SUPPRESS_MULTI(100));
  // MEMBER(DATA16 time_coarse[32] ZERO_SUPPRESS_MULTI(100));
  // MEMBER(DATA16 time_trigger);
  // UINT32 custom_header
  // {
    //  0_04: id = MATCH(id);
    //  5_08: internal_status;
    //  9_17: count;
    // 24_31: 171;
  // }
  READ_FROM_BUFFER_FULL(534,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(530,custom_header.id,id);
  CHECK_BITS_EQUAL(533,custom_header.unnamed_24_31,171);
  CHECK_UNNAMED_BITS_ZERO(534,custom_header.u32,0x00fc0000);
  // if((0 < custom_header.count))

  if ((0 < custom_header.count))
  {
    // UINT32 event_header NOENCODE
    // {
      //  0_07: 170;
      // 11_23: trigger_timestamp;
      // 29_30: 1;
      //    31: 1;
      // ENCODE(time_trigger,(value=trigger_timestamp));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 unnamed_0_7 : 8; // 0..7
        uint32 dummy_8_10 : 3;
        uint32 trigger_timestamp : 13; // 11..23
        uint32 dummy_24_28 : 5;
        uint32 unnamed_29_30 : 2; // 29..30
        uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_31_31 : 1; // 31
        uint32 unnamed_29_30 : 2; // 29..30
        uint32 dummy_24_28 : 5;
        uint32 trigger_timestamp : 13; // 11..23
        uint32 dummy_8_10 : 3;
        uint32 unnamed_0_7 : 8; // 0..7
#endif
      };
      uint32  u32;
    } event_header;
    READ_FROM_BUFFER_FULL(544,uint32 ,event_header,event_header.u32);
    CHECK_BITS_EQUAL(538,event_header.unnamed_0_7,170);
    CHECK_BITS_EQUAL(540,event_header.unnamed_29_30,1);
    CHECK_BITS_EQUAL(541,event_header.unnamed_31_31,1);
    CHECK_UNNAMED_BITS_ZERO(544,event_header.u32,0x1f000700);
    {
      time_trigger.value = event_header.trigger_timestamp;
    }
  }
  // list(1<=index<custom_header.count)

  for (uint32 index = 1; index < (uint32) (custom_header.count); ++index)
  {
    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_29: channel;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time_fine : 11; // 0..10
        uint32 time_coarse : 13; // 11..23
        uint32 future : 1; // 24
        uint32 channel : 5; // 25..29
        uint32 dummy_30_31 : 2;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 dummy_30_31 : 2;
        uint32 channel : 5; // 25..29
        uint32 future : 1; // 24
        uint32 time_coarse : 13; // 11..23
        uint32 time_fine : 11; // 0..10
#endif
      };
      uint32  u32;
    } event;
    READ_FROM_BUFFER_FULL(556,uint32 ,event,event.u32);
    CHECK_UNNAMED_BITS_ZERO(556,event.u32,0xc0000000);
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(554,event.channel);
      __item.value = event.time_fine;
    }
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(555,event.channel);
      __item.value = event.time_coarse;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_GSI_VFTX2_7PS::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_GSI_VFTX2_LT.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_LT(id)
template<typename __data_src_t>
void VME_GSI_VFTX2_LT::__unpack(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA12 time_fine[64] ZERO_SUPPRESS_MULTI(100));
  // MEMBER(DATA16 time_coarse[64] ZERO_SUPPRESS_MULTI(100));
  // MEMBER(DATA16 time_trigger);
  // UINT32 custom_header
  // {
    //  0_04: id = MATCH(id);
    //  5_08: internal_status;
    //  9_17: count;
    // 24_31: 171;
  // }
  READ_FROM_BUFFER_FULL(497,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(493,custom_header.id,id);
  CHECK_BITS_EQUAL(496,custom_header.unnamed_24_31,171);
  CHECK_UNNAMED_BITS_ZERO(497,custom_header.u32,0x00fc0000);
  // if((0 < custom_header.count))

  if ((0 < custom_header.count))
  {
    // UINT32 event_header
    // {
      //  0_07: 170;
      // 11_23: trigger_timestamp;
      // 29_30: 1;
      //    31: 1;
      // ENCODE(time_trigger,(value=trigger_timestamp));
    // }
    READ_FROM_BUFFER_FULL(507,uint32 ,event_header,event_header.u32);
    CHECK_BITS_EQUAL(501,event_header.unnamed_0_7,170);
    CHECK_BITS_EQUAL(503,event_header.unnamed_29_30,1);
    CHECK_BITS_EQUAL(504,event_header.unnamed_31_31,1);
    CHECK_UNNAMED_BITS_ZERO(507,event_header.u32,0x1f000700);
    {
      time_trigger.value = event_header.trigger_timestamp;
    }
  }
  // list(1<=index<custom_header.count)

  for (uint32 index = 1; index < (uint32) (custom_header.count); ++index)
  {
    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_30: channel;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time_fine : 11; // 0..10
        uint32 time_coarse : 13; // 11..23
        uint32 future : 1; // 24
        uint32 channel : 6; // 25..30
        uint32 dummy_31 : 1;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 dummy_31 : 1;
        uint32 channel : 6; // 25..30
        uint32 future : 1; // 24
        uint32 time_coarse : 13; // 11..23
        uint32 time_fine : 11; // 0..10
#endif
      };
      uint32  u32;
    } event;
    READ_FROM_BUFFER_FULL(519,uint32 ,event,event.u32);
    CHECK_UNNAMED_BITS_ZERO(519,event.u32,0x80000000);
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(517,event.channel);
      __item.value = event.time_fine;
    }
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(518,event.channel);
      __item.value = event.time_coarse;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_GSI_VFTX2_LT::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_GSI_VFTX2_STRAW.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_STRAW(id)
template<typename __data_src_t>
void VME_GSI_VFTX2_STRAW::__unpack(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA12 time_fine[32] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA16 time_coarse[32] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA16 time_trigger);
  // UINT32 status
  // {
    //  0_03: internal;
    //  4_12: count;
  // }
  READ_FROM_BUFFER_FULL(707,uint32 ,status,status.u32);
  CHECK_UNNAMED_BITS_ZERO(707,status.u32,0xffffe000);
  // UINT32 custom_header
  // {
    //  0_15: count;
    // 16_23: id = MATCH(id);
    // 24_31: 171;
  // }
  READ_FROM_BUFFER_FULL(713,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(711,custom_header.id,id);
  CHECK_BITS_EQUAL(712,custom_header.unnamed_24_31,171);
  // UINT32 event_header
  // {
    //  0_07: 170;
    // 11_23: trigger_timestamp;
    // 29_30: 1;
    //    31: 1;
    // ENCODE(time_trigger,(value=trigger_timestamp));
  // }
  READ_FROM_BUFFER_FULL(722,uint32 ,event_header,event_header.u32);
  CHECK_BITS_EQUAL(716,event_header.unnamed_0_7,170);
  CHECK_BITS_EQUAL(718,event_header.unnamed_29_30,1);
  CHECK_BITS_EQUAL(719,event_header.unnamed_31_31,1);
  CHECK_UNNAMED_BITS_ZERO(722,event_header.u32,0x1f000700);
  {
    time_trigger.value = event_header.trigger_timestamp;
  }
  // list(0<=index<custom_header.count)

  for (uint32 index = 0; index < (uint32) (custom_header.count); ++index)
  {
    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_30: channel;
      //    31: bluppidupp;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time_fine : 11; // 0..10
        uint32 time_coarse : 13; // 11..23
        uint32 future : 1; // 24
        uint32 channel : 6; // 25..30
        uint32 bluppidupp : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 bluppidupp : 1; // 31
        uint32 channel : 6; // 25..30
        uint32 future : 1; // 24
        uint32 time_coarse : 13; // 11..23
        uint32 time_fine : 11; // 0..10
#endif
      };
      uint32  u32;
    } event;
    READ_FROM_BUFFER_FULL(734,uint32 ,event,event.u32);
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(732,event.channel);
      __item.value = event.time_fine;
    }
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(733,event.channel);
      __item.value = event.time_coarse;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_GSI_VFTX2_STRAW::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_MESYTEC_MADC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MADC32(geom)
template<typename __data_src_t>
void VME_MESYTEC_MADC32::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA14_OVERFLOW data[32] ZERO_SUPPRESS);
  // MARK_COUNT(start);
  void *__mark_start = __buffer._data;
  // UINT32 header NOENCODE
  // {
    //  0_11: word_number;
    // 12_14: adc_resol;
    //    15: out_form;
    // 16_23: geom = MATCH(geom);
    // 24_29: 0;
    // 30_31: 1;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_number : 12; // 0..11
      uint32 adc_resol : 3; // 12..14
      uint32 out_form : 1; // 15
      uint32 geom : 8; // 16..23
      uint32 unnamed_24_29 : 6; // 24..29
      uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_30_31 : 2; // 30..31
      uint32 unnamed_24_29 : 6; // 24..29
      uint32 geom : 8; // 16..23
      uint32 out_form : 1; // 15
      uint32 adc_resol : 3; // 12..14
      uint32 word_number : 12; // 0..11
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(22,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(19,header.geom,geom);
  CHECK_BITS_EQUAL(20,header.unnamed_24_29,0);
  CHECK_BITS_EQUAL(21,header.unnamed_30_31,1);
  // several UINT32 ch_data NOENCODE
  // {
    //  0_12: value;
    //    14: outofrange;
    // 16_20: channel;
    // 21_29: 32;
    // 30_31: 0;
    // ENCODE(data[channel],(value=value,overflow=outofrange));
  // }
  for ( ; ; ) {
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 value : 13; // 0..12
      uint32 dummy_13 : 1;
      uint32 outofrange : 1; // 14
      uint32 dummy_15 : 1;
      uint32 channel : 5; // 16..20
      uint32 unnamed_21_29 : 9; // 21..29
      uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_30_31 : 2; // 30..31
      uint32 unnamed_21_29 : 9; // 21..29
      uint32 channel : 5; // 16..20
      uint32 dummy_15 : 1;
      uint32 outofrange : 1; // 14
      uint32 dummy_13 : 1;
      uint32 value : 13; // 0..12
#endif
    };
    uint32  u32;
  } ch_data;
  if (__buffer.empty()) goto data_done_0;
  PEEK_FROM_BUFFER_FULL(33,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(29,ch_data.unnamed_21_29,32,data_done_0);
  CHECK_JUMP_BITS_EQUAL(30,ch_data.unnamed_30_31,0,data_done_0);
  CHECK_JUMP_UNNAMED_BITS_ZERO(33,ch_data.u32,0x0000a000,data_done_0);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(32,ch_data.channel);
    __item.value = ch_data.value;
    __item.overflow = ch_data.outofrange;
  }
  }
  data_done_0:;
  // optional UINT32 filler NOENCODE
  // {
    //  0_31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
    };
    uint32  u32;
  } filler;
  if (__buffer.empty()) goto data_done_1;
  PEEK_FROM_BUFFER_FULL(39,uint32 ,filler,filler.u32);
  CHECK_JUMP_BITS_EQUAL(38,filler.unnamed_0_31,0,data_done_1);
  __buffer.advance(sizeof(filler.u32));
  data_done_1:;
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  READ_FROM_BUFFER_FULL(45,uint32 ,end_of_event,end_of_event.u32);
  CHECK_BITS_EQUAL(44,end_of_event.unnamed_30_31,3);
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
  CHECK_WORD_COUNT(48,header.word_number,start,end,( - 4),4);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_MESYTEC_MADC32::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for WR_MULTI.
 *
 * Do not edit - automatically generated.
 */

// WR_MULTI()
template<typename __data_src_t>
void WR_MULTI::__unpack(__data_src_t &__buffer)
{
  // MEMBER(DATA32 time_hi);
  // MEMBER(DATA32 time_lo);
  // UINT32 hi NOENCODE
  // {
    //  0_31: time;
    // ENCODE(time_hi,(value=time));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 time : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 time : 32; // 0..31
#endif
    };
    uint32  u32;
  } hi;
  READ_FROM_BUFFER_FULL(606,uint32 ,hi,hi.u32);
  {
    time_hi.value = hi.time;
  }
  // UINT32 lo NOENCODE
  // {
    //  0_31: time;
    // ENCODE(time_lo,(value=time));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 time : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 time : 32; // 0..31
#endif
    };
    uint32  u32;
  } lo;
  READ_FROM_BUFFER_FULL(610,uint32 ,lo,lo.u32);
  {
    time_lo.value = lo.time;
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,WR_MULTI::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for empty_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(empty_subev)
template<typename __data_src_t>
void empty_subev::__unpack(__data_src_t &__buffer)
{
}
FORCE_IMPL_DATA_SRC_FCN(void,empty_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for fitest_febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fitest_febex_subev)
template<typename __data_src_t>
void fitest_febex_subev::__unpack(__data_src_t &__buffer)
{
  // header = FEBEX_EVENTHEADER();
  UNPACK_DECL(862,FEBEX_EVENTHEADER,header);
  // select several

    // padding = FEBEX_PADDING();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FEBEX_PADDING padding: (s32) => (0xfff00000,0xadd00000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(865,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(864,spurious_match_abort_loop_1,FEBEX_PADDING);
        UNPACK_DECL(864,FEBEX_PADDING,padding);
        break;
    }
  }
  spurious_match_abort_loop_1:;
  // select several

    // febex[0] = FEBEX_NOTRACE(sfp=3,card=0);
    // febex[1] = FEBEX_NOTRACE(sfp=3,card=1);
    // febex[2] = FEBEX_NOTRACE(sfp=3,card=2);
    // febex[3] = FEBEX_NOTRACE(sfp=3,card=3);
    // febex[4] = FEBEX_NOTRACE(sfp=3,card=4);
    // febex[5] = FEBEX_NOTRACE(sfp=3,card=5);
    // febex[6] = FEBEX_NOTRACE(sfp=3,card=6);
    // febex[7] = FEBEX_NOTRACE(sfp=3,card=7);
    // febextrace[0] = FEBEX_TRACE(sfp=3,card=0);
    // febextrace[1] = FEBEX_TRACE(sfp=3,card=1);
    // febextrace[2] = FEBEX_TRACE(sfp=3,card=2);
    // febextrace[3] = FEBEX_TRACE(sfp=3,card=3);
    // febextrace[4] = FEBEX_TRACE(sfp=3,card=4);
    // febextrace[5] = FEBEX_TRACE(sfp=3,card=5);
    // febextrace[6] = FEBEX_TRACE(sfp=3,card=6);
    // febextrace[7] = FEBEX_TRACE(sfp=3,card=7);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FEBEX_NOTRACE febex[0]: (s32) => (0xfffff0ff,0xff003034)
    // optimized match 2: FEBEX_NOTRACE febex[1]: (s32) => (0xfffff0ff,0xff013034)
    // optimized match 3: FEBEX_NOTRACE febex[2]: (s32) => (0xfffff0ff,0xff023034)
    // optimized match 4: FEBEX_NOTRACE febex[3]: (s32) => (0xfffff0ff,0xff033034)
    // optimized match 5: FEBEX_NOTRACE febex[4]: (s32) => (0xfffff0ff,0xff043034)
    // optimized match 6: FEBEX_NOTRACE febex[5]: (s32) => (0xfffff0ff,0xff053034)
    // optimized match 7: FEBEX_NOTRACE febex[6]: (s32) => (0xfffff0ff,0xff063034)
    // optimized match 8: FEBEX_NOTRACE febex[7]: (s32) => (0xfffff0ff,0xff073034)
    // optimized match 9: FEBEX_TRACE febextrace[0]: (s32) => (0x00fff0ff,0x00003034)
    // optimized match 10: FEBEX_TRACE febextrace[1]: (s32) => (0x00fff0ff,0x00013034)
    // optimized match 11: FEBEX_TRACE febextrace[2]: (s32) => (0x00fff0ff,0x00023034)
    // optimized match 12: FEBEX_TRACE febextrace[3]: (s32) => (0x00fff0ff,0x00033034)
    // optimized match 13: FEBEX_TRACE febextrace[4]: (s32) => (0x00fff0ff,0x00043034)
    // optimized match 14: FEBEX_TRACE febextrace[5]: (s32) => (0x00fff0ff,0x00053034)
    // optimized match 15: FEBEX_TRACE febextrace[6]: (s32) => (0x00fff0ff,0x00063034)
    // optimized match 16: FEBEX_TRACE febextrace[7]: (s32) => (0x00fff0ff,0x00073034)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(883,uint32,__match_peek);
    // differ = ff070000 : 16 17 18 24 25 26 27 28 29 30 31
    // select on bit 18, partition: 1:8(d8) 0:8(d8)
    if (__match_peek & 0x00040000) {
      // select on bit 17, partition: 1:4(d4) 0:4(d4)
      if (__match_peek & 0x00020000) {
        // select on bit 16, partition: 1:2(d2) 0:2(d2)
        if (__match_peek & 0x00010000) {
          // Indistinguishable: 0 1
          VERIFY_MATCH_DECL_QUICK(874,__match_no,8,febex[7],__match_peek,0xfffff0ff,0xff073034,FEBEX_NOTRACE,/*sfp*/3,/*card*/7);
          VERIFY_MATCH_DECL_QUICK(882,__match_no,16,febextrace[7],__match_peek,0x00fff0ff,0x00073034,FEBEX_TRACE,/*sfp*/3,/*card*/7);
        } else {
          // Indistinguishable: 0 1
          VERIFY_MATCH_DECL_QUICK(873,__match_no,7,febex[6],__match_peek,0xfffff0ff,0xff063034,FEBEX_NOTRACE,/*sfp*/3,/*card*/6);
          VERIFY_MATCH_DECL_QUICK(881,__match_no,15,febextrace[6],__match_peek,0x00fff0ff,0x00063034,FEBEX_TRACE,/*sfp*/3,/*card*/6);
        }
      } else {
        // select on bit 16, partition: 1:2(d2) 0:2(d2)
        if (__match_peek & 0x00010000) {
          // Indistinguishable: 0 1
          VERIFY_MATCH_DECL_QUICK(872,__match_no,6,febex[5],__match_peek,0xfffff0ff,0xff053034,FEBEX_NOTRACE,/*sfp*/3,/*card*/5);
          VERIFY_MATCH_DECL_QUICK(880,__match_no,14,febextrace[5],__match_peek,0x00fff0ff,0x00053034,FEBEX_TRACE,/*sfp*/3,/*card*/5);
        } else {
          // Indistinguishable: 0 1
          VERIFY_MATCH_DECL_QUICK(871,__match_no,5,febex[4],__match_peek,0xfffff0ff,0xff043034,FEBEX_NOTRACE,/*sfp*/3,/*card*/4);
          VERIFY_MATCH_DECL_QUICK(879,__match_no,13,febextrace[4],__match_peek,0x00fff0ff,0x00043034,FEBEX_TRACE,/*sfp*/3,/*card*/4);
        }
      }
    } else {
      // select on bit 17, partition: 1:4(d4) 0:4(d4)
      if (__match_peek & 0x00020000) {
        // select on bit 16, partition: 1:2(d2) 0:2(d2)
        if (__match_peek & 0x00010000) {
          // Indistinguishable: 0 1
          VERIFY_MATCH_DECL_QUICK(870,__match_no,4,febex[3],__match_peek,0xfffff0ff,0xff033034,FEBEX_NOTRACE,/*sfp*/3,/*card*/3);
          VERIFY_MATCH_DECL_QUICK(878,__match_no,12,febextrace[3],__match_peek,0x00fff0ff,0x00033034,FEBEX_TRACE,/*sfp*/3,/*card*/3);
        } else {
          // Indistinguishable: 0 1
          VERIFY_MATCH_DECL_QUICK(869,__match_no,3,febex[2],__match_peek,0xfffff0ff,0xff023034,FEBEX_NOTRACE,/*sfp*/3,/*card*/2);
          VERIFY_MATCH_DECL_QUICK(877,__match_no,11,febextrace[2],__match_peek,0x00fff0ff,0x00023034,FEBEX_TRACE,/*sfp*/3,/*card*/2);
        }
      } else {
        // select on bit 16, partition: 1:2(d2) 0:2(d2)
        if (__match_peek & 0x00010000) {
          // Indistinguishable: 0 1
          VERIFY_MATCH_DECL_QUICK(868,__match_no,2,febex[1],__match_peek,0xfffff0ff,0xff013034,FEBEX_NOTRACE,/*sfp*/3,/*card*/1);
          VERIFY_MATCH_DECL_QUICK(876,__match_no,10,febextrace[1],__match_peek,0x00fff0ff,0x00013034,FEBEX_TRACE,/*sfp*/3,/*card*/1);
        } else {
          // Indistinguishable: 0 1
          VERIFY_MATCH_DECL_QUICK(867,__match_no,1,febex[0],__match_peek,0xfffff0ff,0xff003034,FEBEX_NOTRACE,/*sfp*/3,/*card*/0);
          VERIFY_MATCH_DECL_QUICK(875,__match_no,9,febextrace[0],__match_peek,0x00fff0ff,0x00003034,FEBEX_TRACE,/*sfp*/3,/*card*/0);
        }
      }
    }
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(867,FEBEX_NOTRACE,febex[0],/*sfp*/3,/*card*/0);
        break;
      case 2:
        UNPACK_DECL(868,FEBEX_NOTRACE,febex[1],/*sfp*/3,/*card*/1);
        break;
      case 3:
        UNPACK_DECL(869,FEBEX_NOTRACE,febex[2],/*sfp*/3,/*card*/2);
        break;
      case 4:
        UNPACK_DECL(870,FEBEX_NOTRACE,febex[3],/*sfp*/3,/*card*/3);
        break;
      case 5:
        UNPACK_DECL(871,FEBEX_NOTRACE,febex[4],/*sfp*/3,/*card*/4);
        break;
      case 6:
        UNPACK_DECL(872,FEBEX_NOTRACE,febex[5],/*sfp*/3,/*card*/5);
        break;
      case 7:
        UNPACK_DECL(873,FEBEX_NOTRACE,febex[6],/*sfp*/3,/*card*/6);
        break;
      case 8:
        UNPACK_DECL(874,FEBEX_NOTRACE,febex[7],/*sfp*/3,/*card*/7);
        break;
      case 9:
        UNPACK_DECL(875,FEBEX_TRACE,febextrace[0],/*sfp*/3,/*card*/0);
        break;
      case 10:
        UNPACK_DECL(876,FEBEX_TRACE,febextrace[1],/*sfp*/3,/*card*/1);
        break;
      case 11:
        UNPACK_DECL(877,FEBEX_TRACE,febextrace[2],/*sfp*/3,/*card*/2);
        break;
      case 12:
        UNPACK_DECL(878,FEBEX_TRACE,febextrace[3],/*sfp*/3,/*card*/3);
        break;
      case 13:
        UNPACK_DECL(879,FEBEX_TRACE,febextrace[4],/*sfp*/3,/*card*/4);
        break;
      case 14:
        UNPACK_DECL(880,FEBEX_TRACE,febextrace[5],/*sfp*/3,/*card*/5);
        break;
      case 15:
        UNPACK_DECL(881,FEBEX_TRACE,febextrace[6],/*sfp*/3,/*card*/6);
        break;
      case 16:
        UNPACK_DECL(882,FEBEX_TRACE,febextrace[7],/*sfp*/3,/*card*/7);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fitest_febex_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for lmu_scalers_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(lmu_scalers_subev)
template<typename __data_src_t>
void lmu_scalers_subev::__unpack(__data_src_t &__buffer)
{
  // scalers = TRLOII_LMU_SCALERS(id=199);
  UNPACK_DECL(778,TRLOII_LMU_SCALERS,scalers,/*id*/199);
}
FORCE_IMPL_DATA_SRC_FCN(void,lmu_scalers_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for los_sampler_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_sampler_subev)
template<typename __data_src_t>
void los_sampler_subev::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(800,LAND_STD_VME,land_vme);
  // select several

    // sampler = TRLOII_SAMPLER(mark=0x1050);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TRLOII_SAMPLER sampler: (s32) => (0xfffff800,0x10500000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(803,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(802,TRLOII_SAMPLER,sampler,/*mark*/0x1050);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,los_sampler_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for los_scalers_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_scalers_subev)
template<typename __data_src_t>
void los_scalers_subev::__unpack(__data_src_t &__buffer)
{
  // select several

    // scaler = SCALER();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: SCALER scaler: (s32)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(795,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(794,SCALER,scaler);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,los_scalers_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for los_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_subev)
template<typename __data_src_t>
void los_subev::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(783,LAND_STD_VME,land_vme);
  // barrier1 = BARRIER();
  UNPACK_DECL(784,BARRIER,barrier1);
  // barrier2 = BARRIER();
  UNPACK_DECL(785,BARRIER,barrier2);
  // select several

    // vftx2 = VME_GSI_VFTX2_7PS(id=2);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_GSI_VFTX2_7PS vftx2: (s32) => (0xfffc001f,0xab000002)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(788,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(787,VME_GSI_VFTX2_7PS,vftx2,/*id*/2);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,los_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for master_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(master_subev)
template<typename __data_src_t>
void master_subev::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(808,LAND_STD_VME,land_vme);
  // barrier = BARRIER();
  UNPACK_DECL(809,BARRIER,barrier);
}
FORCE_IMPL_DATA_SRC_FCN(void,master_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for straw_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(straw_vme_subev)
template<typename __data_src_t>
void straw_vme_subev::__unpack(__data_src_t &__buffer)
{
  // select several

    // vftx2 = VME_GSI_VFTX2_STRAW(id=0);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_GSI_VFTX2_STRAW vftx2: (s32) => (0xffffe000,0x00000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(890,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(889,VME_GSI_VFTX2_STRAW,vftx2,/*id*/0);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,straw_vme_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for tbm_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tbm_subev)
template<typename __data_src_t>
void tbm_subev::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(895,LAND_STD_VME,land_vme);
  // barrier = BARRIER();
  UNPACK_DECL(897,BARRIER,barrier);
  // select several

    // vftx2 = VME_GSI_VFTX2_LT(id=1);
    // madc32 = VME_MESYTEC_MADC32(geom=2);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_GSI_VFTX2_LT vftx2: (s32) => (0xfffc001f,0xab000001)
    // optimized match 2: VME_MESYTEC_MADC32 madc32: (s32) => (0xffff0000,0x40020000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(901,uint32,__match_peek);
    // differ = eb020001 : 0 17 24 25 27 29 30 31
    MATCH_DECL_QUICK(899,__match_no,1,vftx2,__match_peek,0xfffc001f,0xab000001);
    MATCH_DECL_QUICK(900,__match_no,2,madc32,__match_peek,0xffff0000,0x40020000);
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(899,VME_GSI_VFTX2_LT,vftx2,/*id*/1);
        break;
      case 2:
        UNPACK_DECL(900,VME_MESYTEC_MADC32,madc32,/*geom*/2);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,tbm_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for tofd_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tofd_tamex_subev)
template<typename __data_src_t>
void tofd_tamex_subev::__unpack(__data_src_t &__buffer)
{
  // header = TAMEX3_HEADER();
  UNPACK_DECL(907,TAMEX3_HEADER,header);
  // select several

    // padding1 = TAMEX3_PADDING();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TAMEX3_PADDING padding1: (s32) => (0xfff00000,0xadd00000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(910,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(909,spurious_match_abort_loop_2,TAMEX3_PADDING);
        UNPACK_DECL(909,TAMEX3_PADDING,padding1);
        break;
    }
  }
  spurious_match_abort_loop_2:;
  // select several

    // tamex_1 = TAMEX3_SFP(sfp=2,card=0);
    // tamex_2 = TAMEX3_SFP(sfp=2,card=1);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TAMEX3_SFP tamex_1: (s32) => (0xfffff0ff,0x00002034)
    // optimized match 2: TAMEX3_SFP tamex_2: (s32) => (0xfffff0ff,0x00012034)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(914,uint32,__match_peek);
    // differ = 00010000 : 16
    uint32 __match_index = 0 | /* 16,16 */ ((__match_peek >> 16) & 0x00000001);
    static const sint8 __match_index_array[2] = { 1, 2, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(912,spurious_match_abort_loop_3,TAMEX3_SFP,/*sfp*/2,/*card*/0);
        UNPACK_DECL(912,TAMEX3_SFP,tamex_1,/*sfp*/2,/*card*/0);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(913,spurious_match_abort_loop_3,TAMEX3_SFP,/*sfp*/2,/*card*/1);
        UNPACK_DECL(913,TAMEX3_SFP,tamex_2,/*sfp*/2,/*card*/1);
        break;
    }
  }
  spurious_match_abort_loop_3:;
  // select several

    // padding2 = TAMEX3_PADDING();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TAMEX3_PADDING padding2: (s32) => (0xfff00000,0xadd00000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(917,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(916,spurious_match_abort_loop_4,TAMEX3_PADDING);
        UNPACK_DECL(916,TAMEX3_PADDING,padding2);
        break;
    }
  }
  spurious_match_abort_loop_4:;
  // select several

    // tamex_3 = TAMEX3_SFP(sfp=3,card=0);
    // tamex_4 = TAMEX3_SFP(sfp=3,card=1);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TAMEX3_SFP tamex_3: (s32) => (0xfffff0ff,0x00003034)
    // optimized match 2: TAMEX3_SFP tamex_4: (s32) => (0xfffff0ff,0x00013034)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(921,uint32,__match_peek);
    // differ = 00010000 : 16
    uint32 __match_index = 0 | /* 16,16 */ ((__match_peek >> 16) & 0x00000001);
    static const sint8 __match_index_array[2] = { 1, 2, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(919,TAMEX3_SFP,tamex_3,/*sfp*/3,/*card*/0);
        break;
      case 2:
        UNPACK_DECL(920,TAMEX3_SFP,tamex_4,/*sfp*/3,/*card*/1);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,tofd_tamex_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for tofd_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tofd_vme_subev)
template<typename __data_src_t>
void tofd_vme_subev::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(926,LAND_STD_VME,land_vme);
  // barrier = BARRIER();
  UNPACK_DECL(927,BARRIER,barrier);
  // select several

    // vftx2_1 = VME_GSI_VFTX2_7PS(id=1);
    // vftx2_2 = VME_GSI_VFTX2_7PS(id=2);
    // vftx2_3 = VME_GSI_VFTX2_7PS(id=3);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_GSI_VFTX2_7PS vftx2_1: (s32) => (0xfffc001f,0xab000001)
    // optimized match 2: VME_GSI_VFTX2_7PS vftx2_2: (s32) => (0xfffc001f,0xab000002)
    // optimized match 3: VME_GSI_VFTX2_7PS vftx2_3: (s32) => (0xfffc001f,0xab000003)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(932,uint32,__match_peek);
    // differ = 00000003 : 0 1
    uint32 __match_index = 0 | /* 0,1 */ ((__match_peek >> 0) & 0x00000003);
    static const sint8 __match_index_array[4] = { 0, 1, 2, 3, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(929,VME_GSI_VFTX2_7PS,vftx2_1,/*id*/1);
        break;
      case 2:
        UNPACK_DECL(930,VME_GSI_VFTX2_7PS,vftx2_2,/*id*/2);
        break;
      case 3:
        UNPACK_DECL(931,VME_GSI_VFTX2_7PS,vftx2_3,/*id*/3);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,tofd_vme_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for tpat_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tpat_subev)
template<typename __data_src_t>
void tpat_subev::__unpack(__data_src_t &__buffer)
{
  // tpat = TRLOII_TPAT(id=207);
  UNPACK_DECL(937,TRLOII_TPAT,tpat,/*id*/207);
}
FORCE_IMPL_DATA_SRC_FCN(void,tpat_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for tracking_febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tracking_febex_subev)
template<typename __data_src_t>
void tracking_febex_subev::__unpack(__data_src_t &__buffer)
{
  // header = FEBEX_EVENTHEADER();
  UNPACK_DECL(815,FEBEX_EVENTHEADER,header);
  // select several

    // padding = FEBEX_PADDING();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FEBEX_PADDING padding: (s32) => (0xfff00000,0xadd00000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(818,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(817,spurious_match_abort_loop_5,FEBEX_PADDING);
        UNPACK_DECL(817,FEBEX_PADDING,padding);
        break;
    }
  }
  spurious_match_abort_loop_5:;
  // select several

    // febex_0[0] = FEBEX_NOTRACE(sfp=0,card=0);
    // febex_0[1] = FEBEX_NOTRACE(sfp=0,card=1);
    // febex_0[2] = FEBEX_NOTRACE(sfp=0,card=2);
    // febex_0[3] = FEBEX_NOTRACE(sfp=0,card=3);
    // febex_0[4] = FEBEX_NOTRACE(sfp=0,card=4);
    // febex_0[5] = FEBEX_NOTRACE(sfp=0,card=5);
    // febex_0[6] = FEBEX_NOTRACE(sfp=0,card=6);
    // febex_0[7] = FEBEX_NOTRACE(sfp=0,card=7);
    // febex_0[8] = FEBEX_NOTRACE(sfp=0,card=8);
    // febex_0[9] = FEBEX_NOTRACE(sfp=0,card=9);
    // febex_0[10] = FEBEX_NOTRACE(sfp=0,card=10);
    // febex_0[11] = FEBEX_NOTRACE(sfp=0,card=11);
    // febex_0[12] = FEBEX_NOTRACE(sfp=0,card=12);
    // febex_0[13] = FEBEX_NOTRACE(sfp=0,card=13);
    // febex_0[14] = FEBEX_NOTRACE(sfp=0,card=14);
    // febex_0[15] = FEBEX_NOTRACE(sfp=0,card=15);
    // febex_0[16] = FEBEX_NOTRACE(sfp=0,card=16);
    // febex_0[17] = FEBEX_NOTRACE(sfp=0,card=17);
    // febextrace_0[0] = FEBEX_TRACE(sfp=0,card=0);
    // febextrace_0[1] = FEBEX_TRACE(sfp=0,card=1);
    // febextrace_0[2] = FEBEX_TRACE(sfp=0,card=2);
    // febextrace_0[3] = FEBEX_TRACE(sfp=0,card=3);
    // febextrace_0[4] = FEBEX_TRACE(sfp=0,card=4);
    // febextrace_0[5] = FEBEX_TRACE(sfp=0,card=5);
    // febextrace_0[6] = FEBEX_TRACE(sfp=0,card=6);
    // febextrace_0[7] = FEBEX_TRACE(sfp=0,card=7);
    // febextrace_0[8] = FEBEX_TRACE(sfp=0,card=8);
    // febextrace_0[9] = FEBEX_TRACE(sfp=0,card=9);
    // febextrace_0[10] = FEBEX_TRACE(sfp=0,card=10);
    // febextrace_0[11] = FEBEX_TRACE(sfp=0,card=11);
    // febextrace_0[12] = FEBEX_TRACE(sfp=0,card=12);
    // febextrace_0[13] = FEBEX_TRACE(sfp=0,card=13);
    // febextrace_0[14] = FEBEX_TRACE(sfp=0,card=14);
    // febextrace_0[15] = FEBEX_TRACE(sfp=0,card=15);
    // febextrace_0[16] = FEBEX_TRACE(sfp=0,card=16);
    // febextrace_0[17] = FEBEX_TRACE(sfp=0,card=17);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FEBEX_NOTRACE febex_0[0]: (s32) => (0xfffff0ff,0xff000034)
    // optimized match 2: FEBEX_NOTRACE febex_0[1]: (s32) => (0xfffff0ff,0xff010034)
    // optimized match 3: FEBEX_NOTRACE febex_0[2]: (s32) => (0xfffff0ff,0xff020034)
    // optimized match 4: FEBEX_NOTRACE febex_0[3]: (s32) => (0xfffff0ff,0xff030034)
    // optimized match 5: FEBEX_NOTRACE febex_0[4]: (s32) => (0xfffff0ff,0xff040034)
    // optimized match 6: FEBEX_NOTRACE febex_0[5]: (s32) => (0xfffff0ff,0xff050034)
    // optimized match 7: FEBEX_NOTRACE febex_0[6]: (s32) => (0xfffff0ff,0xff060034)
    // optimized match 8: FEBEX_NOTRACE febex_0[7]: (s32) => (0xfffff0ff,0xff070034)
    // optimized match 9: FEBEX_NOTRACE febex_0[8]: (s32) => (0xfffff0ff,0xff080034)
    // optimized match 10: FEBEX_NOTRACE febex_0[9]: (s32) => (0xfffff0ff,0xff090034)
    // optimized match 11: FEBEX_NOTRACE febex_0[10]: (s32) => (0xfffff0ff,0xff0a0034)
    // optimized match 12: FEBEX_NOTRACE febex_0[11]: (s32) => (0xfffff0ff,0xff0b0034)
    // optimized match 13: FEBEX_NOTRACE febex_0[12]: (s32) => (0xfffff0ff,0xff0c0034)
    // optimized match 14: FEBEX_NOTRACE febex_0[13]: (s32) => (0xfffff0ff,0xff0d0034)
    // optimized match 15: FEBEX_NOTRACE febex_0[14]: (s32) => (0xfffff0ff,0xff0e0034)
    // optimized match 16: FEBEX_NOTRACE febex_0[15]: (s32) => (0xfffff0ff,0xff0f0034)
    // optimized match 17: FEBEX_NOTRACE febex_0[16]: (s32) => (0xfffff0ff,0xff100034)
    // optimized match 18: FEBEX_NOTRACE febex_0[17]: (s32) => (0xfffff0ff,0xff110034)
    // optimized match 19: FEBEX_TRACE febextrace_0[0]: (s32) => (0x00fff0ff,0x00000034)
    // optimized match 20: FEBEX_TRACE febextrace_0[1]: (s32) => (0x00fff0ff,0x00010034)
    // optimized match 21: FEBEX_TRACE febextrace_0[2]: (s32) => (0x00fff0ff,0x00020034)
    // optimized match 22: FEBEX_TRACE febextrace_0[3]: (s32) => (0x00fff0ff,0x00030034)
    // optimized match 23: FEBEX_TRACE febextrace_0[4]: (s32) => (0x00fff0ff,0x00040034)
    // optimized match 24: FEBEX_TRACE febextrace_0[5]: (s32) => (0x00fff0ff,0x00050034)
    // optimized match 25: FEBEX_TRACE febextrace_0[6]: (s32) => (0x00fff0ff,0x00060034)
    // optimized match 26: FEBEX_TRACE febextrace_0[7]: (s32) => (0x00fff0ff,0x00070034)
    // optimized match 27: FEBEX_TRACE febextrace_0[8]: (s32) => (0x00fff0ff,0x00080034)
    // optimized match 28: FEBEX_TRACE febextrace_0[9]: (s32) => (0x00fff0ff,0x00090034)
    // optimized match 29: FEBEX_TRACE febextrace_0[10]: (s32) => (0x00fff0ff,0x000a0034)
    // optimized match 30: FEBEX_TRACE febextrace_0[11]: (s32) => (0x00fff0ff,0x000b0034)
    // optimized match 31: FEBEX_TRACE febextrace_0[12]: (s32) => (0x00fff0ff,0x000c0034)
    // optimized match 32: FEBEX_TRACE febextrace_0[13]: (s32) => (0x00fff0ff,0x000d0034)
    // optimized match 33: FEBEX_TRACE febextrace_0[14]: (s32) => (0x00fff0ff,0x000e0034)
    // optimized match 34: FEBEX_TRACE febextrace_0[15]: (s32) => (0x00fff0ff,0x000f0034)
    // optimized match 35: FEBEX_TRACE febextrace_0[16]: (s32) => (0x00fff0ff,0x00100034)
    // optimized match 36: FEBEX_TRACE febextrace_0[17]: (s32) => (0x00fff0ff,0x00110034)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(856,uint32,__match_peek);
    // differ = ff1f0000 : 16 17 18 19 20 24 25 26 27 28 29 30 31
    // select on bit 16, partition: 1:18(d18) 0:18(d18)
    if (__match_peek & 0x00010000) {
      // select on bit 19, partition: 1:10(d8) 0:8(d10)
      if (__match_peek & 0x00080000) {
        // select on bit 18, partition: 1:4(d4) 0:4(d4)
        if (__match_peek & 0x00040000) {
          // select on bit 17, partition: 1:2(d2) 0:2(d2)
          if (__match_peek & 0x00020000) {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(835,__match_no,16,febex_0[15],__match_peek,0xfffff0ff,0xff0f0034,FEBEX_NOTRACE,/*sfp*/0,/*card*/15);
            VERIFY_MATCH_DECL_QUICK(853,__match_no,34,febextrace_0[15],__match_peek,0x00fff0ff,0x000f0034,FEBEX_TRACE,/*sfp*/0,/*card*/15);
          } else {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(833,__match_no,14,febex_0[13],__match_peek,0xfffff0ff,0xff0d0034,FEBEX_NOTRACE,/*sfp*/0,/*card*/13);
            VERIFY_MATCH_DECL_QUICK(851,__match_no,32,febextrace_0[13],__match_peek,0x00fff0ff,0x000d0034,FEBEX_TRACE,/*sfp*/0,/*card*/13);
          }
        } else {
          // select on bit 17, partition: 1:2(d2) 0:2(d2)
          if (__match_peek & 0x00020000) {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(831,__match_no,12,febex_0[11],__match_peek,0xfffff0ff,0xff0b0034,FEBEX_NOTRACE,/*sfp*/0,/*card*/11);
            VERIFY_MATCH_DECL_QUICK(849,__match_no,30,febextrace_0[11],__match_peek,0x00fff0ff,0x000b0034,FEBEX_TRACE,/*sfp*/0,/*card*/11);
          } else {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(829,__match_no,10,febex_0[9],__match_peek,0xfffff0ff,0xff090034,FEBEX_NOTRACE,/*sfp*/0,/*card*/9);
            VERIFY_MATCH_DECL_QUICK(847,__match_no,28,febextrace_0[9],__match_peek,0x00fff0ff,0x00090034,FEBEX_TRACE,/*sfp*/0,/*card*/9);
          }
        }
      } else {
        // select on bit 18, partition: 1:6(d4) 0:4(d6)
        if (__match_peek & 0x00040000) {
          // select on bit 17, partition: 1:2(d2) 0:2(d2)
          if (__match_peek & 0x00020000) {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(827,__match_no,8,febex_0[7],__match_peek,0xfffff0ff,0xff070034,FEBEX_NOTRACE,/*sfp*/0,/*card*/7);
            VERIFY_MATCH_DECL_QUICK(845,__match_no,26,febextrace_0[7],__match_peek,0x00fff0ff,0x00070034,FEBEX_TRACE,/*sfp*/0,/*card*/7);
          } else {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(825,__match_no,6,febex_0[5],__match_peek,0xfffff0ff,0xff050034,FEBEX_NOTRACE,/*sfp*/0,/*card*/5);
            VERIFY_MATCH_DECL_QUICK(843,__match_no,24,febextrace_0[5],__match_peek,0x00fff0ff,0x00050034,FEBEX_TRACE,/*sfp*/0,/*card*/5);
          }
        } else {
          // select on bit 20, partition: 1:4(d2) 0:2(d4)
          if (__match_peek & 0x00100000) {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(837,__match_no,18,febex_0[17],__match_peek,0xfffff0ff,0xff110034,FEBEX_NOTRACE,/*sfp*/0,/*card*/17);
            VERIFY_MATCH_DECL_QUICK(855,__match_no,36,febextrace_0[17],__match_peek,0x00fff0ff,0x00110034,FEBEX_TRACE,/*sfp*/0,/*card*/17);
          } else {
            // select on bit 17, partition: 1:2(d2) 0:2(d2)
            if (__match_peek & 0x00020000) {
              // Indistinguishable: 0 1
              VERIFY_MATCH_DECL_QUICK(823,__match_no,4,febex_0[3],__match_peek,0xfffff0ff,0xff030034,FEBEX_NOTRACE,/*sfp*/0,/*card*/3);
              VERIFY_MATCH_DECL_QUICK(841,__match_no,22,febextrace_0[3],__match_peek,0x00fff0ff,0x00030034,FEBEX_TRACE,/*sfp*/0,/*card*/3);
            } else {
              // Indistinguishable: 0 1
              VERIFY_MATCH_DECL_QUICK(821,__match_no,2,febex_0[1],__match_peek,0xfffff0ff,0xff010034,FEBEX_NOTRACE,/*sfp*/0,/*card*/1);
              VERIFY_MATCH_DECL_QUICK(839,__match_no,20,febextrace_0[1],__match_peek,0x00fff0ff,0x00010034,FEBEX_TRACE,/*sfp*/0,/*card*/1);
            }
          }
        }
      }
    } else {
      // select on bit 19, partition: 1:10(d8) 0:8(d10)
      if (__match_peek & 0x00080000) {
        // select on bit 18, partition: 1:4(d4) 0:4(d4)
        if (__match_peek & 0x00040000) {
          // select on bit 17, partition: 1:2(d2) 0:2(d2)
          if (__match_peek & 0x00020000) {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(834,__match_no,15,febex_0[14],__match_peek,0xfffff0ff,0xff0e0034,FEBEX_NOTRACE,/*sfp*/0,/*card*/14);
            VERIFY_MATCH_DECL_QUICK(852,__match_no,33,febextrace_0[14],__match_peek,0x00fff0ff,0x000e0034,FEBEX_TRACE,/*sfp*/0,/*card*/14);
          } else {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(832,__match_no,13,febex_0[12],__match_peek,0xfffff0ff,0xff0c0034,FEBEX_NOTRACE,/*sfp*/0,/*card*/12);
            VERIFY_MATCH_DECL_QUICK(850,__match_no,31,febextrace_0[12],__match_peek,0x00fff0ff,0x000c0034,FEBEX_TRACE,/*sfp*/0,/*card*/12);
          }
        } else {
          // select on bit 17, partition: 1:2(d2) 0:2(d2)
          if (__match_peek & 0x00020000) {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(830,__match_no,11,febex_0[10],__match_peek,0xfffff0ff,0xff0a0034,FEBEX_NOTRACE,/*sfp*/0,/*card*/10);
            VERIFY_MATCH_DECL_QUICK(848,__match_no,29,febextrace_0[10],__match_peek,0x00fff0ff,0x000a0034,FEBEX_TRACE,/*sfp*/0,/*card*/10);
          } else {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(828,__match_no,9,febex_0[8],__match_peek,0xfffff0ff,0xff080034,FEBEX_NOTRACE,/*sfp*/0,/*card*/8);
            VERIFY_MATCH_DECL_QUICK(846,__match_no,27,febextrace_0[8],__match_peek,0x00fff0ff,0x00080034,FEBEX_TRACE,/*sfp*/0,/*card*/8);
          }
        }
      } else {
        // select on bit 18, partition: 1:6(d4) 0:4(d6)
        if (__match_peek & 0x00040000) {
          // select on bit 17, partition: 1:2(d2) 0:2(d2)
          if (__match_peek & 0x00020000) {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(826,__match_no,7,febex_0[6],__match_peek,0xfffff0ff,0xff060034,FEBEX_NOTRACE,/*sfp*/0,/*card*/6);
            VERIFY_MATCH_DECL_QUICK(844,__match_no,25,febextrace_0[6],__match_peek,0x00fff0ff,0x00060034,FEBEX_TRACE,/*sfp*/0,/*card*/6);
          } else {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(824,__match_no,5,febex_0[4],__match_peek,0xfffff0ff,0xff040034,FEBEX_NOTRACE,/*sfp*/0,/*card*/4);
            VERIFY_MATCH_DECL_QUICK(842,__match_no,23,febextrace_0[4],__match_peek,0x00fff0ff,0x00040034,FEBEX_TRACE,/*sfp*/0,/*card*/4);
          }
        } else {
          // select on bit 20, partition: 1:4(d2) 0:2(d4)
          if (__match_peek & 0x00100000) {
            // Indistinguishable: 0 1
            VERIFY_MATCH_DECL_QUICK(836,__match_no,17,febex_0[16],__match_peek,0xfffff0ff,0xff100034,FEBEX_NOTRACE,/*sfp*/0,/*card*/16);
            VERIFY_MATCH_DECL_QUICK(854,__match_no,35,febextrace_0[16],__match_peek,0x00fff0ff,0x00100034,FEBEX_TRACE,/*sfp*/0,/*card*/16);
          } else {
            // select on bit 17, partition: 1:2(d2) 0:2(d2)
            if (__match_peek & 0x00020000) {
              // Indistinguishable: 0 1
              VERIFY_MATCH_DECL_QUICK(822,__match_no,3,febex_0[2],__match_peek,0xfffff0ff,0xff020034,FEBEX_NOTRACE,/*sfp*/0,/*card*/2);
              VERIFY_MATCH_DECL_QUICK(840,__match_no,21,febextrace_0[2],__match_peek,0x00fff0ff,0x00020034,FEBEX_TRACE,/*sfp*/0,/*card*/2);
            } else {
              // Indistinguishable: 0 1
              VERIFY_MATCH_DECL_QUICK(820,__match_no,1,febex_0[0],__match_peek,0xfffff0ff,0xff000034,FEBEX_NOTRACE,/*sfp*/0,/*card*/0);
              VERIFY_MATCH_DECL_QUICK(838,__match_no,19,febextrace_0[0],__match_peek,0x00fff0ff,0x00000034,FEBEX_TRACE,/*sfp*/0,/*card*/0);
            }
          }
        }
      }
    }
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(820,FEBEX_NOTRACE,febex_0[0],/*sfp*/0,/*card*/0);
        break;
      case 2:
        UNPACK_DECL(821,FEBEX_NOTRACE,febex_0[1],/*sfp*/0,/*card*/1);
        break;
      case 3:
        UNPACK_DECL(822,FEBEX_NOTRACE,febex_0[2],/*sfp*/0,/*card*/2);
        break;
      case 4:
        UNPACK_DECL(823,FEBEX_NOTRACE,febex_0[3],/*sfp*/0,/*card*/3);
        break;
      case 5:
        UNPACK_DECL(824,FEBEX_NOTRACE,febex_0[4],/*sfp*/0,/*card*/4);
        break;
      case 6:
        UNPACK_DECL(825,FEBEX_NOTRACE,febex_0[5],/*sfp*/0,/*card*/5);
        break;
      case 7:
        UNPACK_DECL(826,FEBEX_NOTRACE,febex_0[6],/*sfp*/0,/*card*/6);
        break;
      case 8:
        UNPACK_DECL(827,FEBEX_NOTRACE,febex_0[7],/*sfp*/0,/*card*/7);
        break;
      case 9:
        UNPACK_DECL(828,FEBEX_NOTRACE,febex_0[8],/*sfp*/0,/*card*/8);
        break;
      case 10:
        UNPACK_DECL(829,FEBEX_NOTRACE,febex_0[9],/*sfp*/0,/*card*/9);
        break;
      case 11:
        UNPACK_DECL(830,FEBEX_NOTRACE,febex_0[10],/*sfp*/0,/*card*/10);
        break;
      case 12:
        UNPACK_DECL(831,FEBEX_NOTRACE,febex_0[11],/*sfp*/0,/*card*/11);
        break;
      case 13:
        UNPACK_DECL(832,FEBEX_NOTRACE,febex_0[12],/*sfp*/0,/*card*/12);
        break;
      case 14:
        UNPACK_DECL(833,FEBEX_NOTRACE,febex_0[13],/*sfp*/0,/*card*/13);
        break;
      case 15:
        UNPACK_DECL(834,FEBEX_NOTRACE,febex_0[14],/*sfp*/0,/*card*/14);
        break;
      case 16:
        UNPACK_DECL(835,FEBEX_NOTRACE,febex_0[15],/*sfp*/0,/*card*/15);
        break;
      case 17:
        UNPACK_DECL(836,FEBEX_NOTRACE,febex_0[16],/*sfp*/0,/*card*/16);
        break;
      case 18:
        UNPACK_DECL(837,FEBEX_NOTRACE,febex_0[17],/*sfp*/0,/*card*/17);
        break;
      case 19:
        UNPACK_DECL(838,FEBEX_TRACE,febextrace_0[0],/*sfp*/0,/*card*/0);
        break;
      case 20:
        UNPACK_DECL(839,FEBEX_TRACE,febextrace_0[1],/*sfp*/0,/*card*/1);
        break;
      case 21:
        UNPACK_DECL(840,FEBEX_TRACE,febextrace_0[2],/*sfp*/0,/*card*/2);
        break;
      case 22:
        UNPACK_DECL(841,FEBEX_TRACE,febextrace_0[3],/*sfp*/0,/*card*/3);
        break;
      case 23:
        UNPACK_DECL(842,FEBEX_TRACE,febextrace_0[4],/*sfp*/0,/*card*/4);
        break;
      case 24:
        UNPACK_DECL(843,FEBEX_TRACE,febextrace_0[5],/*sfp*/0,/*card*/5);
        break;
      case 25:
        UNPACK_DECL(844,FEBEX_TRACE,febextrace_0[6],/*sfp*/0,/*card*/6);
        break;
      case 26:
        UNPACK_DECL(845,FEBEX_TRACE,febextrace_0[7],/*sfp*/0,/*card*/7);
        break;
      case 27:
        UNPACK_DECL(846,FEBEX_TRACE,febextrace_0[8],/*sfp*/0,/*card*/8);
        break;
      case 28:
        UNPACK_DECL(847,FEBEX_TRACE,febextrace_0[9],/*sfp*/0,/*card*/9);
        break;
      case 29:
        UNPACK_DECL(848,FEBEX_TRACE,febextrace_0[10],/*sfp*/0,/*card*/10);
        break;
      case 30:
        UNPACK_DECL(849,FEBEX_TRACE,febextrace_0[11],/*sfp*/0,/*card*/11);
        break;
      case 31:
        UNPACK_DECL(850,FEBEX_TRACE,febextrace_0[12],/*sfp*/0,/*card*/12);
        break;
      case 32:
        UNPACK_DECL(851,FEBEX_TRACE,febextrace_0[13],/*sfp*/0,/*card*/13);
        break;
      case 33:
        UNPACK_DECL(852,FEBEX_TRACE,febextrace_0[14],/*sfp*/0,/*card*/14);
        break;
      case 34:
        UNPACK_DECL(853,FEBEX_TRACE,febextrace_0[15],/*sfp*/0,/*card*/15);
        break;
      case 35:
        UNPACK_DECL(854,FEBEX_TRACE,febextrace_0[16],/*sfp*/0,/*card*/16);
        break;
      case 36:
        UNPACK_DECL(855,FEBEX_TRACE,febextrace_0[17],/*sfp*/0,/*card*/17);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,tracking_febex_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for wr_100.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_100)
template<typename __data_src_t>
void wr_100::__unpack(__data_src_t &__buffer)
{
  // ts100 = TIMESTAMP_WHITERABBIT(id=0x100);
  UNPACK_DECL(751,TIMESTAMP_WHITERABBIT,ts100,/*id*/0x100);
  // multi_ = WR_MULTI();
  UNPACK_DECL(754,WR_MULTI,multi_);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_100::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for wr_200.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_200)
template<typename __data_src_t>
void wr_200::__unpack(__data_src_t &__buffer)
{
  // ts200 = TIMESTAMP_WHITERABBIT(id=0x200);
  UNPACK_DECL(760,TIMESTAMP_WHITERABBIT,ts200,/*id*/0x200);
  // multi_ = WR_MULTI();
  UNPACK_DECL(763,WR_MULTI,multi_);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_200::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for wr_400.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_400)
template<typename __data_src_t>
void wr_400::__unpack(__data_src_t &__buffer)
{
  // ts400 = TIMESTAMP_WHITERABBIT(id=0x400);
  UNPACK_DECL(769,TIMESTAMP_WHITERABBIT,ts400,/*id*/0x400);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_400::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
template<typename __data_src_t>
int unpack_event::__unpack_subevent(subevent_header *__header,__data_src_t &__buffer)
  // master_ts = wr_100(type=10,subtype=1,control=0);
  // master_tpat = tpat_subev(type=36,subtype=0xe10,control=0);
  // master_lmu_scalers = lmu_scalers_subev(type=37,subtype=0xe74,control=0);
  // master_vme = master_subev(type=88,subtype=0x2260,control=0);
  // los = los_subev(type=88,subtype=0x2260,control=1);
  // los_scalers = los_scalers_subev(type=38,subtype=0xed8,control=1);
  // los_sampler = los_sampler_subev(type=39,subtype=0xf3c,control=1);
  // tofd_vme = tofd_vme_subev(type=88,subtype=0x2260,control=2);
  // tbm_ts = wr_200(type=10,subtype=1,control=3);
  // tbm_tpat = tpat_subev(type=36,subtype=0xe10,control=3);
  // tbm_vme = tbm_subev(type=88,subtype=0x2260,control=3);
  // tofd_tamex = tofd_tamex_subev(type=102,subtype=0x27d8,control=4);
  // tracking_febex = tracking_febex_subev(type=100,subtype=0x2710,control=5);
  // fitest_febex = fitest_febex_subev(type=100,subtype=0x2710,control=6);
  // straw_ts = wr_400(type=10,subtype=1,control=7);
  // straw = straw_vme_subev(type=88,subtype=0x2260,control=7);
  // los_empty = empty_subev(type=10,subtype=1,control=1);
  // tofd_empty = empty_subev(type=10,subtype=1,control=2);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(942,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==0)),master_ts);
  MATCH_SUBEVENT_DECL(943,__match_no,2,((VES10_1_type==36)&&(VES10_1_subtype==0xe10)&&(VES10_1_control==0)),master_tpat);
  MATCH_SUBEVENT_DECL(944,__match_no,3,((VES10_1_type==37)&&(VES10_1_subtype==0xe74)&&(VES10_1_control==0)),master_lmu_scalers);
  MATCH_SUBEVENT_DECL(945,__match_no,4,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==0)),master_vme);
  MATCH_SUBEVENT_DECL(946,__match_no,5,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==1)),los);
  MATCH_SUBEVENT_DECL(947,__match_no,6,((VES10_1_type==38)&&(VES10_1_subtype==0xed8)&&(VES10_1_control==1)),los_scalers);
  MATCH_SUBEVENT_DECL(948,__match_no,7,((VES10_1_type==39)&&(VES10_1_subtype==0xf3c)&&(VES10_1_control==1)),los_sampler);
  MATCH_SUBEVENT_DECL(949,__match_no,8,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==2)),tofd_vme);
  MATCH_SUBEVENT_DECL(950,__match_no,9,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==3)),tbm_ts);
  MATCH_SUBEVENT_DECL(951,__match_no,10,((VES10_1_type==36)&&(VES10_1_subtype==0xe10)&&(VES10_1_control==3)),tbm_tpat);
  MATCH_SUBEVENT_DECL(952,__match_no,11,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==3)),tbm_vme);
  MATCH_SUBEVENT_DECL(953,__match_no,12,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==4)),tofd_tamex);
  MATCH_SUBEVENT_DECL(954,__match_no,13,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==5)),tracking_febex);
  MATCH_SUBEVENT_DECL(956,__match_no,14,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==6)),fitest_febex);
  MATCH_SUBEVENT_DECL(959,__match_no,15,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==7)),straw_ts);
  MATCH_SUBEVENT_DECL(960,__match_no,16,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==7)),straw);
  MATCH_SUBEVENT_DECL(962,__match_no,17,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==1)),los_empty);
  MATCH_SUBEVENT_DECL(963,__match_no,18,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==2)),tofd_empty);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(942,wr_100,master_ts,0);
      UNPACK_SUBEVENT_DECL(942,0,wr_100,master_ts);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(943,tpat_subev,master_tpat,1);
      UNPACK_SUBEVENT_DECL(943,0,tpat_subev,master_tpat);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(944,lmu_scalers_subev,master_lmu_scalers,2);
      UNPACK_SUBEVENT_DECL(944,0,lmu_scalers_subev,master_lmu_scalers);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(945,master_subev,master_vme,3);
      UNPACK_SUBEVENT_DECL(945,0,master_subev,master_vme);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(946,los_subev,los,4);
      UNPACK_SUBEVENT_DECL(946,0,los_subev,los);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(947,los_scalers_subev,los_scalers,5);
      UNPACK_SUBEVENT_DECL(947,0,los_scalers_subev,los_scalers);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(948,los_sampler_subev,los_sampler,6);
      UNPACK_SUBEVENT_DECL(948,0,los_sampler_subev,los_sampler);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(949,tofd_vme_subev,tofd_vme,7);
      UNPACK_SUBEVENT_DECL(949,0,tofd_vme_subev,tofd_vme);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(950,wr_200,tbm_ts,8);
      UNPACK_SUBEVENT_DECL(950,0,wr_200,tbm_ts);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(951,tpat_subev,tbm_tpat,9);
      UNPACK_SUBEVENT_DECL(951,0,tpat_subev,tbm_tpat);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(952,tbm_subev,tbm_vme,10);
      UNPACK_SUBEVENT_DECL(952,0,tbm_subev,tbm_vme);
      break;
    case 12:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(953,tofd_tamex_subev,tofd_tamex,11);
      UNPACK_SUBEVENT_DECL(953,0,tofd_tamex_subev,tofd_tamex);
      break;
    case 13:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(954,tracking_febex_subev,tracking_febex,12);
      UNPACK_SUBEVENT_DECL(954,0,tracking_febex_subev,tracking_febex);
      break;
    case 14:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(956,fitest_febex_subev,fitest_febex,13);
      UNPACK_SUBEVENT_DECL(956,0,fitest_febex_subev,fitest_febex);
      break;
    case 15:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(959,wr_400,straw_ts,14);
      UNPACK_SUBEVENT_DECL(959,0,wr_400,straw_ts);
      break;
    case 16:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(960,straw_vme_subev,straw,15);
      UNPACK_SUBEVENT_DECL(960,0,straw_vme_subev,straw);
      break;
    case 17:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(962,empty_subev,los_empty,16);
      UNPACK_SUBEVENT_DECL(962,0,empty_subev,los_empty);
      break;
    case 18:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(963,empty_subev,tofd_empty,17);
      UNPACK_SUBEVENT_DECL(963,0,empty_subev,tofd_empty);
      break;
  }
  return 0;
}
FORCE_IMPL_DATA_SRC_FCN_HDR(int,unpack_event::__unpack_subevent);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// STICKY_EVENT
template<typename __data_src_t>
int unpack_sticky_event::__unpack_subevent(subevent_header *__header,__data_src_t &__buffer)
{
  int __match_no = 0;
  if (!__match_no) return 0;
  switch (__match_no)
  {
  }
  return 0;
}
FORCE_IMPL_DATA_SRC_FCN_HDR(int,unpack_sticky_event::__unpack_subevent);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER_DEFINES *********************************************
 *
 * Control
 *
 * Do not edit - automatically generated.
 */

#define STICKY_EVENT_IS_NONTRIVIAL  0


/** END_UNPACKER_DEFINES **********************************************/
