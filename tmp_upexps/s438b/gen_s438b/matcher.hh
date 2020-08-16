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
    READ_FROM_BUFFER_FULL(27,uint32 ,ch_data,ch_data.u32);
    MATCH_BITS_EQUAL(24,ch_data.unnamed_24_31,0);
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
      READ_FROM_BUFFER_FULL(75,uint16 ,ch_data,ch_data.u16);
      MATCH_BITS_EQUAL(72,ch_data.channel,index);
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
      READ_FROM_BUFFER_FULL(82,uint16 ,ch_data,ch_data.u16);
      MATCH_UNNAMED_BITS_ZERO(82,ch_data.u16,0xf000);
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
      READ_FROM_BUFFER_FULL(47,uint16 ,ch_data,ch_data.u16);
      MATCH_BITS_EQUAL(43,ch_data.channel,index);
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
      READ_FROM_BUFFER_FULL(55,uint16 ,ch_data,ch_data.u16);
      MATCH_UNNAMED_BITS_ZERO(55,ch_data.u16,0x7000);
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
 * Event matcher for DAQ_STATUS.
 *
 * Do not edit - automatically generated.
 */

// DAQ_STATUS()
template<typename __data_src_t>
bool DAQ_STATUS::__match(__data_src_t &__buffer)
{
  // UINT32 spill_nr;
  uint32  __spill_nr;
  READ_FROM_BUFFER(2264,uint32 ,__spill_nr);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,DAQ_STATUS::__match);

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
  READ_FROM_BUFFER(2213,uint32 ,__dummy_word);
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
  READ_FROM_BUFFER_FULL(105,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_RANGE_MAX(98,ch_data.channel,(channels - 1));
  MATCH_BITS_EQUAL(101,ch_data.n,0);
  MATCH_BITS_EQUAL(102,ch_data.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(105,ch_data.u32,0x0040f000);
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
  READ_FROM_BUFFER_FULL(122,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_RANGE_MAX(116,ch_data.channel,(channels - 1));
  MATCH_BITS_EQUAL(118,ch_data.n,0);
  MATCH_BITS_EQUAL(119,ch_data.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(122,ch_data.u32,0x0000f000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,FASTBUS_LECROY_1885::__match,uint32 geom
                                                             ,uint32 channels);

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
  // UINT32 Identifier NOENCODE
  // {
    //  0_31: 0xfebe0000;
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
  } Identifier;
  READ_FROM_BUFFER_FULL(1400,uint32 ,Identifier,Identifier.u32);
  MATCH_BITS_EQUAL(1399,Identifier.unnamed_0_31,0xfebe0000);
  return true;
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
  // MEMBER(DATA8 Nhit[16]);
  // MEMBER(DATA12 t[16] ZERO_SUPPRESS_MULTI(10));
  // MEMBER(DATA32 E[16] ZERO_SUPPRESS_MULTI(10));
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
  READ_FROM_BUFFER_FULL(1435,uint32 ,indicator,indicator.u32);
  MATCH_BITS_EQUAL(1429,indicator.unnamed_0_7,52);
  MATCH_BITS_EQUAL(1431,indicator.sfp,sfp);
  MATCH_BITS_EQUAL(1432,indicator.card,card);
  MATCH_BITS_EQUAL(1433,indicator.unnamed_24_31,255);
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
  READ_FROM_BUFFER_FULL(1418,uint32 ,pads_data,pads_data.u32);
  MATCH_BITS_EQUAL(1417,pads_data.unnamed_20_31,0xadd);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FEBEX_PADDING::__match);

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
  READ_FROM_BUFFER_FULL(726,uint32 ,failure,__failure.u32);
  MATCH_UNNAMED_BITS_ZERO(726,__failure.u32,0x003fff00);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,LAND_STD_VME::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for NTP64_TIME.
 *
 * Do not edit - automatically generated.
 */

// NTP64_TIME()
template<typename __data_src_t>
bool NTP64_TIME::__match(__data_src_t &__buffer)
{
  // UINT32 sec;
  uint32  __sec;
  READ_FROM_BUFFER(788,uint32 ,__sec);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,NTP64_TIME::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for NTP_MESSAGE.
 *
 * Do not edit - automatically generated.
 */

// NTP_MESSAGE(id)
template<typename __data_src_t>
bool NTP_MESSAGE::__match(__data_src_t &__buffer,uint32 id)
{
  // UINT32 header
  // {
    //  0_15: word_count;
    //    16: quick_burst;
    // 24_31: id = MATCH(id);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_count : 16; // 0..15
      uint32 quick_burst : 1; // 16
      uint32 dummy_17_23 : 7;
      uint32 id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 8; // 24..31
      uint32 dummy_17_23 : 7;
      uint32 quick_burst : 1; // 16
      uint32 word_count : 16; // 0..15
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(800,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(799,__header.id,id);
  MATCH_UNNAMED_BITS_ZERO(800,__header.u32,0x00fe0000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,NTP_MESSAGE::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for NXYTER.
 *
 * Do not edit - automatically generated.
 */

// NXYTER(gem,nxy)
template<typename __data_src_t>
bool NXYTER::__match(__data_src_t &__buffer,uint32 gem,uint32 nxy)
{
  // MEMBER(DATA8 gemex);
  // MEMBER(DATA8 nxyter);
  // MEMBER(DATA8 err);
  // MEMBER(DATA16 trigger_counter_head);
  // MEMBER(DATA16 trigger_counter_foot);
  // MEMBER(DATA16 ts_epoch_trigger);
  // MEMBER(DATA12 channel[10000] NO_INDEX_LIST);
  // MEMBER(DATA12 adc[10000] NO_INDEX_LIST);
  // MEMBER(DATA16 ts_epoch_hit[10000] NO_INDEX_LIST);
  // MEMBER(DATA16 ts_nxy[10000] NO_INDEX_LIST);
  // UINT32 header1 NOENCODE
  // {
    //  0_07: 52;
    //  8_15: trigger_tp;
    // 16_23: id_gemex = MATCH(gem);
    // 24_31: id_nxyter = MATCH(nxy);
    // ENCODE(gemex,(value=id_gemex));
    // ENCODE(nxyter,(value=id_nxyter));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_7 : 8; // 0..7
      uint32 trigger_tp : 8; // 8..15
      uint32 id_gemex : 8; // 16..23
      uint32 id_nxyter : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id_nxyter : 8; // 24..31
      uint32 id_gemex : 8; // 16..23
      uint32 trigger_tp : 8; // 8..15
      uint32 unnamed_0_7 : 8; // 0..7
#endif
    };
    uint32  u32;
  } header1;
  READ_FROM_BUFFER_FULL(986,uint32 ,header1,header1.u32);
  MATCH_BITS_EQUAL(979,header1.unnamed_0_7,52);
  MATCH_BITS_EQUAL(981,header1.id_gemex,gem);
  MATCH_BITS_EQUAL(982,header1.id_nxyter,nxy);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,NXYTER::__match,uint32 gem,uint32 nxy);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for NXYTER_PADDING.
 *
 * Do not edit - automatically generated.
 */

// NXYTER_PADDING()
template<typename __data_src_t>
bool NXYTER_PADDING::__match(__data_src_t &__buffer)
{
  // UINT32 pads_data NOENCODE
  // {
    //  0_11: counter;
    // 12_19: 1;
    // 20_31: 0xadd;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 counter : 12; // 0..11
      uint32 unnamed_12_19 : 8; // 12..19
      uint32 unnamed_20_31 : 12; // 20..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_20_31 : 12; // 20..31
      uint32 unnamed_12_19 : 8; // 12..19
      uint32 counter : 12; // 0..11
#endif
    };
    uint32  u32;
  } pads_data;
  READ_FROM_BUFFER_FULL(959,uint32 ,pads_data,pads_data.u32);
  MATCH_BITS_EQUAL(957,pads_data.unnamed_12_19,1);
  MATCH_BITS_EQUAL(958,pads_data.unnamed_20_31,0xadd);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,NXYTER_PADDING::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for RANDOM_TCAL_TSTAMP_CLOCK.
 *
 * Do not edit - automatically generated.
 */

// RANDOM_TCAL_TSTAMP_CLOCK()
template<typename __data_src_t>
bool RANDOM_TCAL_TSTAMP_CLOCK::__match(__data_src_t &__buffer)
{
  // UINT32 soft_latches;
  uint32  __soft_latches;
  READ_FROM_BUFFER(856,uint32 ,__soft_latches);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,RANDOM_TCAL_TSTAMP_CLOCK::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for RANDOM_TCAL.
 *
 * Do not edit - automatically generated.
 */

// RANDOM_TCAL(id)
template<typename __data_src_t>
bool RANDOM_TCAL::__match(__data_src_t &__buffer,uint32 id)
{
  // UINT32 header
  // {
    //  0_07: word_count;
    //  8_11: pulses;
    // 12_17: clock_bits;
    //    18: has_tstamp1;
    //    19: has_tstamp2;
    // 24_31: id = MATCH(id);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_count : 8; // 0..7
      uint32 pulses : 4; // 8..11
      uint32 clock_bits : 6; // 12..17
      uint32 has_tstamp1 : 1; // 18
      uint32 has_tstamp2 : 1; // 19
      uint32 dummy_20_23 : 4;
      uint32 id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 8; // 24..31
      uint32 dummy_20_23 : 4;
      uint32 has_tstamp2 : 1; // 19
      uint32 has_tstamp1 : 1; // 18
      uint32 clock_bits : 6; // 12..17
      uint32 pulses : 4; // 8..11
      uint32 word_count : 8; // 0..7
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(877,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(876,__header.id,id);
  MATCH_UNNAMED_BITS_ZERO(877,__header.u32,0x00f00000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,RANDOM_TCAL::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for SIS3316_ACTAR_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_ACTAR_S438(id)
template<typename __data_src_t>
bool SIS3316_ACTAR_S438::__match(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 channel_header[128]);
  // MEMBER(DATA16 trace[40000] ZERO_SUPPRESS);
  // UINT32 custom_header
  // {
    //  0_07: id = MATCH(id);
    //  8_15: channel_num;
    // 16_31: 0x3316;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 8; // 0..7
      uint32 channel_num : 8; // 8..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 channel_num : 8; // 8..15
      uint32 id : 8; // 0..7
#endif
    };
    uint32  u32;
  } __custom_header;
  READ_FROM_BUFFER_FULL(1608,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(1605,__custom_header.id,id);
  MATCH_BITS_EQUAL(1607,__custom_header.unnamed_16_31,0x3316);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,SIS3316_ACTAR_S438::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for SIS3316_PSP_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_PSP_S438(id)
template<typename __data_src_t>
bool SIS3316_PSP_S438::__match(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 channel_header[128]);
  // MEMBER(DATA16 trace[16000] ZERO_SUPPRESS);
  // UINT32 custom_header
  // {
    //  0_07: id = MATCH(id);
    //  8_15: channel_num;
    // 16_31: 0x3316;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 8; // 0..7
      uint32 channel_num : 8; // 8..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 channel_num : 8; // 8..15
      uint32 id : 8; // 0..7
#endif
    };
    uint32  u32;
  } __custom_header;
  READ_FROM_BUFFER_FULL(1666,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(1663,__custom_header.id,id);
  MATCH_BITS_EQUAL(1665,__custom_header.unnamed_16_31,0x3316);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,SIS3316_PSP_S438::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for SIS3316_S2_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_S2_S438(id)
template<typename __data_src_t>
bool SIS3316_S2_S438::__match(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 channel_header[128]);
  // MEMBER(DATA16 trace[800] ZERO_SUPPRESS);
  // UINT32 custom_header
  // {
    //  0_07: id = MATCH(id);
    //  8_15: channel_num;
    // 16_31: 0x3316;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 8; // 0..7
      uint32 channel_num : 8; // 8..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 channel_num : 8; // 8..15
      uint32 id : 8; // 0..7
#endif
    };
    uint32  u32;
  } __custom_header;
  READ_FROM_BUFFER_FULL(1723,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(1720,__custom_header.id,id);
  MATCH_BITS_EQUAL(1722,__custom_header.unnamed_16_31,0x3316);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,SIS3316_S2_S438::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for SIS3316_S2_SCALERS_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_S2_SCALERS_S438()
template<typename __data_src_t>
bool SIS3316_S2_SCALERS_S438::__match(__data_src_t &__buffer)
{
  // MEMBER(DATA32 scalers[192]);
  // UINT32 custom_header
  // {
    //  0_31: 0x33161234;
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
  } __custom_header;
  READ_FROM_BUFFER_FULL(1794,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(1793,__custom_header.unnamed_0_31,0x33161234);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,SIS3316_S2_SCALERS_S438::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for SIS3316_SCALERS_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_SCALERS_S438()
template<typename __data_src_t>
bool SIS3316_SCALERS_S438::__match(__data_src_t &__buffer)
{
  // MEMBER(DATA32 scalers[480]);
  // UINT32 custom_header
  // {
    //  0_31: 0x33161234;
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
  } __custom_header;
  READ_FROM_BUFFER_FULL(1777,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(1776,__custom_header.unnamed_0_31,0x33161234);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,SIS3316_SCALERS_S438::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for SOFT_SCALER32.
 *
 * Do not edit - automatically generated.
 */

// SOFT_SCALER32(channels)
template<typename __data_src_t>
bool SOFT_SCALER32::__match(__data_src_t &__buffer,uint32 channels)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // list(0<=index<channels)

  for (uint32 index = 0; index < (uint32) (channels); ++index)
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
    READ_FROM_BUFFER_FULL(921,uint32 ,ch_data,ch_data.u32);
    return true;
    return false;
  }
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,SOFT_SCALER32::__match,uint32 channels);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TACQUILA_DATA.
 *
 * Do not edit - automatically generated.
 */

// TACQUILA_DATA(sam,gtb)
template<typename __data_src_t>
bool TACQUILA_DATA::__match(__data_src_t &__buffer,uint32 sam,uint32 gtb)
{
  // MEMBER(DATA12 tac[30][17] ZERO_SUPPRESS);
  // MEMBER(DATA12 adc[30][17] ZERO_SUPPRESS);
  // MEMBER(DATA12 clk[30][17] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_08: count;
    //  9_11: dummy1;
    // 12_15: trigger_tac = RANGE(0,1);
    // 16_19: trigger_sam = RANGE(1,2);
    // 20_23: lec;
    // 24_27: gtb = MATCH(gtb);
    // 28_31: sam = MATCH(sam);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 9; // 0..8
      uint32 dummy1 : 3; // 9..11
      uint32 trigger_tac : 4; // 12..15
      uint32 trigger_sam : 4; // 16..19
      uint32 lec : 4; // 20..23
      uint32 gtb : 4; // 24..27
      uint32 sam : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 sam : 4; // 28..31
      uint32 gtb : 4; // 24..27
      uint32 lec : 4; // 20..23
      uint32 trigger_sam : 4; // 16..19
      uint32 trigger_tac : 4; // 12..15
      uint32 dummy1 : 3; // 9..11
      uint32 count : 9; // 0..8
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(1092,uint32 ,header,__header.u32);
  MATCH_BITS_RANGE_MAX(1087,__header.trigger_tac,1);
  MATCH_BITS_RANGE(1088,__header.trigger_sam,1,2);
  MATCH_BITS_EQUAL(1090,__header.gtb,gtb);
  MATCH_BITS_EQUAL(1091,__header.sam,sam);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TACQUILA_DATA::__match,uint32 sam,uint32 gtb);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TACQUILA_DATA_S438B.
 *
 * Do not edit - automatically generated.
 */

// TACQUILA_DATA_S438B(sam,gtb)
template<typename __data_src_t>
bool TACQUILA_DATA_S438B::__match(__data_src_t &__buffer,uint32 sam,uint32 gtb)
{
  // MEMBER(DATA12 tac[30][32] ZERO_SUPPRESS);
  // MEMBER(DATA12 adc[30][17] ZERO_SUPPRESS);
  // MEMBER(DATA12 clk[30][17] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_08: count;
    //  9_11: dummy1;
    // 12_15: trigger_tac;
    // 16_19: trigger_sam = RANGE(1,2);
    // 20_23: lec;
    // 24_27: gtb = MATCH(gtb);
    // 28_31: sam = MATCH(sam);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 9; // 0..8
      uint32 dummy1 : 3; // 9..11
      uint32 trigger_tac : 4; // 12..15
      uint32 trigger_sam : 4; // 16..19
      uint32 lec : 4; // 20..23
      uint32 gtb : 4; // 24..27
      uint32 sam : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 sam : 4; // 28..31
      uint32 gtb : 4; // 24..27
      uint32 lec : 4; // 20..23
      uint32 trigger_sam : 4; // 16..19
      uint32 trigger_tac : 4; // 12..15
      uint32 dummy1 : 3; // 9..11
      uint32 count : 9; // 0..8
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(1513,uint32 ,header,__header.u32);
  MATCH_BITS_RANGE(1509,__header.trigger_sam,1,2);
  MATCH_BITS_EQUAL(1511,__header.gtb,gtb);
  MATCH_BITS_EQUAL(1512,__header.sam,sam);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TACQUILA_DATA_S438B::__match,uint32 sam
                                                             ,uint32 gtb);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX_CHANNEL.
 *
 * Do not edit - automatically generated.
 */

// TAMEX_CHANNEL(sfp,card)
template<typename __data_src_t>
bool TAMEX_CHANNEL::__match(__data_src_t &__buffer,uint32 sfp,uint32 card)
{
  // MEMBER(DATA32 type[128] ZERO_SUPPRESS);
  // MEMBER(DATA32 tdc[128] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp_index = MATCH(sfp);
    // 16_23: card_index = MATCH(card);
    // 24_31: channel_index = CHECK(0);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_7 : 8; // 0..7
      uint32 trigger_type : 4; // 8..11
      uint32 sfp_index : 4; // 12..15
      uint32 card_index : 8; // 16..23
      uint32 channel_index : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 channel_index : 8; // 24..31
      uint32 card_index : 8; // 16..23
      uint32 sfp_index : 4; // 12..15
      uint32 trigger_type : 4; // 8..11
      uint32 unnamed_0_7 : 8; // 0..7
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(1572,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(1567,__header.unnamed_0_7,52);
  MATCH_BITS_EQUAL(1569,__header.sfp_index,sfp);
  MATCH_BITS_EQUAL(1570,__header.card_index,card);
  MATCH_BITS_EQUAL(1571,__header.channel_index,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TAMEX_CHANNEL::__match,uint32 sfp,uint32 card);

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
  READ_FROM_BUFFER_FULL(1355,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(1350,header.id,id);
  MATCH_BITS_EQUAL(1351,header.unnamed_12_15,0);
  MATCH_BITS_EQUAL(1353,header.unnamed_17_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TIMESTAMP_WHITERABBIT::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRIDI.
 *
 * Do not edit - automatically generated.
 */

// TRIDI()
template<typename __data_src_t>
bool TRIDI::__match(__data_src_t &__buffer)
{
  // UINT32 header
  // {
    //  0_15: tpat;
    // 16_31: 0x3d00;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 tpat : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 tpat : 16; // 0..15
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(2221,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(2220,__header.unnamed_16_31,0x3d00);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TRIDI::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLO_SAMPLER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_SAMPLER(id)
template<typename __data_src_t>
bool TRLO_SAMPLER::__match(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 stamps[512] NO_INDEX_LIST);
  // UINT32 header
  // {
    //  0_09: count;
    // 24_31: id = MATCH(id);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 10; // 0..9
      uint32 dummy_10_23 : 14;
      uint32 id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 8; // 24..31
      uint32 dummy_10_23 : 14;
      uint32 count : 10; // 0..9
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(2251,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(2250,__header.id,id);
  MATCH_UNNAMED_BITS_ZERO(2251,__header.u32,0x00fffc00);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLO_SAMPLER::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLO_SCALER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_SCALER(crate_id)
template<typename __data_src_t>
bool TRLO_SCALER::__match(__data_src_t &__buffer,uint32 crate_id)
{
  // MEMBER(DATA32 stamps[16] NO_INDEX_LIST);
  // UINT32 header
  // {
    //  0_07: crate_id = MATCH(crate_id);
    //  8_31: 0x00721009;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 crate_id : 8; // 0..7
      uint32 unnamed_8_31 : 24; // 8..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_8_31 : 24; // 8..31
      uint32 crate_id : 8; // 0..7
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(2233,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(2231,__header.crate_id,crate_id);
  MATCH_BITS_EQUAL(2232,__header.unnamed_8_31,0x00721009);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLO_SCALER::__match,uint32 crate_id);

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
  READ_FROM_BUFFER_FULL(426,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(422,__header.event_id,event_id);
  MATCH_BITS_EQUAL(424,__header.tdc,tdc);
  MATCH_BITS_EQUAL(425,__header.unnamed_27_31,1);
  MATCH_UNNAMED_BITS_ZERO(426,__header.u32,0x04000000);
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
  READ_FROM_BUFFER_FULL(487,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(484,__header.geom,geom);
  MATCH_BITS_EQUAL(486,__header.unnamed_27_31,8);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1190::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1190_S438_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
bool VME_CAEN_V1190_S438_SUBTDC::__match(__data_src_t &__buffer,uint32 tdc
                                                               ,uint32 event_id)
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
  READ_FROM_BUFFER_FULL(2029,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(2025,__header.event_id,event_id);
  MATCH_BITS_EQUAL(2027,__header.tdc,tdc);
  MATCH_BITS_EQUAL(2028,__header.unnamed_27_31,1);
  MATCH_UNNAMED_BITS_ZERO(2029,__header.u32,0x04000000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1190_S438_SUBTDC::__match,uint32 tdc
                                                                    ,uint32 event_id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1190_S438.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438(geom)
template<typename __data_src_t>
bool VME_CAEN_V1190_S438::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // UINT32 ucesb_separator
  // {
    //  0_04: geom = MATCH(geom);
    // 24_31: 76;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geom : 5; // 0..4
      uint32 dummy_5_23 : 19;
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 dummy_5_23 : 19;
      uint32 geom : 5; // 0..4
#endif
    };
    uint32  u32;
  } __ucesb_separator;
  READ_FROM_BUFFER_FULL(2086,uint32 ,ucesb_separator,__ucesb_separator.u32);
  MATCH_BITS_EQUAL(2084,__ucesb_separator.geom,geom);
  MATCH_BITS_EQUAL(2085,__ucesb_separator.unnamed_24_31,76);
  MATCH_UNNAMED_BITS_ZERO(2086,__ucesb_separator.u32,0x00ffffe0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1190_S438::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1190_S438_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SHORT_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
bool VME_CAEN_V1190_S438_SHORT_SUBTDC::__match(__data_src_t &__buffer,uint32 tdc
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
  READ_FROM_BUFFER_FULL(2149,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_EQUAL(2135,ch_data.tdc,tdc);
  MATCH_BITS_EQUAL(2139,ch_data.unnamed_27_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1190_S438_SHORT_SUBTDC::__match,uint32 tdc
                                                                          ,uint32 event_id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR(tdc)
template<typename __data_src_t>
bool VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR::__match(__data_src_t &__buffer,uint32 tdc)
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
  READ_FROM_BUFFER_FULL(2160,uint32 ,error_flags,__error_flags.u32);
  MATCH_BITS_EQUAL(2158,__error_flags.tdc,tdc);
  MATCH_BITS_EQUAL(2159,__error_flags.unnamed_27_31,4);
  MATCH_UNNAMED_BITS_ZERO(2160,__error_flags.u32,0x04ff8000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR::__match,uint32 tdc);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1190_S438_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SHORT(geom)
template<typename __data_src_t>
bool VME_CAEN_V1190_S438_SHORT::__match(__data_src_t &__buffer,uint32 geom)
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
  READ_FROM_BUFFER_FULL(2175,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(2172,__header.geom,geom);
  MATCH_BITS_EQUAL(2174,__header.unnamed_27_31,8);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1190_S438_SHORT::__match,uint32 geom);

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
  READ_FROM_BUFFER_FULL(550,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_EQUAL(535,ch_data.tdc,tdc);
  MATCH_BITS_EQUAL(540,ch_data.unnamed_27_31,0);
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
  READ_FROM_BUFFER_FULL(561,uint32 ,error_flags,__error_flags.u32);
  MATCH_BITS_EQUAL(559,__error_flags.tdc,tdc);
  MATCH_BITS_EQUAL(560,__error_flags.unnamed_27_31,4);
  MATCH_UNNAMED_BITS_ZERO(561,__error_flags.u32,0x04ff8000);
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
  READ_FROM_BUFFER_FULL(576,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(573,__header.geom,geom);
  MATCH_BITS_EQUAL(575,__header.unnamed_27_31,8);
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
  READ_FROM_BUFFER_FULL(221,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(217,__header.event_id,event_id);
  MATCH_BITS_EQUAL(219,__header.tdc,tdc);
  MATCH_BITS_EQUAL(220,__header.unnamed_27_31,1);
  MATCH_UNNAMED_BITS_ZERO(221,__header.u32,0x04000000);
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
  READ_FROM_BUFFER_FULL(282,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(279,__header.geom,geom);
  MATCH_BITS_EQUAL(281,__header.unnamed_27_31,8);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1290::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1290_S438_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
bool VME_CAEN_V1290_S438_SUBTDC::__match(__data_src_t &__buffer,uint32 tdc
                                                               ,uint32 event_id)
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
  READ_FROM_BUFFER_FULL(1828,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(1824,__header.event_id,event_id);
  MATCH_BITS_EQUAL(1826,__header.tdc,tdc);
  MATCH_BITS_EQUAL(1827,__header.unnamed_27_31,1);
  MATCH_UNNAMED_BITS_ZERO(1828,__header.u32,0x04000000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1290_S438_SUBTDC::__match,uint32 tdc
                                                                    ,uint32 event_id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1290_S438.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438(geom)
template<typename __data_src_t>
bool VME_CAEN_V1290_S438::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // UINT32 ucesb_separator
  // {
    //  0_04: geom = MATCH(geom);
    // 24_31: 76;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geom : 5; // 0..4
      uint32 dummy_5_23 : 19;
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 dummy_5_23 : 19;
      uint32 geom : 5; // 0..4
#endif
    };
    uint32  u32;
  } __ucesb_separator;
  READ_FROM_BUFFER_FULL(1885,uint32 ,ucesb_separator,__ucesb_separator.u32);
  MATCH_BITS_EQUAL(1883,__ucesb_separator.geom,geom);
  MATCH_BITS_EQUAL(1884,__ucesb_separator.unnamed_24_31,76);
  MATCH_UNNAMED_BITS_ZERO(1885,__ucesb_separator.u32,0x00ffffe0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1290_S438::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1290_S438_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SHORT_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
bool VME_CAEN_V1290_S438_SHORT_SUBTDC::__match(__data_src_t &__buffer,uint32 tdc
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
  READ_FROM_BUFFER_FULL(1948,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_EQUAL(1929,ch_data.tdc,tdc);
  MATCH_BITS_EQUAL(1938,ch_data.unnamed_27_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1290_S438_SHORT_SUBTDC::__match,uint32 tdc
                                                                          ,uint32 event_id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR(tdc)
template<typename __data_src_t>
bool VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR::__match(__data_src_t &__buffer,uint32 tdc)
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
  READ_FROM_BUFFER_FULL(1959,uint32 ,error_flags,__error_flags.u32);
  MATCH_BITS_EQUAL(1957,__error_flags.tdc,tdc);
  MATCH_BITS_EQUAL(1958,__error_flags.unnamed_27_31,4);
  MATCH_UNNAMED_BITS_ZERO(1959,__error_flags.u32,0x04ff8000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR::__match,uint32 tdc);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1290_S438_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SHORT(geom)
template<typename __data_src_t>
bool VME_CAEN_V1290_S438_SHORT::__match(__data_src_t &__buffer,uint32 geom)
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
  READ_FROM_BUFFER_FULL(1974,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(1971,__header.geom,geom);
  MATCH_BITS_EQUAL(1973,__header.unnamed_27_31,8);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V1290_S438_SHORT::__match,uint32 geom);

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
  READ_FROM_BUFFER_FULL(345,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_EQUAL(325,ch_data.tdc,tdc);
  MATCH_BITS_EQUAL(335,ch_data.unnamed_27_31,0);
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
  READ_FROM_BUFFER_FULL(356,uint32 ,error_flags,__error_flags.u32);
  MATCH_BITS_EQUAL(354,__error_flags.tdc,tdc);
  MATCH_BITS_EQUAL(355,__error_flags.unnamed_27_31,4);
  MATCH_UNNAMED_BITS_ZERO(356,__error_flags.u32,0x04ff8000);
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
  READ_FROM_BUFFER_FULL(371,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(368,__header.geom,geom);
  MATCH_BITS_EQUAL(370,__header.unnamed_27_31,8);
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
  READ_FROM_BUFFER_FULL(140,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(137,header.crate,crate);
  MATCH_BITS_EQUAL(138,header.unnamed_24_26,2);
  MATCH_BITS_EQUAL(139,header.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(140,header.u32,0x0000c0ff);
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
  READ_FROM_BUFFER_FULL(188,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(186,__header.unnamed_26_26,1);
  MATCH_BITS_EQUAL(187,__header.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(188,__header.u32,0x03000000);
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
  READ_FROM_BUFFER_FULL(1149,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(1145,__custom_header.id,id);
  MATCH_BITS_EQUAL(1148,__custom_header.unnamed_24_31,171);
  MATCH_UNNAMED_BITS_ZERO(1149,__custom_header.u32,0x00fc0000);
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
  READ_FROM_BUFFER_FULL(1224,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(1220,__custom_header.id,id);
  MATCH_BITS_EQUAL(1223,__custom_header.unnamed_24_31,171);
  MATCH_UNNAMED_BITS_ZERO(1224,__custom_header.u32,0x00fc0000);
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
  READ_FROM_BUFFER_FULL(1187,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(1183,__custom_header.id,id);
  MATCH_BITS_EQUAL(1186,__custom_header.unnamed_24_31,171);
  MATCH_UNNAMED_BITS_ZERO(1187,__custom_header.u32,0x00fc0000);
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
  READ_FROM_BUFFER_FULL(627,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(624,header.geom,geom);
  MATCH_BITS_EQUAL(625,header.unnamed_24_29,0);
  MATCH_BITS_EQUAL(626,header.unnamed_30_31,1);
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
  READ_FROM_BUFFER_FULL(671,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(668,header.geom,geom);
  MATCH_BITS_EQUAL(669,header.unnamed_24_29,0);
  MATCH_BITS_EQUAL(670,header.unnamed_30_31,1);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_MESYTEC_MDPP16::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_STRUCK_SIS3316.
 *
 * Do not edit - automatically generated.
 */

// VME_STRUCK_SIS3316(id)
template<typename __data_src_t>
bool VME_STRUCK_SIS3316::__match(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA16 data[2][900] ZERO_SUPPRESS);
  // MEMBER(DATA32 maw[2][3] ZERO_SUPPRESS);
  // MEMBER(DATA32 timeStamp[2][2] ZERO_SUPPRESS);
  // MEMBER(DATA32 gate[2][2] ZERO_SUPPRESS);
  // UINT32 header0
  // {
    //  0_15: chanNo;
    // 16_31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 chanNo : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 chanNo : 16; // 0..15
#endif
    };
    uint32  u32;
  } __header0;
  READ_FROM_BUFFER_FULL(1267,uint32 ,header0,__header0.u32);
  MATCH_BITS_EQUAL(1266,__header0.unnamed_16_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_STRUCK_SIS3316::__match,uint32 id);

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
  READ_FROM_BUFFER_FULL(1386,uint32 ,hi,hi.u32);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,WR_MULTI::__match);

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
 * Event matcher for LAND_CAMAC_START_STOP_STAMP.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_START_STOP_STAMP)
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
 * Event matcher for TACQUILA_LAND_SUBEVENT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TACQUILA_LAND_SUBEVENT)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for califa_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(califa_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for daq_status_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(daq_status_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for empty_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(empty_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for fiber_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fiber_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for los_psp_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_psp_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for los_scaler_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_scaler_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for mark_event_time.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(mark_event_time)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for mfi_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(mfi_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for neuland_subevent.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(neuland_subevent)
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
 * Event matcher for psp_febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(psp_febex_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for psp_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(psp_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for sit_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sit_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for tof13_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tof13_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for tof13_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tof13_tamex_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for wr_100.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_100)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for wr_300.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_300)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for wr_500.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_500)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
