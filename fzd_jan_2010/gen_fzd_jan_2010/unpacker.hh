/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FZD_data_SUBITEM.
 *
 * Do not edit - automatically generated.
 */

// FZD_data_SUBITEM(geo,data)
template<typename __data_src_t>
void FZD_data_SUBITEM::__unpack(__data_src_t &__buffer,uint32 geo,raw_array_multi_zero_suppress<DATA32,DATA32,32,5> &data)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS_MULTI(5));
  // UINT32 ch_data NOENCODE
  // {
    //  0_23: data;
    // 24_28: channel = RANGE(0,32);
    //    29: 0;
    //    30: 0;
    //    31: 0;
    // ENCODE(data[channel],(value=data));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 data : 24; // 0..23
      uint32 channel : 5; // 24..28
      uint32 unnamed_29_29 : 1; // 29
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_31_31 : 1; // 31
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_29_29 : 1; // 29
      uint32 channel : 5; // 24..28
      uint32 data : 24; // 0..23
#endif
    };
    uint32  u32;
  } ch_data;
  READ_FROM_BUFFER_FULL(20,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_RANGE_MAX(17,ch_data.channel,32);
  CHECK_BITS_EQUAL(16,ch_data.unnamed_29_29,0);
  CHECK_BITS_EQUAL(15,ch_data.unnamed_30_30,0);
  CHECK_BITS_EQUAL(14,ch_data.unnamed_31_31,0);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(19,ch_data.channel);
    __item.value = ch_data.data;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FZD_data_SUBITEM::__unpack,uint32 geo,raw_array_multi_zero_suppress<DATA32,DATA32,32,5> &data);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FZD_Modul.
 *
 * Do not edit - automatically generated.
 */

// FZD_Modul(geom)
template<typename __data_src_t>
void FZD_Modul::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS_MULTI(5));
  // UINT32 header
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 1;
    //    30: 0;
    //    31: 0;
  // }
  READ_FROM_BUFFER_FULL(27,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(27,header.unnamed_0_23,0);
  CHECK_BITS_EQUAL(27,header.geom,geom);
  CHECK_BITS_EQUAL(27,header.unnamed_29_29,1);
  CHECK_BITS_EQUAL(27,header.unnamed_30_30,0);
  CHECK_BITS_EQUAL(27,header.unnamed_31_31,0);
  // select several

    // dummy = FZD_data_SUBITEM(geo=geom,data=data);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FZD_data_SUBITEM dummy: (s32) => (0xe0000000,0x00000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(31,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(30,spurious_match_abort_loop_0,FZD_data_SUBITEM,/*geo*/geom/*,data:member*/);
        UNPACK_DECL(30,FZD_data_SUBITEM,dummy,/*geo*/geom,/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_0:;
  // UINT32 EOB
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 0;
    //    30: 1;
    //    31: 0;
  // }
  READ_FROM_BUFFER_FULL(32,uint32 ,EOB,EOB.u32);
  CHECK_BITS_EQUAL(32,EOB.unnamed_0_23,0);
  CHECK_BITS_EQUAL(32,EOB.geom,geom);
  CHECK_BITS_EQUAL(32,EOB.unnamed_29_29,0);
  CHECK_BITS_EQUAL(32,EOB.unnamed_30_30,1);
  CHECK_BITS_EQUAL(32,EOB.unnamed_31_31,0);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FZD_Modul::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FZD_V1495.
 *
 * Do not edit - automatically generated.
 */

// FZD_V1495(geom)
template<typename __data_src_t>
void FZD_V1495::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 ts[8] ZERO_SUPPRESS);
  // MEMBER(DATA32 RBWL[2] ZERO_SUPPRESS);
  // MEMBER(DATA32 MP);
  // UINT32 header
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 1;
    //    30: 0;
    //    31: 0;
  // }
  READ_FROM_BUFFER_FULL(40,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(40,header.unnamed_0_23,0);
  CHECK_BITS_EQUAL(40,header.geom,geom);
  CHECK_BITS_EQUAL(40,header.unnamed_29_29,1);
  CHECK_BITS_EQUAL(40,header.unnamed_30_30,0);
  CHECK_BITS_EQUAL(40,header.unnamed_31_31,0);
  // list(0<=index<5)

  for (uint32 index = 0; index < (uint32) (5); ++index)
  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_23: timestamp;
      // 24_28: channel = RANGE(0,4);
      //    29: 0;
      //    30: 0;
      //    31: 0;
      // ENCODE(ts[channel],(value=timestamp));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 timestamp : 24; // 0..23
        uint32 channel : 5; // 24..28
        uint32 unnamed_29_29 : 1; // 29
        uint32 unnamed_30_30 : 1; // 30
        uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_31_31 : 1; // 31
        uint32 unnamed_30_30 : 1; // 30
        uint32 unnamed_29_29 : 1; // 29
        uint32 channel : 5; // 24..28
        uint32 timestamp : 24; // 0..23
#endif
      };
      uint32  u32;
    } ch_data;
    READ_FROM_BUFFER_FULL(52,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_RANGE_MAX(48,ch_data.channel,4);
    CHECK_BITS_EQUAL(47,ch_data.unnamed_29_29,0);
    CHECK_BITS_EQUAL(46,ch_data.unnamed_30_30,0);
    CHECK_BITS_EQUAL(45,ch_data.unnamed_31_31,0);
    {
      typedef __typeof__(*(&(ts))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts.insert_index(51,ch_data.channel);
      __item.value = ch_data.timestamp;
    }
  }
  // UINT32 ch_data NOENCODE
  // {
    //  0_07: timestamp;
    //     8: dummy = RANGE(0,1);
    //     9: MPF = RANGE(0,1);
    //    10: RBWF = RANGE(0,1);
    // 11_23: 0;
    // 24_28: channel = RANGE(5,5);
    //    29: 0;
    //    30: 0;
    //    31: 0;
    // ENCODE(MP,(value=MPF));
    // ENCODE(ts[channel],(value=timestamp));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 timestamp : 8; // 0..7
      uint32 dummy : 1; // 8
      uint32 MPF : 1; // 9
      uint32 RBWF : 1; // 10
      uint32 unnamed_11_23 : 13; // 11..23
      uint32 channel : 5; // 24..28
      uint32 unnamed_29_29 : 1; // 29
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_31_31 : 1; // 31
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_29_29 : 1; // 29
      uint32 channel : 5; // 24..28
      uint32 unnamed_11_23 : 13; // 11..23
      uint32 RBWF : 1; // 10
      uint32 MPF : 1; // 9
      uint32 dummy : 1; // 8
      uint32 timestamp : 8; // 0..7
#endif
    };
    uint32  u32;
  } ch_data;
  READ_FROM_BUFFER_FULL(68,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_RANGE_MAX(64,ch_data.dummy,1);
  CHECK_BITS_RANGE_MAX(63,ch_data.MPF,1);
  CHECK_BITS_RANGE_MAX(62,ch_data.RBWF,1);
  CHECK_BITS_EQUAL(61,ch_data.unnamed_11_23,0);
  CHECK_BITS_RANGE(60,ch_data.channel,5,5);
  CHECK_BITS_EQUAL(59,ch_data.unnamed_29_29,0);
  CHECK_BITS_EQUAL(58,ch_data.unnamed_30_30,0);
  CHECK_BITS_EQUAL(57,ch_data.unnamed_31_31,0);
  {
    MP.value = ch_data.MPF;
  }
  {
    typedef __typeof__(*(&(ts))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = ts.insert_index(67,ch_data.channel);
    __item.value = ch_data.timestamp;
  }
  // list(0<=index<2)

  for (uint32 index = 0; index < (uint32) (2); ++index)
  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_23: timestamp;
      // 24_28: channel = RANGE(6,7);
      //    29: 0;
      //    30: 0;
      //    31: 0;
      // ENCODE(ts[channel],(value=timestamp));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 timestamp : 24; // 0..23
        uint32 channel : 5; // 24..28
        uint32 unnamed_29_29 : 1; // 29
        uint32 unnamed_30_30 : 1; // 30
        uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_31_31 : 1; // 31
        uint32 unnamed_30_30 : 1; // 30
        uint32 unnamed_29_29 : 1; // 29
        uint32 channel : 5; // 24..28
        uint32 timestamp : 24; // 0..23
#endif
      };
      uint32  u32;
    } ch_data;
    READ_FROM_BUFFER_FULL(81,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_RANGE(77,ch_data.channel,6,7);
    CHECK_BITS_EQUAL(76,ch_data.unnamed_29_29,0);
    CHECK_BITS_EQUAL(75,ch_data.unnamed_30_30,0);
    CHECK_BITS_EQUAL(74,ch_data.unnamed_31_31,0);
    {
      typedef __typeof__(*(&(ts))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts.insert_index(80,ch_data.channel);
      __item.value = ch_data.timestamp;
    }
  }
  // list(0<=index<2)

  for (uint32 index = 0; index < (uint32) (2); ++index)
  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_23: length;
      // 24_28: channel = RANGE(8,9);
      //    29: 0;
      //    30: 0;
      //    31: 0;
      // ENCODE(RBWL[(channel - 8)],(value=length));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 length : 24; // 0..23
        uint32 channel : 5; // 24..28
        uint32 unnamed_29_29 : 1; // 29
        uint32 unnamed_30_30 : 1; // 30
        uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_31_31 : 1; // 31
        uint32 unnamed_30_30 : 1; // 30
        uint32 unnamed_29_29 : 1; // 29
        uint32 channel : 5; // 24..28
        uint32 length : 24; // 0..23
#endif
      };
      uint32  u32;
    } ch_data;
    READ_FROM_BUFFER_FULL(95,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_RANGE(91,ch_data.channel,8,9);
    CHECK_BITS_EQUAL(90,ch_data.unnamed_29_29,0);
    CHECK_BITS_EQUAL(89,ch_data.unnamed_30_30,0);
    CHECK_BITS_EQUAL(88,ch_data.unnamed_31_31,0);
    {
      typedef __typeof__(*(&(RBWL))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = RBWL.insert_index(94,(ch_data.channel - 8));
      __item.value = ch_data.length;
    }
  }
  // UINT32 EOB
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 0;
    //    30: 1;
    //    31: 0;
  // }
  READ_FROM_BUFFER_FULL(102,uint32 ,EOB,EOB.u32);
  CHECK_BITS_EQUAL(102,EOB.unnamed_0_23,0);
  CHECK_BITS_EQUAL(102,EOB.geom,geom);
  CHECK_BITS_EQUAL(102,EOB.unnamed_29_29,0);
  CHECK_BITS_EQUAL(102,EOB.unnamed_30_30,1);
  CHECK_BITS_EQUAL(102,EOB.unnamed_31_31,0);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FZD_V1495::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for CRATE.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CRATE)
template<typename __data_src_t>
void CRATE::__unpack(__data_src_t &__buffer)
{
  // select several

    // timestamp = FZD_V1495(geom=21);
    // QDC1 = FZD_Modul(geom=7);
    // QDC2 = FZD_Modul(geom=8);
    // TDC1 = FZD_Modul(geom=5);
    // Sca1 = FZD_Modul(geom=13);
    // Sca2 = FZD_Modul(geom=14);
    // Sca3 = FZD_Modul(geom=15);
    // Sca4 = FZD_Modul(geom=16);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FZD_V1495 timestamp: (s32) => (0xffffffff,0x35000000)
    // optimized match 2: FZD_Modul QDC1: (s32) => (0xffffffff,0x27000000)
    // optimized match 3: FZD_Modul QDC2: (s32) => (0xffffffff,0x28000000)
    // optimized match 4: FZD_Modul TDC1: (s32) => (0xffffffff,0x25000000)
    // optimized match 5: FZD_Modul Sca1: (s32) => (0xffffffff,0x2d000000)
    // optimized match 6: FZD_Modul Sca2: (s32) => (0xffffffff,0x2e000000)
    // optimized match 7: FZD_Modul Sca3: (s32) => (0xffffffff,0x2f000000)
    // optimized match 8: FZD_Modul Sca4: (s32) => (0xffffffff,0x30000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(126,uint32,__match_peek);
    // differ = 1f000000 : 24 25 26 27 28
    uint32 __match_index = 0 | /* 24,28 */ ((__match_peek >> 24) & 0x0000001f);
    static const sint8 __match_index_array[32] = { 0, 0, 0, 0, 0, 4, 0, 2, 3, 0, 0, 0, 0, 5, 6, 7, 8, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(115,FZD_V1495,timestamp,/*geom*/21);
        break;
      case 2:
        UNPACK_DECL(117,FZD_Modul,QDC1,/*geom*/7);
        break;
      case 3:
        UNPACK_DECL(118,FZD_Modul,QDC2,/*geom*/8);
        break;
      case 4:
        UNPACK_DECL(120,FZD_Modul,TDC1,/*geom*/5);
        break;
      case 5:
        UNPACK_DECL(122,FZD_Modul,Sca1,/*geom*/13);
        break;
      case 6:
        UNPACK_DECL(123,FZD_Modul,Sca2,/*geom*/14);
        break;
      case 7:
        UNPACK_DECL(124,FZD_Modul,Sca3,/*geom*/15);
        break;
      case 8:
        UNPACK_DECL(125,FZD_Modul,Sca4,/*geom*/16);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,CRATE::__unpack);

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
  // vme0 = CRATE(type=10,subtype=1);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(107,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)),vme0);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(107,CRATE,vme0,0);
      UNPACK_SUBEVENT_DECL(107,0,CRATE,vme0);
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
