/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for CAEN_V775.
 *
 * Do not edit - automatically generated.
 */

// CAEN_V775(geom,crate)
template<typename __data_src_t>
void CAEN_V775::__unpack(__data_src_t &__buffer,uint32 geom,uint32 crate)
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
  CHECK_BITS_EQUAL(1030,header.crate,crate);
  CHECK_BITS_EQUAL(1031,header.unnamed_24_26,2);
  CHECK_BITS_EQUAL(1032,header.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(1033,header.u32,0x0000c000);
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
      // 27_31: geom = CHECK(geom);
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
    READ_FROM_BUFFER_FULL(1053,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(1049,ch_data.unnamed_24_26,0);
    CHECK_BITS_EQUAL(1050,ch_data.geom,geom);
    CHECK_UNNAMED_BITS_ZERO(1053,ch_data.u32,0x00e08000);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(1052,ch_data.channel);
      __item.value = ch_data.value;
      __item.overflow = ch_data.overflow;
    }
  }
  // UINT32 eob
  // {
    //  0_23: event_number;
    // 24_26: 4;
    // 27_31: geom = CHECK(geom);
  // }
  READ_FROM_BUFFER_FULL(1062,uint32 ,eob,eob.u32);
  CHECK_BITS_EQUAL(1059,eob.unnamed_24_26,4);
  CHECK_BITS_EQUAL(1060,eob.geom,geom);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CAEN_V775::__unpack,uint32 geom,uint32 crate);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for CAEN_V830_SCALER.
 *
 * Do not edit - automatically generated.
 */

// CAEN_V830_SCALER(id)
template<typename __data_src_t>
void CAEN_V830_SCALER::__unpack(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 sc_header
  // {
    //  0_06: count = RANGE(0,31);
    // 24_31: id = MATCH(id);
  // }
  READ_FROM_BUFFER_FULL(995,uint32 ,sc_header,sc_header.u32);
  CHECK_BITS_RANGE_MAX(993,sc_header.count,31);
  CHECK_BITS_EQUAL(994,sc_header.id,id);
  CHECK_UNNAMED_BITS_ZERO(995,sc_header.u32,0x00ffff80);
  // UINT32 header
  // {
    //  0_15: event_number;
    // 16_17: ts;
    // 18_23: count;
    // 24_25: undefined;
    //    26: 1;
    // 27_31: geom;
  // }
  READ_FROM_BUFFER_FULL(1004,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1002,header.unnamed_26_26,1);
  // list(0<=index<header.count)

  for (uint32 index = 0; index < (uint32) (header.count); ++index)
  {
    // UINT32 sc NOENCODE
    // {
      //  0_25: value;
      //    26: 0;
      // 27_31: channel;
      // ENCODE(data[channel],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 26; // 0..25
        uint32 unnamed_26_26 : 1; // 26
        uint32 channel : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 channel : 5; // 27..31
        uint32 unnamed_26_26 : 1; // 26
        uint32 value : 26; // 0..25
#endif
      };
      uint32  u32;
    } sc;
    READ_FROM_BUFFER_FULL(1012,uint32 ,sc,sc.u32);
    CHECK_BITS_EQUAL(1009,sc.unnamed_26_26,0);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(1011,sc.channel);
      __item.value = sc.value;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CAEN_V830_SCALER::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for CAMAC_LECROY_4434.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_LECROY_4434(channels)
template<typename __data_src_t>
void CAMAC_LECROY_4434::__unpack(__data_src_t &__buffer,uint32 channels)
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
    CHECK_BITS_EQUAL(20,ch_data.unnamed_24_31,0);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(22,index);
      __item.value = ch_data.value;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CAMAC_LECROY_4434::__unpack,uint32 channels);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for CAMAC_PHILLIPS_7164.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_PHILLIPS_7164(channels,mark_channel_no)
template<typename __data_src_t>
void CAMAC_PHILLIPS_7164::__unpack(__data_src_t &__buffer,uint32 channels
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
      CHECK_BITS_EQUAL(68,ch_data.channel,index);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(70,index);
        __item.value = ch_data.value;
      }
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
      CHECK_UNNAMED_BITS_ZERO(78,ch_data.u16,0xf000);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(77,index);
        __item.value = ch_data.value;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CAMAC_PHILLIPS_7164::__unpack,uint32 channels
                                                              ,uint32 mark_channel_no);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for CAMAC_SILENA_4418.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_SILENA_4418(channels,mark_channel_no)
template<typename __data_src_t>
void CAMAC_SILENA_4418::__unpack(__data_src_t &__buffer,uint32 channels,uint32 mark_channel_no)
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
      CHECK_BITS_EQUAL(39,ch_data.channel,index);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(42,index);
        __item.value = ch_data.value;
        __item.overflow = ch_data.overflow;
      }
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
      CHECK_UNNAMED_BITS_ZERO(51,ch_data.u16,0x7000);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(50,index);
        __item.value = ch_data.value;
        __item.overflow = ch_data.overflow;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CAMAC_SILENA_4418::__unpack,uint32 channels
                                                            ,uint32 mark_channel_no);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FASTBUS_LECROY_1875.
 *
 * Do not edit - automatically generated.
 */

// FASTBUS_LECROY_1875(geom,channels)
template<typename __data_src_t>
void FASTBUS_LECROY_1875::__unpack(__data_src_t &__buffer,uint32 geom,uint32 channels)
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
  CHECK_BITS_RANGE_MAX(94,ch_data.channel,(channels - 1));
  CHECK_BITS_EQUAL(97,ch_data.n,0);
  CHECK_BITS_EQUAL(98,ch_data.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(101,ch_data.u32,0x0040f000);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(100,ch_data.channel);
    __item.value = ch_data.value;
    __item.range = ch_data.range;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FASTBUS_LECROY_1875::__unpack,uint32 geom
                                                              ,uint32 channels);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FASTBUS_LECROY_1885.
 *
 * Do not edit - automatically generated.
 */

// FASTBUS_LECROY_1885(geom,channels)
template<typename __data_src_t>
void FASTBUS_LECROY_1885::__unpack(__data_src_t &__buffer,uint32 geom,uint32 channels)
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
  CHECK_BITS_RANGE_MAX(112,ch_data.channel,(channels - 1));
  CHECK_BITS_EQUAL(114,ch_data.n,0);
  CHECK_BITS_EQUAL(115,ch_data.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(118,ch_data.u32,0x0000f000);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(117,ch_data.channel);
    __item.value = ch_data.value;
    __item.range = ch_data.range;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FASTBUS_LECROY_1885::__unpack,uint32 geom
                                                              ,uint32 channels);

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
  READ_FROM_BUFFER_FULL(1264,uint32 ,failure,failure.u32);
  CHECK_UNNAMED_BITS_ZERO(1264,failure.u32,0x03ffff80);
  // if(failure.has_time_stamp)

  if (failure.has_time_stamp)
  {
    // UINT32 time_stamp
    // {
      //  0_31: value;
      // ENCODE(timestamp,(value=value));
    // }
    READ_FROM_BUFFER_FULL(1270,uint32 ,time_stamp,time_stamp.u32);
    {
      timestamp.value = time_stamp.value;
    }
  }
  // if(failure.has_multi_event)

  if (failure.has_multi_event)
  {
    // UINT32 multi_events;
    READ_FROM_BUFFER(1274,uint32 ,multi_events);
  }
  // if(failure.has_multi_scaler_counter0)

  if (failure.has_multi_scaler_counter0)
  {
    // UINT32 multi_scaler_counter0;
    READ_FROM_BUFFER(1278,uint32 ,multi_scaler_counter0);
  }
  // if(failure.has_multi_adctdc_counter0)

  if (failure.has_multi_adctdc_counter0)
  {
    // UINT32 multi_adctdc_counter0;
    READ_FROM_BUFFER(1282,uint32 ,multi_adctdc_counter0);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_STD_VME::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SERIAL_TS_EVENT.
 *
 * Do not edit - automatically generated.
 */

// SERIAL_TS_EVENT()
template<typename __data_src_t>
void SERIAL_TS_EVENT::__unpack(__data_src_t &__buffer)
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
  {
    ts_lo.value = ts_lsb.t_lsb;
  }
  // UINT32 ts_msb NOENCODE
  // {
    //  0_30: t_msb;
    //    31: missed_event;
    // ENCODE(ts_hi,(value=t_msb));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t_msb : 31; // 0..30
      uint32 missed_event : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 missed_event : 1; // 31
      uint32 t_msb : 31; // 0..30
#endif
    };
    uint32  u32;
  } ts_msb;
  READ_FROM_BUFFER_FULL(825,uint32 ,ts_msb,ts_msb.u32);
  {
    ts_hi.value = ts_msb.t_msb;
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,SERIAL_TS_EVENT::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SERIAL_TS.
 *
 * Do not edit - automatically generated.
 */

// SERIAL_TS()
template<typename __data_src_t>
void SERIAL_TS::__unpack(__data_src_t &__buffer)
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
  // list(0<=i<header.multi_events)

  for (uint32 i = 0; i < (uint32) (header.multi_events); ++i)
  {
    // multi event = SERIAL_TS_EVENT();
    UNPACK_DECL(808,SERIAL_TS_EVENT,multi_event.next_free());
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,SERIAL_TS::__unpack);

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
  READ_FROM_BUFFER_FULL(762,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(757,header.id,id);
  CHECK_BITS_EQUAL(758,header.unnamed_12_15,0);
  CHECK_BITS_EQUAL(760,header.unnamed_17_31,0);
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
  READ_FROM_BUFFER_FULL(767,uint32 ,d1,d1.u32);
  CHECK_BITS_EQUAL(765,d1.unnamed_16_31,0x3e1);
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
  READ_FROM_BUFFER_FULL(772,uint32 ,d2,d2.u32);
  CHECK_BITS_EQUAL(770,d2.unnamed_16_31,0x4e1);
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
  READ_FROM_BUFFER_FULL(777,uint32 ,d3,d3.u32);
  CHECK_BITS_EQUAL(775,d3.unnamed_16_31,0x5e1);
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
  READ_FROM_BUFFER_FULL(782,uint32 ,d4,d4.u32);
  CHECK_BITS_EQUAL(780,d4.unnamed_16_31,0x6e1);
  {
    t4.value = d4.t4;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TIMESTAMP_WHITERABBIT::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRIGBUF_ENTRY.
 *
 * Do not edit - automatically generated.
 */

// TRIGBUF_ENTRY()
template<typename __data_src_t>
void TRIGBUF_ENTRY::__unpack(__data_src_t &__buffer)
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
  {
    ts_lo.value = ts_lsb.t_lsb;
  }
  // UINT32 ts_msb NOENCODE
  // {
    //  0_30: t_msb;
    //    31: missed_event;
    // ENCODE(ts_hi,(value=t_msb));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t_msb : 31; // 0..30
      uint32 missed_event : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 missed_event : 1; // 31
      uint32 t_msb : 31; // 0..30
#endif
    };
    uint32  u32;
  } ts_msb;
  READ_FROM_BUFFER_FULL(856,uint32 ,ts_msb,ts_msb.u32);
  {
    ts_hi.value = ts_msb.t_msb;
  }
  // UINT32 info NOENCODE
  // {
    //  0_23: tpat;
    // 24_27: trig;
    // 28_31: cnt;
    // ENCODE(tpat,(value=tpat));
    // ENCODE(trig,(value=trig));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 tpat : 24; // 0..23
      uint32 trig : 4; // 24..27
      uint32 cnt : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 cnt : 4; // 28..31
      uint32 trig : 4; // 24..27
      uint32 tpat : 24; // 0..23
#endif
    };
    uint32  u32;
  } info;
  READ_FROM_BUFFER_FULL(864,uint32 ,info,info.u32);
  {
    tpat.value = info.tpat;
  }
  {
    trig.value = info.trig;
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,TRIGBUF_ENTRY::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRIGBUF.
 *
 * Do not edit - automatically generated.
 */

// TRIGBUF(multi_events)
template<typename __data_src_t>
void TRIGBUF::__unpack(__data_src_t &__buffer,uint32 multi_events)
{
  // UINT32 header
  // {
    //  0_11: entries;
    // 12_31: multi_events;
  // }
  READ_FROM_BUFFER_FULL(833,uint32 ,header,header.u32);
  // list(0<=i<multi_events)

  for (uint32 i = 0; i < (uint32) (multi_events); ++i)
  {
    // multi entry = TRIGBUF_ENTRY();
    UNPACK_DECL(836,TRIGBUF_ENTRY,multi_entry.next_free());
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRIGBUF::__unpack,uint32 multi_events);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLO.
 *
 * Do not edit - automatically generated.
 */

// TRLO(id,multi_events)
template<typename __data_src_t>
void TRLO::__unpack(__data_src_t &__buffer,uint32 id,uint32 multi_events)
{
  // wr_ts = TIMESTAMP_WHITERABBIT(id=id);
  UNPACK_DECL(869,TIMESTAMP_WHITERABBIT,wr_ts,/*id*/id);
  // serial_ts = SERIAL_TS();
  UNPACK_DECL(870,SERIAL_TS,serial_ts);
  // trigbuf = TRIGBUF(multi_events=multi_events);
  UNPACK_DECL(871,TRIGBUF,trigbuf,/*multi_events*/multi_events);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLO::__unpack,uint32 id,uint32 multi_events);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLO_EVENT_TRIGGER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_EVENT_TRIGGER()
template<typename __data_src_t>
void TRLO_EVENT_TRIGGER::__unpack(__data_src_t &__buffer)
{
  // UINT32 time_lo
  // {
    //  0_31: val;
  // }
  READ_FROM_BUFFER_FULL(971,uint32 ,time_lo,time_lo.u32);
  // UINT32 time_hi
  // {
    //  0_30: val;
    //    31: missed_event;
  // }
  READ_FROM_BUFFER_FULL(976,uint32 ,time_hi,time_hi.u32);
  // UINT32 status
  // {
    //  0_23: tpat;
    // 24_27: trig;
    // 28_31: count;
  // }
  READ_FROM_BUFFER_FULL(982,uint32 ,status,status.u32);
}
FORCE_IMPL_DATA_SRC_FCN(void,TRLO_EVENT_TRIGGER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLO_SAMPLER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_SAMPLER(id)
template<typename __data_src_t>
void TRLO_SAMPLER::__unpack(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 stamps[512] NO_INDEX_LIST);
  // UINT32 header
  // {
    //  0_09: count;
    //    10: missing_at_end;
    // 24_31: id = MATCH(id);
  // }
  READ_FROM_BUFFER_FULL(950,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(949,header.id,id);
  CHECK_UNNAMED_BITS_ZERO(950,header.u32,0x00fff800);
  // list(0<=index<header.count)

  for (uint32 index = 0; index < (uint32) (header.count); ++index)
  {
    // UINT32 data NOENCODE
    // {
      //  0_31: stamp;
      // ENCODE(stamps APPEND_LIST,(value=stamp));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 stamp : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 stamp : 32; // 0..31
#endif
      };
      uint32  u32;
    } data;
    READ_FROM_BUFFER_FULL(962,uint32 ,data,data.u32);
    {
      typedef __typeof__(*(&(stamps))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = stamps.append_item(961);
      __item.value = data.stamp;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLO_SAMPLER::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLO_TRIG_SCALER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_TRIG_SCALER(id)
template<typename __data_src_t>
void TRLO_TRIG_SCALER::__unpack(__data_src_t &__buffer,uint32 id)
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
  READ_FROM_BUFFER_FULL(893,uint32 ,header,header.u32);
  CHECK_BITS_RANGE_MAX(888,header.before_lmu,16);
  CHECK_BITS_RANGE_MAX(889,header.before_lmu_mux,1);
  CHECK_BITS_RANGE_MAX(890,header.before_lmu_aux,4);
  CHECK_BITS_RANGE_MAX(891,header.after_lmu,16);
  CHECK_BITS_EQUAL(892,header.id,id);
  CHECK_UNNAMED_BITS_ZERO(893,header.u32,0x00c00000);
  // list(0<=index<header.before_lmu)

  for (uint32 index = 0; index < (uint32) (header.before_lmu); ++index)
  {
    // UINT32 b_lmu NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu[index],(value=value));
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
    } b_lmu;
    READ_FROM_BUFFER_FULL(899,uint32 ,b_lmu,b_lmu.u32);
    {
      typedef __typeof__(*(&(before_lmu))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = before_lmu.insert_index(898,index);
      __item.value = b_lmu.value;
    }
  }
  // list(0<=index<header.before_lmu_mux)

  for (uint32 index = 0; index < (uint32) (header.before_lmu_mux); ++index)
  {
    // UINT32 b_lmu_mux NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_mux[index],(value=value));
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
    } b_lmu_mux;
    READ_FROM_BUFFER_FULL(905,uint32 ,b_lmu_mux,b_lmu_mux.u32);
    {
      typedef __typeof__(*(&(before_lmu_mux))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = before_lmu_mux.insert_index(904,index);
      __item.value = b_lmu_mux.value;
    }
  }
  // list(0<=index<header.before_lmu_aux)

  for (uint32 index = 0; index < (uint32) (header.before_lmu_aux); ++index)
  {
    // UINT32 b_lmu_aux NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_aux[index],(value=value));
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
    } b_lmu_aux;
    READ_FROM_BUFFER_FULL(911,uint32 ,b_lmu_aux,b_lmu_aux.u32);
    {
      typedef __typeof__(*(&(before_lmu_aux))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = before_lmu_aux.insert_index(910,index);
      __item.value = b_lmu_aux.value;
    }
  }
  // list(0<=index<header.after_lmu)

  for (uint32 index = 0; index < (uint32) (header.after_lmu); ++index)
  {
    // UINT32 b_deadtime NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_deadtime[index],(value=value));
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
    } b_deadtime;
    READ_FROM_BUFFER_FULL(918,uint32 ,b_deadtime,b_deadtime.u32);
    {
      typedef __typeof__(*(&(before_deadtime))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = before_deadtime.insert_index(917,index);
      __item.value = b_deadtime.value;
    }
  }
  // list(0<=index<header.after_lmu)

  for (uint32 index = 0; index < (uint32) (header.after_lmu); ++index)
  {
    // UINT32 a_deadtime NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_deadtime[index],(value=value));
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
    } a_deadtime;
    READ_FROM_BUFFER_FULL(925,uint32 ,a_deadtime,a_deadtime.u32);
    {
      typedef __typeof__(*(&(after_deadtime))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = after_deadtime.insert_index(924,index);
      __item.value = a_deadtime.value;
    }
  }
  // list(0<=index<header.after_lmu)

  for (uint32 index = 0; index < (uint32) (header.after_lmu); ++index)
  {
    // UINT32 a_reduction NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_reduction[index],(value=value));
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
    } a_reduction;
    READ_FROM_BUFFER_FULL(932,uint32 ,a_reduction,a_reduction.u32);
    {
      typedef __typeof__(*(&(after_reduction))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = after_reduction.insert_index(931,index);
      __item.value = a_reduction.value;
    }
  }
  // list(0<=index<16)

  for (uint32 index = 0; index < (uint32) (16); ++index)
  {
    // UINT32 val;
    READ_FROM_BUFFER(937,uint32 ,val);
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLO_TRIG_SCALER::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1190_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
void VME_CAEN_V1190_SUBTDC::__unpack(__data_src_t &__buffer,uint32 tdc,uint32 event_id
                                                           ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(tdc_start);
  void *__mark_tdc_start = __buffer._data;
  // UINT32 header
  // {
    //  0_11: bunch_id;
    // 12_23: event_id = CHECK(event_id);
    // 24_25: tdc = MATCH(tdc);
    // 27_31: 1;
  // }
  READ_FROM_BUFFER_FULL(422,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(418,header.event_id,event_id);
  CHECK_BITS_EQUAL(420,header.tdc,tdc);
  CHECK_BITS_EQUAL(421,header.unnamed_27_31,1);
  CHECK_UNNAMED_BITS_ZERO(422,header.u32,0x04000000);
  // several UINT32 ch_data NOENCODE
  // {
    //  0_18: value;
    // 19_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 5) | channel_low)],(value=value));
  // }
  for ( ; ; ) {
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
  if (__buffer.empty()) goto data_done_0;
  PEEK_FROM_BUFFER_FULL(449,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(434,ch_data.tdc,tdc,data_done_0);
  CHECK_JUMP_BITS_EQUAL(439,ch_data.unnamed_27_31,0,data_done_0);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(447,((ch_data.tdc << 5) | ch_data.channel_low));
    __item.value = ch_data.value;
  }
  }
  data_done_0:;
  // optional UINT32 error_flags
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
  if (__buffer.empty()) goto data_done_1;
  PEEK_FROM_BUFFER_FULL(457,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(455,__error_flags.tdc,tdc,data_done_1);
  CHECK_JUMP_BITS_EQUAL(456,__error_flags.unnamed_27_31,4,data_done_1);
  CHECK_JUMP_UNNAMED_BITS_ZERO(457,__error_flags.u32,0x04ff8000,data_done_1);
  error_flags.u32 = __error_flags.u32;
  __buffer.advance(sizeof(__error_flags.u32));
  data_done_1:;
  // MARK_COUNT(tdc_end);
  void *__mark_tdc_end = __buffer._data;
  // UINT32 trailer
  // {
    //  0_11: word_count = CHECK_COUNT(tdc_start,tdc_end,4,4);
    // 12_23: event_id = CHECK(header.event_id);
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 3;
  // }
  READ_FROM_BUFFER_FULL(468,uint32 ,trailer,trailer.u32);
  CHECK_WORD_COUNT(463,trailer.word_count,tdc_start,tdc_end,4,4);
  CHECK_BITS_EQUAL(464,trailer.event_id,header.event_id);
  CHECK_BITS_EQUAL(466,trailer.tdc,tdc);
  CHECK_BITS_EQUAL(467,trailer.unnamed_27_31,3);
  CHECK_UNNAMED_BITS_ZERO(468,trailer.u32,0x04000000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_SUBTDC::__unpack,uint32 tdc
                                                                ,uint32 event_id
                                                                ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1190.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190(geom)
template<typename __data_src_t>
void VME_CAEN_V1190::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._data;
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  READ_FROM_BUFFER_FULL(483,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(480,header.geom,geom);
  CHECK_BITS_EQUAL(482,header.unnamed_27_31,8);
  // select several

    // tdc[0] = VME_CAEN_V1190_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[1] = VME_CAEN_V1190_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[2] = VME_CAEN_V1190_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[3] = VME_CAEN_V1190_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                   // data=data);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_CAEN_V1190_SUBTDC tdc[0]: (s32) => (0xff000000,0x08000000)
    // optimized match 2: VME_CAEN_V1190_SUBTDC tdc[1]: (s32) => (0xff000000,0x09000000)
    // optimized match 3: VME_CAEN_V1190_SUBTDC tdc[2]: (s32) => (0xff000000,0x0a000000)
    // optimized match 4: VME_CAEN_V1190_SUBTDC tdc[3]: (s32) => (0xff000000,0x0b000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(491,uint32,__match_peek);
    // differ = 03000000 : 24 25
    uint32 __match_index = 0 | /* 24,25 */ ((__match_peek >> 24) & 0x00000003);
    static const sint8 __match_index_array[4] = { 1, 2, 3, 4, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(487,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(487,VME_CAEN_V1190_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(488,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(488,VME_CAEN_V1190_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(489,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(489,VME_CAEN_V1190_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(490,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(490,VME_CAEN_V1190_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_0:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(497,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(496,trigger.unnamed_27_31,17);
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._data;
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
  READ_FROM_BUFFER_FULL(509,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(503,trailer.geom,geom);
  CHECK_WORD_COUNT(504,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(508,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(509,trailer.u32,0x00f00000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1190_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SHORT_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
void VME_CAEN_V1190_SHORT_SUBTDC::__unpack(__data_src_t &__buffer,uint32 tdc
                                                                 ,uint32 event_id
                                                                 ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data)
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
  CHECK_BITS_EQUAL(531,ch_data.tdc,tdc);
  CHECK_BITS_EQUAL(536,ch_data.unnamed_27_31,0);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(544,((ch_data.tdc << 5) | ch_data.channel_low));
    __item.value = ch_data.value;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_SHORT_SUBTDC::__unpack,uint32 tdc
                                                                      ,uint32 event_id
                                                                      ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1190_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SHORT_SUBTDC_ERROR(tdc)
template<typename __data_src_t>
void VME_CAEN_V1190_SHORT_SUBTDC_ERROR::__unpack(__data_src_t &__buffer,uint32 tdc)
{
  // UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
  READ_FROM_BUFFER_FULL(557,uint32 ,error_flags,error_flags.u32);
  CHECK_BITS_EQUAL(555,error_flags.tdc,tdc);
  CHECK_BITS_EQUAL(556,error_flags.unnamed_27_31,4);
  CHECK_UNNAMED_BITS_ZERO(557,error_flags.u32,0x04ff8000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_SHORT_SUBTDC_ERROR::__unpack,uint32 tdc);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1190_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SHORT(geom)
template<typename __data_src_t>
void VME_CAEN_V1190_SHORT::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._data;
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  READ_FROM_BUFFER_FULL(572,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(569,header.geom,geom);
  CHECK_BITS_EQUAL(571,header.unnamed_27_31,8);
  // select several

    // tdc[0] = VME_CAEN_V1190_SHORT_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // tdc[1] = VME_CAEN_V1190_SHORT_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // tdc[2] = VME_CAEN_V1190_SHORT_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // tdc[3] = VME_CAEN_V1190_SHORT_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // norevisit err[0] = VME_CAEN_V1190_SHORT_SUBTDC_ERROR(tdc=0);
    // norevisit err[1] = VME_CAEN_V1190_SHORT_SUBTDC_ERROR(tdc=1);
    // norevisit err[2] = VME_CAEN_V1190_SHORT_SUBTDC_ERROR(tdc=2);
    // norevisit err[3] = VME_CAEN_V1190_SHORT_SUBTDC_ERROR(tdc=3);
  bitsone<4> __visited1;
  __visited1.clear();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_CAEN_V1190_SHORT_SUBTDC tdc[0]: (s32) => (0xfb000000,0x00000000)
    // optimized match 2: VME_CAEN_V1190_SHORT_SUBTDC tdc[1]: (s32) => (0xfb000000,0x01000000)
    // optimized match 3: VME_CAEN_V1190_SHORT_SUBTDC tdc[2]: (s32) => (0xfb000000,0x02000000)
    // optimized match 4: VME_CAEN_V1190_SHORT_SUBTDC tdc[3]: (s32) => (0xfb000000,0x03000000)
    // optimized match 5: VME_CAEN_V1190_SHORT_SUBTDC_ERROR err[0]: (s32) => (0xffff8000,0x20000000)
    // optimized match 6: VME_CAEN_V1190_SHORT_SUBTDC_ERROR err[1]: (s32) => (0xffff8000,0x21000000)
    // optimized match 7: VME_CAEN_V1190_SHORT_SUBTDC_ERROR err[2]: (s32) => (0xffff8000,0x22000000)
    // optimized match 8: VME_CAEN_V1190_SHORT_SUBTDC_ERROR err[3]: (s32) => (0xffff8000,0x23000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(585,uint32,__match_peek);
    // differ = 23000000 : 24 25 29
    uint32 __match_index = 0 | /* 24,25 */ ((__match_peek >> 24) & 0x00000003) | /* 29,29 */ ((__match_peek >> 27) & 0x00000004);
    static const sint8 __match_index_array[8] = { 1, 2, 3, 4, 5, 6, 7, 8, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(576,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(576,VME_CAEN_V1190_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(577,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(577,VME_CAEN_V1190_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(578,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(578,VME_CAEN_V1190_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(579,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(579,VME_CAEN_V1190_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(581,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(581,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],__visited1,0);
        UNPACK_DECL(581,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(582,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(582,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],__visited1,1);
        UNPACK_DECL(582,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(583,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(583,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],__visited1,2);
        UNPACK_DECL(583,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(584,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(584,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],__visited1,3);
        UNPACK_DECL(584,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_1:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(591,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(590,trigger.unnamed_27_31,17);
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._data;
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
  READ_FROM_BUFFER_FULL(603,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(597,trailer.geom,geom);
  CHECK_WORD_COUNT(598,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(602,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(603,trailer.u32,0x00f00000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_SHORT::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1290_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
void VME_CAEN_V1290_SUBTDC::__unpack(__data_src_t &__buffer,uint32 tdc,uint32 event_id
                                                           ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(tdc_start);
  void *__mark_tdc_start = __buffer._data;
  // UINT32 header
  // {
    //  0_11: bunch_id;
    // 12_23: event_id = CHECK(event_id);
    // 24_25: tdc = MATCH(tdc);
    // 27_31: 1;
  // }
  READ_FROM_BUFFER_FULL(217,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(213,header.event_id,event_id);
  CHECK_BITS_EQUAL(215,header.tdc,tdc);
  CHECK_BITS_EQUAL(216,header.unnamed_27_31,1);
  CHECK_UNNAMED_BITS_ZERO(217,header.u32,0x04000000);
  // several UINT32 ch_data NOENCODE
  // {
    //  0_20: value;
    // 21_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 3) | channel_low)],(value=value));
  // }
  for ( ; ; ) {
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
  if (__buffer.empty()) goto data_done_2;
  PEEK_FROM_BUFFER_FULL(244,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(224,ch_data.tdc,tdc,data_done_2);
  CHECK_JUMP_BITS_EQUAL(234,ch_data.unnamed_27_31,0,data_done_2);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(238,((ch_data.tdc << 3) | ch_data.channel_low));
    __item.value = ch_data.value;
  }
  }
  data_done_2:;
  // optional UINT32 error_flags
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
  if (__buffer.empty()) goto data_done_3;
  PEEK_FROM_BUFFER_FULL(252,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(250,__error_flags.tdc,tdc,data_done_3);
  CHECK_JUMP_BITS_EQUAL(251,__error_flags.unnamed_27_31,4,data_done_3);
  CHECK_JUMP_UNNAMED_BITS_ZERO(252,__error_flags.u32,0x04ff8000,data_done_3);
  error_flags.u32 = __error_flags.u32;
  __buffer.advance(sizeof(__error_flags.u32));
  data_done_3:;
  // MARK_COUNT(tdc_end);
  void *__mark_tdc_end = __buffer._data;
  // UINT32 trailer
  // {
    //  0_11: word_count = CHECK_COUNT(tdc_start,tdc_end,4,4);
    // 12_23: event_id = CHECK(header.event_id);
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 3;
  // }
  READ_FROM_BUFFER_FULL(263,uint32 ,trailer,trailer.u32);
  CHECK_WORD_COUNT(258,trailer.word_count,tdc_start,tdc_end,4,4);
  CHECK_BITS_EQUAL(259,trailer.event_id,header.event_id);
  CHECK_BITS_EQUAL(261,trailer.tdc,tdc);
  CHECK_BITS_EQUAL(262,trailer.unnamed_27_31,3);
  CHECK_UNNAMED_BITS_ZERO(263,trailer.u32,0x04000000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_SUBTDC::__unpack,uint32 tdc
                                                                ,uint32 event_id
                                                                ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1290.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290(geom)
template<typename __data_src_t>
void VME_CAEN_V1290::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._data;
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  READ_FROM_BUFFER_FULL(278,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(275,header.geom,geom);
  CHECK_BITS_EQUAL(277,header.unnamed_27_31,8);
  // select several

    // tdc[0] = VME_CAEN_V1290_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[1] = VME_CAEN_V1290_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[2] = VME_CAEN_V1290_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[3] = VME_CAEN_V1290_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                   // data=data);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_CAEN_V1290_SUBTDC tdc[0]: (s32) => (0xff000000,0x08000000)
    // optimized match 2: VME_CAEN_V1290_SUBTDC tdc[1]: (s32) => (0xff000000,0x09000000)
    // optimized match 3: VME_CAEN_V1290_SUBTDC tdc[2]: (s32) => (0xff000000,0x0a000000)
    // optimized match 4: VME_CAEN_V1290_SUBTDC tdc[3]: (s32) => (0xff000000,0x0b000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(286,uint32,__match_peek);
    // differ = 03000000 : 24 25
    uint32 __match_index = 0 | /* 24,25 */ ((__match_peek >> 24) & 0x00000003);
    static const sint8 __match_index_array[4] = { 1, 2, 3, 4, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(282,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(282,VME_CAEN_V1290_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(283,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(283,VME_CAEN_V1290_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(284,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(284,VME_CAEN_V1290_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(285,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(285,VME_CAEN_V1290_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_2:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(292,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(291,trigger.unnamed_27_31,17);
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._data;
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
  READ_FROM_BUFFER_FULL(304,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(298,trailer.geom,geom);
  CHECK_WORD_COUNT(299,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(303,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(304,trailer.u32,0x00f00000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1290_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SHORT_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
void VME_CAEN_V1290_SHORT_SUBTDC::__unpack(__data_src_t &__buffer,uint32 tdc
                                                                 ,uint32 event_id
                                                                 ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data)
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
  CHECK_BITS_EQUAL(321,ch_data.tdc,tdc);
  CHECK_BITS_EQUAL(331,ch_data.unnamed_27_31,0);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(335,((ch_data.tdc << 3) | ch_data.channel_low));
    __item.value = ch_data.value;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_SHORT_SUBTDC::__unpack,uint32 tdc
                                                                      ,uint32 event_id
                                                                      ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1290_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SHORT_SUBTDC_ERROR(tdc)
template<typename __data_src_t>
void VME_CAEN_V1290_SHORT_SUBTDC_ERROR::__unpack(__data_src_t &__buffer,uint32 tdc)
{
  // UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
  READ_FROM_BUFFER_FULL(352,uint32 ,error_flags,error_flags.u32);
  CHECK_BITS_EQUAL(350,error_flags.tdc,tdc);
  CHECK_BITS_EQUAL(351,error_flags.unnamed_27_31,4);
  CHECK_UNNAMED_BITS_ZERO(352,error_flags.u32,0x04ff8000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_SHORT_SUBTDC_ERROR::__unpack,uint32 tdc);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1290_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SHORT(geom)
template<typename __data_src_t>
void VME_CAEN_V1290_SHORT::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._data;
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  READ_FROM_BUFFER_FULL(367,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(364,header.geom,geom);
  CHECK_BITS_EQUAL(366,header.unnamed_27_31,8);
  // select several

    // tdc[0] = VME_CAEN_V1290_SHORT_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // tdc[1] = VME_CAEN_V1290_SHORT_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // tdc[2] = VME_CAEN_V1290_SHORT_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // tdc[3] = VME_CAEN_V1290_SHORT_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // norevisit err[0] = VME_CAEN_V1290_SHORT_SUBTDC_ERROR(tdc=0);
    // norevisit err[1] = VME_CAEN_V1290_SHORT_SUBTDC_ERROR(tdc=1);
    // norevisit err[2] = VME_CAEN_V1290_SHORT_SUBTDC_ERROR(tdc=2);
    // norevisit err[3] = VME_CAEN_V1290_SHORT_SUBTDC_ERROR(tdc=3);
  bitsone<4> __visited2;
  __visited2.clear();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_CAEN_V1290_SHORT_SUBTDC tdc[0]: (s32) => (0xfb000000,0x00000000)
    // optimized match 2: VME_CAEN_V1290_SHORT_SUBTDC tdc[1]: (s32) => (0xfb000000,0x01000000)
    // optimized match 3: VME_CAEN_V1290_SHORT_SUBTDC tdc[2]: (s32) => (0xfb000000,0x02000000)
    // optimized match 4: VME_CAEN_V1290_SHORT_SUBTDC tdc[3]: (s32) => (0xfb000000,0x03000000)
    // optimized match 5: VME_CAEN_V1290_SHORT_SUBTDC_ERROR err[0]: (s32) => (0xffff8000,0x20000000)
    // optimized match 6: VME_CAEN_V1290_SHORT_SUBTDC_ERROR err[1]: (s32) => (0xffff8000,0x21000000)
    // optimized match 7: VME_CAEN_V1290_SHORT_SUBTDC_ERROR err[2]: (s32) => (0xffff8000,0x22000000)
    // optimized match 8: VME_CAEN_V1290_SHORT_SUBTDC_ERROR err[3]: (s32) => (0xffff8000,0x23000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(380,uint32,__match_peek);
    // differ = 23000000 : 24 25 29
    uint32 __match_index = 0 | /* 24,25 */ ((__match_peek >> 24) & 0x00000003) | /* 29,29 */ ((__match_peek >> 27) & 0x00000004);
    static const sint8 __match_index_array[8] = { 1, 2, 3, 4, 5, 6, 7, 8, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(371,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(371,VME_CAEN_V1290_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(372,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(372,VME_CAEN_V1290_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(373,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(373,VME_CAEN_V1290_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(374,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(374,VME_CAEN_V1290_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(376,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(376,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],__visited2,0);
        UNPACK_DECL(376,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(377,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(377,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],__visited2,1);
        UNPACK_DECL(377,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(378,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(378,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],__visited2,2);
        UNPACK_DECL(378,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(379,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(379,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],__visited2,3);
        UNPACK_DECL(379,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_3:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(386,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(385,trigger.unnamed_27_31,17);
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._data;
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
  READ_FROM_BUFFER_FULL(398,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(392,trailer.geom,geom);
  CHECK_WORD_COUNT(393,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(397,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(398,trailer.u32,0x00f00000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_SHORT::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V775.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V775(geom,crate)
template<typename __data_src_t>
void VME_CAEN_V775::__unpack(__data_src_t &__buffer,uint32 geom,uint32 crate)
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
  CHECK_BITS_EQUAL(133,header.crate,crate);
  CHECK_BITS_EQUAL(134,header.unnamed_24_26,2);
  CHECK_BITS_EQUAL(135,header.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(136,header.u32,0x0000c0ff);
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
      // 27_31: geom = CHECK(geom);
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
    READ_FROM_BUFFER_FULL(156,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(152,ch_data.unnamed_24_26,0);
    CHECK_BITS_EQUAL(153,ch_data.geom,geom);
    CHECK_UNNAMED_BITS_ZERO(156,ch_data.u32,0x00e08000);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(155,ch_data.channel);
      __item.value = ch_data.value;
      __item.overflow = ch_data.overflow;
    }
  }
  // UINT32 eob
  // {
    //  0_23: event_number;
    // 24_26: 4;
    // 27_31: geom = CHECK(geom);
  // }
  READ_FROM_BUFFER_FULL(165,uint32 ,eob,eob.u32);
  CHECK_BITS_EQUAL(162,eob.unnamed_24_26,4);
  CHECK_BITS_EQUAL(163,eob.geom,geom);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V775::__unpack,uint32 geom,uint32 crate);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V830.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V830(geom)
template<typename __data_src_t>
void VME_CAEN_V830::__unpack(__data_src_t &__buffer,uint32 geom)
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
  READ_FROM_BUFFER_FULL(184,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(182,header.unnamed_26_26,1);
  CHECK_BITS_EQUAL(183,header.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(184,header.u32,0x03000000);
  // list(0<=index<header.count)

  for (uint32 index = 0; index < (uint32) (header.count); ++index)
  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_25: value;
      //    26: 0;
      // 27_31: channel;
      // ENCODE(data[channel],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 26; // 0..25
        uint32 unnamed_26_26 : 1; // 26
        uint32 channel : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 channel : 5; // 27..31
        uint32 unnamed_26_26 : 1; // 26
        uint32 value : 26; // 0..25
#endif
      };
      uint32  u32;
    } ch_data;
    READ_FROM_BUFFER_FULL(195,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(191,ch_data.unnamed_26_26,0);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(194,ch_data.channel);
      __item.value = ch_data.value;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V830::__unpack,uint32 geom);

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
  READ_FROM_BUFFER_FULL(623,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(620,header.geom,geom);
  CHECK_BITS_EQUAL(621,header.unnamed_24_29,0);
  CHECK_BITS_EQUAL(622,header.unnamed_30_31,1);
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
  if (__buffer.empty()) goto data_done_4;
  PEEK_FROM_BUFFER_FULL(634,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(630,ch_data.unnamed_21_29,32,data_done_4);
  CHECK_JUMP_BITS_EQUAL(631,ch_data.unnamed_30_31,0,data_done_4);
  CHECK_JUMP_UNNAMED_BITS_ZERO(634,ch_data.u32,0x0000a000,data_done_4);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(633,ch_data.channel);
    __item.value = ch_data.value;
    __item.overflow = ch_data.outofrange;
  }
  }
  data_done_4:;
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
  if (__buffer.empty()) goto data_done_5;
  PEEK_FROM_BUFFER_FULL(640,uint32 ,filler,filler.u32);
  CHECK_JUMP_BITS_EQUAL(639,filler.unnamed_0_31,0,data_done_5);
  __buffer.advance(sizeof(filler.u32));
  data_done_5:;
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  READ_FROM_BUFFER_FULL(646,uint32 ,end_of_event,end_of_event.u32);
  CHECK_BITS_EQUAL(645,end_of_event.unnamed_30_31,3);
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
  CHECK_WORD_COUNT(649,header.word_number,start,end,( - 4),4);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_MESYTEC_MADC32::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_MESYTEC_MDPP16.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MDPP16(geom)
template<typename __data_src_t>
void VME_MESYTEC_MDPP16::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA16_OVERFLOW data[34] ZERO_SUPPRESS_MULTI(100));
  // MARK_COUNT(start);
  void *__mark_start = __buffer._data;
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
  CHECK_BITS_EQUAL(664,header.geom,geom);
  CHECK_BITS_EQUAL(665,header.unnamed_24_29,0);
  CHECK_BITS_EQUAL(666,header.unnamed_30_31,1);
  // several UINT32 ch_data NOENCODE
  // {
    //  0_15: value;
    // 16_21: channel;
    //    22: overflow;
    //    23: pileup;
    // 24_27: 0;
    // 28_31: 1;
    // ENCODE(data[channel],(value=value,overflow=overflow,pileup=pileup));
  // }
  for ( ; ; ) {
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 value : 16; // 0..15
      uint32 channel : 6; // 16..21
      uint32 overflow : 1; // 22
      uint32 pileup : 1; // 23
      uint32 unnamed_24_27 : 4; // 24..27
      uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_28_31 : 4; // 28..31
      uint32 unnamed_24_27 : 4; // 24..27
      uint32 pileup : 1; // 23
      uint32 overflow : 1; // 22
      uint32 channel : 6; // 16..21
      uint32 value : 16; // 0..15
#endif
    };
    uint32  u32;
  } ch_data;
  if (__buffer.empty()) goto data_done_6;
  PEEK_FROM_BUFFER_FULL(679,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(675,ch_data.unnamed_24_27,0,data_done_6);
  CHECK_JUMP_BITS_EQUAL(676,ch_data.unnamed_28_31,1,data_done_6);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(678,ch_data.channel);
    __item.value = ch_data.value;
    __item.overflow = ch_data.overflow;
    __item.pileup = ch_data.pileup;
  }
  }
  data_done_6:;
  // several UINT32 fill_word NOENCODE
  // {
    //  0_31: 0;
  // }
  for ( ; ; ) {
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
  } fill_word;
  if (__buffer.empty()) goto data_done_7;
  PEEK_FROM_BUFFER_FULL(684,uint32 ,fill_word,fill_word.u32);
  CHECK_JUMP_BITS_EQUAL(683,fill_word.unnamed_0_31,0,data_done_7);
  __buffer.advance(sizeof(fill_word.u32));
  }
  data_done_7:;
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  READ_FROM_BUFFER_FULL(690,uint32 ,end_of_event,end_of_event.u32);
  CHECK_BITS_EQUAL(689,end_of_event.unnamed_30_31,3);
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
  CHECK_WORD_COUNT(693,header.word_number,start,end,( - 4),4);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_MESYTEC_MDPP16::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_MESY_MADC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESY_MADC32(geom)
template<typename __data_src_t>
void VME_MESY_MADC32::__unpack(__data_src_t &__buffer,uint32 geom)
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
  CHECK_BITS_EQUAL(717,header.geom,geom);
  CHECK_BITS_EQUAL(718,header.unnamed_24_29,0);
  CHECK_BITS_EQUAL(719,header.unnamed_30_31,1);
  // list(0<=index<(header.word_number - 1))

  for (uint32 index = 0; index < (uint32) ((header.word_number - 1)); ++index)
  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_12: value;
      //    14: outofrange;
      // 16_20: channel;
      // 21_29: 32;
      // 30_31: 0;
      // ENCODE(data[channel],(value=value));
    // }
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
    READ_FROM_BUFFER_FULL(733,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(729,ch_data.unnamed_21_29,32);
    CHECK_BITS_EQUAL(730,ch_data.unnamed_30_31,0);
    CHECK_UNNAMED_BITS_ZERO(733,ch_data.u32,0x0000a000);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(732,ch_data.channel);
      __item.value = ch_data.value;
    }
  }
  // UINT32 end_of_event NOENCODE
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 counter : 30; // 0..29
      uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_30_31 : 2; // 30..31
      uint32 counter : 30; // 0..29
#endif
    };
    uint32  u32;
  } end_of_event;
  READ_FROM_BUFFER_FULL(740,uint32 ,end_of_event,end_of_event.u32);
  CHECK_BITS_EQUAL(739,end_of_event.unnamed_30_31,3);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_MESY_MADC32::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_MESY_MADC32_PADDING.
 *
 * Do not edit - automatically generated.
 */

// VME_MESY_MADC32_PADDING()
template<typename __data_src_t>
void VME_MESY_MADC32_PADDING::__unpack(__data_src_t &__buffer)
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
  CHECK_BITS_EQUAL(704,padding.value,0x32323232);
}
FORCE_IMPL_DATA_SRC_FCN(void,VME_MESY_MADC32_PADDING::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_STRUCK_SIS3316_CHANNEL_DATA.
 *
 * Do not edit - automatically generated.
 */

// VME_STRUCK_SIS3316_CHANNEL_DATA(id,ch)
template<typename __data_src_t>
void VME_STRUCK_SIS3316_CHANNEL_DATA::__unpack(__data_src_t &__buffer,uint32 id
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
  READ_FROM_BUFFER_FULL(1148,uint32 ,header0,header0.u32);
  CHECK_BITS_EQUAL(1144,header0.chanNo,ch);
  CHECK_BITS_EQUAL(1145,header0.id,id);
  {
    typedef __typeof__(*(&(ts))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = ts.insert_index(1147,0);
    __item.value = header0.timeS;
  }
  // UINT32 header2
  // {
    //  0_31: timeS;
    // ENCODE(ts[1],(value=timeS));
  // }
  READ_FROM_BUFFER_FULL(1154,uint32 ,header2,header2.u32);
  {
    typedef __typeof__(*(&(ts))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = ts.insert_index(1153,1);
    __item.value = header2.timeS;
  }
  // if(header0.has_acc6)

  if (header0.has_acc6)
  {
    // UINT32 peak NOENCODE
    // {
      //  0_15: peakValue;
      // 16_31: peakIndex;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 peakValue : 16; // 0..15
        uint32 peakIndex : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 peakIndex : 16; // 16..31
        uint32 peakValue : 16; // 0..15
#endif
      };
      uint32  u32;
    } peak;
    READ_FROM_BUFFER_FULL(1161,uint32 ,peak,peak.u32);
    // UINT32 gate_group_1
    // {
      //  0_23: sum;
      // 24_27: reserved;
      //    28: has_pileup;
      //    29: has_repileup;
      //    30: has_underflow;
      //    31: has_overflow;
      // ENCODE(gate[0],(value=sum));
    // }
    READ_FROM_BUFFER_FULL(1173,uint32 ,gate_group_1,gate_group_1.u32);
    {
      typedef __typeof__(*(&(gate))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = gate.insert_index(1172,0);
      __item.value = gate_group_1.sum;
    }
    // list(1<=i<6)

    for (uint32 i = 1; i < (uint32) (6); ++i)
    {
      // UINT32 gate_group_2_6
      // {
        //  0_27: sum;
        // 28_31: 0;
        // ENCODE(gate[i],(value=sum));
      // }
      READ_FROM_BUFFER_FULL(1183,uint32 ,gate_group_2_6,gate_group_2_6.u32);
      CHECK_BITS_EQUAL(1181,gate_group_2_6.unnamed_28_31,0);
      {
        typedef __typeof__(*(&(gate))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = gate.insert_index(1182,i);
        __item.value = gate_group_2_6.sum;
      }
    }
  }
  // if(header0.has_acc2)

  if (header0.has_acc2)
  {
    // list(6<=i<8)

    for (uint32 i = 6; i < (uint32) (8); ++i)
    {
      // UINT32 gate_group_7_8
      // {
        //  0_27: sum;
        // 28_31: 0;
        // ENCODE(gate[i],(value=sum));
      // }
      READ_FROM_BUFFER_FULL(1196,uint32 ,gate_group_7_8,gate_group_7_8.u32);
      CHECK_BITS_EQUAL(1194,gate_group_7_8.unnamed_28_31,0);
      {
        typedef __typeof__(*(&(gate))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = gate.insert_index(1195,i);
        __item.value = gate_group_7_8.sum;
      }
    }
  }
  // if(header0.has_maw)

  if (header0.has_maw)
  {
    // UINT32 maw1
    // {
      //  0_31: max;
      // ENCODE(maw[0],(value=max));
    // }
    READ_FROM_BUFFER_FULL(1205,uint32 ,maw1,maw1.u32);
    {
      typedef __typeof__(*(&(maw))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = maw.insert_index(1204,0);
      __item.value = maw1.max;
    }
    // UINT32 maw2
    // {
      //  0_31: after;
      // ENCODE(maw[1],(value=after));
    // }
    READ_FROM_BUFFER_FULL(1211,uint32 ,maw2,maw2.u32);
    {
      typedef __typeof__(*(&(maw))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = maw.insert_index(1210,1);
      __item.value = maw2.after;
    }
    // UINT32 maw3
    // {
      //  0_31: before;
      // ENCODE(maw[2],(value=before));
    // }
    READ_FROM_BUFFER_FULL(1217,uint32 ,maw3,maw3.u32);
    {
      typedef __typeof__(*(&(maw))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = maw.insert_index(1216,2);
      __item.value = maw3.before;
    }
  }
  // if(header0.has_e)

  if (header0.has_e)
  {
    // UINT32 maxe1
    // {
      //  0_31: start;
      // ENCODE(maxe[0],(value=(start + 0x08000000)));
    // }
    READ_FROM_BUFFER_FULL(1225,uint32 ,maxe1,maxe1.u32);
    {
      typedef __typeof__(*(&(maxe))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = maxe.insert_index(1224,0);
      __item.value = (maxe1.start + 0x08000000);
    }
    // UINT32 maxe2
    // {
      //  0_31: max;
      // ENCODE(maxe[1],(value=(max + 0x08000000)));
    // }
    READ_FROM_BUFFER_FULL(1231,uint32 ,maxe2,maxe2.u32);
    {
      typedef __typeof__(*(&(maxe))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = maxe.insert_index(1230,1);
      __item.value = (maxe2.max + 0x08000000);
    }
  }
  // UINT32 header3
  // {
    //  0_25: sampleLength;
    //    26: pileup;
    //    27: mawFlag;
    // 28_31: 14;
  // }
  READ_FROM_BUFFER_FULL(1240,uint32 ,header3,header3.u32);
  CHECK_BITS_EQUAL(1239,header3.unnamed_28_31,14);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_STRUCK_SIS3316_CHANNEL_DATA::__unpack,uint32 id
                                                                          ,uint32 ch);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_STRUCK_SIS3316_CHANNEL.
 *
 * Do not edit - automatically generated.
 */

// VME_STRUCK_SIS3316_CHANNEL(id,ch)
template<typename __data_src_t>
void VME_STRUCK_SIS3316_CHANNEL::__unpack(__data_src_t &__buffer,uint32 id
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
  CHECK_BITS_EQUAL(1110,channel_header.id,id);
  CHECK_BITS_EQUAL(1109,channel_header.ch,ch);
  CHECK_BITS_EQUAL(1107,channel_header.module,0x3316);
  // list(0<=n<channel_header.padding_words)

  for (uint32 n = 0; n < (uint32) (channel_header.padding_words); ++n)
  {
    // UINT32 padding NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: ch = MATCH(ch);
      // 16_31: module = MATCH(0x3316);
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 id : 8; // 0..7
        uint32 ch : 8; // 8..15
        uint32 module : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 module : 16; // 16..31
        uint32 ch : 8; // 8..15
        uint32 id : 8; // 0..7
#endif
      };
      uint32  u32;
    } padding;
    READ_FROM_BUFFER_FULL(1120,uint32 ,padding,padding.u32);
    CHECK_BITS_EQUAL(1119,padding.id,id);
    CHECK_BITS_EQUAL(1118,padding.ch,ch);
    CHECK_BITS_EQUAL(1117,padding.module,0x3316);
  }
  // select several

    // multi data = VME_STRUCK_SIS3316_CHANNEL_DATA(id=id,ch=ch);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_STRUCK_SIS3316_CHANNEL_DATA data: (s32) => (0x00000000,0x00000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1125,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(1124,spurious_match_abort_loop_4,VME_STRUCK_SIS3316_CHANNEL_DATA,/*id*/id,/*ch*/ch);
        UNPACK_DECL(1124,VME_STRUCK_SIS3316_CHANNEL_DATA,multi_data.next_free(),/*id*/id,/*ch*/ch);
        break;
    }
  }
  spurious_match_abort_loop_4:;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_STRUCK_SIS3316_CHANNEL::__unpack,uint32 id
                                                                     ,uint32 ch);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_STRUCK_SIS3316.
 *
 * Do not edit - automatically generated.
 */

// VME_STRUCK_SIS3316(id)
template<typename __data_src_t>
void VME_STRUCK_SIS3316::__unpack(__data_src_t &__buffer,uint32 id)
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
  CHECK_BITS_EQUAL(1078,header.id,id);
  CHECK_BITS_EQUAL(1076,header.module,0x3316);
  {
    n_ch.value = header.nofCH;
  }
  // select several

    // channel[0] = VME_STRUCK_SIS3316_CHANNEL(ch=0,id=id);
    // channel[1] = VME_STRUCK_SIS3316_CHANNEL(ch=1,id=id);
    // channel[2] = VME_STRUCK_SIS3316_CHANNEL(ch=2,id=id);
    // channel[3] = VME_STRUCK_SIS3316_CHANNEL(ch=3,id=id);
    // channel[4] = VME_STRUCK_SIS3316_CHANNEL(ch=4,id=id);
    // channel[5] = VME_STRUCK_SIS3316_CHANNEL(ch=5,id=id);
    // channel[6] = VME_STRUCK_SIS3316_CHANNEL(ch=6,id=id);
    // channel[7] = VME_STRUCK_SIS3316_CHANNEL(ch=7,id=id);
    // channel[8] = VME_STRUCK_SIS3316_CHANNEL(ch=8,id=id);
    // channel[9] = VME_STRUCK_SIS3316_CHANNEL(ch=9,id=id);
    // channel[10] = VME_STRUCK_SIS3316_CHANNEL(ch=10,id=id);
    // channel[11] = VME_STRUCK_SIS3316_CHANNEL(ch=11,id=id);
    // channel[12] = VME_STRUCK_SIS3316_CHANNEL(ch=12,id=id);
    // channel[13] = VME_STRUCK_SIS3316_CHANNEL(ch=13,id=id);
    // channel[14] = VME_STRUCK_SIS3316_CHANNEL(ch=14,id=id);
    // channel[15] = VME_STRUCK_SIS3316_CHANNEL(ch=15,id=id);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_STRUCK_SIS3316_CHANNEL channel[0]: (s32) => (0xffff0f00,0x33160000)
    // optimized match 2: VME_STRUCK_SIS3316_CHANNEL channel[1]: (s32) => (0xffff0f00,0x33160100)
    // optimized match 3: VME_STRUCK_SIS3316_CHANNEL channel[2]: (s32) => (0xffff0f00,0x33160200)
    // optimized match 4: VME_STRUCK_SIS3316_CHANNEL channel[3]: (s32) => (0xffff0f00,0x33160300)
    // optimized match 5: VME_STRUCK_SIS3316_CHANNEL channel[4]: (s32) => (0xffff0f00,0x33160400)
    // optimized match 6: VME_STRUCK_SIS3316_CHANNEL channel[5]: (s32) => (0xffff0f00,0x33160500)
    // optimized match 7: VME_STRUCK_SIS3316_CHANNEL channel[6]: (s32) => (0xffff0f00,0x33160600)
    // optimized match 8: VME_STRUCK_SIS3316_CHANNEL channel[7]: (s32) => (0xffff0f00,0x33160700)
    // optimized match 9: VME_STRUCK_SIS3316_CHANNEL channel[8]: (s32) => (0xffff0f00,0x33160800)
    // optimized match 10: VME_STRUCK_SIS3316_CHANNEL channel[9]: (s32) => (0xffff0f00,0x33160900)
    // optimized match 11: VME_STRUCK_SIS3316_CHANNEL channel[10]: (s32) => (0xffff0f00,0x33160a00)
    // optimized match 12: VME_STRUCK_SIS3316_CHANNEL channel[11]: (s32) => (0xffff0f00,0x33160b00)
    // optimized match 13: VME_STRUCK_SIS3316_CHANNEL channel[12]: (s32) => (0xffff0f00,0x33160c00)
    // optimized match 14: VME_STRUCK_SIS3316_CHANNEL channel[13]: (s32) => (0xffff0f00,0x33160d00)
    // optimized match 15: VME_STRUCK_SIS3316_CHANNEL channel[14]: (s32) => (0xffff0f00,0x33160e00)
    // optimized match 16: VME_STRUCK_SIS3316_CHANNEL channel[15]: (s32) => (0xffff0f00,0x33160f00)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1100,uint32,__match_peek);
    // differ = 00000f00 : 8 9 10 11
    uint32 __match_index = 0 | /* 8,11 */ ((__match_peek >> 8) & 0x0000000f);
    static const sint8 __match_index_array[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(1084,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/0);
        UNPACK_DECL(1084,VME_STRUCK_SIS3316_CHANNEL,channel[0],/*id*/id,/*ch*/0);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(1085,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/1);
        UNPACK_DECL(1085,VME_STRUCK_SIS3316_CHANNEL,channel[1],/*id*/id,/*ch*/1);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(1086,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/2);
        UNPACK_DECL(1086,VME_STRUCK_SIS3316_CHANNEL,channel[2],/*id*/id,/*ch*/2);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(1087,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/3);
        UNPACK_DECL(1087,VME_STRUCK_SIS3316_CHANNEL,channel[3],/*id*/id,/*ch*/3);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(1088,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/4);
        UNPACK_DECL(1088,VME_STRUCK_SIS3316_CHANNEL,channel[4],/*id*/id,/*ch*/4);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(1089,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/5);
        UNPACK_DECL(1089,VME_STRUCK_SIS3316_CHANNEL,channel[5],/*id*/id,/*ch*/5);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(1090,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/6);
        UNPACK_DECL(1090,VME_STRUCK_SIS3316_CHANNEL,channel[6],/*id*/id,/*ch*/6);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(1091,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/7);
        UNPACK_DECL(1091,VME_STRUCK_SIS3316_CHANNEL,channel[7],/*id*/id,/*ch*/7);
        break;
      case 9:
        CHECK_SPURIOUS_MATCH_DECL(1092,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/8);
        UNPACK_DECL(1092,VME_STRUCK_SIS3316_CHANNEL,channel[8],/*id*/id,/*ch*/8);
        break;
      case 10:
        CHECK_SPURIOUS_MATCH_DECL(1093,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/9);
        UNPACK_DECL(1093,VME_STRUCK_SIS3316_CHANNEL,channel[9],/*id*/id,/*ch*/9);
        break;
      case 11:
        CHECK_SPURIOUS_MATCH_DECL(1094,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/10);
        UNPACK_DECL(1094,VME_STRUCK_SIS3316_CHANNEL,channel[10],/*id*/id,/*ch*/10);
        break;
      case 12:
        CHECK_SPURIOUS_MATCH_DECL(1095,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/11);
        UNPACK_DECL(1095,VME_STRUCK_SIS3316_CHANNEL,channel[11],/*id*/id,/*ch*/11);
        break;
      case 13:
        CHECK_SPURIOUS_MATCH_DECL(1096,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/12);
        UNPACK_DECL(1096,VME_STRUCK_SIS3316_CHANNEL,channel[12],/*id*/id,/*ch*/12);
        break;
      case 14:
        CHECK_SPURIOUS_MATCH_DECL(1097,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/13);
        UNPACK_DECL(1097,VME_STRUCK_SIS3316_CHANNEL,channel[13],/*id*/id,/*ch*/13);
        break;
      case 15:
        CHECK_SPURIOUS_MATCH_DECL(1098,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/14);
        UNPACK_DECL(1098,VME_STRUCK_SIS3316_CHANNEL,channel[14],/*id*/id,/*ch*/14);
        break;
      case 16:
        CHECK_SPURIOUS_MATCH_DECL(1099,spurious_match_abort_loop_5,VME_STRUCK_SIS3316_CHANNEL,/*id*/id,/*ch*/15);
        UNPACK_DECL(1099,VME_STRUCK_SIS3316_CHANNEL,channel[15],/*id*/id,/*ch*/15);
        break;
    }
  }
  spurious_match_abort_loop_5:;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_STRUCK_SIS3316::__unpack,uint32 id);

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
  READ_FROM_BUFFER_FULL(793,uint32 ,hi,hi.u32);
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
  READ_FROM_BUFFER_FULL(797,uint32 ,lo,lo.u32);
  {
    time_lo.value = lo.time;
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,WR_MULTI::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SCALERS.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(SCALERS)
template<typename __data_src_t>
void SCALERS::__unpack(__data_src_t &__buffer)
{
  // select several

    // trlo = TRLO_TRIG_SCALER(id=18);
    // caen_scaler = VME_CAEN_V830(geom=31);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TRLO_TRIG_SCALER trlo: (s32) => (0xffe0c7a0,0x12000000)
    // optimized match 2: VME_CAEN_V830 caen_scaler: (s32) => (0xff000000,0xfc000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1292,uint32,__match_peek);
    // differ = ee000000 : 25 26 27 29 30 31
    uint32 __match_index = 0 | /* 25,27 */ ((__match_peek >> 25) & 0x00000007) | /* 29,31 */ ((__match_peek >> 26) & 0x00000038);
    static const sint8 __match_index_array[64] = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(1290,TRLO_TRIG_SCALER,trlo,/*id*/18);
        break;
      case 2:
        UNPACK_DECL(1291,VME_CAEN_V830,caen_scaler,/*geom*/31);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,SCALERS::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TS.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TS)
template<typename __data_src_t>
void TS::__unpack(__data_src_t &__buffer)
{
  // trlo = TRLO(id=2,multi_events=29);
  UNPACK_DECL(1298,TRLO,trlo,/*id*/2,/*multi_events*/29);
}
FORCE_IMPL_DATA_SRC_FCN(void,TS::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(VME)
template<typename __data_src_t>
void VME::__unpack(__data_src_t &__buffer)
{
  // header = LAND_STD_VME();
  UNPACK_DECL(1303,LAND_STD_VME,header);
  // select several

    // sis3316[0] = VME_STRUCK_SIS3316(id=3);
    // sis3316[1] = VME_STRUCK_SIS3316(id=4);
    // sis3316[2] = VME_STRUCK_SIS3316(id=5);
    // multi tdc = CAEN_V775(geom=31,crate=0);
    // mesy_padding = VME_MESY_MADC32_PADDING();
    // multi adc = VME_MESY_MADC32(geom=6);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_STRUCK_SIS3316 sis3316[0]: (s32) => (0xffff00ff,0x33160003)
    // optimized match 2: VME_STRUCK_SIS3316 sis3316[1]: (s32) => (0xffff00ff,0x33160004)
    // optimized match 3: VME_STRUCK_SIS3316 sis3316[2]: (s32) => (0xffff00ff,0x33160005)
    // optimized match 4: CAEN_V775 tdc: (s32) => (0xffffc000,0xfa000000)
    // optimized match 5: VME_MESY_MADC32_PADDING mesy_padding: (s32) => (0xffffffff,0x32323232)
    // optimized match 6: VME_MESY_MADC32 adc: (s32) => (0xffff0000,0x40060000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1317,uint32,__match_peek);
    // differ = fb363237 : 0 1 2 4 5 9 12 13 17 18 20 21 24 25 27 28 29 30 31
    // select on bit 24, partition: 1:3(d3) 0:3(d3)
    if (__match_peek & 0x01000000) {
      MATCH_DECL_QUICK(1306,__match_no,1,sis3316[0],__match_peek,0xffff00ff,0x33160003);
      MATCH_DECL_QUICK(1307,__match_no,2,sis3316[1],__match_peek,0xffff00ff,0x33160004);
      MATCH_DECL_QUICK(1308,__match_no,3,sis3316[2],__match_peek,0xffff00ff,0x33160005);
    } else {
      MATCH_DECL_QUICK(1309,__match_no,4,tdc,__match_peek,0xffffc000,0xfa000000);
      MATCH_DECL_QUICK(1310,__match_no,5,mesy_padding,__match_peek,0xffffffff,0x32323232);
      MATCH_DECL_QUICK(1312,__match_no,6,adc,__match_peek,0xffff0000,0x40060000);
    }
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(1306,VME_STRUCK_SIS3316,sis3316[0],/*id*/3);
        break;
      case 2:
        UNPACK_DECL(1307,VME_STRUCK_SIS3316,sis3316[1],/*id*/4);
        break;
      case 3:
        UNPACK_DECL(1308,VME_STRUCK_SIS3316,sis3316[2],/*id*/5);
        break;
      case 4:
        UNPACK_DECL(1309,CAEN_V775,multi_tdc.next_free(),/*geom*/31,/*crate*/0);
        break;
      case 5:
        UNPACK_DECL(1310,VME_MESY_MADC32_PADDING,mesy_padding);
        break;
      case 6:
        UNPACK_DECL(1312,VME_MESY_MADC32,multi_adc.next_free(),/*geom*/6);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,VME::__unpack);

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
  // ts = TS(type=10,subtype=1,control=5,subcrate=1);
  // vme = VME(type=88,subtype=0x2260,control=5,subcrate=1);
  // scalers = SCALERS(type=12,subtype=0xd80,control=5,subcrate=1);
  // ignore_unknown_subevent;
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(1322,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==5)&&(VES10_1_subcrate==1)),ts);
  MATCH_SUBEVENT_DECL(1323,__match_no,2,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)&&(VES10_1_subcrate==1)),vme);
  MATCH_SUBEVENT_DECL(1324,__match_no,3,((VES10_1_type==12)&&(VES10_1_subtype==0xd80)&&(VES10_1_control==5)&&(VES10_1_subcrate==1)),scalers);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1322,TS,ts,0);
      UNPACK_SUBEVENT_DECL(1322,0,TS,ts);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1323,VME,vme,1);
      UNPACK_SUBEVENT_DECL(1323,0,VME,vme);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1324,SCALERS,scalers,2);
      UNPACK_SUBEVENT_DECL(1324,0,SCALERS,scalers);
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
