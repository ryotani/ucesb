/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for DUMMY.
 *
 * Do not edit - automatically generated.
 */

// DUMMY(id)
template<typename __data_src_t>
void DUMMY::__unpack(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 time_lo);
  // MEMBER(DATA32 time_hi);
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_15: wordcount;
    // 16_31: id = MATCH(id);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 wordcount : 16; // 0..15
      uint32 id : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 16; // 16..31
      uint32 wordcount : 16; // 0..15
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(137,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(136,header.id,id);
  // UINT32 timestamp_hi NOENCODE
  // {
    //  0_31: value;
    // ENCODE(time_hi,(value=value));
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
  } timestamp_hi;
  READ_FROM_BUFFER_FULL(143,uint32 ,timestamp_hi,timestamp_hi.u32);
  {
    time_hi.value = timestamp_hi.value;
  }
  // UINT32 timestamp_lo NOENCODE
  // {
    //  0_31: value;
    // ENCODE(time_lo,(value=value));
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
  } timestamp_lo;
  READ_FROM_BUFFER_FULL(148,uint32 ,timestamp_lo,timestamp_lo.u32);
  {
    time_lo.value = timestamp_lo.value;
  }
  // list(0<=ch<32)

  for (uint32 ch = 0; ch < (uint32) (32); ++ch)
  {
    // UINT32 item NOENCODE
    // {
      //  0_23: value;
      // 24_31: channel;
      // ENCODE(data[channel],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 24; // 0..23
        uint32 channel : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 channel : 8; // 24..31
        uint32 value : 24; // 0..23
#endif
      };
      uint32  u32;
    } item;
    READ_FROM_BUFFER_FULL(156,uint32 ,item,item.u32);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(155,item.channel);
      __item.value = item.value;
    }
  }
  // UINT32 footer NOENCODE
  // {
    //  0_31: event_number;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 event_number : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 event_number : 32; // 0..31
#endif
    };
    uint32  u32;
  } footer;
  READ_FROM_BUFFER_FULL(162,uint32 ,footer,footer.u32);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,DUMMY::__unpack,uint32 id);

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
  READ_FROM_BUFFER_FULL(89,uint32 ,failure,failure.u32);
  CHECK_UNNAMED_BITS_ZERO(89,failure.u32,0x003fff00);
  // if(failure.has_continous_event_counter)

  if (failure.has_continous_event_counter)
  {
    // UINT32 continous_event_counter;
    READ_FROM_BUFFER(92,uint32 ,continous_event_counter);
  }
  // if(failure.has_time_stamp)

  if (failure.has_time_stamp)
  {
    // UINT32 time_stamp;
    READ_FROM_BUFFER(96,uint32 ,time_stamp);
  }
  // if(failure.has_clock_counter_stamp)

  if (failure.has_clock_counter_stamp)
  {
    // UINT32 clock_counter_stamp;
    READ_FROM_BUFFER(100,uint32 ,clock_counter_stamp);
  }
  // if(failure.has_update_qdc_iped_value)

  if (failure.has_update_qdc_iped_value)
  {
    // UINT32 iped;
    READ_FROM_BUFFER(104,uint32 ,iped);
  }
  // if(failure.has_multi_event)

  if (failure.has_multi_event)
  {
    // UINT32 multi_events;
    READ_FROM_BUFFER(108,uint32 ,multi_events);
  }
  // if(failure.has_multi_trlo_ii_counter0)

  if (failure.has_multi_trlo_ii_counter0)
  {
    // UINT32 multi_trlo_ii_counter0;
    READ_FROM_BUFFER(112,uint32 ,multi_trlo_ii_counter0);
  }
  // if(failure.has_multi_scaler_counter0)

  if (failure.has_multi_scaler_counter0)
  {
    // UINT32 multi_scaler_counter0;
    READ_FROM_BUFFER(116,uint32 ,multi_scaler_counter0);
  }
  // if(failure.has_multi_adctdc_counter0)

  if (failure.has_multi_adctdc_counter0)
  {
    // UINT32 multi_adctdc_counter0;
    READ_FROM_BUFFER(120,uint32 ,multi_adctdc_counter0);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_STD_VME::__unpack);

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
  READ_FROM_BUFFER_FULL(24,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(19,header.id,id);
  CHECK_BITS_EQUAL(20,header.unnamed_12_15,0);
  CHECK_BITS_EQUAL(22,header.unnamed_17_31,0);
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
  READ_FROM_BUFFER_FULL(29,uint32 ,d1,d1.u32);
  CHECK_BITS_EQUAL(27,d1.unnamed_16_31,0x3e1);
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
  READ_FROM_BUFFER_FULL(34,uint32 ,d2,d2.u32);
  CHECK_BITS_EQUAL(32,d2.unnamed_16_31,0x4e1);
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
  READ_FROM_BUFFER_FULL(39,uint32 ,d3,d3.u32);
  CHECK_BITS_EQUAL(37,d3.unnamed_16_31,0x5e1);
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
  READ_FROM_BUFFER_FULL(44,uint32 ,d4,d4.u32);
  CHECK_BITS_EQUAL(42,d4.unnamed_16_31,0x6e1);
  {
    t4.value = d4.t4;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TIMESTAMP_WHITERABBIT::__unpack,uint32 id);

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
  READ_FROM_BUFFER_FULL(55,uint32 ,hi,hi.u32);
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
  READ_FROM_BUFFER_FULL(59,uint32 ,lo,lo.u32);
  {
    time_lo.value = lo.time;
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,WR_MULTI::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for empty_subevent.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(empty_subevent)
template<typename __data_src_t>
void empty_subevent::__unpack(__data_src_t &__buffer)
{
}
FORCE_IMPL_DATA_SRC_FCN(void,empty_subevent::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for land_header_only.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(land_header_only)
template<typename __data_src_t>
void land_header_only::__unpack(__data_src_t &__buffer)
{
  // header = LAND_STD_VME();
  UNPACK_DECL(183,LAND_STD_VME,header);
}
FORCE_IMPL_DATA_SRC_FCN(void,land_header_only::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for vme_subevent.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(vme_subevent)
template<typename __data_src_t>
void vme_subevent::__unpack(__data_src_t &__buffer)
{
  // header = LAND_STD_VME();
  UNPACK_DECL(167,LAND_STD_VME,header);
  // select several

    // multi dummy[0] = DUMMY(id=0x1234);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: DUMMY dummy[0]: (s32) => (0xffff0000,0x12340000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(171,uint32,__match_peek);
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
        UNPACK_DECL(170,DUMMY,multi_dummy[0].next_free(),/*id*/0x1234);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,vme_subevent::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for wr_ts_100.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_ts_100)
template<typename __data_src_t>
void wr_ts_100::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x100);
  UNPACK_DECL(176,TIMESTAMP_WHITERABBIT,ts,/*id*/0x100);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_ts_100::__unpack);

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
  // ts = wr_ts_100(type=10,subtype=1,control=0,subcrate=0);
  // vme = vme_subevent(type=88,subtype=0x2260,control=0,subcrate=0);
  // vme_drasi = empty_subevent(type=0x4d2,subtype=0x162e,control=9,
                             // subcrate=0);
  // vme_drasi_unknown = empty_subevent(type=0xffff,subtype=0xffff,control=9,
                                     // subcrate=9);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(188,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==0)&&(VES10_1_subcrate==0)),ts);
  MATCH_SUBEVENT_DECL(189,__match_no,2,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==0)&&(VES10_1_subcrate==0)),vme);
  MATCH_SUBEVENT_DECL(190,__match_no,3,((VES10_1_type==0x4d2)&&(VES10_1_subtype==0x162e)&&(VES10_1_control==9)&&(VES10_1_subcrate==0)),vme_drasi);
  MATCH_SUBEVENT_DECL(192,__match_no,4,((VES10_1_type==0xffff)&&(VES10_1_subtype==0xffff)&&(VES10_1_control==9)&&(VES10_1_subcrate==9)),vme_drasi_unknown);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(188,wr_ts_100,ts,0);
      UNPACK_SUBEVENT_DECL(188,0,wr_ts_100,ts);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(189,vme_subevent,vme,1);
      UNPACK_SUBEVENT_DECL(189,0,vme_subevent,vme);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(190,empty_subevent,vme_drasi,2);
      UNPACK_SUBEVENT_DECL(190,0,empty_subevent,vme_drasi);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(192,empty_subevent,vme_drasi_unknown,3);
      UNPACK_SUBEVENT_DECL(192,0,empty_subevent,vme_drasi_unknown);
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
