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
 * Event matcher for DUMMY_WORD.
 *
 * Do not edit - automatically generated.
 */

// DUMMY_WORD()
template<typename __data_src_t>
bool DUMMY_WORD::__match(__data_src_t &__buffer)
{
  // UINT32 dummy_word;
  uint32  __dummy_word;
  READ_FROM_BUFFER(866,uint32 ,__dummy_word);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,DUMMY_WORD::__match);

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
      uint32 dummy_7_26 : 20;
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
      uint32 dummy_7_26 : 20;
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
  READ_FROM_BUFFER_FULL(827,uint32 ,failure,__failure.u32);
  MATCH_UNNAMED_BITS_ZERO(827,__failure.u32,0x07ffff80);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,LAND_STD_VME::__match);

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
 * Event matcher for DUMMY_TDC.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(DUMMY_TDC)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for LAND_CAMAC_CONVERTER.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_CONVERTER)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for LAND_CAMAC_SCALER.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_SCALER)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for LAND_CAMAC_TCAL_INFO.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_TCAL_INFO)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for LAND_FASTBUS1.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_FASTBUS1)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for LAND_FASTBUS2.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_FASTBUS2)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for LAND_FASTBUS_ERROR.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_FASTBUS_ERROR)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for LAND_VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_VME)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
