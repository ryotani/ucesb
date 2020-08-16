/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FZD_data_SUBITEM.
 *
 * Do not edit - automatically generated.
 */

// FZD_data_SUBITEM(geo,data)
template<typename __data_src_t>
void FZD_data_SUBITEM::__unpack(__data_src_t &__buffer,uint32 geo,raw_array_zero_suppress<DATA32,DATA32,32> &data)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
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
  READ_FROM_BUFFER_FULL(19,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_RANGE_MAX(16,ch_data.channel,32);
  CHECK_BITS_EQUAL(15,ch_data.unnamed_29_29,0);
  CHECK_BITS_EQUAL(14,ch_data.unnamed_30_30,0);
  CHECK_BITS_EQUAL(13,ch_data.unnamed_31_31,0);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(18,ch_data.channel);
    __item.value = ch_data.data;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FZD_data_SUBITEM::__unpack,uint32 geo,raw_array_zero_suppress<DATA32,DATA32,32> &data);

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
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 1;
    //    30: 0;
    //    31: 0;
  // }
  READ_FROM_BUFFER_FULL(25,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(25,header.unnamed_0_23,0);
  CHECK_BITS_EQUAL(25,header.geom,geom);
  CHECK_BITS_EQUAL(25,header.unnamed_29_29,1);
  CHECK_BITS_EQUAL(25,header.unnamed_30_30,0);
  CHECK_BITS_EQUAL(25,header.unnamed_31_31,0);
  // select several

    // dummy = FZD_data_SUBITEM(geo=geom,data=data);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FZD_data_SUBITEM dummy: (s32) => (0xe0000000,0x00000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(29,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(28,spurious_match_abort_loop_0,FZD_data_SUBITEM,/*geo*/geom/*,data:member*/);
        UNPACK_DECL(28,FZD_data_SUBITEM,dummy,/*geo*/geom,/*data*/data);
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
  READ_FROM_BUFFER_FULL(30,uint32 ,EOB,EOB.u32);
  CHECK_BITS_EQUAL(30,EOB.unnamed_0_23,0);
  CHECK_BITS_EQUAL(30,EOB.geom,geom);
  CHECK_BITS_EQUAL(30,EOB.unnamed_29_29,0);
  CHECK_BITS_EQUAL(30,EOB.unnamed_30_30,1);
  CHECK_BITS_EQUAL(30,EOB.unnamed_31_31,0);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FZD_Modul::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FZD_V1495_MP.
 *
 * Do not edit - automatically generated.
 */

// FZD_V1495_MP(geom)
template<typename __data_src_t>
void FZD_V1495_MP::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 MP_FLAG[3] ZERO_SUPPRESS);
  // MEMBER(DATA32 Cy_FLAG[3] ZERO_SUPPRESS);
  // MEMBER(DATA32 ts[3] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 1;
    //    30: 0;
    //    31: 0;
  // }
  READ_FROM_BUFFER_FULL(38,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(38,header.unnamed_0_23,0);
  CHECK_BITS_EQUAL(38,header.geom,geom);
  CHECK_BITS_EQUAL(38,header.unnamed_29_29,1);
  CHECK_BITS_EQUAL(38,header.unnamed_30_30,0);
  CHECK_BITS_EQUAL(38,header.unnamed_31_31,0);
  // list(0<=index<3)

  for (uint32 index = 0; index < (uint32) (3); ++index)
  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_19: timestamp;
      //    20: flag4;
      //    21: flag3;
      //    22: Cyflag;
      //    23: MPflag;
      // 24_28: channel = RANGE(0,2);
      //    29: 0;
      //    30: 0;
      //    31: 0;
      // ENCODE(MP_FLAG[index],(value=MPflag));
      // ENCODE(Cy_FLAG[index],(value=Cyflag));
      // ENCODE(ts[index],(value=timestamp));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 timestamp : 20; // 0..19
        uint32 flag4 : 1; // 20
        uint32 flag3 : 1; // 21
        uint32 Cyflag : 1; // 22
        uint32 MPflag : 1; // 23
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
        uint32 MPflag : 1; // 23
        uint32 Cyflag : 1; // 22
        uint32 flag3 : 1; // 21
        uint32 flag4 : 1; // 20
        uint32 timestamp : 20; // 0..19
#endif
      };
      uint32  u32;
    } ch_data;
    READ_FROM_BUFFER_FULL(55,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_RANGE_MAX(46,ch_data.channel,2);
    CHECK_BITS_EQUAL(45,ch_data.unnamed_29_29,0);
    CHECK_BITS_EQUAL(44,ch_data.unnamed_30_30,0);
    CHECK_BITS_EQUAL(43,ch_data.unnamed_31_31,0);
    {
      typedef __typeof__(*(&(MP_FLAG))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = MP_FLAG.insert_index(52,index);
      __item.value = ch_data.MPflag;
    }
    {
      typedef __typeof__(*(&(Cy_FLAG))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = Cy_FLAG.insert_index(53,index);
      __item.value = ch_data.Cyflag;
    }
    {
      typedef __typeof__(*(&(ts))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts.insert_index(54,index);
      __item.value = ch_data.timestamp;
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
  READ_FROM_BUFFER_FULL(57,uint32 ,EOB,EOB.u32);
  CHECK_BITS_EQUAL(57,EOB.unnamed_0_23,0);
  CHECK_BITS_EQUAL(57,EOB.geom,geom);
  CHECK_BITS_EQUAL(57,EOB.unnamed_29_29,0);
  CHECK_BITS_EQUAL(57,EOB.unnamed_30_30,1);
  CHECK_BITS_EQUAL(57,EOB.unnamed_31_31,0);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FZD_V1495_MP::__unpack,uint32 geom);

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

    // MP = FZD_V1495_MP(geom=21);
    // QDC1 = FZD_Modul(geom=6);
    // QDC2 = FZD_Modul(geom=7);
    // QDC3 = FZD_Modul(geom=8);
    // QDC4 = FZD_Modul(geom=9);
    // TDC1 = FZD_Modul(geom=1);
    // TDC2 = FZD_Modul(geom=2);
    // TDC3 = FZD_Modul(geom=3);
    // Sca1 = FZD_Modul(geom=13);
    // Sca2 = FZD_Modul(geom=14);
    // Sca3 = FZD_Modul(geom=15);
    // Sca4 = FZD_Modul(geom=16);
    // Sca5 = FZD_Modul(geom=17);
    // Sca6 = FZD_Modul(geom=18);
    // Sca7 = FZD_Modul(geom=20);
    // time = FZD_Modul(geom=19);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FZD_V1495_MP MP: (s32) => (0xffffffff,0x35000000)
    // optimized match 2: FZD_Modul QDC1: (s32) => (0xffffffff,0x26000000)
    // optimized match 3: FZD_Modul QDC2: (s32) => (0xffffffff,0x27000000)
    // optimized match 4: FZD_Modul QDC3: (s32) => (0xffffffff,0x28000000)
    // optimized match 5: FZD_Modul QDC4: (s32) => (0xffffffff,0x29000000)
    // optimized match 6: FZD_Modul TDC1: (s32) => (0xffffffff,0x21000000)
    // optimized match 7: FZD_Modul TDC2: (s32) => (0xffffffff,0x22000000)
    // optimized match 8: FZD_Modul TDC3: (s32) => (0xffffffff,0x23000000)
    // optimized match 9: FZD_Modul Sca1: (s32) => (0xffffffff,0x2d000000)
    // optimized match 10: FZD_Modul Sca2: (s32) => (0xffffffff,0x2e000000)
    // optimized match 11: FZD_Modul Sca3: (s32) => (0xffffffff,0x2f000000)
    // optimized match 12: FZD_Modul Sca4: (s32) => (0xffffffff,0x30000000)
    // optimized match 13: FZD_Modul Sca5: (s32) => (0xffffffff,0x31000000)
    // optimized match 14: FZD_Modul Sca6: (s32) => (0xffffffff,0x32000000)
    // optimized match 15: FZD_Modul Sca7: (s32) => (0xffffffff,0x34000000)
    // optimized match 16: FZD_Modul time: (s32) => (0xffffffff,0x33000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(85,uint32,__match_peek);
    // differ = 1f000000 : 24 25 26 27 28
    uint32 __match_index = 0 | /* 24,28 */ ((__match_peek >> 24) & 0x0000001f);
    static const sint8 __match_index_array[32] = { 0, 6, 7, 8, 0, 0, 2, 3, 4, 5, 0, 0, 0, 9, 10, 11, 12, 13, 14, 16, 15, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(69,FZD_V1495_MP,MP,/*geom*/21);
        break;
      case 2:
        UNPACK_DECL(70,FZD_Modul,QDC1,/*geom*/6);
        break;
      case 3:
        UNPACK_DECL(71,FZD_Modul,QDC2,/*geom*/7);
        break;
      case 4:
        UNPACK_DECL(72,FZD_Modul,QDC3,/*geom*/8);
        break;
      case 5:
        UNPACK_DECL(73,FZD_Modul,QDC4,/*geom*/9);
        break;
      case 6:
        UNPACK_DECL(74,FZD_Modul,TDC1,/*geom*/1);
        break;
      case 7:
        UNPACK_DECL(75,FZD_Modul,TDC2,/*geom*/2);
        break;
      case 8:
        UNPACK_DECL(76,FZD_Modul,TDC3,/*geom*/3);
        break;
      case 9:
        UNPACK_DECL(77,FZD_Modul,Sca1,/*geom*/13);
        break;
      case 10:
        UNPACK_DECL(78,FZD_Modul,Sca2,/*geom*/14);
        break;
      case 11:
        UNPACK_DECL(79,FZD_Modul,Sca3,/*geom*/15);
        break;
      case 12:
        UNPACK_DECL(80,FZD_Modul,Sca4,/*geom*/16);
        break;
      case 13:
        UNPACK_DECL(81,FZD_Modul,Sca5,/*geom*/17);
        break;
      case 14:
        UNPACK_DECL(82,FZD_Modul,Sca6,/*geom*/18);
        break;
      case 15:
        UNPACK_DECL(83,FZD_Modul,Sca7,/*geom*/20);
        break;
      case 16:
        UNPACK_DECL(84,FZD_Modul,time,/*geom*/19);
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
  MATCH_SUBEVENT_DECL(62,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)),vme0);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(62,CRATE,vme0,0);
      UNPACK_SUBEVENT_DECL(62,0,CRATE,vme0);
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
