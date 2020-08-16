/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for CAEN_V775.
 *
 * Do not edit - automatically generated.
 */

// CAEN_V775(geom,crate)
template<typename __data_src_t>
bool CAEN_V775::__match(__data_src_t &__buffer,uint32 geom,uint32 crate)
{
  // MEMBER(DATA12_OVERFLOW data[32] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_07: undefined;
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
      uint32 undefined : 8; // 0..7
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
      uint32 undefined : 8; // 0..7
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(1033,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(1030,header.crate,crate);
  MATCH_BITS_EQUAL(1031,header.unnamed_24_26,2);
  MATCH_BITS_EQUAL(1032,header.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(1033,header.u32,0x0000c000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,CAEN_V775::__match,uint32 geom,uint32 crate);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for CAEN_V830_SCALER.
 *
 * Do not edit - automatically generated.
 */

// CAEN_V830_SCALER(id)
template<typename __data_src_t>
bool CAEN_V830_SCALER::__match(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 sc_header
  // {
    //  0_06: count = RANGE(0,31);
    // 24_31: id = MATCH(id);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 7; // 0..6
      uint32 dummy_7_23 : 17;
      uint32 id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 8; // 24..31
      uint32 dummy_7_23 : 17;
      uint32 count : 7; // 0..6
#endif
    };
    uint32  u32;
  } __sc_header;
  READ_FROM_BUFFER_FULL(995,uint32 ,sc_header,__sc_header.u32);
  MATCH_BITS_RANGE_MAX(993,__sc_header.count,31);
  MATCH_BITS_EQUAL(994,__sc_header.id,id);
  MATCH_UNNAMED_BITS_ZERO(995,__sc_header.u32,0x00ffff80);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,CAEN_V830_SCALER::__match,uint32 id);

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
    READ_FROM_BUFFER_FULL(23,uint32 ,ch_data,ch_data.u32);
    MATCH_BITS_EQUAL(20,ch_data.unnamed_24_31,0);
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
      READ_FROM_BUFFER_FULL(71,uint16 ,ch_data,ch_data.u16);
      MATCH_BITS_EQUAL(68,ch_data.channel,index);
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
      READ_FROM_BUFFER_FULL(78,uint16 ,ch_data,ch_data.u16);
      MATCH_UNNAMED_BITS_ZERO(78,ch_data.u16,0xf000);
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
      READ_FROM_BUFFER_FULL(43,uint16 ,ch_data,ch_data.u16);
      MATCH_BITS_EQUAL(39,ch_data.channel,index);
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
      READ_FROM_BUFFER_FULL(51,uint16 ,ch_data,ch_data.u16);
      MATCH_UNNAMED_BITS_ZERO(51,ch_data.u16,0x7000);
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
  READ_FROM_BUFFER_FULL(101,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_RANGE_MAX(94,ch_data.channel,(channels - 1));
  MATCH_BITS_EQUAL(97,ch_data.n,0);
  MATCH_BITS_EQUAL(98,ch_data.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(101,ch_data.u32,0x0040f000);
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
  READ_FROM_BUFFER_FULL(118,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_RANGE_MAX(112,ch_data.channel,(channels - 1));
  MATCH_BITS_EQUAL(114,ch_data.n,0);
  MATCH_BITS_EQUAL(115,ch_data.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(118,ch_data.u32,0x0000f000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,FASTBUS_LECROY_1885::__match,uint32 geom
                                                             ,uint32 channels);

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
  // MEMBER(DATA32 timestamp);
  // UINT32 failure
  // {
    //     0: fail_general;
    //     1: fail_data_corrupt;
    //     2: fail_data_missing;
    //     3: fail_data_too_much;
    //     4: fail_event_counter_mismatch;
    //     5: fail_readout_error_driver;
    //     6: fail_unexpected_trigger;
    //    26: has_scaler_data;
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
      uint32 dummy_7_25 : 19;
      uint32 has_scaler_data : 1; // 26
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
      uint32 has_scaler_data : 1; // 26
      uint32 dummy_7_25 : 19;
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
  READ_FROM_BUFFER_FULL(1264,uint32 ,failure,__failure.u32);
  MATCH_UNNAMED_BITS_ZERO(1264,__failure.u32,0x03ffff80);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,LAND_STD_VME::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for SERIAL_TS_EVENT.
 *
 * Do not edit - automatically generated.
 */

// SERIAL_TS_EVENT()
template<typename __data_src_t>
bool SERIAL_TS_EVENT::__match(__data_src_t &__buffer)
{
  // MEMBER(DATA32 ts_hi);
  // MEMBER(DATA32 ts_lo);
  // UINT32 ts_lsb NOENCODE
  // {
    //  0_31: t_lsb;
    // ENCODE(ts_lo,(value=t_lsb));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t_lsb : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 t_lsb : 32; // 0..31
#endif
    };
    uint32  u32;
  } ts_lsb;
  READ_FROM_BUFFER_FULL(819,uint32 ,ts_lsb,ts_lsb.u32);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,SERIAL_TS_EVENT::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for SERIAL_TS.
 *
 * Do not edit - automatically generated.
 */

// SERIAL_TS()
template<typename __data_src_t>
bool SERIAL_TS::__match(__data_src_t &__buffer)
{
  // UINT32 header NOENCODE
  // {
    //  0_31: multi_events;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 multi_events : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 multi_events : 32; // 0..31
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(805,uint32 ,header,header.u32);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,SERIAL_TS::__match);

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
  READ_FROM_BUFFER_FULL(762,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(757,header.id,id);
  MATCH_BITS_EQUAL(758,header.unnamed_12_15,0);
  MATCH_BITS_EQUAL(760,header.unnamed_17_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TIMESTAMP_WHITERABBIT::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRIGBUF_ENTRY.
 *
 * Do not edit - automatically generated.
 */

// TRIGBUF_ENTRY()
template<typename __data_src_t>
bool TRIGBUF_ENTRY::__match(__data_src_t &__buffer)
{
  // MEMBER(DATA32 ts_hi);
  // MEMBER(DATA32 ts_lo);
  // MEMBER(DATA32 tpat);
  // MEMBER(DATA8 trig);
  // UINT32 ts_lsb NOENCODE
  // {
    //  0_31: t_lsb;
    // ENCODE(ts_lo,(value=t_lsb));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t_lsb : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 t_lsb : 32; // 0..31
#endif
    };
    uint32  u32;
  } ts_lsb;
  READ_FROM_BUFFER_FULL(850,uint32 ,ts_lsb,ts_lsb.u32);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TRIGBUF_ENTRY::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRIGBUF.
 *
 * Do not edit - automatically generated.
 */

// TRIGBUF(multi_events)
template<typename __data_src_t>
bool TRIGBUF::__match(__data_src_t &__buffer,uint32 multi_events)
{
  // UINT32 header
  // {
    //  0_11: entries;
    // 12_31: multi_events;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 entries : 12; // 0..11
      uint32 multi_events : 20; // 12..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 multi_events : 20; // 12..31
      uint32 entries : 12; // 0..11
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(833,uint32 ,header,__header.u32);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRIGBUF::__match,uint32 multi_events);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLO.
 *
 * Do not edit - automatically generated.
 */

// TRLO(id,multi_events)
template<typename __data_src_t>
bool TRLO::__match(__data_src_t &__buffer,uint32 id,uint32 multi_events)
{
  // wr_ts = TIMESTAMP_WHITERABBIT(id=id);
  CHECK_MATCH_DECL(869,TIMESTAMP_WHITERABBIT,wr_ts,/*id*/id);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLO::__match,uint32 id,uint32 multi_events);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLO_EVENT_TRIGGER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_EVENT_TRIGGER()
template<typename __data_src_t>
bool TRLO_EVENT_TRIGGER::__match(__data_src_t &__buffer)
{
  // UINT32 time_lo
  // {
    //  0_31: val;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 val : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 val : 32; // 0..31
#endif
    };
    uint32  u32;
  } __time_lo;
  READ_FROM_BUFFER_FULL(971,uint32 ,time_lo,__time_lo.u32);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TRLO_EVENT_TRIGGER::__match);

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
    //    10: missing_at_end;
    // 24_31: id = MATCH(id);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 10; // 0..9
      uint32 missing_at_end : 1; // 10
      uint32 dummy_11_23 : 13;
      uint32 id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 8; // 24..31
      uint32 dummy_11_23 : 13;
      uint32 missing_at_end : 1; // 10
      uint32 count : 10; // 0..9
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(950,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(949,__header.id,id);
  MATCH_UNNAMED_BITS_ZERO(950,__header.u32,0x00fff800);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLO_SAMPLER::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLO_TRIG_SCALER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_TRIG_SCALER(id)
template<typename __data_src_t>
bool TRLO_TRIG_SCALER::__match(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 before_lmu[16] ZERO_SUPPRESS);
  // MEMBER(DATA32 before_lmu_mux[1] ZERO_SUPPRESS);
  // MEMBER(DATA32 before_lmu_aux[4] ZERO_SUPPRESS);
  // MEMBER(DATA32 before_deadtime[16] ZERO_SUPPRESS);
  // MEMBER(DATA32 after_deadtime[16] ZERO_SUPPRESS);
  // MEMBER(DATA32 after_reduction[16] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_05: before_lmu = RANGE(0,16);
    //  6_10: before_lmu_mux = RANGE(0,1);
    // 11_15: before_lmu_aux = RANGE(0,4);
    // 16_21: after_lmu = RANGE(0,16);
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
      uint32 after_lmu : 6; // 16..21
      uint32 dummy_22_23 : 2;
      uint32 id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 8; // 24..31
      uint32 dummy_22_23 : 2;
      uint32 after_lmu : 6; // 16..21
      uint32 before_lmu_aux : 5; // 11..15
      uint32 before_lmu_mux : 5; // 6..10
      uint32 before_lmu : 6; // 0..5
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(893,uint32 ,header,__header.u32);
  MATCH_BITS_RANGE_MAX(888,__header.before_lmu,16);
  MATCH_BITS_RANGE_MAX(889,__header.before_lmu_mux,1);
  MATCH_BITS_RANGE_MAX(890,__header.before_lmu_aux,4);
  MATCH_BITS_RANGE_MAX(891,__header.after_lmu,16);
  MATCH_BITS_EQUAL(892,__header.id,id);
  MATCH_UNNAMED_BITS_ZERO(893,__header.u32,0x00c00000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLO_TRIG_SCALER::__match,uint32 id);

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
  READ_FROM_BUFFER_FULL(422,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(418,__header.event_id,event_id);
  MATCH_BITS_EQUAL(420,__header.tdc,tdc);
  MATCH_BITS_EQUAL(421,__header.unnamed_27_31,1);
  MATCH_UNNAMED_BITS_ZERO(422,__header.u32,0x04000000);
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
  READ_FROM_BUFFER_FULL(483,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(480,__header.geom,geom);
  MATCH_BITS_EQUAL(482,__header.unnamed_27_31,8);
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
  READ_FROM_BUFFER_FULL(546,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_EQUAL(531,ch_data.tdc,tdc);
  MATCH_BITS_EQUAL(536,ch_data.unnamed_27_31,0);
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
  READ_FROM_BUFFER_FULL(557,uint32 ,error_flags,__error_flags.u32);
  MATCH_BITS_EQUAL(555,__error_flags.tdc,tdc);
  MATCH_BITS_EQUAL(556,__error_flags.unnamed_27_31,4);
  MATCH_UNNAMED_BITS_ZERO(557,__error_flags.u32,0x04ff8000);
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
  READ_FROM_BUFFER_FULL(572,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(569,__header.geom,geom);
  MATCH_BITS_EQUAL(571,__header.unnamed_27_31,8);
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
  READ_FROM_BUFFER_FULL(217,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(213,__header.event_id,event_id);
  MATCH_BITS_EQUAL(215,__header.tdc,tdc);
  MATCH_BITS_EQUAL(216,__header.unnamed_27_31,1);
  MATCH_UNNAMED_BITS_ZERO(217,__header.u32,0x04000000);
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
  READ_FROM_BUFFER_FULL(278,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(275,__header.geom,geom);
  MATCH_BITS_EQUAL(277,__header.unnamed_27_31,8);
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
  READ_FROM_BUFFER_FULL(341,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_EQUAL(321,ch_data.tdc,tdc);
  MATCH_BITS_EQUAL(331,ch_data.unnamed_27_31,0);
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
  READ_FROM_BUFFER_FULL(352,uint32 ,error_flags,__error_flags.u32);
  MATCH_BITS_EQUAL(350,__error_flags.tdc,tdc);
  MATCH_BITS_EQUAL(351,__error_flags.unnamed_27_31,4);
  MATCH_UNNAMED_BITS_ZERO(352,__error_flags.u32,0x04ff8000);
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
  READ_FROM_BUFFER_FULL(367,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(364,__header.geom,geom);
  MATCH_BITS_EQUAL(366,__header.unnamed_27_31,8);
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
  READ_FROM_BUFFER_FULL(136,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(133,header.crate,crate);
  MATCH_BITS_EQUAL(134,header.unnamed_24_26,2);
  MATCH_BITS_EQUAL(135,header.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(136,header.u32,0x0000c0ff);
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
  READ_FROM_BUFFER_FULL(184,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(182,__header.unnamed_26_26,1);
  MATCH_BITS_EQUAL(183,__header.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(184,__header.u32,0x03000000);
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
  READ_FROM_BUFFER_FULL(623,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(620,header.geom,geom);
  MATCH_BITS_EQUAL(621,header.unnamed_24_29,0);
  MATCH_BITS_EQUAL(622,header.unnamed_30_31,1);
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
  READ_FROM_BUFFER_FULL(667,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(664,header.geom,geom);
  MATCH_BITS_EQUAL(665,header.unnamed_24_29,0);
  MATCH_BITS_EQUAL(666,header.unnamed_30_31,1);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_MESYTEC_MDPP16::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_MESY_MADC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESY_MADC32(geom)
template<typename __data_src_t>
bool VME_MESY_MADC32::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA16 data[32] ZERO_SUPPRESS);
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
  READ_FROM_BUFFER_FULL(720,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(717,header.geom,geom);
  MATCH_BITS_EQUAL(718,header.unnamed_24_29,0);
  MATCH_BITS_EQUAL(719,header.unnamed_30_31,1);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_MESY_MADC32::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_MESY_MADC32_PADDING.
 *
 * Do not edit - automatically generated.
 */

// VME_MESY_MADC32_PADDING()
template<typename __data_src_t>
bool VME_MESY_MADC32_PADDING::__match(__data_src_t &__buffer)
{
  // UINT32 padding NOENCODE
  // {
    //  0_31: value = MATCH(0x32323232);
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
  } padding;
  READ_FROM_BUFFER_FULL(705,uint32 ,padding,padding.u32);
  MATCH_BITS_EQUAL(704,padding.value,0x32323232);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,VME_MESY_MADC32_PADDING::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_STRUCK_SIS3316_CHANNEL_DATA.
 *
 * Do not edit - automatically generated.
 */

// VME_STRUCK_SIS3316_CHANNEL_DATA(id,ch)
template<typename __data_src_t>
bool VME_STRUCK_SIS3316_CHANNEL_DATA::__match(__data_src_t &__buffer,uint32 id
                                                                    ,uint32 ch)
{
  // MEMBER(DATA32 ts[2] ZERO_SUPPRESS);
  // MEMBER(DATA32 gate[8] ZERO_SUPPRESS);
  // MEMBER(DATA32 maw[3] ZERO_SUPPRESS);
  // MEMBER(DATA32 maxe[2] ZERO_SUPPRESS);
  // UINT32 header0
  // {
    //     0: has_acc6;
    //     1: has_acc2;
    //     2: has_maw;
    //     3: has_e;
    //  4_07: chanNo = MATCH(ch);
    //  8_15: id = MATCH(id);
    // 16_31: timeS;
    // ENCODE(ts[0],(value=timeS));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 has_acc6 : 1; // 0
      uint32 has_acc2 : 1; // 1
      uint32 has_maw : 1; // 2
      uint32 has_e : 1; // 3
      uint32 chanNo : 4; // 4..7
      uint32 id : 8; // 8..15
      uint32 timeS : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 timeS : 16; // 16..31
      uint32 id : 8; // 8..15
      uint32 chanNo : 4; // 4..7
      uint32 has_e : 1; // 3
      uint32 has_maw : 1; // 2
      uint32 has_acc2 : 1; // 1
      uint32 has_acc6 : 1; // 0
#endif
    };
    uint32  u32;
  } __header0;
  READ_FROM_BUFFER_FULL(1148,uint32 ,header0,__header0.u32);
  MATCH_BITS_EQUAL(1144,__header0.chanNo,ch);
  MATCH_BITS_EQUAL(1145,__header0.id,id);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_STRUCK_SIS3316_CHANNEL_DATA::__match,uint32 id
                                                                         ,uint32 ch);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_STRUCK_SIS3316_CHANNEL.
 *
 * Do not edit - automatically generated.
 */

// VME_STRUCK_SIS3316_CHANNEL(id,ch)
template<typename __data_src_t>
bool VME_STRUCK_SIS3316_CHANNEL::__match(__data_src_t &__buffer,uint32 id
                                                               ,uint32 ch)
{
  // UINT32 channel_header NOENCODE
  // {
    //  0_07: id = MATCH(id);
    //  8_11: ch = MATCH(ch);
    // 12_15: padding_words;
    // 16_31: module = MATCH(0x3316);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 8; // 0..7
      uint32 ch : 4; // 8..11
      uint32 padding_words : 4; // 12..15
      uint32 module : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 module : 16; // 16..31
      uint32 padding_words : 4; // 12..15
      uint32 ch : 4; // 8..11
      uint32 id : 8; // 0..7
#endif
    };
    uint32  u32;
  } channel_header;
  READ_FROM_BUFFER_FULL(1111,uint32 ,channel_header,channel_header.u32);
  MATCH_BITS_EQUAL(1110,channel_header.id,id);
  MATCH_BITS_EQUAL(1109,channel_header.ch,ch);
  MATCH_BITS_EQUAL(1107,channel_header.module,0x3316);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_STRUCK_SIS3316_CHANNEL::__match,uint32 id
                                                                    ,uint32 ch);

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
  // MEMBER(DATA8 n_ch);
  // UINT32 header NOENCODE
  // {
    //  0_07: id = MATCH(id);
    //  8_15: nofCH;
    // 16_31: module = MATCH(0x3316);
    // ENCODE(n_ch,(value=nofCH));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 8; // 0..7
      uint32 nofCH : 8; // 8..15
      uint32 module : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 module : 16; // 16..31
      uint32 nofCH : 8; // 8..15
      uint32 id : 8; // 0..7
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(1080,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(1078,header.id,id);
  MATCH_BITS_EQUAL(1076,header.module,0x3316);
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
  READ_FROM_BUFFER_FULL(793,uint32 ,hi,hi.u32);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,WR_MULTI::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for SCALERS.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(SCALERS)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TS.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TS)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(VME)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
