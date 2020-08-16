/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EMPTY_32BIT_WORD_V775_FRS.
 *
 * Do not edit - automatically generated.
 */

// EMPTY_32BIT_WORD_V775_FRS(geom)
template<typename __data_src_t>
void EMPTY_32BIT_WORD_V775_FRS::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32]);
  // UINT32 header NOENCODE
  // {
    //  0_23: 0;
    // 24_26: 6;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_23 : 24; // 0..23
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 unnamed_0_23 : 24; // 0..23
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(178,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(175,header.unnamed_0_23,0);
  CHECK_BITS_EQUAL(176,header.unnamed_24_26,6);
  CHECK_BITS_EQUAL(177,header.geom,geom);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,EMPTY_32BIT_WORD_V775_FRS::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EMPTY_32BIT_WORD_V830_FRS.
 *
 * Do not edit - automatically generated.
 */

// EMPTY_32BIT_WORD_V830_FRS(geom)
template<typename __data_src_t>
void EMPTY_32BIT_WORD_V830_FRS::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32]);
  // UINT32 header NOENCODE
  // {
    //  0_26: 0x06000000;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_26 : 27; // 0..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_0_26 : 27; // 0..26
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(161,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(159,header.unnamed_0_26,0x06000000);
  CHECK_BITS_EQUAL(160,header.geom,geom);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,EMPTY_32BIT_WORD_V830_FRS::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V259_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V259_FRS(geom)
template<typename __data_src_t>
void VME_CAEN_V259_FRS::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_05: count;
    // 24_26: 2;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 6; // 0..5
      uint32 dummy_6_23 : 18;
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 dummy_6_23 : 18;
      uint32 count : 6; // 0..5
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(23,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(20,header.unnamed_24_26,2);
  CHECK_BITS_EQUAL(21,header.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(23,header.u32,0x00ffffc0);
  // list(0<=index<2)

  for (uint32 index = 0; index < (uint32) (2); ++index)
  {
    // UINT32 ch_data_pattern NOENCODE
    // {
      //  0_26: value;
      // 27_31: geom = MATCH(geom);
      // ENCODE(data[index],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 27; // 0..26
        uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 geom : 5; // 27..31
        uint32 value : 27; // 0..26
#endif
      };
      uint32  u32;
    } ch_data_pattern;
    READ_FROM_BUFFER_FULL(35,uint32 ,ch_data_pattern,ch_data_pattern.u32);
    CHECK_BITS_EQUAL(32,ch_data_pattern.geom,geom);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(34,index);
      __item.value = ch_data_pattern.value;
    }
  }
  // UINT32 eob
  // {
    // 24_26: 4;
    // 27_31: geom = MATCH(geom);
  // }
  READ_FROM_BUFFER_FULL(48,uint32 ,eob,eob.u32);
  CHECK_BITS_EQUAL(43,eob.unnamed_24_26,4);
  CHECK_BITS_EQUAL(44,eob.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(48,eob.u32,0x00ffffff);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V259_FRS::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V775_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V775_FRS(geom)
template<typename __data_src_t>
void VME_CAEN_V775_FRS::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA12_OVERFLOW data[32] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_05: count;
    // 16_23: crate;
    // 24_26: 2;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 6; // 0..5
      uint32 dummy_6_15 : 10;
      uint32 crate : 8; // 16..23
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 crate : 8; // 16..23
      uint32 dummy_6_15 : 10;
      uint32 count : 6; // 0..5
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(105,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(101,header.unnamed_24_26,2);
  CHECK_BITS_EQUAL(102,header.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(105,header.u32,0x0000ffc0);
  // list(0<=index<header.count)

  for (uint32 index = 0; index < (uint32) (header.count); ++index)
  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_11: value;
      //    12: overflow;
      //    13: underflow;
      //    14: valid;
      // 16_20: channel;
      // 24_26: 0;
      // 27_31: geom = MATCH(geom);
      // ENCODE(data[channel],(value=value,overflow=overflow));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 12; // 0..11
        uint32 overflow : 1; // 12
        uint32 underflow : 1; // 13
        uint32 valid : 1; // 14
        uint32 dummy_15 : 1;
        uint32 channel : 5; // 16..20
        uint32 dummy_21_23 : 3;
        uint32 unnamed_24_26 : 3; // 24..26
        uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 geom : 5; // 27..31
        uint32 unnamed_24_26 : 3; // 24..26
        uint32 dummy_21_23 : 3;
        uint32 channel : 5; // 16..20
        uint32 dummy_15 : 1;
        uint32 valid : 1; // 14
        uint32 underflow : 1; // 13
        uint32 overflow : 1; // 12
        uint32 value : 12; // 0..11
#endif
      };
      uint32  u32;
    } ch_data;
    READ_FROM_BUFFER_FULL(125,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(121,ch_data.unnamed_24_26,0);
    CHECK_BITS_EQUAL(122,ch_data.geom,geom);
    CHECK_UNNAMED_BITS_ZERO(125,ch_data.u32,0x00e08000);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(124,ch_data.channel);
      __item.value = ch_data.value;
      __item.overflow = ch_data.overflow;
    }
  }
  // UINT32 eob
  // {
    //  0_23: event_number;
    // 24_26: 4;
    // 27_31: geom = MATCH(geom);
  // }
  READ_FROM_BUFFER_FULL(143,uint32 ,eob,eob.u32);
  CHECK_BITS_EQUAL(139,eob.unnamed_24_26,4);
  CHECK_BITS_EQUAL(140,eob.geom,geom);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V775_FRS::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V830_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V830_FRS(geom)
template<typename __data_src_t>
void VME_CAEN_V830_FRS::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32]);
  // UINT32 header NOENCODE
  // {
    //  0_04: count;
    //  5_26: 0x00100000;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 5; // 0..4
      uint32 unnamed_5_26 : 22; // 5..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_5_26 : 22; // 5..26
      uint32 count : 5; // 0..4
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(65,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(63,header.unnamed_5_26,0x00100000);
  CHECK_BITS_EQUAL(64,header.geom,geom);
  // list(0<=index<header.count)

  for (uint32 index = 0; index < (uint32) (header.count); ++index)
  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_31: value;
      // ENCODE(data[index],(value=value));
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
    } ch_data;
    READ_FROM_BUFFER_FULL(73,uint32 ,ch_data,ch_data.u32);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(72,index);
      __item.value = ch_data.value;
    }
  }
  // UINT32 eob
  // {
    //  0_26: 0x04000000;
    // 27_31: geom = MATCH(geom);
  // }
  READ_FROM_BUFFER_FULL(80,uint32 ,eob,eob.u32);
  CHECK_BITS_EQUAL(78,eob.unnamed_0_26,0x04000000);
  CHECK_BITS_EQUAL(79,eob.geom,geom);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V830_FRS::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FRS_CRATE.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(FRS_CRATE)
template<typename __data_src_t>
void FRS_CRATE::__unpack(__data_src_t &__buffer)
{
  // select several

    // scaler0 = VME_CAEN_V830_FRS(geom=6);
    // pattern = VME_CAEN_V259_FRS(geom=5);
    // tdc0 = VME_CAEN_V775_FRS(geom=8);
    // tdc1 = VME_CAEN_V775_FRS(geom=9);
    // qdc0 = VME_CAEN_V775_FRS(geom=11);
    // adc0 = VME_CAEN_V775_FRS(geom=13);
    // dummy0 = EMPTY_32BIT_WORD_V830_FRS(geom=6);
    // dummy1 = EMPTY_32BIT_WORD_V775_FRS(geom=8);
    // dummy2 = EMPTY_32BIT_WORD_V775_FRS(geom=9);
    // dummy3 = EMPTY_32BIT_WORD_V775_FRS(geom=11);
    // dummy4 = EMPTY_32BIT_WORD_V775_FRS(geom=13);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_CAEN_V830_FRS scaler0: (s32) => (0xffffffe0,0x32000000)
    // optimized match 2: VME_CAEN_V259_FRS pattern: (s32) => (0xffffffc0,0x2a000000)
    // optimized match 3: VME_CAEN_V775_FRS tdc0: (s32) => (0xff00ffc0,0x42000000)
    // optimized match 4: VME_CAEN_V775_FRS tdc1: (s32) => (0xff00ffc0,0x4a000000)
    // optimized match 5: VME_CAEN_V775_FRS qdc0: (s32) => (0xff00ffc0,0x5a000000)
    // optimized match 6: VME_CAEN_V775_FRS adc0: (s32) => (0xff00ffc0,0x6a000000)
    // optimized match 7: EMPTY_32BIT_WORD_V830_FRS dummy0: (s32) => (0xffffffff,0x36000000)
    // optimized match 8: EMPTY_32BIT_WORD_V775_FRS dummy1: (s32) => (0xffffffff,0x46000000)
    // optimized match 9: EMPTY_32BIT_WORD_V775_FRS dummy2: (s32) => (0xffffffff,0x4e000000)
    // optimized match 10: EMPTY_32BIT_WORD_V775_FRS dummy3: (s32) => (0xffffffff,0x5e000000)
    // optimized match 11: EMPTY_32BIT_WORD_V775_FRS dummy4: (s32) => (0xffffffff,0x6e000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(213,uint32,__match_peek);
    // differ = 7c000000 : 26 27 28 29 30
    uint32 __match_index = 0 | /* 26,30 */ ((__match_peek >> 26) & 0x0000001f);
    static const sint8 __match_index_array[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1, 7, 0, 0, 3, 8, 4, 9, 0, 0, 5, 10, 0, 0, 6, 11, 0, 0, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(198,VME_CAEN_V830_FRS,scaler0,/*geom*/6);
        break;
      case 2:
        UNPACK_DECL(199,VME_CAEN_V259_FRS,pattern,/*geom*/5);
        break;
      case 3:
        UNPACK_DECL(200,VME_CAEN_V775_FRS,tdc0,/*geom*/8);
        break;
      case 4:
        UNPACK_DECL(201,VME_CAEN_V775_FRS,tdc1,/*geom*/9);
        break;
      case 5:
        UNPACK_DECL(202,VME_CAEN_V775_FRS,qdc0,/*geom*/11);
        break;
      case 6:
        UNPACK_DECL(203,VME_CAEN_V775_FRS,adc0,/*geom*/13);
        break;
      case 7:
        UNPACK_DECL(208,EMPTY_32BIT_WORD_V830_FRS,dummy0,/*geom*/6);
        break;
      case 8:
        UNPACK_DECL(209,EMPTY_32BIT_WORD_V775_FRS,dummy1,/*geom*/8);
        break;
      case 9:
        UNPACK_DECL(210,EMPTY_32BIT_WORD_V775_FRS,dummy2,/*geom*/9);
        break;
      case 10:
        UNPACK_DECL(211,EMPTY_32BIT_WORD_V775_FRS,dummy3,/*geom*/11);
        break;
      case 11:
        UNPACK_DECL(212,EMPTY_32BIT_WORD_V775_FRS,dummy4,/*geom*/13);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,FRS_CRATE::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TPC_CRATE.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TPC_CRATE)
template<typename __data_src_t>
void TPC_CRATE::__unpack(__data_src_t &__buffer)
{
  // select several

    // tdc0 = VME_CAEN_V775_FRS(geom=8);
    // tdc1 = VME_CAEN_V775_FRS(geom=9);
    // adc0 = VME_CAEN_V775_FRS(geom=16);
    // adc1 = VME_CAEN_V775_FRS(geom=17);
    // scaler0 = VME_CAEN_V830_FRS(geom=5);
    // dummy0 = EMPTY_32BIT_WORD_V830_FRS(geom=5);
    // dummy1 = EMPTY_32BIT_WORD_V775_FRS(geom=8);
    // dummy2 = EMPTY_32BIT_WORD_V775_FRS(geom=9);
    // dummy3 = EMPTY_32BIT_WORD_V775_FRS(geom=16);
    // dummy4 = EMPTY_32BIT_WORD_V775_FRS(geom=17);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_CAEN_V775_FRS tdc0: (s32) => (0xff00ffc0,0x42000000)
    // optimized match 2: VME_CAEN_V775_FRS tdc1: (s32) => (0xff00ffc0,0x4a000000)
    // optimized match 3: VME_CAEN_V775_FRS adc0: (s32) => (0xff00ffc0,0x82000000)
    // optimized match 4: VME_CAEN_V775_FRS adc1: (s32) => (0xff00ffc0,0x8a000000)
    // optimized match 5: VME_CAEN_V830_FRS scaler0: (s32) => (0xffffffe0,0x2a000000)
    // optimized match 6: EMPTY_32BIT_WORD_V830_FRS dummy0: (s32) => (0xffffffff,0x2e000000)
    // optimized match 7: EMPTY_32BIT_WORD_V775_FRS dummy1: (s32) => (0xffffffff,0x46000000)
    // optimized match 8: EMPTY_32BIT_WORD_V775_FRS dummy2: (s32) => (0xffffffff,0x4e000000)
    // optimized match 9: EMPTY_32BIT_WORD_V775_FRS dummy3: (s32) => (0xffffffff,0x86000000)
    // optimized match 10: EMPTY_32BIT_WORD_V775_FRS dummy4: (s32) => (0xffffffff,0x8e000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(234,uint32,__match_peek);
    // differ = ec000000 : 26 27 29 30 31
    uint32 __match_index = 0 | /* 26,27 */ ((__match_peek >> 26) & 0x00000003) | /* 29,31 */ ((__match_peek >> 27) & 0x0000001c);
    static const sint8 __match_index_array[32] = { 0, 0, 0, 0, 0, 0, 5, 6, 1, 7, 2, 8, 0, 0, 0, 0, 3, 9, 4, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(223,VME_CAEN_V775_FRS,tdc0,/*geom*/8);
        break;
      case 2:
        UNPACK_DECL(224,VME_CAEN_V775_FRS,tdc1,/*geom*/9);
        break;
      case 3:
        UNPACK_DECL(225,VME_CAEN_V775_FRS,adc0,/*geom*/16);
        break;
      case 4:
        UNPACK_DECL(226,VME_CAEN_V775_FRS,adc1,/*geom*/17);
        break;
      case 5:
        UNPACK_DECL(227,VME_CAEN_V830_FRS,scaler0,/*geom*/5);
        break;
      case 6:
        UNPACK_DECL(228,EMPTY_32BIT_WORD_V830_FRS,dummy0,/*geom*/5);
        break;
      case 7:
        UNPACK_DECL(229,EMPTY_32BIT_WORD_V775_FRS,dummy1,/*geom*/8);
        break;
      case 8:
        UNPACK_DECL(230,EMPTY_32BIT_WORD_V775_FRS,dummy2,/*geom*/9);
        break;
      case 9:
        UNPACK_DECL(231,EMPTY_32BIT_WORD_V775_FRS,dummy3,/*geom*/16);
        break;
      case 10:
        UNPACK_DECL(232,EMPTY_32BIT_WORD_V775_FRS,dummy4,/*geom*/17);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,TPC_CRATE::__unpack);

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
  // vme0 = FRS_CRATE(type=10,subtype=1,procid=10);
  // vme1 = TPC_CRATE(type=10,subtype=1,procid=20);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(188,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_procid==10)),vme0);
  MATCH_SUBEVENT_DECL(189,__match_no,2,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_procid==20)),vme1);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(188,FRS_CRATE,vme0,0);
      UNPACK_SUBEVENT_DECL(188,0,FRS_CRATE,vme0);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(189,TPC_CRATE,vme1,1);
      UNPACK_SUBEVENT_DECL(189,0,TPC_CRATE,vme1);
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
