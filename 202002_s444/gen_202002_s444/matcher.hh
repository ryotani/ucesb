/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for BARRIER.
 *
 * Do not edit - automatically generated.
 */

// BARRIER()
template<typename __data_src_t>
bool BARRIER::__match(__data_src_t &__buffer)
{
  // UINT32 barrier
  // {
    //  0_31: 0xbabababa;
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
  } __barrier;
  READ_FROM_BUFFER_FULL(704,uint32 ,barrier,__barrier.u32);
  MATCH_BITS_EQUAL(703,__barrier.unnamed_0_31,0xbabababa);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,BARRIER::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for CAMAC_LECROY_4434.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_LECROY_4434(channels)
template<typename __data_src_t>
bool CAMAC_LECROY_4434::__match(__data_src_t &__buffer,uint32 channels)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS);
  // list(0<=index<channels)

  for (uint32 index = 0; index < (uint32) (channels); ++index)
  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_23: value;
      // 24_31: 0;
      // ENCODE(data[index],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 24; // 0..23
        uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_24_31 : 8; // 24..31
        uint32 value : 24; // 0..23
#endif
      };
      uint32  u32;
    } ch_data;
    READ_FROM_BUFFER_FULL(25,uint32 ,ch_data,ch_data.u32);
    MATCH_BITS_EQUAL(22,ch_data.unnamed_24_31,0);
    return true;
    return false;
  }
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,CAMAC_LECROY_4434::__match,uint32 channels);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for CAMAC_PHILLIPS_7164.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_PHILLIPS_7164(channels,mark_channel_no)
template<typename __data_src_t>
bool CAMAC_PHILLIPS_7164::__match(__data_src_t &__buffer,uint32 channels
                                                        ,uint32 mark_channel_no)
{
  // MEMBER(DATA12 data[16] ZERO_SUPPRESS);
  // list(0<=index<channels)

  for (uint32 index = 0; index < (uint32) (channels); ++index)
  {
    // if(mark_channel_no)

    // else

    if (mark_channel_no)
    {
      // UINT16 ch_data NOENCODE
      // {
        //  0_11: value;
        // 12_15: channel = CHECK(index);
        // ENCODE(data[index],(value=value));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint16 value : 12; // 0..11
          uint16 channel : 4; // 12..15
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint16 channel : 4; // 12..15
          uint16 value : 12; // 0..11
#endif
        };
        uint16  u16;
      } ch_data;
      READ_FROM_BUFFER_FULL(73,uint16 ,ch_data,ch_data.u16);
      MATCH_BITS_EQUAL(70,ch_data.channel,index);
      return true;
      return false;
    }

    else
    {
      // UINT16 ch_data NOENCODE
      // {
        //  0_11: value;
        // ENCODE(data[index],(value=value));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint16 value : 12; // 0..11
          uint16 dummy_12_15 : 4;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint16 dummy_12_15 : 4;
          uint16 value : 12; // 0..11
#endif
        };
        uint16  u16;
      } ch_data;
      READ_FROM_BUFFER_FULL(80,uint16 ,ch_data,ch_data.u16);
      MATCH_UNNAMED_BITS_ZERO(80,ch_data.u16,0xf000);
      return true;
      return false;
    }
    return false;
  }
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,CAMAC_PHILLIPS_7164::__match,uint32 channels
                                                             ,uint32 mark_channel_no);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for CAMAC_SILENA_4418.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_SILENA_4418(channels,mark_channel_no)
template<typename __data_src_t>
bool CAMAC_SILENA_4418::__match(__data_src_t &__buffer,uint32 channels,uint32 mark_channel_no)
{
  // MEMBER(DATA12_OVERFLOW data[8] ZERO_SUPPRESS);
  // list(0<=index<channels)

  for (uint32 index = 0; index < (uint32) (channels); ++index)
  {
    // if(mark_channel_no)

    // else

    if (mark_channel_no)
    {
      // UINT16 ch_data NOENCODE
      // {
        //  0_11: value;
        // 12_14: channel = CHECK(index);
        //    15: overflow;
        // ENCODE(data[index],(value=value,overflow=overflow));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint16 value : 12; // 0..11
          uint16 channel : 3; // 12..14
          uint16 overflow : 1; // 15
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint16 overflow : 1; // 15
          uint16 channel : 3; // 12..14
          uint16 value : 12; // 0..11
#endif
        };
        uint16  u16;
      } ch_data;
      READ_FROM_BUFFER_FULL(45,uint16 ,ch_data,ch_data.u16);
      MATCH_BITS_EQUAL(41,ch_data.channel,index);
      return true;
      return false;
    }

    else
    {
      // UINT16 ch_data NOENCODE
      // {
        //  0_11: value;
        //    15: overflow;
        // ENCODE(data[index],(value=value,overflow=overflow));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint16 value : 12; // 0..11
          uint16 dummy_12_14 : 3;
          uint16 overflow : 1; // 15
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint16 overflow : 1; // 15
          uint16 dummy_12_14 : 3;
          uint16 value : 12; // 0..11
#endif
        };
        uint16  u16;
      } ch_data;
      READ_FROM_BUFFER_FULL(53,uint16 ,ch_data,ch_data.u16);
      MATCH_UNNAMED_BITS_ZERO(53,ch_data.u16,0x7000);
      return true;
      return false;
    }
    return false;
  }
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,CAMAC_SILENA_4418::__match,uint32 channels
                                                           ,uint32 mark_channel_no);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FASTBUS_LECROY_1875.
 *
 * Do not edit - automatically generated.
 */

// FASTBUS_LECROY_1875(geom,channels)
template<typename __data_src_t>
bool FASTBUS_LECROY_1875::__match(__data_src_t &__buffer,uint32 geom,uint32 channels)
{
  // MEMBER(DATA12_RANGE data[64] ZERO_SUPPRESS);
  // UINT32 ch_data NOENCODE
  // {
    //  0_11: value;
    // 16_21: channel = RANGE(0,(channels - 1));
    //    23: range;
    // 24_26: n = CHECK(0);
    // 27_31: geom = MATCH(geom);
    // ENCODE(data[channel],(value=value,range=range));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 value : 12; // 0..11
      uint32 dummy_12_15 : 4;
      uint32 channel : 6; // 16..21
      uint32 dummy_22 : 1;
      uint32 range : 1; // 23
      uint32 n : 3; // 24..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 n : 3; // 24..26
      uint32 range : 1; // 23
      uint32 dummy_22 : 1;
      uint32 channel : 6; // 16..21
      uint32 dummy_12_15 : 4;
      uint32 value : 12; // 0..11
#endif
    };
    uint32  u32;
  } ch_data;
  READ_FROM_BUFFER_FULL(103,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_RANGE_MAX(96,ch_data.channel,(channels - 1));
  MATCH_BITS_EQUAL(99,ch_data.n,0);
  MATCH_BITS_EQUAL(100,ch_data.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(103,ch_data.u32,0x0040f000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,FASTBUS_LECROY_1875::__match,uint32 geom
                                                             ,uint32 channels);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FASTBUS_LECROY_1885.
 *
 * Do not edit - automatically generated.
 */

// FASTBUS_LECROY_1885(geom,channels)
template<typename __data_src_t>
bool FASTBUS_LECROY_1885::__match(__data_src_t &__buffer,uint32 geom,uint32 channels)
{
  // MEMBER(DATA12_RANGE data[96] ZERO_SUPPRESS);
  // UINT32 ch_data NOENCODE
  // {
    //  0_11: value;
    // 16_22: channel = RANGE(0,(channels - 1));
    //    23: range;
    // 24_26: n = CHECK(0);
    // 27_31: geom = MATCH(geom);
    // ENCODE(data[channel],(value=value,range=range));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 value : 12; // 0..11
      uint32 dummy_12_15 : 4;
      uint32 channel : 7; // 16..22
      uint32 range : 1; // 23
      uint32 n : 3; // 24..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 n : 3; // 24..26
      uint32 range : 1; // 23
      uint32 channel : 7; // 16..22
      uint32 dummy_12_15 : 4;
      uint32 value : 12; // 0..11
#endif
    };
    uint32  u32;
  } ch_data;
  READ_FROM_BUFFER_FULL(120,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_RANGE_MAX(114,ch_data.channel,(channels - 1));
  MATCH_BITS_EQUAL(116,ch_data.n,0);
  MATCH_BITS_EQUAL(117,ch_data.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(120,ch_data.u32,0x0000f000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,FASTBUS_LECROY_1885::__match,uint32 geom
                                                             ,uint32 channels);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FEBEX3_CALIFA_BASE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX3_CALIFA_BASE()
template<typename __data_src_t>
bool FEBEX3_CALIFA_BASE::__match(__data_src_t &__buffer)
{
  // MEMBER(DATA16 energy[2048] ZERO_SUPPRESS);
  // MEMBER(DATA32 ts_lsb[2048] ZERO_SUPPRESS);
  // MEMBER(DATA32 ts_msb[2048] ZERO_SUPPRESS);
  // MEMBER(DATA16 n_f[2048] ZERO_SUPPRESS);
  // MEMBER(DATA16 n_s[2048] ZERO_SUPPRESS);
  // MEMBER(DATA16 tot[2048] ZERO_SUPPRESS);
  // several UINT32 PADDING NOENCODE
  // {
    //  0_19: irrelevant;
    // 20_31: all = MATCH(0xadd);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 irrelevant : 20; // 0..19
      uint32 all : 12; // 20..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 all : 12; // 20..31
      uint32 irrelevant : 20; // 0..19
#endif
    };
    uint32  u32;
  } PADDING;
  if (__buffer.empty()) goto data_done_1;
  PEEK_FROM_BUFFER_FULL(1805,uint32 ,PADDING,PADDING.u32);
  MATCH_BITS_EQUAL(1804,PADDING.all,0xadd);
  __buffer.advance(sizeof(PADDING.u32));
  return true;
  data_done_1:;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FEBEX3_CALIFA_BASE::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FEBEX_BAD_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_BAD_EVENTHEADER()
template<typename __data_src_t>
bool FEBEX_BAD_EVENTHEADER::__match(__data_src_t &__buffer)
{
  // UINT32 badbad
  // {
    //  0_31: 0xbad00bad;
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
  } __badbad;
  READ_FROM_BUFFER_FULL(1072,uint32 ,badbad,__badbad.u32);
  MATCH_BITS_EQUAL(1071,__badbad.unnamed_0_31,0xbad00bad);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FEBEX_BAD_EVENTHEADER::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FEBEX_GOOD_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_GOOD_EVENTHEADER()
template<typename __data_src_t>
bool FEBEX_GOOD_EVENTHEADER::__match(__data_src_t &__buffer)
{
  // UINT32 febexcards
  // {
    //  0_07: n_febex_sfp0 = RANGE(0,64);
    //  8_15: n_febex_sfp1 = RANGE(0,64);
    // 16_23: n_febex_sfp2 = RANGE(0,64);
    // 24_31: n_febex_sfp3 = RANGE(0,64);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 n_febex_sfp0 : 8; // 0..7
      uint32 n_febex_sfp1 : 8; // 8..15
      uint32 n_febex_sfp2 : 8; // 16..23
      uint32 n_febex_sfp3 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 n_febex_sfp3 : 8; // 24..31
      uint32 n_febex_sfp2 : 8; // 16..23
      uint32 n_febex_sfp1 : 8; // 8..15
      uint32 n_febex_sfp0 : 8; // 0..7
#endif
    };
    uint32  u32;
  } __febexcards;
  READ_FROM_BUFFER_FULL(1082,uint32 ,febexcards,__febexcards.u32);
  MATCH_BITS_RANGE_MAX(1078,__febexcards.n_febex_sfp0,64);
  MATCH_BITS_RANGE_MAX(1079,__febexcards.n_febex_sfp1,64);
  MATCH_BITS_RANGE_MAX(1080,__febexcards.n_febex_sfp2,64);
  MATCH_BITS_RANGE_MAX(1081,__febexcards.n_febex_sfp3,64);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FEBEX_GOOD_EVENTHEADER::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FEBEX_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_EVENTHEADER()
template<typename __data_src_t>
bool FEBEX_EVENTHEADER::__match(__data_src_t &__buffer)
{
  // select

    // good = FEBEX_GOOD_EVENTHEADER();
    // bad = FEBEX_BAD_EVENTHEADER();
  do
  {
    int __match_no = 0;
    MATCH_DECL(1063,__match_no,1,FEBEX_GOOD_EVENTHEADER,good);
    MATCH_DECL(1064,__match_no,2,FEBEX_BAD_EVENTHEADER,bad);
    if (!__match_no) ERROR_U_LOC(1065,"No match for select statement.");
    return true;
  }
  while (0);
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FEBEX_EVENTHEADER::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FEBEX_NOTRACE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_NOTRACE(sfp,card)
template<typename __data_src_t>
bool FEBEX_NOTRACE::__match(__data_src_t &__buffer,uint32 sfp,uint32 card)
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
  READ_FROM_BUFFER_FULL(1127,uint32 ,indicator,indicator.u32);
  MATCH_BITS_EQUAL(1122,indicator.unnamed_0_7,52);
  MATCH_BITS_EQUAL(1124,indicator.sfp,sfp);
  MATCH_BITS_EQUAL(1125,indicator.card,card);
  MATCH_BITS_EQUAL(1126,indicator.unnamed_24_31,255);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,FEBEX_NOTRACE::__match,uint32 sfp,uint32 card);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FEBEX_PADDING.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_PADDING()
template<typename __data_src_t>
bool FEBEX_PADDING::__match(__data_src_t &__buffer)
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
  READ_FROM_BUFFER_FULL(1112,uint32 ,pads_data,pads_data.u32);
  MATCH_BITS_EQUAL(1111,pads_data.unnamed_20_31,0xadd);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FEBEX_PADDING::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FEBEX_TRACE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_TRACE(sfp,card)
template<typename __data_src_t>
bool FEBEX_TRACE::__match(__data_src_t &__buffer,uint32 sfp,uint32 card)
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
  READ_FROM_BUFFER_FULL(1187,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(1182,header.unnamed_0_7,52);
  MATCH_BITS_EQUAL(1184,header.sfp,sfp);
  MATCH_BITS_EQUAL(1185,header.card,card);
  MATCH_BITS_RANGE_MAX(1186,header.channel_id,254);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,FEBEX_TRACE::__match,uint32 sfp,uint32 card);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for GSI_CLOCKTDC_16PH_ITEM.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_16PH_ITEM(sfp,tdc)
template<typename __data_src_t>
bool GSI_CLOCKTDC_16PH_ITEM::__match(__data_src_t &__buffer,uint32 sfp,uint32 tdc)
{
  // MEMBER(DATA32 event_counter_lo32);
  // MEMBER(DATA32 event_counter_hi16);
  // MEMBER(DATA32 trigger_coarse_lo22);
  // MEMBER(DATA32 trigger_coarse_hi24);
  // MEMBER(DATA12 time_coarse[258] ZERO_SUPPRESS_MULTI(80));
  // MEMBER(DATA12 time_fine[258] ZERO_SUPPRESS_MULTI(80));
  // UINT32 header
  // {
    //  0_07: _0x34 = MATCH(52);
    //  8_11: trigger_type;
    // 12_15: sfp_id = MATCH(sfp);
    // 16_23: tdc_id = MATCH(tdc);
    // 24_31: channel_id;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 _0x34 : 8; // 0..7
      uint32 trigger_type : 4; // 8..11
      uint32 sfp_id : 4; // 12..15
      uint32 tdc_id : 8; // 16..23
      uint32 channel_id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 channel_id : 8; // 24..31
      uint32 tdc_id : 8; // 16..23
      uint32 sfp_id : 4; // 12..15
      uint32 trigger_type : 4; // 8..11
      uint32 _0x34 : 8; // 0..7
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(846,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(841,__header._0x34,52);
  MATCH_BITS_EQUAL(843,__header.sfp_id,sfp);
  MATCH_BITS_EQUAL(844,__header.tdc_id,tdc);
  // MATCH_END;
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,GSI_CLOCKTDC_16PH_ITEM::__match,uint32 sfp
                                                                ,uint32 tdc);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for GSI_CLOCKTDC_BAD00BAD.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_BAD00BAD()
template<typename __data_src_t>
bool GSI_CLOCKTDC_BAD00BAD::__match(__data_src_t &__buffer)
{
  // UINT32 bad00bad NOENCODE
  // {
    //  0_31: bad00bad = MATCH(0xbad00bad);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 bad00bad : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 bad00bad : 32; // 0..31
#endif
    };
    uint32  u32;
  } bad00bad;
  READ_FROM_BUFFER_FULL(712,uint32 ,bad00bad,bad00bad.u32);
  MATCH_BITS_EQUAL(711,bad00bad.bad00bad,0xbad00bad);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,GSI_CLOCKTDC_BAD00BAD::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for GSI_CLOCKTDC_FUSER.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_FUSER(a_sfp0_num,a_sfp1_num,a_sfp2_num,a_sfp3_num,
                   // ch_per_ctdc)
template<typename __data_src_t>
bool GSI_CLOCKTDC_FUSER::__match(__data_src_t &__buffer,uint32 a_sfp0_num
                                                       ,uint32 a_sfp1_num
                                                       ,uint32 a_sfp2_num
                                                       ,uint32 a_sfp3_num
                                                       ,uint32 ch_per_ctdc)
{
  // UINT32 slave_num
  // {
    //  0_07: sfp0_num = MATCH(a_sfp0_num);
    //  8_15: sfp1_num = MATCH(a_sfp1_num);
    // 16_23: sfp2_num = MATCH(a_sfp2_num);
    // 24_31: sfp3_num = MATCH(a_sfp3_num);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 sfp0_num : 8; // 0..7
      uint32 sfp1_num : 8; // 8..15
      uint32 sfp2_num : 8; // 16..23
      uint32 sfp3_num : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 sfp3_num : 8; // 24..31
      uint32 sfp2_num : 8; // 16..23
      uint32 sfp1_num : 8; // 8..15
      uint32 sfp0_num : 8; // 0..7
#endif
    };
    uint32  u32;
  } __slave_num;
  READ_FROM_BUFFER_FULL(722,uint32 ,slave_num,__slave_num.u32);
  MATCH_BITS_EQUAL(718,__slave_num.sfp0_num,a_sfp0_num);
  MATCH_BITS_EQUAL(719,__slave_num.sfp1_num,a_sfp1_num);
  MATCH_BITS_EQUAL(720,__slave_num.sfp2_num,a_sfp2_num);
  MATCH_BITS_EQUAL(721,__slave_num.sfp3_num,a_sfp3_num);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,GSI_CLOCKTDC_FUSER::__match,uint32 a_sfp0_num
                                                            ,uint32 a_sfp1_num
                                                            ,uint32 a_sfp2_num
                                                            ,uint32 a_sfp3_num
                                                            ,uint32 ch_per_ctdc);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for GSI_CLOCKTDC_ITEM.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_ITEM(sfp,tdc)
template<typename __data_src_t>
bool GSI_CLOCKTDC_ITEM::__match(__data_src_t &__buffer,uint32 sfp,uint32 tdc)
{
  // MEMBER(DATA32 event_counter_lo32);
  // MEMBER(DATA32 event_counter_hi16);
  // MEMBER(DATA32 trigger_coarse_lo22);
  // MEMBER(DATA32 trigger_coarse_hi24);
  // MEMBER(DATA12 time_coarse[258] ZERO_SUPPRESS_MULTI(80));
  // MEMBER(DATA12 time_fine[258] ZERO_SUPPRESS_MULTI(80));
  // UINT32 header
  // {
    //  0_07: _0x34 = MATCH(52);
    //  8_11: trigger_type;
    // 12_15: sfp_id = MATCH(sfp);
    // 16_23: tdc_id = MATCH(tdc);
    // 24_31: channel_id;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 _0x34 : 8; // 0..7
      uint32 trigger_type : 4; // 8..11
      uint32 sfp_id : 4; // 12..15
      uint32 tdc_id : 8; // 16..23
      uint32 channel_id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 channel_id : 8; // 24..31
      uint32 tdc_id : 8; // 16..23
      uint32 sfp_id : 4; // 12..15
      uint32 trigger_type : 4; // 8..11
      uint32 _0x34 : 8; // 0..7
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(758,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(753,__header._0x34,52);
  MATCH_BITS_EQUAL(755,__header.sfp_id,sfp);
  MATCH_BITS_EQUAL(756,__header.tdc_id,tdc);
  // MATCH_END;
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,GSI_CLOCKTDC_ITEM::__match,uint32 sfp,uint32 tdc);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for GSI_CLOCKTDC_PADDING.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_PADDING()
template<typename __data_src_t>
bool GSI_CLOCKTDC_PADDING::__match(__data_src_t &__buffer)
{
  // UINT32 padding NOENCODE
  // {
    //  0_19: whatever;
    // 20_31: 0xadd;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 whatever : 20; // 0..19
      uint32 unnamed_20_31 : 12; // 20..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_20_31 : 12; // 20..31
      uint32 whatever : 20; // 0..19
#endif
    };
    uint32  u32;
  } padding;
  READ_FROM_BUFFER_FULL(734,uint32 ,padding,padding.u32);
  MATCH_BITS_EQUAL(733,padding.unnamed_20_31,0xadd);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,GSI_CLOCKTDC_PADDING::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for LAND_STD_VME.
 *
 * Do not edit - automatically generated.
 */

// LAND_STD_VME()
template<typename __data_src_t>
bool LAND_STD_VME::__match(__data_src_t &__buffer)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 fail_general : 1; // 0
      uint32 fail_data_corrupt : 1; // 1
      uint32 fail_data_missing : 1; // 2
      uint32 fail_data_too_much : 1; // 3
      uint32 fail_event_counter_mismatch : 1; // 4
      uint32 fail_readout_error_driver : 1; // 5
      uint32 fail_unexpected_trigger : 1; // 6
      uint32 fail_firmware_mismatch : 1; // 7
      uint32 dummy_8_21 : 14;
      uint32 has_multi_trlo_ii_counter0 : 1; // 22
      uint32 has_clock_counter_stamp : 1; // 23
      uint32 has_continous_event_counter : 1; // 24
      uint32 has_update_qdc_iped_value : 1; // 25
      uint32 spurious_start_before_tcal : 1; // 26
      uint32 has_no_zero_suppression : 1; // 27
      uint32 has_multi_adctdc_counter0 : 1; // 28
      uint32 has_multi_scaler_counter0 : 1; // 29
      uint32 has_multi_event : 1; // 30
      uint32 has_time_stamp : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 has_time_stamp : 1; // 31
      uint32 has_multi_event : 1; // 30
      uint32 has_multi_scaler_counter0 : 1; // 29
      uint32 has_multi_adctdc_counter0 : 1; // 28
      uint32 has_no_zero_suppression : 1; // 27
      uint32 spurious_start_before_tcal : 1; // 26
      uint32 has_update_qdc_iped_value : 1; // 25
      uint32 has_continous_event_counter : 1; // 24
      uint32 has_clock_counter_stamp : 1; // 23
      uint32 has_multi_trlo_ii_counter0 : 1; // 22
      uint32 dummy_8_21 : 14;
      uint32 fail_firmware_mismatch : 1; // 7
      uint32 fail_unexpected_trigger : 1; // 6
      uint32 fail_readout_error_driver : 1; // 5
      uint32 fail_event_counter_mismatch : 1; // 4
      uint32 fail_data_too_much : 1; // 3
      uint32 fail_data_missing : 1; // 2
      uint32 fail_data_corrupt : 1; // 1
      uint32 fail_general : 1; // 0
#endif
    };
    uint32  u32;
  } __failure;
  READ_FROM_BUFFER_FULL(1266,uint32 ,failure,__failure.u32);
  MATCH_UNNAMED_BITS_ZERO(1266,__failure.u32,0x003fff00);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,LAND_STD_VME::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for MEGA_PULSER.
 *
 * Do not edit - automatically generated.
 */

// MEGA_PULSER()
template<typename __data_src_t>
bool MEGA_PULSER::__match(__data_src_t &__buffer)
{
  // UINT32 mega;
  uint32  __mega;
  READ_FROM_BUFFER(1938,uint32 ,__mega);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,MEGA_PULSER::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX3_FH_DATA.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_FH_DATA()
template<typename __data_src_t>
bool TAMEX3_FH_DATA::__match(__data_src_t &__buffer)
{
  // MEMBER(DATA12 time_coarse[34] ZERO_SUPPRESS_MULTI(256));
  // MEMBER(DATA12 time_fine[34] ZERO_SUPPRESS_MULTI(256));
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
  READ_FROM_BUFFER_FULL(1003,uint32 ,data_size,data_size.u32);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TAMEX3_FH_DATA::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX3_FH_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_FH_SFP(sfp,card)
template<typename __data_src_t>
bool TAMEX3_FH_SFP::__match(__data_src_t &__buffer,uint32 sfp,uint32 card)
{
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
  READ_FROM_BUFFER_FULL(1052,uint32 ,indicator,indicator.u32);
  MATCH_BITS_EQUAL(1047,indicator.unnamed_0_7,52);
  MATCH_BITS_EQUAL(1049,indicator.sfp,sfp);
  MATCH_BITS_EQUAL(1050,indicator.card,card);
  MATCH_BITS_EQUAL(1051,indicator.unnamed_24_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TAMEX3_FH_SFP::__match,uint32 sfp,uint32 card);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX3_PADDING.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_PADDING()
template<typename __data_src_t>
bool TAMEX3_PADDING::__match(__data_src_t &__buffer)
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
  READ_FROM_BUFFER_FULL(930,uint32 ,padding,padding.u32);
  MATCH_BITS_EQUAL(929,padding.unnamed_20_31,0xadd);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TAMEX3_PADDING::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX3_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_SFP(sfp,card)
template<typename __data_src_t>
bool TAMEX3_SFP::__match(__data_src_t &__buffer,uint32 sfp,uint32 card)
{
  // MEMBER(DATA12 time_coarse[34] ZERO_SUPPRESS_MULTI(256));
  // MEMBER(DATA12 time_fine[34] ZERO_SUPPRESS_MULTI(256));
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
  READ_FROM_BUFFER_FULL(945,uint32 ,indicator,indicator.u32);
  MATCH_BITS_EQUAL(940,indicator.unnamed_0_7,52);
  MATCH_BITS_EQUAL(942,indicator.sfp,sfp);
  MATCH_BITS_EQUAL(943,indicator.card,card);
  MATCH_BITS_EQUAL(944,indicator.unnamed_24_31,0);
  // MATCH_END;
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TAMEX3_SFP::__match,uint32 sfp,uint32 card);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX3_WINDOW.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_WINDOW()
template<typename __data_src_t>
bool TAMEX3_WINDOW::__match(__data_src_t &__buffer)
{
  // UINT32 trigger_window
  // {
    //  0_15: post_trig_ns;
    // 16_31: pre_trig_ns;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 post_trig_ns : 16; // 0..15
      uint32 pre_trig_ns : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 pre_trig_ns : 16; // 16..31
      uint32 post_trig_ns : 16; // 0..15
#endif
    };
    uint32  u32;
  } __trigger_window;
  READ_FROM_BUFFER_FULL(921,uint32 ,trigger_window,__trigger_window.u32);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TAMEX3_WINDOW::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TIMESTAMP_WHITERABBIT.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT(id)
template<typename __data_src_t>
bool TIMESTAMP_WHITERABBIT::__match(__data_src_t &__buffer,uint32 id)
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
  READ_FROM_BUFFER_FULL(1571,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(1566,header.id,id);
  MATCH_BITS_EQUAL(1567,header.unnamed_12_15,0);
  MATCH_BITS_EQUAL(1569,header.unnamed_17_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TIMESTAMP_WHITERABBIT::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLOII_LMU_SCALERS.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_LMU_SCALERS(id)
template<typename __data_src_t>
bool TRLOII_LMU_SCALERS::__match(__data_src_t &__buffer,uint32 id)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 before_lmu : 6; // 0..5
      uint32 before_lmu_mux : 5; // 6..10
      uint32 before_lmu_aux : 5; // 11..15
      uint32 after_lmu : 8; // 16..23
      uint32 id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 8; // 24..31
      uint32 after_lmu : 8; // 16..23
      uint32 before_lmu_aux : 5; // 11..15
      uint32 before_lmu_mux : 5; // 6..10
      uint32 before_lmu : 6; // 0..5
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(1317,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(1316,__header.id,id);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLOII_LMU_SCALERS::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLOII_SAMPLER.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER(mark)
template<typename __data_src_t>
bool TRLOII_SAMPLER::__match(__data_src_t &__buffer,uint32 mark)
{
  // MEMBER(DATA32 sampler[512] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_09: word_num;
    //    10: overflow;
    // 16_31: mark = MATCH(mark);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_num : 10; // 0..9
      uint32 overflow : 1; // 10
      uint32 dummy_11_15 : 5;
      uint32 mark : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 mark : 16; // 16..31
      uint32 dummy_11_15 : 5;
      uint32 overflow : 1; // 10
      uint32 word_num : 10; // 0..9
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(1363,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(1362,__header.mark,mark);
  MATCH_UNNAMED_BITS_ZERO(1363,__header.u32,0x0000f800);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLOII_SAMPLER::__match,uint32 mark);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLOII_SAMPLER_TWO.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER_TWO(mark)
template<typename __data_src_t>
bool TRLOII_SAMPLER_TWO::__match(__data_src_t &__buffer,uint32 mark)
{
  // MEMBER(DATA32 sampler_hi[512] ZERO_SUPPRESS);
  // MEMBER(DATA32 sampler_lo[512] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_09: word_num;
    //    10: overflow;
    // 16_31: mark = MATCH(mark);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_num : 10; // 0..9
      uint32 overflow : 1; // 10
      uint32 dummy_11_15 : 5;
      uint32 mark : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 mark : 16; // 16..31
      uint32 dummy_11_15 : 5;
      uint32 overflow : 1; // 10
      uint32 word_num : 10; // 0..9
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(1384,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(1383,__header.mark,mark);
  MATCH_UNNAMED_BITS_ZERO(1384,__header.u32,0x0000f800);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLOII_SAMPLER_TWO::__match,uint32 mark);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLOII_TPAT.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_TPAT(id)
template<typename __data_src_t>
bool TRLOII_TPAT::__match(__data_src_t &__buffer,uint32 id)
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
  READ_FROM_BUFFER_FULL(1420,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(1418,header.id,id);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLOII_TPAT::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1190_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
bool VME_CAEN_V1190_SUBTDC::__match(__data_src_t &__buffer,uint32 tdc,uint32 event_id)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(tdc_start);
  // UINT32 header
  // {
    //  0_11: bunch_id;
    // 12_23: event_id = CHECK(event_id);
    // 24_25: tdc = MATCH(tdc);
    // 27_31: 1;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 bunch_id : 12; // 0..11
      uint32 event_id : 12; // 12..23
      uint32 tdc : 2; // 24..25
      uint32 dummy_26 : 1;
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 dummy_26 : 1;
      uint32 tdc : 2; // 24..25
      uint32 event_id : 12; // 12..23
      uint32 bunch_id : 12; // 0..11
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(424,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(420,__header.event_id,event_id);
  MATCH_BITS_EQUAL(422,__header.tdc,tdc);
  MATCH_BITS_EQUAL(423,__header.unnamed_27_31,1);
  MATCH_UNNAMED_BITS_ZERO(424,__header.u32,0x04000000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1190_SUBTDC::__match,uint32 tdc
                                                               ,uint32 event_id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1190.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190(geom)
template<typename __data_src_t>
bool VME_CAEN_V1190::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geom : 5; // 0..4
      uint32 event_number : 22; // 5..26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 event_number : 22; // 5..26
      uint32 geom : 5; // 0..4
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(485,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(482,__header.geom,geom);
  MATCH_BITS_EQUAL(484,__header.unnamed_27_31,8);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1190::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1190_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SHORT_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
bool VME_CAEN_V1190_SHORT_SUBTDC::__match(__data_src_t &__buffer,uint32 tdc
                                                                ,uint32 event_id)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // UINT32 ch_data NOENCODE
  // {
    //  0_18: value;
    // 19_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 5) | channel_low)],(value=value));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 value : 19; // 0..18
      uint32 channel_low : 5; // 19..23
      uint32 tdc : 2; // 24..25
      uint32 trailing : 1; // 26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 trailing : 1; // 26
      uint32 tdc : 2; // 24..25
      uint32 channel_low : 5; // 19..23
      uint32 value : 19; // 0..18
#endif
    };
    uint32  u32;
  } ch_data;
  READ_FROM_BUFFER_FULL(548,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_EQUAL(533,ch_data.tdc,tdc);
  MATCH_BITS_EQUAL(538,ch_data.unnamed_27_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1190_SHORT_SUBTDC::__match,uint32 tdc
                                                                     ,uint32 event_id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1190_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SHORT_SUBTDC_ERROR(tdc)
template<typename __data_src_t>
bool VME_CAEN_V1190_SHORT_SUBTDC_ERROR::__match(__data_src_t &__buffer,uint32 tdc)
{
  // UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 flags : 15; // 0..14
      uint32 dummy_15_23 : 9;
      uint32 tdc : 2; // 24..25
      uint32 dummy_26 : 1;
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 dummy_26 : 1;
      uint32 tdc : 2; // 24..25
      uint32 dummy_15_23 : 9;
      uint32 flags : 15; // 0..14
#endif
    };
    uint32  u32;
  } __error_flags;
  READ_FROM_BUFFER_FULL(559,uint32 ,error_flags,__error_flags.u32);
  MATCH_BITS_EQUAL(557,__error_flags.tdc,tdc);
  MATCH_BITS_EQUAL(558,__error_flags.unnamed_27_31,4);
  MATCH_UNNAMED_BITS_ZERO(559,__error_flags.u32,0x04ff8000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1190_SHORT_SUBTDC_ERROR::__match,uint32 tdc);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1190_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SHORT(geom)
template<typename __data_src_t>
bool VME_CAEN_V1190_SHORT::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geom : 5; // 0..4
      uint32 event_number : 22; // 5..26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 event_number : 22; // 5..26
      uint32 geom : 5; // 0..4
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(574,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(571,__header.geom,geom);
  MATCH_BITS_EQUAL(573,__header.unnamed_27_31,8);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1190_SHORT::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1290_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
bool VME_CAEN_V1290_SUBTDC::__match(__data_src_t &__buffer,uint32 tdc,uint32 event_id)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(tdc_start);
  // UINT32 header
  // {
    //  0_11: bunch_id;
    // 12_23: event_id = CHECK(event_id);
    // 24_25: tdc = MATCH(tdc);
    // 27_31: 1;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 bunch_id : 12; // 0..11
      uint32 event_id : 12; // 12..23
      uint32 tdc : 2; // 24..25
      uint32 dummy_26 : 1;
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 dummy_26 : 1;
      uint32 tdc : 2; // 24..25
      uint32 event_id : 12; // 12..23
      uint32 bunch_id : 12; // 0..11
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(219,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(215,__header.event_id,event_id);
  MATCH_BITS_EQUAL(217,__header.tdc,tdc);
  MATCH_BITS_EQUAL(218,__header.unnamed_27_31,1);
  MATCH_UNNAMED_BITS_ZERO(219,__header.u32,0x04000000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1290_SUBTDC::__match,uint32 tdc
                                                               ,uint32 event_id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1290.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290(geom)
template<typename __data_src_t>
bool VME_CAEN_V1290::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geom : 5; // 0..4
      uint32 event_number : 22; // 5..26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 event_number : 22; // 5..26
      uint32 geom : 5; // 0..4
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(280,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(277,__header.geom,geom);
  MATCH_BITS_EQUAL(279,__header.unnamed_27_31,8);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1290::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1290_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SHORT_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
bool VME_CAEN_V1290_SHORT_SUBTDC::__match(__data_src_t &__buffer,uint32 tdc
                                                                ,uint32 event_id)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // UINT32 ch_data NOENCODE
  // {
    //  0_20: value;
    // 21_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 3) | channel_low)],(value=value));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 value : 21; // 0..20
      uint32 channel_low : 3; // 21..23
      uint32 tdc : 2; // 24..25
      uint32 trailing : 1; // 26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 trailing : 1; // 26
      uint32 tdc : 2; // 24..25
      uint32 channel_low : 3; // 21..23
      uint32 value : 21; // 0..20
#endif
    };
    uint32  u32;
  } ch_data;
  READ_FROM_BUFFER_FULL(343,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_EQUAL(323,ch_data.tdc,tdc);
  MATCH_BITS_EQUAL(333,ch_data.unnamed_27_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1290_SHORT_SUBTDC::__match,uint32 tdc
                                                                     ,uint32 event_id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1290_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SHORT_SUBTDC_ERROR(tdc)
template<typename __data_src_t>
bool VME_CAEN_V1290_SHORT_SUBTDC_ERROR::__match(__data_src_t &__buffer,uint32 tdc)
{
  // UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 flags : 15; // 0..14
      uint32 dummy_15_23 : 9;
      uint32 tdc : 2; // 24..25
      uint32 dummy_26 : 1;
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 dummy_26 : 1;
      uint32 tdc : 2; // 24..25
      uint32 dummy_15_23 : 9;
      uint32 flags : 15; // 0..14
#endif
    };
    uint32  u32;
  } __error_flags;
  READ_FROM_BUFFER_FULL(354,uint32 ,error_flags,__error_flags.u32);
  MATCH_BITS_EQUAL(352,__error_flags.tdc,tdc);
  MATCH_BITS_EQUAL(353,__error_flags.unnamed_27_31,4);
  MATCH_UNNAMED_BITS_ZERO(354,__error_flags.u32,0x04ff8000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1290_SHORT_SUBTDC_ERROR::__match,uint32 tdc);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1290_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SHORT(geom)
template<typename __data_src_t>
bool VME_CAEN_V1290_SHORT::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geom : 5; // 0..4
      uint32 event_number : 22; // 5..26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 event_number : 22; // 5..26
      uint32 geom : 5; // 0..4
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(369,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(366,__header.geom,geom);
  MATCH_BITS_EQUAL(368,__header.unnamed_27_31,8);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1290_SHORT::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V775.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V775(geom,crate)
template<typename __data_src_t>
bool VME_CAEN_V775::__match(__data_src_t &__buffer,uint32 geom,uint32 crate)
{
  // MEMBER(DATA12_OVERFLOW data[32] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  8_13: count;
    // 16_23: crate = MATCH(crate);
    // 24_26: 2;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 dummy_0_7 : 8;
      uint32 count : 6; // 8..13
      uint32 dummy_14_15 : 2;
      uint32 crate : 8; // 16..23
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 crate : 8; // 16..23
      uint32 dummy_14_15 : 2;
      uint32 count : 6; // 8..13
      uint32 dummy_0_7 : 8;
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(138,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(135,header.crate,crate);
  MATCH_BITS_EQUAL(136,header.unnamed_24_26,2);
  MATCH_BITS_EQUAL(137,header.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(138,header.u32,0x0000c0ff);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V775::__match,uint32 geom,uint32 crate);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V830.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V830(geom)
template<typename __data_src_t>
bool VME_CAEN_V830::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_15: event_number;
    // 16_17: ts;
    // 18_23: count;
    //    26: 1;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 event_number : 16; // 0..15
      uint32 ts : 2; // 16..17
      uint32 count : 6; // 18..23
      uint32 dummy_24_25 : 2;
      uint32 unnamed_26_26 : 1; // 26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_26_26 : 1; // 26
      uint32 dummy_24_25 : 2;
      uint32 count : 6; // 18..23
      uint32 ts : 2; // 16..17
      uint32 event_number : 16; // 0..15
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(186,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(184,__header.unnamed_26_26,1);
  MATCH_BITS_EQUAL(185,__header.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(186,__header.u32,0x03000000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V830::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_GSI_VFTX2.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2(id)
template<typename __data_src_t>
bool VME_GSI_VFTX2::__match(__data_src_t &__buffer,uint32 id)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 5; // 0..4
      uint32 internal_status : 4; // 5..8
      uint32 count : 9; // 9..17
      uint32 dummy_18_23 : 6;
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 dummy_18_23 : 6;
      uint32 count : 9; // 9..17
      uint32 internal_status : 4; // 5..8
      uint32 id : 5; // 0..4
#endif
    };
    uint32  u32;
  } __custom_header;
  READ_FROM_BUFFER_FULL(1455,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(1451,__custom_header.id,id);
  MATCH_BITS_EQUAL(1454,__custom_header.unnamed_24_31,171);
  MATCH_UNNAMED_BITS_ZERO(1455,__custom_header.u32,0x00fc0000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_GSI_VFTX2::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_GSI_VFTX2_7PS.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_7PS(id)
template<typename __data_src_t>
bool VME_GSI_VFTX2_7PS::__match(__data_src_t &__buffer,uint32 id)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 5; // 0..4
      uint32 internal_status : 4; // 5..8
      uint32 count : 9; // 9..17
      uint32 dummy_18_23 : 6;
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 dummy_18_23 : 6;
      uint32 count : 9; // 9..17
      uint32 internal_status : 4; // 5..8
      uint32 id : 5; // 0..4
#endif
    };
    uint32  u32;
  } __custom_header;
  READ_FROM_BUFFER_FULL(1530,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(1526,__custom_header.id,id);
  MATCH_BITS_EQUAL(1529,__custom_header.unnamed_24_31,171);
  MATCH_UNNAMED_BITS_ZERO(1530,__custom_header.u32,0x00fc0000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_GSI_VFTX2_7PS::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_GSI_VFTX2_LT.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_LT(id)
template<typename __data_src_t>
bool VME_GSI_VFTX2_LT::__match(__data_src_t &__buffer,uint32 id)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 5; // 0..4
      uint32 internal_status : 4; // 5..8
      uint32 count : 9; // 9..17
      uint32 dummy_18_23 : 6;
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 dummy_18_23 : 6;
      uint32 count : 9; // 9..17
      uint32 internal_status : 4; // 5..8
      uint32 id : 5; // 0..4
#endif
    };
    uint32  u32;
  } __custom_header;
  READ_FROM_BUFFER_FULL(1493,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(1489,__custom_header.id,id);
  MATCH_BITS_EQUAL(1492,__custom_header.unnamed_24_31,171);
  MATCH_UNNAMED_BITS_ZERO(1493,__custom_header.u32,0x00fc0000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_GSI_VFTX2_LT::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_MESYTEC_MADC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MADC32(geom)
template<typename __data_src_t>
bool VME_MESYTEC_MADC32::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA14_OVERFLOW data[32] ZERO_SUPPRESS);
  // MARK_COUNT(start);
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
  READ_FROM_BUFFER_FULL(625,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(622,header.geom,geom);
  MATCH_BITS_EQUAL(623,header.unnamed_24_29,0);
  MATCH_BITS_EQUAL(624,header.unnamed_30_31,1);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_MESYTEC_MADC32::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_MESYTEC_MDPP16.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MDPP16(geom)
template<typename __data_src_t>
bool VME_MESYTEC_MDPP16::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA16_OVERFLOW data[34] ZERO_SUPPRESS_MULTI(100));
  // MARK_COUNT(start);
  // UINT32 header NOENCODE
  // {
    //  0_09: word_number;
    // 10_12: adc_res;
    // 13_15: tdc_res;
    // 16_23: geom = MATCH(geom);
    // 24_29: 0;
    // 30_31: 1;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_number : 10; // 0..9
      uint32 adc_res : 3; // 10..12
      uint32 tdc_res : 3; // 13..15
      uint32 geom : 8; // 16..23
      uint32 unnamed_24_29 : 6; // 24..29
      uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_30_31 : 2; // 30..31
      uint32 unnamed_24_29 : 6; // 24..29
      uint32 geom : 8; // 16..23
      uint32 tdc_res : 3; // 13..15
      uint32 adc_res : 3; // 10..12
      uint32 word_number : 10; // 0..9
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(669,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(666,header.geom,geom);
  MATCH_BITS_EQUAL(667,header.unnamed_24_29,0);
  MATCH_BITS_EQUAL(668,header.unnamed_30_31,1);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_MESYTEC_MDPP16::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_MESYTEC_MQDC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MQDC32(geom)
template<typename __data_src_t>
bool VME_MESYTEC_MQDC32::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA12_OVERFLOW data[32] ZERO_SUPPRESS);
  // MARK_COUNT(start);
  // UINT32 header NOENCODE
  // {
    //  0_11: word_number;
    // 12_14: 0;
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
      uint32 unnamed_12_14 : 3; // 12..14
      uint32 dummy_15 : 1;
      uint32 geom : 8; // 16..23
      uint32 unnamed_24_29 : 6; // 24..29
      uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_30_31 : 2; // 30..31
      uint32 unnamed_24_29 : 6; // 24..29
      uint32 geom : 8; // 16..23
      uint32 dummy_15 : 1;
      uint32 unnamed_12_14 : 3; // 12..14
      uint32 word_number : 12; // 0..11
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(1706,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(1702,header.unnamed_12_14,0);
  MATCH_BITS_EQUAL(1703,header.geom,geom);
  MATCH_BITS_EQUAL(1704,header.unnamed_24_29,0);
  MATCH_BITS_EQUAL(1705,header.unnamed_30_31,1);
  MATCH_UNNAMED_BITS_ZERO(1706,header.u32,0x00008000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_MESYTEC_MQDC32::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_MESYTEC_MTDC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MTDC32(geom)
template<typename __data_src_t>
bool VME_MESYTEC_MTDC32::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA16 data[34] ZERO_SUPPRESS);
  // MARK_COUNT(start);
  // UINT32 header NOENCODE
  // {
    //  0_09: word_number;
    // 12_15: tdc_resol;
    // 16_23: geom = MATCH(geom);
    // 24_29: 0;
    // 30_31: 1;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_number : 10; // 0..9
      uint32 dummy_10_11 : 2;
      uint32 tdc_resol : 4; // 12..15
      uint32 geom : 8; // 16..23
      uint32 unnamed_24_29 : 6; // 24..29
      uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_30_31 : 2; // 30..31
      uint32 unnamed_24_29 : 6; // 24..29
      uint32 geom : 8; // 16..23
      uint32 tdc_resol : 4; // 12..15
      uint32 dummy_10_11 : 2;
      uint32 word_number : 10; // 0..9
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(1662,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(1659,header.geom,geom);
  MATCH_BITS_EQUAL(1660,header.unnamed_24_29,0);
  MATCH_BITS_EQUAL(1661,header.unnamed_30_31,1);
  MATCH_UNNAMED_BITS_ZERO(1662,header.u32,0x00000c00);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_MESYTEC_MTDC32::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_MESYTEC_VMMR8.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_VMMR8(geom)
template<typename __data_src_t>
bool VME_MESYTEC_VMMR8::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA12 data[512] ZERO_SUPPRESS_MULTI(20));
  // MARK_COUNT(start);
  // UINT32 header NOENCODE
  // {
    //  0_11: word_number;
    // 12_15: 0;
    // 16_23: geom = MATCH(geom);
    //    24: trig;
    // 25_29: 0;
    // 30_31: 1;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_number : 12; // 0..11
      uint32 unnamed_12_15 : 4; // 12..15
      uint32 geom : 8; // 16..23
      uint32 trig : 1; // 24
      uint32 unnamed_25_29 : 5; // 25..29
      uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_30_31 : 2; // 30..31
      uint32 unnamed_25_29 : 5; // 25..29
      uint32 trig : 1; // 24
      uint32 geom : 8; // 16..23
      uint32 unnamed_12_15 : 4; // 12..15
      uint32 word_number : 12; // 0..11
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(1751,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(1746,header.unnamed_12_15,0);
  MATCH_BITS_EQUAL(1747,header.geom,geom);
  MATCH_BITS_EQUAL(1749,header.unnamed_25_29,0);
  MATCH_BITS_EQUAL(1750,header.unnamed_30_31,1);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_MESYTEC_VMMR8::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_SIS_3820_SCALER.
 *
 * Do not edit - automatically generated.
 */

// VME_SIS_3820_SCALER(geom)
template<typename __data_src_t>
bool VME_SIS_3820_SCALER::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 custom_header NOENCODE
  // {
    //  0_15: nwords;
    // 16_18: mode;
    //    19: 0;
    // 20_25: data_format;
    //    26: 0;
    // 27_31: id = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 nwords : 16; // 0..15
      uint32 mode : 3; // 16..18
      uint32 unnamed_19_19 : 1; // 19
      uint32 data_format : 6; // 20..25
      uint32 unnamed_26_26 : 1; // 26
      uint32 id : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 5; // 27..31
      uint32 unnamed_26_26 : 1; // 26
      uint32 data_format : 6; // 20..25
      uint32 unnamed_19_19 : 1; // 19
      uint32 mode : 3; // 16..18
      uint32 nwords : 16; // 0..15
#endif
    };
    uint32  u32;
  } custom_header;
  READ_FROM_BUFFER_FULL(1624,uint32 ,custom_header,custom_header.u32);
  MATCH_BITS_EQUAL(1620,custom_header.unnamed_19_19,0);
  MATCH_BITS_EQUAL(1622,custom_header.unnamed_26_26,0);
  MATCH_BITS_EQUAL(1623,custom_header.id,geom);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_SIS_3820_SCALER::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for WR_MULTI.
 *
 * Do not edit - automatically generated.
 */

// WR_MULTI()
template<typename __data_src_t>
bool WR_MULTI::__match(__data_src_t &__buffer)
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
  READ_FROM_BUFFER_FULL(1602,uint32 ,hi,hi.u32);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,WR_MULTI::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for fibsipm_data.
 *
 * Do not edit - automatically generated.
 */

// fibsipm_data()
template<typename __data_src_t>
bool fibsipm_data::__match(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  CHECK_MATCH_DECL(2089,LAND_STD_VME,land_vme);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,fibsipm_data::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for neuland_sfp.
 *
 * Do not edit - automatically generated.
 */

// neuland_sfp(sfp)
template<typename __data_src_t>
bool neuland_sfp::__match(__data_src_t &__buffer,uint32 sfp)
{
  // select several

    // card[0] = TAMEX3_FH_SFP(sfp=sfp,card=0);
    // card[1] = TAMEX3_FH_SFP(sfp=sfp,card=1);
    // card[2] = TAMEX3_FH_SFP(sfp=sfp,card=2);
    // card[3] = TAMEX3_FH_SFP(sfp=sfp,card=3);
    // card[4] = TAMEX3_FH_SFP(sfp=sfp,card=4);
    // card[5] = TAMEX3_FH_SFP(sfp=sfp,card=5);
    // card[6] = TAMEX3_FH_SFP(sfp=sfp,card=6);
    // card[7] = TAMEX3_FH_SFP(sfp=sfp,card=7);
    // card[8] = TAMEX3_FH_SFP(sfp=sfp,card=8);
    // card[9] = TAMEX3_FH_SFP(sfp=sfp,card=9);
    // card[10] = TAMEX3_FH_SFP(sfp=sfp,card=10);
    // card[11] = TAMEX3_FH_SFP(sfp=sfp,card=11);
    // card[12] = TAMEX3_FH_SFP(sfp=sfp,card=12);
    // card[13] = TAMEX3_FH_SFP(sfp=sfp,card=13);
    // card[14] = TAMEX3_FH_SFP(sfp=sfp,card=14);
    // card[15] = TAMEX3_FH_SFP(sfp=sfp,card=15);
    // card[16] = TAMEX3_FH_SFP(sfp=sfp,card=16);
    // card[17] = TAMEX3_FH_SFP(sfp=sfp,card=17);
    // card[18] = TAMEX3_FH_SFP(sfp=sfp,card=18);
    // card[19] = TAMEX3_FH_SFP(sfp=sfp,card=19);
    // card[20] = TAMEX3_FH_SFP(sfp=sfp,card=20);
    // card[21] = TAMEX3_FH_SFP(sfp=sfp,card=21);
    // card[22] = TAMEX3_FH_SFP(sfp=sfp,card=22);
    // card[23] = TAMEX3_FH_SFP(sfp=sfp,card=23);
    // card[24] = TAMEX3_FH_SFP(sfp=sfp,card=24);
    // card[25] = TAMEX3_FH_SFP(sfp=sfp,card=25);
    // card[26] = TAMEX3_FH_SFP(sfp=sfp,card=26);
    // card[27] = TAMEX3_FH_SFP(sfp=sfp,card=27);
    // card[28] = TAMEX3_FH_SFP(sfp=sfp,card=28);
    // card[29] = TAMEX3_FH_SFP(sfp=sfp,card=29);
    // card[30] = TAMEX3_FH_SFP(sfp=sfp,card=30);
    // card[31] = TAMEX3_FH_SFP(sfp=sfp,card=31);
    // card[32] = TAMEX3_FH_SFP(sfp=sfp,card=32);
    // card[33] = TAMEX3_FH_SFP(sfp=sfp,card=33);
    // card[34] = TAMEX3_FH_SFP(sfp=sfp,card=34);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    MATCH_DECL(1960,__match_no,1,TAMEX3_FH_SFP,card[0],/*sfp*/sfp,/*card*/0);
    MATCH_DECL(1961,__match_no,2,TAMEX3_FH_SFP,card[1],/*sfp*/sfp,/*card*/1);
    MATCH_DECL(1962,__match_no,3,TAMEX3_FH_SFP,card[2],/*sfp*/sfp,/*card*/2);
    MATCH_DECL(1963,__match_no,4,TAMEX3_FH_SFP,card[3],/*sfp*/sfp,/*card*/3);
    MATCH_DECL(1964,__match_no,5,TAMEX3_FH_SFP,card[4],/*sfp*/sfp,/*card*/4);
    MATCH_DECL(1965,__match_no,6,TAMEX3_FH_SFP,card[5],/*sfp*/sfp,/*card*/5);
    MATCH_DECL(1966,__match_no,7,TAMEX3_FH_SFP,card[6],/*sfp*/sfp,/*card*/6);
    MATCH_DECL(1967,__match_no,8,TAMEX3_FH_SFP,card[7],/*sfp*/sfp,/*card*/7);
    MATCH_DECL(1968,__match_no,9,TAMEX3_FH_SFP,card[8],/*sfp*/sfp,/*card*/8);
    MATCH_DECL(1969,__match_no,10,TAMEX3_FH_SFP,card[9],/*sfp*/sfp,/*card*/9);
    MATCH_DECL(1970,__match_no,11,TAMEX3_FH_SFP,card[10],/*sfp*/sfp,/*card*/10);
    MATCH_DECL(1971,__match_no,12,TAMEX3_FH_SFP,card[11],/*sfp*/sfp,/*card*/11);
    MATCH_DECL(1972,__match_no,13,TAMEX3_FH_SFP,card[12],/*sfp*/sfp,/*card*/12);
    MATCH_DECL(1973,__match_no,14,TAMEX3_FH_SFP,card[13],/*sfp*/sfp,/*card*/13);
    MATCH_DECL(1974,__match_no,15,TAMEX3_FH_SFP,card[14],/*sfp*/sfp,/*card*/14);
    MATCH_DECL(1975,__match_no,16,TAMEX3_FH_SFP,card[15],/*sfp*/sfp,/*card*/15);
    MATCH_DECL(1976,__match_no,17,TAMEX3_FH_SFP,card[16],/*sfp*/sfp,/*card*/16);
    MATCH_DECL(1977,__match_no,18,TAMEX3_FH_SFP,card[17],/*sfp*/sfp,/*card*/17);
    MATCH_DECL(1978,__match_no,19,TAMEX3_FH_SFP,card[18],/*sfp*/sfp,/*card*/18);
    MATCH_DECL(1979,__match_no,20,TAMEX3_FH_SFP,card[19],/*sfp*/sfp,/*card*/19);
    MATCH_DECL(1980,__match_no,21,TAMEX3_FH_SFP,card[20],/*sfp*/sfp,/*card*/20);
    MATCH_DECL(1981,__match_no,22,TAMEX3_FH_SFP,card[21],/*sfp*/sfp,/*card*/21);
    MATCH_DECL(1982,__match_no,23,TAMEX3_FH_SFP,card[22],/*sfp*/sfp,/*card*/22);
    MATCH_DECL(1983,__match_no,24,TAMEX3_FH_SFP,card[23],/*sfp*/sfp,/*card*/23);
    MATCH_DECL(1984,__match_no,25,TAMEX3_FH_SFP,card[24],/*sfp*/sfp,/*card*/24);
    MATCH_DECL(1985,__match_no,26,TAMEX3_FH_SFP,card[25],/*sfp*/sfp,/*card*/25);
    MATCH_DECL(1986,__match_no,27,TAMEX3_FH_SFP,card[26],/*sfp*/sfp,/*card*/26);
    MATCH_DECL(1987,__match_no,28,TAMEX3_FH_SFP,card[27],/*sfp*/sfp,/*card*/27);
    MATCH_DECL(1988,__match_no,29,TAMEX3_FH_SFP,card[28],/*sfp*/sfp,/*card*/28);
    MATCH_DECL(1989,__match_no,30,TAMEX3_FH_SFP,card[29],/*sfp*/sfp,/*card*/29);
    MATCH_DECL(1990,__match_no,31,TAMEX3_FH_SFP,card[30],/*sfp*/sfp,/*card*/30);
    MATCH_DECL(1991,__match_no,32,TAMEX3_FH_SFP,card[31],/*sfp*/sfp,/*card*/31);
    MATCH_DECL(1992,__match_no,33,TAMEX3_FH_SFP,card[32],/*sfp*/sfp,/*card*/32);
    MATCH_DECL(1993,__match_no,34,TAMEX3_FH_SFP,card[33],/*sfp*/sfp,/*card*/33);
    MATCH_DECL(1994,__match_no,35,TAMEX3_FH_SFP,card[34],/*sfp*/sfp,/*card*/34);
    if (!__match_no) break;
    return true;
  }
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,neuland_sfp::__match,uint32 sfp);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for neuland_tamex_subev_data.
 *
 * Do not edit - automatically generated.
 */

// neuland_tamex_subev_data()
template<typename __data_src_t>
bool neuland_tamex_subev_data::__match(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  CHECK_MATCH_DECL(2000,LAND_STD_VME,land_vme);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,neuland_tamex_subev_data::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for s2_vme_subev_data.
 *
 * Do not edit - automatically generated.
 */

// s2_vme_subev_data()
template<typename __data_src_t>
bool s2_vme_subev_data::__match(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  CHECK_MATCH_DECL(2112,LAND_STD_VME,land_vme);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,s2_vme_subev_data::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for s8_vme_subev_data.
 *
 * Do not edit - automatically generated.
 */

// s8_vme_subev_data()
template<typename __data_src_t>
bool s8_vme_subev_data::__match(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  CHECK_MATCH_DECL(2144,LAND_STD_VME,land_vme);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,s8_vme_subev_data::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for sofia_mwpc_subev_data.
 *
 * Do not edit - automatically generated.
 */

// sofia_mwpc_subev_data()
template<typename __data_src_t>
bool sofia_mwpc_subev_data::__match(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  CHECK_MATCH_DECL(2044,LAND_STD_VME,land_vme);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,sofia_mwpc_subev_data::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for sofia_tof_subev_data.
 *
 * Do not edit - automatically generated.
 */

// sofia_tof_subev_data()
template<typename __data_src_t>
bool sofia_tof_subev_data::__match(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  CHECK_MATCH_DECL(2025,LAND_STD_VME,land_vme);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,sofia_tof_subev_data::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for sofia_trim_subev_data.
 *
 * Do not edit - automatically generated.
 */

// sofia_trim_subev_data()
template<typename __data_src_t>
bool sofia_trim_subev_data::__match(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  CHECK_MATCH_DECL(2074,LAND_STD_VME,land_vme);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,sofia_trim_subev_data::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for sofia_twim_subev_data.
 *
 * Do not edit - automatically generated.
 */

// sofia_twim_subev_data()
template<typename __data_src_t>
bool sofia_twim_subev_data::__match(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  CHECK_MATCH_DECL(2059,LAND_STD_VME,land_vme);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,sofia_twim_subev_data::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for CALIFA_MESSEL.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CALIFA_MESSEL)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for CALIFA_WIXHAUSEN.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CALIFA_WIXHAUSEN)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for fibsipm_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fibsipm_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for lmu_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(lmu_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for main_tpat_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(main_tpat_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for main_wr.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(main_wr)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for neuland_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(neuland_tamex_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for s2_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(s2_vme_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for s8_tpat_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(s8_tpat_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for s8_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(s8_vme_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for s8_wr.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(s8_wr)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for sofia_mwpc_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sofia_mwpc_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for sofia_sampler_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sofia_sampler_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for sofia_tof_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sofia_tof_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for sofia_trim_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sofia_trim_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for sofia_twim_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sofia_twim_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for sofia_wr.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sofia_wr)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for wr_neuland.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_neuland)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for wr_s2.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_s2)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
