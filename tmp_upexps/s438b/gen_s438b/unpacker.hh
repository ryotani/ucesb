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
    READ_FROM_BUFFER_FULL(27,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(24,ch_data.unnamed_24_31,0);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(26,index);
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
      READ_FROM_BUFFER_FULL(75,uint16 ,ch_data,ch_data.u16);
      CHECK_BITS_EQUAL(72,ch_data.channel,index);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(74,index);
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
      READ_FROM_BUFFER_FULL(82,uint16 ,ch_data,ch_data.u16);
      CHECK_UNNAMED_BITS_ZERO(82,ch_data.u16,0xf000);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(81,index);
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
      READ_FROM_BUFFER_FULL(47,uint16 ,ch_data,ch_data.u16);
      CHECK_BITS_EQUAL(43,ch_data.channel,index);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(46,index);
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
      READ_FROM_BUFFER_FULL(55,uint16 ,ch_data,ch_data.u16);
      CHECK_UNNAMED_BITS_ZERO(55,ch_data.u16,0x7000);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(54,index);
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
 * Event unpacker for DAQ_STATUS.
 *
 * Do not edit - automatically generated.
 */

// DAQ_STATUS()
template<typename __data_src_t>
void DAQ_STATUS::__unpack(__data_src_t &__buffer)
{
  // UINT32 spill_nr;
  READ_FROM_BUFFER(2264,uint32 ,spill_nr);
  // UINT32 trigger;
  READ_FROM_BUFFER(2265,uint32 ,trigger);
  // UINT32 time;
  READ_FROM_BUFFER(2266,uint32 ,time);
  // MEMBER(DATA32 scaler[48] ZERO_SUPPRESS);
  // list(0<=i<48)

  for (uint32 i = 0; i < (uint32) (48); ++i)
  {
    // UINT32 count NOENCODE
    // {
      //  0_31: value;
      // ENCODE(scaler[i],(value=value));
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
    } count;
    READ_FROM_BUFFER_FULL(2273,uint32 ,count,count.u32);
    {
      typedef __typeof__(*(&(scaler))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = scaler.insert_index(2272,i);
      __item.value = count.value;
    }
  }
  // MEMBER(DATA32 trig_count[16] ZERO_SUPPRESS);
  // list(0<=i<16)

  for (uint32 i = 0; i < (uint32) (16); ++i)
  {
    // UINT32 count NOENCODE
    // {
      //  0_31: value;
      // ENCODE(trig_count[i],(value=value));
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
    } count;
    READ_FROM_BUFFER_FULL(2283,uint32 ,count,count.u32);
    {
      typedef __typeof__(*(&(trig_count))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = trig_count.insert_index(2282,i);
      __item.value = count.value;
    }
  }
  // UINT32 events;
  READ_FROM_BUFFER(2286,uint32 ,events);
  // UINT32 errors;
  READ_FROM_BUFFER(2287,uint32 ,errors);
  // UINT32 errors_data_corrupt;
  READ_FROM_BUFFER(2289,uint32 ,errors_data_corrupt);
  // UINT32 errors_data_missing;
  READ_FROM_BUFFER(2290,uint32 ,errors_data_missing);
  // UINT32 errors_data_too_much;
  READ_FROM_BUFFER(2291,uint32 ,errors_data_too_much);
  // UINT32 errors_event_counter_mismatch;
  READ_FROM_BUFFER(2292,uint32 ,errors_event_counter_mismatch);
  // UINT32 errors_event_counter_incr_mismatch;
  READ_FROM_BUFFER(2293,uint32 ,errors_event_counter_incr_mismatch);
  // UINT32 errors_trigger_mismatch;
  READ_FROM_BUFFER(2294,uint32 ,errors_trigger_mismatch);
  // UINT32 ticks_count;
  READ_FROM_BUFFER(2296,uint32 ,ticks_count);
  // UINT32 ticks_deadtime;
  READ_FROM_BUFFER(2297,uint32 ,ticks_deadtime);
  // MEMBER(DATA32 ticks_dt_trig[16] ZERO_SUPPRESS);
  // list(0<=i<16)

  for (uint32 i = 0; i < (uint32) (16); ++i)
  {
    // UINT32 count NOENCODE
    // {
      //  0_31: value;
      // ENCODE(ticks_dt_trig[i],(value=value));
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
    } count;
    READ_FROM_BUFFER_FULL(2303,uint32 ,count,count.u32);
    {
      typedef __typeof__(*(&(ticks_dt_trig))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ticks_dt_trig.insert_index(2302,i);
      __item.value = count.value;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,DAQ_STATUS::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for DUMMY_WORD.
 *
 * Do not edit - automatically generated.
 */

// DUMMY_WORD()
template<typename __data_src_t>
void DUMMY_WORD::__unpack(__data_src_t &__buffer)
{
  // UINT32 dummy_word;
  READ_FROM_BUFFER(2213,uint32 ,dummy_word);
}
FORCE_IMPL_DATA_SRC_FCN(void,DUMMY_WORD::__unpack);

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
  READ_FROM_BUFFER_FULL(105,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_RANGE_MAX(98,ch_data.channel,(channels - 1));
  CHECK_BITS_EQUAL(101,ch_data.n,0);
  CHECK_BITS_EQUAL(102,ch_data.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(105,ch_data.u32,0x0040f000);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(104,ch_data.channel);
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
  READ_FROM_BUFFER_FULL(122,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_RANGE_MAX(116,ch_data.channel,(channels - 1));
  CHECK_BITS_EQUAL(118,ch_data.n,0);
  CHECK_BITS_EQUAL(119,ch_data.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(122,ch_data.u32,0x0000f000);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(121,ch_data.channel);
    __item.value = ch_data.value;
    __item.range = ch_data.range;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FASTBUS_LECROY_1885::__unpack,uint32 geom
                                                              ,uint32 channels);

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
  CHECK_BITS_EQUAL(1399,Identifier.unnamed_0_31,0xfebe0000);
  // UINT32 febexcards
  // {
    //  0_07: N_febex1;
    //  8_15: N_febex2;
    // 16_23: N_febex3;
    // 24_31: N_febex4;
  // }
  READ_FROM_BUFFER_FULL(1408,uint32 ,febexcards,febexcards.u32);
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
  CHECK_BITS_EQUAL(1429,indicator.unnamed_0_7,52);
  CHECK_BITS_EQUAL(1431,indicator.sfp,sfp);
  CHECK_BITS_EQUAL(1432,indicator.card,card);
  CHECK_BITS_EQUAL(1433,indicator.unnamed_24_31,255);
  // UINT32 ETsize NOENCODE
  // {
    //  0_31: channelsize;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 channelsize : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 channelsize : 32; // 0..31
#endif
    };
    uint32  u32;
  } ETsize;
  READ_FROM_BUFFER_FULL(1440,uint32 ,ETsize,ETsize.u32);
  // UINT32 head NOENCODE
  // {
    //  0_23: notused;
    // 24_31: 175;
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
  } head;
  READ_FROM_BUFFER_FULL(1446,uint32 ,head,head.u32);
  CHECK_BITS_EQUAL(1445,head.unnamed_24_31,175);
  // UINT32 triggertime NOENCODE
  // {
    //  0_31: triggertime;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 triggertime : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 triggertime : 32; // 0..31
#endif
    };
    uint32  u32;
  } triggertime;
  READ_FROM_BUFFER_FULL(1451,uint32 ,triggertime,triggertime.u32);
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
  READ_FROM_BUFFER_FULL(1456,uint32 ,time,time.u32);
  // list(0<=i<((ETsize.channelsize - 16) >> 3))

  for (uint32 i = 0; i < (uint32) (((ETsize.channelsize - 16) >> 3)); ++i)
  {
    // UINT32 hittime NOENCODE
    // {
      //  0_11: data;
      // 12_14: notused1;
      //    15: sign;
      // 16_19: notused2;
      // 20_23: multihit;
      // 24_27: Nhit;
      // 28_31: channel_id;
      // ENCODE(t[channel_id],(value=data));
      // ENCODE(Nhit[channel_id],(value=Nhit));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 data : 12; // 0..11
        uint32 notused1 : 3; // 12..14
        uint32 sign : 1; // 15
        uint32 notused2 : 4; // 16..19
        uint32 multihit : 4; // 20..23
        uint32 Nhit : 4; // 24..27
        uint32 channel_id : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 channel_id : 4; // 28..31
        uint32 Nhit : 4; // 24..27
        uint32 multihit : 4; // 20..23
        uint32 notused2 : 4; // 16..19
        uint32 sign : 1; // 15
        uint32 notused1 : 3; // 12..14
        uint32 data : 12; // 0..11
#endif
      };
      uint32  u32;
    } hittime;
    READ_FROM_BUFFER_FULL(1471,uint32 ,hittime,hittime.u32);
    {
      typedef __typeof__(*(&(t))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = t.insert_index(1469,hittime.channel_id);
      __item.value = hittime.data;
    }
    {
      typedef __typeof__(*(&(Nhit))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = Nhit.insert_index(1470,hittime.channel_id);
      __item.value = hittime.Nhit;
    }
    // UINT32 energy NOENCODE
    // {
      //  0_21: data;
      //    22: notused1;
      //    23: sign;
      // 24_27: notused2;
      // 28_31: channel_id;
      // ENCODE(E[channel_id],(value=(data | (sign << 23))));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 data : 22; // 0..21
        uint32 notused1 : 1; // 22
        uint32 sign : 1; // 23
        uint32 notused2 : 4; // 24..27
        uint32 channel_id : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 channel_id : 4; // 28..31
        uint32 notused2 : 4; // 24..27
        uint32 sign : 1; // 23
        uint32 notused1 : 1; // 22
        uint32 data : 22; // 0..21
#endif
      };
      uint32  u32;
    } energy;
    READ_FROM_BUFFER_FULL(1481,uint32 ,energy,energy.u32);
    {
      typedef __typeof__(*(&(E))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = E.insert_index(1480,energy.channel_id);
      __item.value = (energy.data | (energy.sign << 23));
    }
  }
  // UINT32 trail NOENCODE
  // {
    //  0_23: notused;
    // 24_31: 191;
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
  } trail;
  READ_FROM_BUFFER_FULL(1487,uint32 ,trail,trail.u32);
  CHECK_BITS_EQUAL(1486,trail.unnamed_24_31,191);
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
  READ_FROM_BUFFER_FULL(1418,uint32 ,pads_data,pads_data.u32);
  CHECK_BITS_EQUAL(1417,pads_data.unnamed_20_31,0xadd);
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_PADDING::__unpack);

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
  READ_FROM_BUFFER_FULL(726,uint32 ,failure,failure.u32);
  CHECK_UNNAMED_BITS_ZERO(726,failure.u32,0x003fff00);
  // if(failure.has_continous_event_counter)

  if (failure.has_continous_event_counter)
  {
    // UINT32 continous_event_counter;
    READ_FROM_BUFFER(729,uint32 ,continous_event_counter);
  }
  // if(failure.has_time_stamp)

  if (failure.has_time_stamp)
  {
    // UINT32 time_stamp;
    READ_FROM_BUFFER(733,uint32 ,time_stamp);
  }
  // if(failure.has_clock_counter_stamp)

  if (failure.has_clock_counter_stamp)
  {
    // UINT32 clock_counter_stamp;
    READ_FROM_BUFFER(737,uint32 ,clock_counter_stamp);
  }
  // if(failure.has_update_qdc_iped_value)

  if (failure.has_update_qdc_iped_value)
  {
    // UINT32 iped;
    READ_FROM_BUFFER(741,uint32 ,iped);
  }
  // if(failure.has_multi_event)

  if (failure.has_multi_event)
  {
    // UINT32 multi_events;
    READ_FROM_BUFFER(745,uint32 ,multi_events);
  }
  // if(failure.has_multi_trlo_ii_counter0)

  if (failure.has_multi_trlo_ii_counter0)
  {
    // UINT32 multi_trlo_ii_counter0;
    READ_FROM_BUFFER(749,uint32 ,multi_trlo_ii_counter0);
  }
  // if(failure.has_multi_scaler_counter0)

  if (failure.has_multi_scaler_counter0)
  {
    // UINT32 multi_scaler_counter0;
    READ_FROM_BUFFER(753,uint32 ,multi_scaler_counter0);
  }
  // if(failure.has_multi_adctdc_counter0)

  if (failure.has_multi_adctdc_counter0)
  {
    // UINT32 multi_adctdc_counter0;
    READ_FROM_BUFFER(757,uint32 ,multi_adctdc_counter0);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_STD_VME::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for NTP64_TIME.
 *
 * Do not edit - automatically generated.
 */

// NTP64_TIME()
template<typename __data_src_t>
void NTP64_TIME::__unpack(__data_src_t &__buffer)
{
  // UINT32 sec;
  READ_FROM_BUFFER(788,uint32 ,sec);
  // UINT32 frac;
  READ_FROM_BUFFER(789,uint32 ,frac);
}
FORCE_IMPL_DATA_SRC_FCN(void,NTP64_TIME::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for NTP_MESSAGE.
 *
 * Do not edit - automatically generated.
 */

// NTP_MESSAGE(id)
template<typename __data_src_t>
void NTP_MESSAGE::__unpack(__data_src_t &__buffer,uint32 id)
{
  // UINT32 header
  // {
    //  0_15: word_count;
    //    16: quick_burst;
    // 24_31: id = MATCH(id);
  // }
  READ_FROM_BUFFER_FULL(800,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(799,header.id,id);
  CHECK_UNNAMED_BITS_ZERO(800,header.u32,0x00fe0000);
  // MARK_COUNT(start);
  void *__mark_start = __buffer._data;
  // UINT32 server_id;
  READ_FROM_BUFFER(804,uint32 ,server_id);
  // UINT32 sspp
  // {
    //  0_07: precision;
    //  8_15: poll;
    // 16_19: stratum;
    // 24_26: mode;
    // 27_29: version = CHECK(3);
    // 30_31: leap;
  // }
  READ_FROM_BUFFER_FULL(816,uint32 ,sspp,sspp.u32);
  CHECK_BITS_EQUAL(814,sspp.version,3);
  CHECK_UNNAMED_BITS_ZERO(816,sspp.u32,0x00f00000);
  // UINT32 root_dly
  // {
    //  0_15: frac;
    // 16_31: sec;
  // }
  READ_FROM_BUFFER_FULL(822,uint32 ,root_dly,root_dly.u32);
  // UINT32 root_disp
  // {
    //  0_15: frac;
    // 16_31: sec;
  // }
  READ_FROM_BUFFER_FULL(827,uint32 ,root_disp,root_disp.u32);
  // UINT32 refid;
  READ_FROM_BUFFER(828,uint32 ,refid);
  // reftime = NTP64_TIME();
  UNPACK_DECL(830,NTP64_TIME,reftime);
  // origtime = NTP64_TIME();
  UNPACK_DECL(831,NTP64_TIME,origtime);
  // rectime = NTP64_TIME();
  UNPACK_DECL(832,NTP64_TIME,rectime);
  // tmittime = NTP64_TIME();
  UNPACK_DECL(833,NTP64_TIME,tmittime);
  // rxtime = NTP64_TIME();
  UNPACK_DECL(836,NTP64_TIME,rxtime);
  // if(header.quick_burst)

  if (header.quick_burst)
  {
    // orig2time = NTP64_TIME();
    UNPACK_DECL(840,NTP64_TIME,orig2time);
    // rec2time = NTP64_TIME();
    UNPACK_DECL(841,NTP64_TIME,rec2time);
    // tmit2time = NTP64_TIME();
    UNPACK_DECL(842,NTP64_TIME,tmit2time);
    // rx2time = NTP64_TIME();
    UNPACK_DECL(843,NTP64_TIME,rx2time);
  }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_count,start,end,0,4)
  CHECK_WORD_COUNT(848,header.word_count,start,end,0,4);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,NTP_MESSAGE::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for NXYTER.
 *
 * Do not edit - automatically generated.
 */

// NXYTER(gem,nxy)
template<typename __data_src_t>
void NXYTER::__unpack(__data_src_t &__buffer,uint32 gem,uint32 nxy)
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
  CHECK_BITS_EQUAL(979,header1.unnamed_0_7,52);
  CHECK_BITS_EQUAL(981,header1.id_gemex,gem);
  CHECK_BITS_EQUAL(982,header1.id_nxyter,nxy);
  {
    gemex.value = header1.id_gemex;
  }
  {
    nxyter.value = header1.id_nxyter;
  }
  // UINT32 header2 NOENCODE
  // {
    //  0_31: packet_data_size;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 packet_data_size : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 packet_data_size : 32; // 0..31
#endif
    };
    uint32  u32;
  } header2;
  READ_FROM_BUFFER_FULL(991,uint32 ,header2,header2.u32);
  // UINT32 header_data NOENCODE
  // {
    //  0_15: trigger_counter1;
    // 16_19: rob;
    // 20_23: empty_trt1;
    // 24_31: 170;
    // ENCODE(trigger_counter_head,(value=trigger_counter1));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 trigger_counter1 : 16; // 0..15
      uint32 rob : 4; // 16..19
      uint32 empty_trt1 : 4; // 20..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 empty_trt1 : 4; // 20..23
      uint32 rob : 4; // 16..19
      uint32 trigger_counter1 : 16; // 0..15
#endif
    };
    uint32  u32;
  } header_data;
  READ_FROM_BUFFER_FULL(1001,uint32 ,header_data,header_data.u32);
  CHECK_BITS_EQUAL(998,header_data.unnamed_24_31,170);
  {
    trigger_counter_head.value = header_data.trigger_counter1;
  }
  // UINT32 local_epoche_ts1 NOENCODE
  // {
    //  0_15: epoche_time_stamp_a;
    // 16_23: 0;
    // 24_31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 epoche_time_stamp_a : 16; // 0..15
      uint32 unnamed_16_23 : 8; // 16..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 unnamed_16_23 : 8; // 16..23
      uint32 epoche_time_stamp_a : 16; // 0..15
#endif
    };
    uint32  u32;
  } local_epoche_ts1;
  READ_FROM_BUFFER_FULL(1008,uint32 ,local_epoche_ts1,local_epoche_ts1.u32);
  CHECK_BITS_EQUAL(1006,local_epoche_ts1.unnamed_16_23,0);
  CHECK_BITS_EQUAL(1007,local_epoche_ts1.unnamed_24_31,0);
  // UINT32 local_epoche_ts2 NOENCODE
  // {
    //  0_10: epoche_time_stamp_b;
    // 11_31: epoche_time_stamp_ab;
    // ENCODE(ts_epoch_trigger,(value=epoche_time_stamp_b));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 epoche_time_stamp_b : 11; // 0..10
      uint32 epoche_time_stamp_ab : 21; // 11..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 epoche_time_stamp_ab : 21; // 11..31
      uint32 epoche_time_stamp_b : 11; // 0..10
#endif
    };
    uint32  u32;
  } local_epoche_ts2;
  READ_FROM_BUFFER_FULL(1021,uint32 ,local_epoche_ts2,local_epoche_ts2.u32);
  {
    ts_epoch_trigger.value = local_epoche_ts2.epoche_time_stamp_b;
  }
  // several UINT64 nxyter_data NOENCODE
  // {
    //  0_10: nxyter_epoche_time_stamp;
    // 11_23: nxyter_epoche_time_stamp2;
    // 24_30: id_ch = RANGE(0,127);
    //    31: 0;
    // 32_45: nxyter_time_stamp;
    //    46: of;
    //    47: pu;
    // 48_59: adc_data;
    // 60_61: 0;
    // ENCODE(channel APPEND_LIST,(value=id_ch));
    // ENCODE(adc APPEND_LIST,(value=adc_data));
    // ENCODE(ts_epoch_hit APPEND_LIST,(value=nxyter_epoche_time_stamp));
    // ENCODE(ts_nxy APPEND_LIST,(value=nxyter_time_stamp));
  // }
  for ( ; ; ) {
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint64 nxyter_epoche_time_stamp : 11; // 0..10
      uint64 nxyter_epoche_time_stamp2 : 13; // 11..23
      uint64 id_ch : 7; // 24..30
      uint64 unnamed_31_31 : 1; // 31
      uint64 nxyter_time_stamp : 14; // 32..45
      uint64 of : 1; // 46
      uint64 pu : 1; // 47
      uint64 adc_data : 12; // 48..59
      uint64 unnamed_60_61 : 2; // 60..61
      uint64 dummy_62_63 : 2;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint64 dummy_62_63 : 2;
      uint64 unnamed_60_61 : 2; // 60..61
      uint64 adc_data : 12; // 48..59
      uint64 pu : 1; // 47
      uint64 of : 1; // 46
      uint64 nxyter_time_stamp : 14; // 32..45
      uint64 unnamed_31_31 : 1; // 31
      uint64 id_ch : 7; // 24..30
      uint64 nxyter_epoche_time_stamp2 : 13; // 11..23
      uint64 nxyter_epoche_time_stamp : 11; // 0..10
#endif
    };
    uint64  u64;
  } nxyter_data;
  if (__buffer.empty()) goto data_done_0;
  PEEK_FROM_BUFFER_FULL(1046,uint64 ,nxyter_data,nxyter_data.u64);
  CHECK_JUMP_BITS_RANGE_MAX(1029,nxyter_data.id_ch,127,data_done_0);
  CHECK_JUMP_BITS_EQUAL(1030,nxyter_data.unnamed_31_31,0,data_done_0);
  CHECK_JUMP_BITS_EQUAL(1035,nxyter_data.unnamed_60_61,0,data_done_0);
  CHECK_JUMP_UNNAMED_BITS_ZERO(1046,nxyter_data.u64,0xc000000000000000ll,data_done_0);
  __buffer.advance(sizeof(nxyter_data.u64));
  {
    typedef __typeof__(*(&(channel))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = channel.append_item(1042);
    __item.value = nxyter_data.id_ch;
  }
  {
    typedef __typeof__(*(&(adc))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = adc.append_item(1043);
    __item.value = nxyter_data.adc_data;
  }
  {
    typedef __typeof__(*(&(ts_epoch_hit))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = ts_epoch_hit.append_item(1044);
    __item.value = nxyter_data.nxyter_epoche_time_stamp;
  }
  {
    typedef __typeof__(*(&(ts_nxy))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = ts_nxy.append_item(1045);
    __item.value = nxyter_data.nxyter_time_stamp;
  }
  }
  data_done_0:;
  // UINT32 errors NOENCODE
  // {
    //  0_15: trigger_counter_not_processed;
    // 16_23: error_flags;
    // 24_31: 238;
    // ENCODE(err,(value=error_flags));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 trigger_counter_not_processed : 16; // 0..15
      uint32 error_flags : 8; // 16..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 error_flags : 8; // 16..23
      uint32 trigger_counter_not_processed : 16; // 0..15
#endif
    };
    uint32  u32;
  } errors;
  READ_FROM_BUFFER_FULL(1057,uint32 ,errors,errors.u32);
  CHECK_BITS_EQUAL(1054,errors.unnamed_24_31,238);
  {
    err.value = errors.error_flags;
  }
  // UINT32 data_folder NOENCODE
  // {
    //  0_15: trigger_counter2;
    // 16_19: rob;
    // 20_23: empty_trt2;
    // 24_31: 187;
    // ENCODE(trigger_counter_foot,(value=trigger_counter2));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 trigger_counter2 : 16; // 0..15
      uint32 rob : 4; // 16..19
      uint32 empty_trt2 : 4; // 20..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 empty_trt2 : 4; // 20..23
      uint32 rob : 4; // 16..19
      uint32 trigger_counter2 : 16; // 0..15
#endif
    };
    uint32  u32;
  } data_folder;
  READ_FROM_BUFFER_FULL(1067,uint32 ,data_folder,data_folder.u32);
  CHECK_BITS_EQUAL(1064,data_folder.unnamed_24_31,187);
  {
    trigger_counter_foot.value = data_folder.trigger_counter2;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,NXYTER::__unpack,uint32 gem,uint32 nxy);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for NXYTER_PADDING.
 *
 * Do not edit - automatically generated.
 */

// NXYTER_PADDING()
template<typename __data_src_t>
void NXYTER_PADDING::__unpack(__data_src_t &__buffer)
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
  CHECK_BITS_EQUAL(957,pads_data.unnamed_12_19,1);
  CHECK_BITS_EQUAL(958,pads_data.unnamed_20_31,0xadd);
}
FORCE_IMPL_DATA_SRC_FCN(void,NXYTER_PADDING::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for RANDOM_TCAL_TSTAMP_CLOCK.
 *
 * Do not edit - automatically generated.
 */

// RANDOM_TCAL_TSTAMP_CLOCK()
template<typename __data_src_t>
void RANDOM_TCAL_TSTAMP_CLOCK::__unpack(__data_src_t &__buffer)
{
  // UINT32 soft_latches;
  READ_FROM_BUFFER(856,uint32 ,soft_latches);
  // UINT32 hard_latches;
  READ_FROM_BUFFER(857,uint32 ,hard_latches);
  // UINT32 clock_ticks;
  READ_FROM_BUFFER(858,uint32 ,clock_ticks);
  // before = NTP64_TIME();
  UNPACK_DECL(859,NTP64_TIME,before);
  // after = NTP64_TIME();
  UNPACK_DECL(860,NTP64_TIME,after);
}
FORCE_IMPL_DATA_SRC_FCN(void,RANDOM_TCAL_TSTAMP_CLOCK::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for RANDOM_TCAL.
 *
 * Do not edit - automatically generated.
 */

// RANDOM_TCAL(id)
template<typename __data_src_t>
void RANDOM_TCAL::__unpack(__data_src_t &__buffer,uint32 id)
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
  READ_FROM_BUFFER_FULL(877,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(876,header.id,id);
  CHECK_UNNAMED_BITS_ZERO(877,header.u32,0x00f00000);
  // MARK_COUNT(start);
  void *__mark_start = __buffer._data;
  // if(header.has_tstamp1)

  if (header.has_tstamp1)
  {
    // tstamp1 = RANDOM_TCAL_TSTAMP_CLOCK();
    UNPACK_DECL(883,RANDOM_TCAL_TSTAMP_CLOCK,tstamp1);
  }
  // if(header.has_tstamp2)

  if (header.has_tstamp2)
  {
    // tstamp2 = RANDOM_TCAL_TSTAMP_CLOCK();
    UNPACK_DECL(887,RANDOM_TCAL_TSTAMP_CLOCK,tstamp2);
  }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_count,start,end,0,4)
  CHECK_WORD_COUNT(892,header.word_count,start,end,0,4);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,RANDOM_TCAL::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SIS3316_ACTAR_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_ACTAR_S438(id)
template<typename __data_src_t>
void SIS3316_ACTAR_S438::__unpack(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 channel_header[128]);
  // MEMBER(DATA16 trace[40000] ZERO_SUPPRESS);
  // UINT32 custom_header
  // {
    //  0_07: id = MATCH(id);
    //  8_15: channel_num;
    // 16_31: 0x3316;
  // }
  READ_FROM_BUFFER_FULL(1608,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(1605,custom_header.id,id);
  CHECK_BITS_EQUAL(1607,custom_header.unnamed_16_31,0x3316);
  // list(0<=channel_index<custom_header.channel_num)

  for (uint32 channel_index = 0; channel_index < (uint32) (custom_header.channel_num); ++channel_index)
  {
    // optional UINT32 padding0 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 id : 8; // 0..7
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_16_31 : 16; // 16..31
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 id : 8; // 0..7
#endif
      };
      uint32  u32;
    } padding0;
    if (__buffer.empty()) goto data_done_1;
    PEEK_FROM_BUFFER_FULL(1616,uint32 ,padding0,padding0.u32);
    CHECK_JUMP_BITS_EQUAL(1613,padding0.id,id,data_done_1);
    CHECK_JUMP_BITS_EQUAL(1614,padding0.unnamed_8_15,0,data_done_1);
    CHECK_JUMP_BITS_EQUAL(1615,padding0.unnamed_16_31,0x3316,data_done_1);
    __buffer.advance(sizeof(padding0.u32));
    data_done_1:;
    // optional UINT32 padding1 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 id : 8; // 0..7
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_16_31 : 16; // 16..31
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 id : 8; // 0..7
#endif
      };
      uint32  u32;
    } padding1;
    if (__buffer.empty()) goto data_done_2;
    PEEK_FROM_BUFFER_FULL(1621,uint32 ,padding1,padding1.u32);
    CHECK_JUMP_BITS_EQUAL(1618,padding1.id,id,data_done_2);
    CHECK_JUMP_BITS_EQUAL(1619,padding1.unnamed_8_15,0,data_done_2);
    CHECK_JUMP_BITS_EQUAL(1620,padding1.unnamed_16_31,0x3316,data_done_2);
    __buffer.advance(sizeof(padding1.u32));
    data_done_2:;
    // optional UINT32 padding2 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 id : 8; // 0..7
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_16_31 : 16; // 16..31
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 id : 8; // 0..7
#endif
      };
      uint32  u32;
    } padding2;
    if (__buffer.empty()) goto data_done_3;
    PEEK_FROM_BUFFER_FULL(1626,uint32 ,padding2,padding2.u32);
    CHECK_JUMP_BITS_EQUAL(1623,padding2.id,id,data_done_3);
    CHECK_JUMP_BITS_EQUAL(1624,padding2.unnamed_8_15,0,data_done_3);
    CHECK_JUMP_BITS_EQUAL(1625,padding2.unnamed_16_31,0x3316,data_done_3);
    __buffer.advance(sizeof(padding2.u32));
    data_done_3:;
    // list(0<=header_index<7)

    for (uint32 header_index = 0; header_index < (uint32) (7); ++header_index)
    {
      // UINT32 header_data NOENCODE
      // {
        //  0_31: data;
        // ENCODE(channel_header[((channel_index * 8) + header_index)],(value=data));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 data : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 data : 32; // 0..31
#endif
        };
        uint32  u32;
      } header_data;
      READ_FROM_BUFFER_FULL(1634,uint32 ,header_data,header_data.u32);
      {
        typedef __typeof__(*(&(channel_header))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = channel_header.insert_index(1633,((channel_index * 8) + header_index));
        __item.value = header_data.data;
      }
    }
    // UINT32 header3
    // {
      //  0_25: sampleLength;
      //    26: 0;
      //    27: mawFlag;
      // 28_31: 14;
    // }
    READ_FROM_BUFFER_FULL(1643,uint32 ,header3,header3.u32);
    CHECK_BITS_EQUAL(1640,header3.unnamed_26_26,0);
    CHECK_BITS_EQUAL(1642,header3.unnamed_28_31,14);
    // list(0<=sample_index<(header3.sampleLength * 2))

    for (uint32 sample_index = 0; sample_index < (uint32) ((header3.sampleLength * 2)); ++sample_index)
    {
      // UINT16 sample NOENCODE
      // {
        //  0_15: data;
        // ENCODE(trace[((channel_index * header3.sampleLength) + sample_index)],(value=data));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint16 data : 16; // 0..15
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint16 data : 16; // 0..15
#endif
        };
        uint16  u16;
      } sample;
      READ_FROM_BUFFER_FULL(1652,uint16 ,sample,sample.u16);
      {
        typedef __typeof__(*(&(trace))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = trace.insert_index(1651,((channel_index * header3.sampleLength) + sample_index));
        __item.value = sample.data;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,SIS3316_ACTAR_S438::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SIS3316_PSP_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_PSP_S438(id)
template<typename __data_src_t>
void SIS3316_PSP_S438::__unpack(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 channel_header[128]);
  // MEMBER(DATA16 trace[16000] ZERO_SUPPRESS);
  // UINT32 custom_header
  // {
    //  0_07: id = MATCH(id);
    //  8_15: channel_num;
    // 16_31: 0x3316;
  // }
  READ_FROM_BUFFER_FULL(1666,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(1663,custom_header.id,id);
  CHECK_BITS_EQUAL(1665,custom_header.unnamed_16_31,0x3316);
  // list(0<=channel_index<custom_header.channel_num)

  for (uint32 channel_index = 0; channel_index < (uint32) (custom_header.channel_num); ++channel_index)
  {
    // optional UINT32 padding0 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 id : 8; // 0..7
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_16_31 : 16; // 16..31
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 id : 8; // 0..7
#endif
      };
      uint32  u32;
    } padding0;
    if (__buffer.empty()) goto data_done_4;
    PEEK_FROM_BUFFER_FULL(1674,uint32 ,padding0,padding0.u32);
    CHECK_JUMP_BITS_EQUAL(1671,padding0.id,id,data_done_4);
    CHECK_JUMP_BITS_EQUAL(1672,padding0.unnamed_8_15,0,data_done_4);
    CHECK_JUMP_BITS_EQUAL(1673,padding0.unnamed_16_31,0x3316,data_done_4);
    __buffer.advance(sizeof(padding0.u32));
    data_done_4:;
    // optional UINT32 padding1 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 id : 8; // 0..7
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_16_31 : 16; // 16..31
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 id : 8; // 0..7
#endif
      };
      uint32  u32;
    } padding1;
    if (__buffer.empty()) goto data_done_5;
    PEEK_FROM_BUFFER_FULL(1679,uint32 ,padding1,padding1.u32);
    CHECK_JUMP_BITS_EQUAL(1676,padding1.id,id,data_done_5);
    CHECK_JUMP_BITS_EQUAL(1677,padding1.unnamed_8_15,0,data_done_5);
    CHECK_JUMP_BITS_EQUAL(1678,padding1.unnamed_16_31,0x3316,data_done_5);
    __buffer.advance(sizeof(padding1.u32));
    data_done_5:;
    // optional UINT32 padding2 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 id : 8; // 0..7
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_16_31 : 16; // 16..31
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 id : 8; // 0..7
#endif
      };
      uint32  u32;
    } padding2;
    if (__buffer.empty()) goto data_done_6;
    PEEK_FROM_BUFFER_FULL(1684,uint32 ,padding2,padding2.u32);
    CHECK_JUMP_BITS_EQUAL(1681,padding2.id,id,data_done_6);
    CHECK_JUMP_BITS_EQUAL(1682,padding2.unnamed_8_15,0,data_done_6);
    CHECK_JUMP_BITS_EQUAL(1683,padding2.unnamed_16_31,0x3316,data_done_6);
    __buffer.advance(sizeof(padding2.u32));
    data_done_6:;
    // list(0<=header_index<7)

    for (uint32 header_index = 0; header_index < (uint32) (7); ++header_index)
    {
      // UINT32 header_data NOENCODE
      // {
        //  0_31: data;
        // ENCODE(channel_header[((channel_index * 8) + header_index)],(value=data));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 data : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 data : 32; // 0..31
#endif
        };
        uint32  u32;
      } header_data;
      READ_FROM_BUFFER_FULL(1692,uint32 ,header_data,header_data.u32);
      {
        typedef __typeof__(*(&(channel_header))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = channel_header.insert_index(1691,((channel_index * 8) + header_index));
        __item.value = header_data.data;
      }
    }
    // UINT32 header3
    // {
      //  0_25: sampleLength;
      //    26: 0;
      //    27: mawFlag;
      // 28_31: 14;
    // }
    READ_FROM_BUFFER_FULL(1701,uint32 ,header3,header3.u32);
    CHECK_BITS_EQUAL(1698,header3.unnamed_26_26,0);
    CHECK_BITS_EQUAL(1700,header3.unnamed_28_31,14);
    // list(0<=sample_index<(header3.sampleLength * 2))

    for (uint32 sample_index = 0; sample_index < (uint32) ((header3.sampleLength * 2)); ++sample_index)
    {
      // UINT16 sample NOENCODE
      // {
        //  0_15: data;
        // ENCODE(trace[((channel_index * header3.sampleLength) + sample_index)],(value=data));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint16 data : 16; // 0..15
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint16 data : 16; // 0..15
#endif
        };
        uint16  u16;
      } sample;
      READ_FROM_BUFFER_FULL(1709,uint16 ,sample,sample.u16);
      {
        typedef __typeof__(*(&(trace))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = trace.insert_index(1708,((channel_index * header3.sampleLength) + sample_index));
        __item.value = sample.data;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,SIS3316_PSP_S438::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SIS3316_S2_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_S2_S438(id)
template<typename __data_src_t>
void SIS3316_S2_S438::__unpack(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 channel_header[128]);
  // MEMBER(DATA16 trace[800] ZERO_SUPPRESS);
  // UINT32 custom_header
  // {
    //  0_07: id = MATCH(id);
    //  8_15: channel_num;
    // 16_31: 0x3316;
  // }
  READ_FROM_BUFFER_FULL(1723,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(1720,custom_header.id,id);
  CHECK_BITS_EQUAL(1722,custom_header.unnamed_16_31,0x3316);
  // list(0<=channel_index<custom_header.channel_num)

  for (uint32 channel_index = 0; channel_index < (uint32) (custom_header.channel_num); ++channel_index)
  {
    // optional UINT32 padding0 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 id : 8; // 0..7
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_16_31 : 16; // 16..31
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 id : 8; // 0..7
#endif
      };
      uint32  u32;
    } padding0;
    if (__buffer.empty()) goto data_done_7;
    PEEK_FROM_BUFFER_FULL(1731,uint32 ,padding0,padding0.u32);
    CHECK_JUMP_BITS_EQUAL(1728,padding0.id,id,data_done_7);
    CHECK_JUMP_BITS_EQUAL(1729,padding0.unnamed_8_15,0,data_done_7);
    CHECK_JUMP_BITS_EQUAL(1730,padding0.unnamed_16_31,0x3316,data_done_7);
    __buffer.advance(sizeof(padding0.u32));
    data_done_7:;
    // optional UINT32 padding1 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 id : 8; // 0..7
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_16_31 : 16; // 16..31
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 id : 8; // 0..7
#endif
      };
      uint32  u32;
    } padding1;
    if (__buffer.empty()) goto data_done_8;
    PEEK_FROM_BUFFER_FULL(1736,uint32 ,padding1,padding1.u32);
    CHECK_JUMP_BITS_EQUAL(1733,padding1.id,id,data_done_8);
    CHECK_JUMP_BITS_EQUAL(1734,padding1.unnamed_8_15,0,data_done_8);
    CHECK_JUMP_BITS_EQUAL(1735,padding1.unnamed_16_31,0x3316,data_done_8);
    __buffer.advance(sizeof(padding1.u32));
    data_done_8:;
    // optional UINT32 padding2 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 id : 8; // 0..7
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_16_31 : 16; // 16..31
        uint32 unnamed_8_15 : 8; // 8..15
        uint32 id : 8; // 0..7
#endif
      };
      uint32  u32;
    } padding2;
    if (__buffer.empty()) goto data_done_9;
    PEEK_FROM_BUFFER_FULL(1741,uint32 ,padding2,padding2.u32);
    CHECK_JUMP_BITS_EQUAL(1738,padding2.id,id,data_done_9);
    CHECK_JUMP_BITS_EQUAL(1739,padding2.unnamed_8_15,0,data_done_9);
    CHECK_JUMP_BITS_EQUAL(1740,padding2.unnamed_16_31,0x3316,data_done_9);
    __buffer.advance(sizeof(padding2.u32));
    data_done_9:;
    // list(0<=header_index<7)

    for (uint32 header_index = 0; header_index < (uint32) (7); ++header_index)
    {
      // UINT32 header_data NOENCODE
      // {
        //  0_31: data;
        // ENCODE(channel_header[((channel_index * 8) + header_index)],(value=data));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 data : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 data : 32; // 0..31
#endif
        };
        uint32  u32;
      } header_data;
      READ_FROM_BUFFER_FULL(1749,uint32 ,header_data,header_data.u32);
      {
        typedef __typeof__(*(&(channel_header))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = channel_header.insert_index(1748,((channel_index * 8) + header_index));
        __item.value = header_data.data;
      }
    }
    // UINT32 header3
    // {
      //  0_25: sampleLength;
      //    26: 0;
      //    27: mawFlag;
      // 28_31: 14;
    // }
    READ_FROM_BUFFER_FULL(1758,uint32 ,header3,header3.u32);
    CHECK_BITS_EQUAL(1755,header3.unnamed_26_26,0);
    CHECK_BITS_EQUAL(1757,header3.unnamed_28_31,14);
    // list(0<=sample_index<(header3.sampleLength * 2))

    for (uint32 sample_index = 0; sample_index < (uint32) ((header3.sampleLength * 2)); ++sample_index)
    {
      // UINT16 sample NOENCODE
      // {
        //  0_15: data;
        // ENCODE(trace[((channel_index * header3.sampleLength) + sample_index)],(value=data));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint16 data : 16; // 0..15
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint16 data : 16; // 0..15
#endif
        };
        uint16  u16;
      } sample;
      READ_FROM_BUFFER_FULL(1766,uint16 ,sample,sample.u16);
      {
        typedef __typeof__(*(&(trace))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = trace.insert_index(1765,((channel_index * header3.sampleLength) + sample_index));
        __item.value = sample.data;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,SIS3316_S2_S438::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SIS3316_S2_SCALERS_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_S2_SCALERS_S438()
template<typename __data_src_t>
void SIS3316_S2_SCALERS_S438::__unpack(__data_src_t &__buffer)
{
  // MEMBER(DATA32 scalers[192]);
  // UINT32 custom_header
  // {
    //  0_31: 0x33161234;
  // }
  READ_FROM_BUFFER_FULL(1794,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(1793,custom_header.unnamed_0_31,0x33161234);
  // list(0<=index<(((2 * 4) * 4) * 6))

  for (uint32 index = 0; index < (uint32) ((((2 * 4) * 4) * 6)); ++index)
  {
    // UINT32 scaler NOENCODE
    // {
      //  0_31: data;
      // ENCODE(scalers[index],(value=data));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 data : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 data : 32; // 0..31
#endif
      };
      uint32  u32;
    } scaler;
    READ_FROM_BUFFER_FULL(1801,uint32 ,scaler,scaler.u32);
    {
      typedef __typeof__(*(&(scalers))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = scalers.insert_index(1800,index);
      __item.value = scaler.data;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,SIS3316_S2_SCALERS_S438::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SIS3316_SCALERS_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_SCALERS_S438()
template<typename __data_src_t>
void SIS3316_SCALERS_S438::__unpack(__data_src_t &__buffer)
{
  // MEMBER(DATA32 scalers[480]);
  // UINT32 custom_header
  // {
    //  0_31: 0x33161234;
  // }
  READ_FROM_BUFFER_FULL(1777,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(1776,custom_header.unnamed_0_31,0x33161234);
  // list(0<=index<(((5 * 4) * 4) * 6))

  for (uint32 index = 0; index < (uint32) ((((5 * 4) * 4) * 6)); ++index)
  {
    // UINT32 scaler NOENCODE
    // {
      //  0_31: data;
      // ENCODE(scalers[index],(value=data));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 data : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 data : 32; // 0..31
#endif
      };
      uint32  u32;
    } scaler;
    READ_FROM_BUFFER_FULL(1784,uint32 ,scaler,scaler.u32);
    {
      typedef __typeof__(*(&(scalers))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = scalers.insert_index(1783,index);
      __item.value = scaler.data;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,SIS3316_SCALERS_S438::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SOFT_SCALER32.
 *
 * Do not edit - automatically generated.
 */

// SOFT_SCALER32(channels)
template<typename __data_src_t>
void SOFT_SCALER32::__unpack(__data_src_t &__buffer,uint32 channels)
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
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(920,index);
      __item.value = ch_data.value;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,SOFT_SCALER32::__unpack,uint32 channels);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TACQUILA_DATA.
 *
 * Do not edit - automatically generated.
 */

// TACQUILA_DATA(sam,gtb)
template<typename __data_src_t>
void TACQUILA_DATA::__unpack(__data_src_t &__buffer,uint32 sam,uint32 gtb)
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
  READ_FROM_BUFFER_FULL(1092,uint32 ,header,header.u32);
  CHECK_BITS_RANGE_MAX(1087,header.trigger_tac,1);
  CHECK_BITS_RANGE(1088,header.trigger_sam,1,2);
  CHECK_BITS_EQUAL(1090,header.gtb,gtb);
  CHECK_BITS_EQUAL(1091,header.sam,sam);
  // list(0<=index<header.count)

  for (uint32 index = 0; index < (uint32) (header.count); ++index)
  {
    // if(( ! (index & 1)))

    if (( ! (index & 1)))
    {
      // UINT32 ch_data NOENCODE
      // {
        //  0_11: tac_value;
        // 12_17: clock_cycle;
        // 18_19: dummy2;
        //    20: trigger;
        //    21: 0;
        // 22_26: channel = RANGE(0,16);
        // 27_31: module = RANGE(1,30);
        // ENCODE(tac[(module - 1)][channel],(value=tac_value));
        // ENCODE(clk[(module - 1)][channel],(value=clock_cycle));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 tac_value : 12; // 0..11
          uint32 clock_cycle : 6; // 12..17
          uint32 dummy2 : 2; // 18..19
          uint32 trigger : 1; // 20
          uint32 unnamed_21_21 : 1; // 21
          uint32 channel : 5; // 22..26
          uint32 module : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 module : 5; // 27..31
          uint32 channel : 5; // 22..26
          uint32 unnamed_21_21 : 1; // 21
          uint32 trigger : 1; // 20
          uint32 dummy2 : 2; // 18..19
          uint32 clock_cycle : 6; // 12..17
          uint32 tac_value : 12; // 0..11
#endif
        };
        uint32  u32;
      } ch_data;
      READ_FROM_BUFFER_FULL(1110,uint32 ,ch_data,ch_data.u32);
      CHECK_BITS_EQUAL(1104,ch_data.unnamed_21_21,0);
      CHECK_BITS_RANGE_MAX(1105,ch_data.channel,16);
      CHECK_BITS_RANGE(1106,ch_data.module,1,30);
      {
        typedef __typeof__(*(&(tac[(ch_data.module - 1)]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = tac[(ch_data.module - 1)].insert_index(1108,ch_data.channel);
        __item.value = ch_data.tac_value;
      }
      {
        typedef __typeof__(*(&(clk[(ch_data.module - 1)]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = clk[(ch_data.module - 1)].insert_index(1109,ch_data.channel);
        __item.value = ch_data.clock_cycle;
      }
      // UINT32 ch_data2 NOENCODE
      // {
        //  0_11: adc_value;
        // 12_19: dummy3;
        //    20: trigger;
        //    21: 1;
        // 22_26: channel = RANGE(0,16);
        // 27_31: module = RANGE(1,30);
        // ENCODE(adc[(module - 1)][channel],(value=adc_value));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 adc_value : 12; // 0..11
          uint32 dummy3 : 8; // 12..19
          uint32 trigger : 1; // 20
          uint32 unnamed_21_21 : 1; // 21
          uint32 channel : 5; // 22..26
          uint32 module : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 module : 5; // 27..31
          uint32 channel : 5; // 22..26
          uint32 unnamed_21_21 : 1; // 21
          uint32 trigger : 1; // 20
          uint32 dummy3 : 8; // 12..19
          uint32 adc_value : 12; // 0..11
#endif
        };
        uint32  u32;
      } ch_data2;
      READ_FROM_BUFFER_FULL(1121,uint32 ,ch_data2,ch_data2.u32);
      CHECK_BITS_EQUAL(1116,ch_data2.unnamed_21_21,1);
      CHECK_BITS_RANGE_MAX(1117,ch_data2.channel,16);
      CHECK_BITS_RANGE(1118,ch_data2.module,1,30);
      {
        typedef __typeof__(*(&(adc[(ch_data2.module - 1)]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = adc[(ch_data2.module - 1)].insert_index(1120,ch_data2.channel);
        __item.value = ch_data2.adc_value;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TACQUILA_DATA::__unpack,uint32 sam,uint32 gtb);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TACQUILA_DATA_S438B.
 *
 * Do not edit - automatically generated.
 */

// TACQUILA_DATA_S438B(sam,gtb)
template<typename __data_src_t>
void TACQUILA_DATA_S438B::__unpack(__data_src_t &__buffer,uint32 sam,uint32 gtb)
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
  READ_FROM_BUFFER_FULL(1513,uint32 ,header,header.u32);
  CHECK_BITS_RANGE(1509,header.trigger_sam,1,2);
  CHECK_BITS_EQUAL(1511,header.gtb,gtb);
  CHECK_BITS_EQUAL(1512,header.sam,sam);
  // list(0<=index<header.count)

  for (uint32 index = 0; index < (uint32) (header.count); ++index)
  {
    // if(( ! (index & 1)))

    if (( ! (index & 1)))
    {
      // UINT32 ch_data NOENCODE
      // {
        //  0_11: tac_value;
        // 12_17: clock_cycle;
        // 18_19: dummy2;
        //    20: trigger;
        //    21: 0;
        // 22_26: channel = RANGE(0,16);
        // 27_31: module = RANGE(1,30);
        // ENCODE(tac[(module - 1)][channel],(value=tac_value));
        // ENCODE(clk[(module - 1)][channel],(value=clock_cycle));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 tac_value : 12; // 0..11
          uint32 clock_cycle : 6; // 12..17
          uint32 dummy2 : 2; // 18..19
          uint32 trigger : 1; // 20
          uint32 unnamed_21_21 : 1; // 21
          uint32 channel : 5; // 22..26
          uint32 module : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 module : 5; // 27..31
          uint32 channel : 5; // 22..26
          uint32 unnamed_21_21 : 1; // 21
          uint32 trigger : 1; // 20
          uint32 dummy2 : 2; // 18..19
          uint32 clock_cycle : 6; // 12..17
          uint32 tac_value : 12; // 0..11
#endif
        };
        uint32  u32;
      } ch_data;
      READ_FROM_BUFFER_FULL(1531,uint32 ,ch_data,ch_data.u32);
      CHECK_BITS_EQUAL(1525,ch_data.unnamed_21_21,0);
      CHECK_BITS_RANGE_MAX(1526,ch_data.channel,16);
      CHECK_BITS_RANGE(1527,ch_data.module,1,30);
      {
        typedef __typeof__(*(&(tac[(ch_data.module - 1)]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = tac[(ch_data.module - 1)].insert_index(1529,ch_data.channel);
        __item.value = ch_data.tac_value;
      }
      {
        typedef __typeof__(*(&(clk[(ch_data.module - 1)]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = clk[(ch_data.module - 1)].insert_index(1530,ch_data.channel);
        __item.value = ch_data.clock_cycle;
      }
      // UINT32 ch_data2 NOENCODE
      // {
        //  0_11: adc_value;
        // 12_19: dummy3;
        //    20: trigger;
        //    21: 1;
        // 22_26: channel = RANGE(0,16);
        // 27_31: module = RANGE(1,30);
        // ENCODE(adc[(module - 1)][channel],(value=adc_value));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 adc_value : 12; // 0..11
          uint32 dummy3 : 8; // 12..19
          uint32 trigger : 1; // 20
          uint32 unnamed_21_21 : 1; // 21
          uint32 channel : 5; // 22..26
          uint32 module : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 module : 5; // 27..31
          uint32 channel : 5; // 22..26
          uint32 unnamed_21_21 : 1; // 21
          uint32 trigger : 1; // 20
          uint32 dummy3 : 8; // 12..19
          uint32 adc_value : 12; // 0..11
#endif
        };
        uint32  u32;
      } ch_data2;
      READ_FROM_BUFFER_FULL(1542,uint32 ,ch_data2,ch_data2.u32);
      CHECK_BITS_EQUAL(1537,ch_data2.unnamed_21_21,1);
      CHECK_BITS_RANGE_MAX(1538,ch_data2.channel,16);
      CHECK_BITS_RANGE(1539,ch_data2.module,1,30);
      {
        typedef __typeof__(*(&(adc[(ch_data2.module - 1)]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = adc[(ch_data2.module - 1)].insert_index(1541,ch_data2.channel);
        __item.value = ch_data2.adc_value;
      }
      // if((ch_data.channel == 16))

      if ((ch_data.channel == 16))
      {
        // list(17<=chan<32)

        for (uint32 chan = 17; chan < (uint32) (32); ++chan)
        {
          // ENCODE(tac[(ch_data.module - 1)][chan],(value=ch_data.tac_value));

          {
            typedef __typeof__(*(&(tac[(ch_data.module - 1)]))) __array_t;
            typedef typename __array_t::item_t __item_t;
            __item_t &__item = tac[(ch_data.module - 1)].insert_index(1547,chan);
            __item.value = ch_data.tac_value;
          }
        }
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TACQUILA_DATA_S438B::__unpack,uint32 sam
                                                              ,uint32 gtb);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX_CHANNEL.
 *
 * Do not edit - automatically generated.
 */

// TAMEX_CHANNEL(sfp,card)
template<typename __data_src_t>
void TAMEX_CHANNEL::__unpack(__data_src_t &__buffer,uint32 sfp,uint32 card)
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
  READ_FROM_BUFFER_FULL(1572,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1567,header.unnamed_0_7,52);
  CHECK_BITS_EQUAL(1569,header.sfp_index,sfp);
  CHECK_BITS_EQUAL(1570,header.card_index,card);
  CHECK_BITS_EQUAL(1571,header.channel_index,0);
  // UINT32 data_size;
  READ_FROM_BUFFER(1573,uint32 ,data_size);
  // UINT32 tdc_header
  // {
    //  0_23: yanana_phone;
    // 24_31: 170;
  // }
  READ_FROM_BUFFER_FULL(1577,uint32 ,tdc_header,tdc_header.u32);
  CHECK_BITS_EQUAL(1576,tdc_header.unnamed_24_31,170);
  // list(0<=index<((data_size / 4) - 2))

  for (uint32 index = 0; index < (uint32) (((data_size / 4) - 2)); ++index)
  {
    // UINT32 tdc_data NOENCODE
    // {
      //  0_21: value;
      // 22_28: channel_i;
      // 29_31: type;
      // ENCODE(type[channel_i],(value=type));
      // ENCODE(tdc[channel_i],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 22; // 0..21
        uint32 channel_i : 7; // 22..28
        uint32 type : 3; // 29..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 type : 3; // 29..31
        uint32 channel_i : 7; // 22..28
        uint32 value : 22; // 0..21
#endif
      };
      uint32  u32;
    } tdc_data;
    READ_FROM_BUFFER_FULL(1587,uint32 ,tdc_data,tdc_data.u32);
    {
      typedef __typeof__(*(&(type))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = type.insert_index(1585,tdc_data.channel_i);
      __item.value = tdc_data.type;
    }
    {
      typedef __typeof__(*(&(tdc))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = tdc.insert_index(1586,tdc_data.channel_i);
      __item.value = tdc_data.value;
    }
  }
  // UINT32 tdc_trailer
  // {
    //  0_23: wanana_phone;
    // 24_31: 187;
  // }
  READ_FROM_BUFFER_FULL(1593,uint32 ,tdc_trailer,tdc_trailer.u32);
  CHECK_BITS_EQUAL(1592,tdc_trailer.unnamed_24_31,187);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX_CHANNEL::__unpack,uint32 sfp,uint32 card);

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
  READ_FROM_BUFFER_FULL(1355,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1350,header.id,id);
  CHECK_BITS_EQUAL(1351,header.unnamed_12_15,0);
  CHECK_BITS_EQUAL(1353,header.unnamed_17_31,0);
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
  READ_FROM_BUFFER_FULL(1360,uint32 ,d1,d1.u32);
  CHECK_BITS_EQUAL(1358,d1.unnamed_16_31,0x3e1);
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
  READ_FROM_BUFFER_FULL(1365,uint32 ,d2,d2.u32);
  CHECK_BITS_EQUAL(1363,d2.unnamed_16_31,0x4e1);
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
  READ_FROM_BUFFER_FULL(1370,uint32 ,d3,d3.u32);
  CHECK_BITS_EQUAL(1368,d3.unnamed_16_31,0x5e1);
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
  READ_FROM_BUFFER_FULL(1375,uint32 ,d4,d4.u32);
  CHECK_BITS_EQUAL(1373,d4.unnamed_16_31,0x6e1);
  {
    t4.value = d4.t4;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TIMESTAMP_WHITERABBIT::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRIDI.
 *
 * Do not edit - automatically generated.
 */

// TRIDI()
template<typename __data_src_t>
void TRIDI::__unpack(__data_src_t &__buffer)
{
  // UINT32 header
  // {
    //  0_15: tpat;
    // 16_31: 0x3d00;
  // }
  READ_FROM_BUFFER_FULL(2221,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(2220,header.unnamed_16_31,0x3d00);
  // UINT32 ts_msb;
  READ_FROM_BUFFER(2222,uint32 ,ts_msb);
  // UINT32 ts_lsb;
  READ_FROM_BUFFER(2223,uint32 ,ts_lsb);
}
FORCE_IMPL_DATA_SRC_FCN(void,TRIDI::__unpack);

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
    // 24_31: id = MATCH(id);
  // }
  READ_FROM_BUFFER_FULL(2251,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(2250,header.id,id);
  CHECK_UNNAMED_BITS_ZERO(2251,header.u32,0x00fffc00);
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
    READ_FROM_BUFFER_FULL(2258,uint32 ,data,data.u32);
    {
      typedef __typeof__(*(&(stamps))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = stamps.append_item(2257);
      __item.value = data.stamp;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLO_SAMPLER::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLO_SCALER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_SCALER(crate_id)
template<typename __data_src_t>
void TRLO_SCALER::__unpack(__data_src_t &__buffer,uint32 crate_id)
{
  // MEMBER(DATA32 stamps[16] NO_INDEX_LIST);
  // UINT32 header
  // {
    //  0_07: crate_id = MATCH(crate_id);
    //  8_31: 0x00721009;
  // }
  READ_FROM_BUFFER_FULL(2233,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(2231,header.crate_id,crate_id);
  CHECK_BITS_EQUAL(2232,header.unnamed_8_31,0x00721009);
  // list(0<=index<16)

  for (uint32 index = 0; index < (uint32) (16); ++index)
  {
    // UINT32 data NOENCODE
    // {
      //  0_31: value;
      // ENCODE(stamps APPEND_LIST,(value=value));
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
    } data;
    READ_FROM_BUFFER_FULL(2240,uint32 ,data,data.u32);
    {
      typedef __typeof__(*(&(stamps))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = stamps.append_item(2239);
      __item.value = data.value;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLO_SCALER::__unpack,uint32 crate_id);

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
  READ_FROM_BUFFER_FULL(426,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(422,header.event_id,event_id);
  CHECK_BITS_EQUAL(424,header.tdc,tdc);
  CHECK_BITS_EQUAL(425,header.unnamed_27_31,1);
  CHECK_UNNAMED_BITS_ZERO(426,header.u32,0x04000000);
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
  if (__buffer.empty()) goto data_done_10;
  PEEK_FROM_BUFFER_FULL(453,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(438,ch_data.tdc,tdc,data_done_10);
  CHECK_JUMP_BITS_EQUAL(443,ch_data.unnamed_27_31,0,data_done_10);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(451,((ch_data.tdc << 5) | ch_data.channel_low));
    __item.value = ch_data.value;
  }
  }
  data_done_10:;
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
  if (__buffer.empty()) goto data_done_11;
  PEEK_FROM_BUFFER_FULL(461,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(459,__error_flags.tdc,tdc,data_done_11);
  CHECK_JUMP_BITS_EQUAL(460,__error_flags.unnamed_27_31,4,data_done_11);
  CHECK_JUMP_UNNAMED_BITS_ZERO(461,__error_flags.u32,0x04ff8000,data_done_11);
  error_flags.u32 = __error_flags.u32;
  __buffer.advance(sizeof(__error_flags.u32));
  data_done_11:;
  // MARK_COUNT(tdc_end);
  void *__mark_tdc_end = __buffer._data;
  // UINT32 trailer
  // {
    //  0_11: word_count = CHECK_COUNT(tdc_start,tdc_end,4,4);
    // 12_23: event_id = CHECK(header.event_id);
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 3;
  // }
  READ_FROM_BUFFER_FULL(472,uint32 ,trailer,trailer.u32);
  CHECK_WORD_COUNT(467,trailer.word_count,tdc_start,tdc_end,4,4);
  CHECK_BITS_EQUAL(468,trailer.event_id,header.event_id);
  CHECK_BITS_EQUAL(470,trailer.tdc,tdc);
  CHECK_BITS_EQUAL(471,trailer.unnamed_27_31,3);
  CHECK_UNNAMED_BITS_ZERO(472,trailer.u32,0x04000000);
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
  READ_FROM_BUFFER_FULL(487,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(484,header.geom,geom);
  CHECK_BITS_EQUAL(486,header.unnamed_27_31,8);
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
    PEEK_FROM_BUFFER(495,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(491,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(491,VME_CAEN_V1190_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(492,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(492,VME_CAEN_V1190_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(493,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(493,VME_CAEN_V1190_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(494,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(494,VME_CAEN_V1190_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_0:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(501,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(500,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(513,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(507,trailer.geom,geom);
  CHECK_WORD_COUNT(508,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(512,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(513,trailer.u32,0x00f00000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1190_S438_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
void VME_CAEN_V1190_S438_SUBTDC::__unpack(__data_src_t &__buffer,uint32 tdc
                                                                ,uint32 event_id
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
  READ_FROM_BUFFER_FULL(2029,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(2025,header.event_id,event_id);
  CHECK_BITS_EQUAL(2027,header.tdc,tdc);
  CHECK_BITS_EQUAL(2028,header.unnamed_27_31,1);
  CHECK_UNNAMED_BITS_ZERO(2029,header.u32,0x04000000);
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
  if (__buffer.empty()) goto data_done_12;
  PEEK_FROM_BUFFER_FULL(2055,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(2041,ch_data.tdc,tdc,data_done_12);
  CHECK_JUMP_BITS_EQUAL(2045,ch_data.unnamed_27_31,0,data_done_12);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(2053,((ch_data.tdc << 5) | ch_data.channel_low));
    __item.value = ch_data.value;
  }
  }
  data_done_12:;
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
  if (__buffer.empty()) goto data_done_13;
  PEEK_FROM_BUFFER_FULL(2063,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(2061,__error_flags.tdc,tdc,data_done_13);
  CHECK_JUMP_BITS_EQUAL(2062,__error_flags.unnamed_27_31,4,data_done_13);
  CHECK_JUMP_UNNAMED_BITS_ZERO(2063,__error_flags.u32,0x04ff8000,data_done_13);
  error_flags.u32 = __error_flags.u32;
  __buffer.advance(sizeof(__error_flags.u32));
  data_done_13:;
  // MARK_COUNT(tdc_end);
  void *__mark_tdc_end = __buffer._data;
  // UINT32 trailer
  // {
    //  0_11: word_count = CHECK_COUNT(tdc_start,tdc_end,4,4);
    // 12_23: event_id = CHECK(header.event_id);
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 3;
  // }
  READ_FROM_BUFFER_FULL(2074,uint32 ,trailer,trailer.u32);
  CHECK_WORD_COUNT(2069,trailer.word_count,tdc_start,tdc_end,4,4);
  CHECK_BITS_EQUAL(2070,trailer.event_id,header.event_id);
  CHECK_BITS_EQUAL(2072,trailer.tdc,tdc);
  CHECK_BITS_EQUAL(2073,trailer.unnamed_27_31,3);
  CHECK_UNNAMED_BITS_ZERO(2074,trailer.u32,0x04000000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_S438_SUBTDC::__unpack,uint32 tdc
                                                                     ,uint32 event_id
                                                                     ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1190_S438.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438(geom)
template<typename __data_src_t>
void VME_CAEN_V1190_S438::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // UINT32 ucesb_separator
  // {
    //  0_04: geom = MATCH(geom);
    // 24_31: 76;
  // }
  READ_FROM_BUFFER_FULL(2086,uint32 ,ucesb_separator,ucesb_separator.u32);
  CHECK_BITS_EQUAL(2084,ucesb_separator.geom,geom);
  CHECK_BITS_EQUAL(2085,ucesb_separator.unnamed_24_31,76);
  CHECK_UNNAMED_BITS_ZERO(2086,ucesb_separator.u32,0x00ffffe0);
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._data;
  // UINT32 header
  // {
    //  5_26: event_number;
    // 27_31: 8;
  // }
  READ_FROM_BUFFER_FULL(2094,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(2093,header.unnamed_27_31,8);
  CHECK_UNNAMED_BITS_ZERO(2094,header.u32,0x0000001f);
  // select several

    // tdc[0] = VME_CAEN_V1190_S438_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[1] = VME_CAEN_V1190_S438_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[2] = VME_CAEN_V1190_S438_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[3] = VME_CAEN_V1190_S438_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                        // data=data);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_CAEN_V1190_S438_SUBTDC tdc[0]: (s32) => (0xff000000,0x08000000)
    // optimized match 2: VME_CAEN_V1190_S438_SUBTDC tdc[1]: (s32) => (0xff000000,0x09000000)
    // optimized match 3: VME_CAEN_V1190_S438_SUBTDC tdc[2]: (s32) => (0xff000000,0x0a000000)
    // optimized match 4: VME_CAEN_V1190_S438_SUBTDC tdc[3]: (s32) => (0xff000000,0x0b000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2102,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(2098,spurious_match_abort_loop_1,VME_CAEN_V1190_S438_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(2098,VME_CAEN_V1190_S438_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(2099,spurious_match_abort_loop_1,VME_CAEN_V1190_S438_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(2099,VME_CAEN_V1190_S438_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(2100,spurious_match_abort_loop_1,VME_CAEN_V1190_S438_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(2100,VME_CAEN_V1190_S438_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(2101,spurious_match_abort_loop_1,VME_CAEN_V1190_S438_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(2101,VME_CAEN_V1190_S438_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_1:;
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._data;
  // UINT32 trailer
  // {
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
  READ_FROM_BUFFER_FULL(2113,uint32 ,trailer,trailer.u32);
  CHECK_WORD_COUNT(2108,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(2112,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(2113,trailer.u32,0x00f0001f);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_S438::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1190_S438_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SHORT_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
void VME_CAEN_V1190_S438_SHORT_SUBTDC::__unpack(__data_src_t &__buffer,uint32 tdc
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
  READ_FROM_BUFFER_FULL(2149,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_EQUAL(2135,ch_data.tdc,tdc);
  CHECK_BITS_EQUAL(2139,ch_data.unnamed_27_31,0);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(2147,((ch_data.tdc << 5) | ch_data.channel_low));
    __item.value = ch_data.value;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_S438_SHORT_SUBTDC::__unpack,uint32 tdc
                                                                           ,uint32 event_id
                                                                           ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR(tdc)
template<typename __data_src_t>
void VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR::__unpack(__data_src_t &__buffer,uint32 tdc)
{
  // UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
  READ_FROM_BUFFER_FULL(2160,uint32 ,error_flags,error_flags.u32);
  CHECK_BITS_EQUAL(2158,error_flags.tdc,tdc);
  CHECK_BITS_EQUAL(2159,error_flags.unnamed_27_31,4);
  CHECK_UNNAMED_BITS_ZERO(2160,error_flags.u32,0x04ff8000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR::__unpack,uint32 tdc);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1190_S438_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SHORT(geom)
template<typename __data_src_t>
void VME_CAEN_V1190_S438_SHORT::__unpack(__data_src_t &__buffer,uint32 geom)
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
  READ_FROM_BUFFER_FULL(2175,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(2172,header.geom,geom);
  CHECK_BITS_EQUAL(2174,header.unnamed_27_31,8);
  // select several

    // tdc[0] = VME_CAEN_V1190_S438_SHORT_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // tdc[1] = VME_CAEN_V1190_S438_SHORT_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // tdc[2] = VME_CAEN_V1190_S438_SHORT_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // tdc[3] = VME_CAEN_V1190_S438_SHORT_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // norevisit err[0] = VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR(tdc=0);
    // norevisit err[1] = VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR(tdc=1);
    // norevisit err[2] = VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR(tdc=2);
    // norevisit err[3] = VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR(tdc=3);
  bitsone<4> __visited1;
  __visited1.clear();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_CAEN_V1190_S438_SHORT_SUBTDC tdc[0]: (s32) => (0xfb000000,0x00000000)
    // optimized match 2: VME_CAEN_V1190_S438_SHORT_SUBTDC tdc[1]: (s32) => (0xfb000000,0x01000000)
    // optimized match 3: VME_CAEN_V1190_S438_SHORT_SUBTDC tdc[2]: (s32) => (0xfb000000,0x02000000)
    // optimized match 4: VME_CAEN_V1190_S438_SHORT_SUBTDC tdc[3]: (s32) => (0xfb000000,0x03000000)
    // optimized match 5: VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR err[0]: (s32) => (0xffff8000,0x20000000)
    // optimized match 6: VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR err[1]: (s32) => (0xffff8000,0x21000000)
    // optimized match 7: VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR err[2]: (s32) => (0xffff8000,0x22000000)
    // optimized match 8: VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR err[3]: (s32) => (0xffff8000,0x23000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2188,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(2179,spurious_match_abort_loop_2,VME_CAEN_V1190_S438_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(2179,VME_CAEN_V1190_S438_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(2180,spurious_match_abort_loop_2,VME_CAEN_V1190_S438_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(2180,VME_CAEN_V1190_S438_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(2181,spurious_match_abort_loop_2,VME_CAEN_V1190_S438_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(2181,VME_CAEN_V1190_S438_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(2182,spurious_match_abort_loop_2,VME_CAEN_V1190_S438_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(2182,VME_CAEN_V1190_S438_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(2184,spurious_match_abort_loop_2,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(2184,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[0],__visited1,0);
        UNPACK_DECL(2184,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(2185,spurious_match_abort_loop_2,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(2185,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[1],__visited1,1);
        UNPACK_DECL(2185,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(2186,spurious_match_abort_loop_2,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(2186,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[2],__visited1,2);
        UNPACK_DECL(2186,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(2187,spurious_match_abort_loop_2,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(2187,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[3],__visited1,3);
        UNPACK_DECL(2187,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_2:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(2194,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(2193,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(2206,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(2200,trailer.geom,geom);
  CHECK_WORD_COUNT(2201,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(2205,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(2206,trailer.u32,0x00f00000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_S438_SHORT::__unpack,uint32 geom);

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
  READ_FROM_BUFFER_FULL(550,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_EQUAL(535,ch_data.tdc,tdc);
  CHECK_BITS_EQUAL(540,ch_data.unnamed_27_31,0);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(548,((ch_data.tdc << 5) | ch_data.channel_low));
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
  READ_FROM_BUFFER_FULL(561,uint32 ,error_flags,error_flags.u32);
  CHECK_BITS_EQUAL(559,error_flags.tdc,tdc);
  CHECK_BITS_EQUAL(560,error_flags.unnamed_27_31,4);
  CHECK_UNNAMED_BITS_ZERO(561,error_flags.u32,0x04ff8000);
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
  READ_FROM_BUFFER_FULL(576,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(573,header.geom,geom);
  CHECK_BITS_EQUAL(575,header.unnamed_27_31,8);
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
  bitsone<4> __visited2;
  __visited2.clear();
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
    PEEK_FROM_BUFFER(589,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(580,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(580,VME_CAEN_V1190_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(581,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(581,VME_CAEN_V1190_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(582,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(582,VME_CAEN_V1190_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(583,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(583,VME_CAEN_V1190_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(585,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(585,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],__visited2,0);
        UNPACK_DECL(585,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(586,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(586,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],__visited2,1);
        UNPACK_DECL(586,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(587,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(587,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],__visited2,2);
        UNPACK_DECL(587,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(588,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(588,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],__visited2,3);
        UNPACK_DECL(588,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_3:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(595,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(594,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(607,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(601,trailer.geom,geom);
  CHECK_WORD_COUNT(602,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(606,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(607,trailer.u32,0x00f00000);
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
  READ_FROM_BUFFER_FULL(221,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(217,header.event_id,event_id);
  CHECK_BITS_EQUAL(219,header.tdc,tdc);
  CHECK_BITS_EQUAL(220,header.unnamed_27_31,1);
  CHECK_UNNAMED_BITS_ZERO(221,header.u32,0x04000000);
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
  if (__buffer.empty()) goto data_done_14;
  PEEK_FROM_BUFFER_FULL(248,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(228,ch_data.tdc,tdc,data_done_14);
  CHECK_JUMP_BITS_EQUAL(238,ch_data.unnamed_27_31,0,data_done_14);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(242,((ch_data.tdc << 3) | ch_data.channel_low));
    __item.value = ch_data.value;
  }
  }
  data_done_14:;
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
  if (__buffer.empty()) goto data_done_15;
  PEEK_FROM_BUFFER_FULL(256,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(254,__error_flags.tdc,tdc,data_done_15);
  CHECK_JUMP_BITS_EQUAL(255,__error_flags.unnamed_27_31,4,data_done_15);
  CHECK_JUMP_UNNAMED_BITS_ZERO(256,__error_flags.u32,0x04ff8000,data_done_15);
  error_flags.u32 = __error_flags.u32;
  __buffer.advance(sizeof(__error_flags.u32));
  data_done_15:;
  // MARK_COUNT(tdc_end);
  void *__mark_tdc_end = __buffer._data;
  // UINT32 trailer
  // {
    //  0_11: word_count = CHECK_COUNT(tdc_start,tdc_end,4,4);
    // 12_23: event_id = CHECK(header.event_id);
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 3;
  // }
  READ_FROM_BUFFER_FULL(267,uint32 ,trailer,trailer.u32);
  CHECK_WORD_COUNT(262,trailer.word_count,tdc_start,tdc_end,4,4);
  CHECK_BITS_EQUAL(263,trailer.event_id,header.event_id);
  CHECK_BITS_EQUAL(265,trailer.tdc,tdc);
  CHECK_BITS_EQUAL(266,trailer.unnamed_27_31,3);
  CHECK_UNNAMED_BITS_ZERO(267,trailer.u32,0x04000000);
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
  READ_FROM_BUFFER_FULL(282,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(279,header.geom,geom);
  CHECK_BITS_EQUAL(281,header.unnamed_27_31,8);
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
    PEEK_FROM_BUFFER(290,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(286,spurious_match_abort_loop_4,VME_CAEN_V1290_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(286,VME_CAEN_V1290_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(287,spurious_match_abort_loop_4,VME_CAEN_V1290_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(287,VME_CAEN_V1290_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(288,spurious_match_abort_loop_4,VME_CAEN_V1290_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(288,VME_CAEN_V1290_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(289,spurious_match_abort_loop_4,VME_CAEN_V1290_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(289,VME_CAEN_V1290_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_4:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(296,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(295,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(308,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(302,trailer.geom,geom);
  CHECK_WORD_COUNT(303,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(307,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(308,trailer.u32,0x00f00000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1290_S438_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
void VME_CAEN_V1290_S438_SUBTDC::__unpack(__data_src_t &__buffer,uint32 tdc
                                                                ,uint32 event_id
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
  READ_FROM_BUFFER_FULL(1828,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1824,header.event_id,event_id);
  CHECK_BITS_EQUAL(1826,header.tdc,tdc);
  CHECK_BITS_EQUAL(1827,header.unnamed_27_31,1);
  CHECK_UNNAMED_BITS_ZERO(1828,header.u32,0x04000000);
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
  if (__buffer.empty()) goto data_done_16;
  PEEK_FROM_BUFFER_FULL(1854,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(1835,ch_data.tdc,tdc,data_done_16);
  CHECK_JUMP_BITS_EQUAL(1844,ch_data.unnamed_27_31,0,data_done_16);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(1848,((ch_data.tdc << 3) | ch_data.channel_low));
    __item.value = ch_data.value;
  }
  }
  data_done_16:;
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
  if (__buffer.empty()) goto data_done_17;
  PEEK_FROM_BUFFER_FULL(1862,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(1860,__error_flags.tdc,tdc,data_done_17);
  CHECK_JUMP_BITS_EQUAL(1861,__error_flags.unnamed_27_31,4,data_done_17);
  CHECK_JUMP_UNNAMED_BITS_ZERO(1862,__error_flags.u32,0x04ff8000,data_done_17);
  error_flags.u32 = __error_flags.u32;
  __buffer.advance(sizeof(__error_flags.u32));
  data_done_17:;
  // MARK_COUNT(tdc_end);
  void *__mark_tdc_end = __buffer._data;
  // UINT32 trailer
  // {
    //  0_11: word_count = CHECK_COUNT(tdc_start,tdc_end,4,4);
    // 12_23: event_id = CHECK(header.event_id);
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 3;
  // }
  READ_FROM_BUFFER_FULL(1873,uint32 ,trailer,trailer.u32);
  CHECK_WORD_COUNT(1868,trailer.word_count,tdc_start,tdc_end,4,4);
  CHECK_BITS_EQUAL(1869,trailer.event_id,header.event_id);
  CHECK_BITS_EQUAL(1871,trailer.tdc,tdc);
  CHECK_BITS_EQUAL(1872,trailer.unnamed_27_31,3);
  CHECK_UNNAMED_BITS_ZERO(1873,trailer.u32,0x04000000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_S438_SUBTDC::__unpack,uint32 tdc
                                                                     ,uint32 event_id
                                                                     ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1290_S438.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438(geom)
template<typename __data_src_t>
void VME_CAEN_V1290_S438::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // UINT32 ucesb_separator
  // {
    //  0_04: geom = MATCH(geom);
    // 24_31: 76;
  // }
  READ_FROM_BUFFER_FULL(1885,uint32 ,ucesb_separator,ucesb_separator.u32);
  CHECK_BITS_EQUAL(1883,ucesb_separator.geom,geom);
  CHECK_BITS_EQUAL(1884,ucesb_separator.unnamed_24_31,76);
  CHECK_UNNAMED_BITS_ZERO(1885,ucesb_separator.u32,0x00ffffe0);
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._data;
  // UINT32 header
  // {
    //  5_26: event_number;
    // 27_31: 8;
  // }
  READ_FROM_BUFFER_FULL(1893,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1892,header.unnamed_27_31,8);
  CHECK_UNNAMED_BITS_ZERO(1893,header.u32,0x0000001f);
  // select several

    // tdc[0] = VME_CAEN_V1290_S438_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[1] = VME_CAEN_V1290_S438_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[2] = VME_CAEN_V1290_S438_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[3] = VME_CAEN_V1290_S438_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                        // data=data);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_CAEN_V1290_S438_SUBTDC tdc[0]: (s32) => (0xff000000,0x08000000)
    // optimized match 2: VME_CAEN_V1290_S438_SUBTDC tdc[1]: (s32) => (0xff000000,0x09000000)
    // optimized match 3: VME_CAEN_V1290_S438_SUBTDC tdc[2]: (s32) => (0xff000000,0x0a000000)
    // optimized match 4: VME_CAEN_V1290_S438_SUBTDC tdc[3]: (s32) => (0xff000000,0x0b000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1901,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(1897,spurious_match_abort_loop_5,VME_CAEN_V1290_S438_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(1897,VME_CAEN_V1290_S438_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(1898,spurious_match_abort_loop_5,VME_CAEN_V1290_S438_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(1898,VME_CAEN_V1290_S438_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(1899,spurious_match_abort_loop_5,VME_CAEN_V1290_S438_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(1899,VME_CAEN_V1290_S438_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(1900,spurious_match_abort_loop_5,VME_CAEN_V1290_S438_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(1900,VME_CAEN_V1290_S438_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_5:;
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._data;
  // UINT32 trailer
  // {
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
  READ_FROM_BUFFER_FULL(1912,uint32 ,trailer,trailer.u32);
  CHECK_WORD_COUNT(1907,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(1911,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(1912,trailer.u32,0x00f0001f);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_S438::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1290_S438_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SHORT_SUBTDC(tdc,event_id,data)
template<typename __data_src_t>
void VME_CAEN_V1290_S438_SHORT_SUBTDC::__unpack(__data_src_t &__buffer,uint32 tdc
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
  READ_FROM_BUFFER_FULL(1948,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_EQUAL(1929,ch_data.tdc,tdc);
  CHECK_BITS_EQUAL(1938,ch_data.unnamed_27_31,0);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(1942,((ch_data.tdc << 3) | ch_data.channel_low));
    __item.value = ch_data.value;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_S438_SHORT_SUBTDC::__unpack,uint32 tdc
                                                                           ,uint32 event_id
                                                                           ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR(tdc)
template<typename __data_src_t>
void VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR::__unpack(__data_src_t &__buffer,uint32 tdc)
{
  // UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
  READ_FROM_BUFFER_FULL(1959,uint32 ,error_flags,error_flags.u32);
  CHECK_BITS_EQUAL(1957,error_flags.tdc,tdc);
  CHECK_BITS_EQUAL(1958,error_flags.unnamed_27_31,4);
  CHECK_UNNAMED_BITS_ZERO(1959,error_flags.u32,0x04ff8000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR::__unpack,uint32 tdc);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1290_S438_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SHORT(geom)
template<typename __data_src_t>
void VME_CAEN_V1290_S438_SHORT::__unpack(__data_src_t &__buffer,uint32 geom)
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
  READ_FROM_BUFFER_FULL(1974,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1971,header.geom,geom);
  CHECK_BITS_EQUAL(1973,header.unnamed_27_31,8);
  // select several

    // tdc[0] = VME_CAEN_V1290_S438_SHORT_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // tdc[1] = VME_CAEN_V1290_S438_SHORT_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // tdc[2] = VME_CAEN_V1290_S438_SHORT_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // tdc[3] = VME_CAEN_V1290_S438_SHORT_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // norevisit err[0] = VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR(tdc=0);
    // norevisit err[1] = VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR(tdc=1);
    // norevisit err[2] = VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR(tdc=2);
    // norevisit err[3] = VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR(tdc=3);
  bitsone<4> __visited3;
  __visited3.clear();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_CAEN_V1290_S438_SHORT_SUBTDC tdc[0]: (s32) => (0xfb000000,0x00000000)
    // optimized match 2: VME_CAEN_V1290_S438_SHORT_SUBTDC tdc[1]: (s32) => (0xfb000000,0x01000000)
    // optimized match 3: VME_CAEN_V1290_S438_SHORT_SUBTDC tdc[2]: (s32) => (0xfb000000,0x02000000)
    // optimized match 4: VME_CAEN_V1290_S438_SHORT_SUBTDC tdc[3]: (s32) => (0xfb000000,0x03000000)
    // optimized match 5: VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR err[0]: (s32) => (0xffff8000,0x20000000)
    // optimized match 6: VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR err[1]: (s32) => (0xffff8000,0x21000000)
    // optimized match 7: VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR err[2]: (s32) => (0xffff8000,0x22000000)
    // optimized match 8: VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR err[3]: (s32) => (0xffff8000,0x23000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1987,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(1978,spurious_match_abort_loop_6,VME_CAEN_V1290_S438_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(1978,VME_CAEN_V1290_S438_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(1979,spurious_match_abort_loop_6,VME_CAEN_V1290_S438_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(1979,VME_CAEN_V1290_S438_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(1980,spurious_match_abort_loop_6,VME_CAEN_V1290_S438_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(1980,VME_CAEN_V1290_S438_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(1981,spurious_match_abort_loop_6,VME_CAEN_V1290_S438_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(1981,VME_CAEN_V1290_S438_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(1983,spurious_match_abort_loop_6,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(1983,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[0],__visited3,0);
        UNPACK_DECL(1983,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(1984,spurious_match_abort_loop_6,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(1984,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[1],__visited3,1);
        UNPACK_DECL(1984,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(1985,spurious_match_abort_loop_6,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(1985,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[2],__visited3,2);
        UNPACK_DECL(1985,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(1986,spurious_match_abort_loop_6,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(1986,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[3],__visited3,3);
        UNPACK_DECL(1986,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_6:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(1993,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(1992,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(2005,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(1999,trailer.geom,geom);
  CHECK_WORD_COUNT(2000,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(2004,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(2005,trailer.u32,0x00f00000);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_S438_SHORT::__unpack,uint32 geom);

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
  READ_FROM_BUFFER_FULL(345,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_EQUAL(325,ch_data.tdc,tdc);
  CHECK_BITS_EQUAL(335,ch_data.unnamed_27_31,0);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(339,((ch_data.tdc << 3) | ch_data.channel_low));
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
  READ_FROM_BUFFER_FULL(356,uint32 ,error_flags,error_flags.u32);
  CHECK_BITS_EQUAL(354,error_flags.tdc,tdc);
  CHECK_BITS_EQUAL(355,error_flags.unnamed_27_31,4);
  CHECK_UNNAMED_BITS_ZERO(356,error_flags.u32,0x04ff8000);
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
  READ_FROM_BUFFER_FULL(371,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(368,header.geom,geom);
  CHECK_BITS_EQUAL(370,header.unnamed_27_31,8);
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
  bitsone<4> __visited4;
  __visited4.clear();
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
    PEEK_FROM_BUFFER(384,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(375,spurious_match_abort_loop_7,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(375,VME_CAEN_V1290_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(376,spurious_match_abort_loop_7,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(376,VME_CAEN_V1290_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(377,spurious_match_abort_loop_7,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(377,VME_CAEN_V1290_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(378,spurious_match_abort_loop_7,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(378,VME_CAEN_V1290_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(380,spurious_match_abort_loop_7,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(380,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],__visited4,0);
        UNPACK_DECL(380,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(381,spurious_match_abort_loop_7,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(381,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],__visited4,1);
        UNPACK_DECL(381,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(382,spurious_match_abort_loop_7,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(382,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],__visited4,2);
        UNPACK_DECL(382,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(383,spurious_match_abort_loop_7,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(383,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],__visited4,3);
        UNPACK_DECL(383,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_7:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(390,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(389,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(402,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(396,trailer.geom,geom);
  CHECK_WORD_COUNT(397,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(401,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(402,trailer.u32,0x00f00000);
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
  READ_FROM_BUFFER_FULL(140,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(137,header.crate,crate);
  CHECK_BITS_EQUAL(138,header.unnamed_24_26,2);
  CHECK_BITS_EQUAL(139,header.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(140,header.u32,0x0000c0ff);
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
    READ_FROM_BUFFER_FULL(160,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(156,ch_data.unnamed_24_26,0);
    CHECK_BITS_EQUAL(157,ch_data.geom,geom);
    CHECK_UNNAMED_BITS_ZERO(160,ch_data.u32,0x00e08000);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(159,ch_data.channel);
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
  READ_FROM_BUFFER_FULL(169,uint32 ,eob,eob.u32);
  CHECK_BITS_EQUAL(166,eob.unnamed_24_26,4);
  CHECK_BITS_EQUAL(167,eob.geom,geom);
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
  READ_FROM_BUFFER_FULL(188,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(186,header.unnamed_26_26,1);
  CHECK_BITS_EQUAL(187,header.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(188,header.u32,0x03000000);
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
    READ_FROM_BUFFER_FULL(199,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(195,ch_data.unnamed_26_26,0);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(198,ch_data.channel);
      __item.value = ch_data.value;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V830::__unpack,uint32 geom);

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
  READ_FROM_BUFFER_FULL(1149,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(1145,custom_header.id,id);
  CHECK_BITS_EQUAL(1148,custom_header.unnamed_24_31,171);
  CHECK_UNNAMED_BITS_ZERO(1149,custom_header.u32,0x00fc0000);
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
    READ_FROM_BUFFER_FULL(1159,uint32 ,event_header,event_header.u32);
    CHECK_BITS_EQUAL(1153,event_header.unnamed_0_7,170);
    CHECK_BITS_EQUAL(1155,event_header.unnamed_29_30,1);
    CHECK_BITS_EQUAL(1156,event_header.unnamed_31_31,1);
    CHECK_UNNAMED_BITS_ZERO(1159,event_header.u32,0x1f000700);
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
    READ_FROM_BUFFER_FULL(1172,uint32 ,event,event.u32);
    CHECK_UNNAMED_BITS_ZERO(1172,event.u32,0xc0000000);
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(1170,event.channel);
      __item.value = event.time_fine;
    }
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(1171,event.channel);
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
  READ_FROM_BUFFER_FULL(1224,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(1220,custom_header.id,id);
  CHECK_BITS_EQUAL(1223,custom_header.unnamed_24_31,171);
  CHECK_UNNAMED_BITS_ZERO(1224,custom_header.u32,0x00fc0000);
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
    READ_FROM_BUFFER_FULL(1234,uint32 ,event_header,event_header.u32);
    CHECK_BITS_EQUAL(1228,event_header.unnamed_0_7,170);
    CHECK_BITS_EQUAL(1230,event_header.unnamed_29_30,1);
    CHECK_BITS_EQUAL(1231,event_header.unnamed_31_31,1);
    CHECK_UNNAMED_BITS_ZERO(1234,event_header.u32,0x1f000700);
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
    READ_FROM_BUFFER_FULL(1246,uint32 ,event,event.u32);
    CHECK_UNNAMED_BITS_ZERO(1246,event.u32,0xc0000000);
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(1244,event.channel);
      __item.value = event.time_fine;
    }
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(1245,event.channel);
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
  READ_FROM_BUFFER_FULL(1187,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(1183,custom_header.id,id);
  CHECK_BITS_EQUAL(1186,custom_header.unnamed_24_31,171);
  CHECK_UNNAMED_BITS_ZERO(1187,custom_header.u32,0x00fc0000);
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
    READ_FROM_BUFFER_FULL(1197,uint32 ,event_header,event_header.u32);
    CHECK_BITS_EQUAL(1191,event_header.unnamed_0_7,170);
    CHECK_BITS_EQUAL(1193,event_header.unnamed_29_30,1);
    CHECK_BITS_EQUAL(1194,event_header.unnamed_31_31,1);
    CHECK_UNNAMED_BITS_ZERO(1197,event_header.u32,0x1f000700);
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
    READ_FROM_BUFFER_FULL(1209,uint32 ,event,event.u32);
    CHECK_UNNAMED_BITS_ZERO(1209,event.u32,0x80000000);
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(1207,event.channel);
      __item.value = event.time_fine;
    }
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(1208,event.channel);
      __item.value = event.time_coarse;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_GSI_VFTX2_LT::__unpack,uint32 id);

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
  READ_FROM_BUFFER_FULL(627,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(624,header.geom,geom);
  CHECK_BITS_EQUAL(625,header.unnamed_24_29,0);
  CHECK_BITS_EQUAL(626,header.unnamed_30_31,1);
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
  if (__buffer.empty()) goto data_done_18;
  PEEK_FROM_BUFFER_FULL(638,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(634,ch_data.unnamed_21_29,32,data_done_18);
  CHECK_JUMP_BITS_EQUAL(635,ch_data.unnamed_30_31,0,data_done_18);
  CHECK_JUMP_UNNAMED_BITS_ZERO(638,ch_data.u32,0x0000a000,data_done_18);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(637,ch_data.channel);
    __item.value = ch_data.value;
    __item.overflow = ch_data.outofrange;
  }
  }
  data_done_18:;
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
  if (__buffer.empty()) goto data_done_19;
  PEEK_FROM_BUFFER_FULL(644,uint32 ,filler,filler.u32);
  CHECK_JUMP_BITS_EQUAL(643,filler.unnamed_0_31,0,data_done_19);
  __buffer.advance(sizeof(filler.u32));
  data_done_19:;
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  READ_FROM_BUFFER_FULL(650,uint32 ,end_of_event,end_of_event.u32);
  CHECK_BITS_EQUAL(649,end_of_event.unnamed_30_31,3);
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
  CHECK_WORD_COUNT(653,header.word_number,start,end,( - 4),4);
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
  READ_FROM_BUFFER_FULL(671,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(668,header.geom,geom);
  CHECK_BITS_EQUAL(669,header.unnamed_24_29,0);
  CHECK_BITS_EQUAL(670,header.unnamed_30_31,1);
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
  if (__buffer.empty()) goto data_done_20;
  PEEK_FROM_BUFFER_FULL(683,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(679,ch_data.unnamed_24_27,0,data_done_20);
  CHECK_JUMP_BITS_EQUAL(680,ch_data.unnamed_28_31,1,data_done_20);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(682,ch_data.channel);
    __item.value = ch_data.value;
    __item.overflow = ch_data.overflow;
    __item.pileup = ch_data.pileup;
  }
  }
  data_done_20:;
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
  if (__buffer.empty()) goto data_done_21;
  PEEK_FROM_BUFFER_FULL(688,uint32 ,fill_word,fill_word.u32);
  CHECK_JUMP_BITS_EQUAL(687,fill_word.unnamed_0_31,0,data_done_21);
  __buffer.advance(sizeof(fill_word.u32));
  }
  data_done_21:;
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  READ_FROM_BUFFER_FULL(694,uint32 ,end_of_event,end_of_event.u32);
  CHECK_BITS_EQUAL(693,end_of_event.unnamed_30_31,3);
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
  CHECK_WORD_COUNT(697,header.word_number,start,end,( - 4),4);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_MESYTEC_MDPP16::__unpack,uint32 geom);

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
  // MEMBER(DATA16 data[2][900] ZERO_SUPPRESS);
  // MEMBER(DATA32 maw[2][3] ZERO_SUPPRESS);
  // MEMBER(DATA32 timeStamp[2][2] ZERO_SUPPRESS);
  // MEMBER(DATA32 gate[2][2] ZERO_SUPPRESS);
  // UINT32 header0
  // {
    //  0_15: chanNo;
    // 16_31: 0;
  // }
  READ_FROM_BUFFER_FULL(1267,uint32 ,header0,header0.u32);
  CHECK_BITS_EQUAL(1266,header0.unnamed_16_31,0);
  // UINT32 header1
  // {
    //  0_03: format;
    //  4_15: channelID;
    // 16_31: timeS;
    // ENCODE(timeStamp[header0.chanNo][0],(value=timeS));
  // }
  READ_FROM_BUFFER_FULL(1275,uint32 ,header1,header1.u32);
  {
    typedef __typeof__(*(&(timeStamp[header0.chanNo]))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = timeStamp[header0.chanNo].insert_index(1274,0);
    __item.value = header1.timeS;
  }
  // UINT32 header2
  // {
    //  0_31: timeS;
    // ENCODE(timeStamp[header0.chanNo][1],(value=timeS));
  // }
  READ_FROM_BUFFER_FULL(1281,uint32 ,header2,header2.u32);
  {
    typedef __typeof__(*(&(timeStamp[header0.chanNo]))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = timeStamp[header0.chanNo].insert_index(1280,1);
    __item.value = header2.timeS;
  }
  // UINT32 gate7
  // {
    //  0_27: sum;
    // 28_31: 0;
    // ENCODE(gate[header0.chanNo][0],(value=sum));
  // }
  READ_FROM_BUFFER_FULL(1288,uint32 ,gate7,gate7.u32);
  CHECK_BITS_EQUAL(1286,gate7.unnamed_28_31,0);
  {
    typedef __typeof__(*(&(gate[header0.chanNo]))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = gate[header0.chanNo].insert_index(1287,0);
    __item.value = gate7.sum;
  }
  // UINT32 gate8
  // {
    //  0_27: sum;
    // 28_31: 0;
    // ENCODE(gate[header0.chanNo][1],(value=sum));
  // }
  READ_FROM_BUFFER_FULL(1295,uint32 ,gate8,gate8.u32);
  CHECK_BITS_EQUAL(1293,gate8.unnamed_28_31,0);
  {
    typedef __typeof__(*(&(gate[header0.chanNo]))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = gate[header0.chanNo].insert_index(1294,1);
    __item.value = gate8.sum;
  }
  // UINT32 maw1
  // {
    //  0_27: max;
    // 28_31: 0;
    // ENCODE(maw[header0.chanNo][0],(value=max));
  // }
  READ_FROM_BUFFER_FULL(1302,uint32 ,maw1,maw1.u32);
  CHECK_BITS_EQUAL(1300,maw1.unnamed_28_31,0);
  {
    typedef __typeof__(*(&(maw[header0.chanNo]))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = maw[header0.chanNo].insert_index(1301,0);
    __item.value = maw1.max;
  }
  // UINT32 maw2
  // {
    //  0_27: after;
    // 28_31: 0;
    // ENCODE(maw[header0.chanNo][1],(value=after));
  // }
  READ_FROM_BUFFER_FULL(1309,uint32 ,maw2,maw2.u32);
  CHECK_BITS_EQUAL(1307,maw2.unnamed_28_31,0);
  {
    typedef __typeof__(*(&(maw[header0.chanNo]))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = maw[header0.chanNo].insert_index(1308,1);
    __item.value = maw2.after;
  }
  // UINT32 maw3
  // {
    //  0_27: before;
    // 28_31: 0;
    // ENCODE(maw[header0.chanNo][2],(value=before));
  // }
  READ_FROM_BUFFER_FULL(1316,uint32 ,maw3,maw3.u32);
  CHECK_BITS_EQUAL(1314,maw3.unnamed_28_31,0);
  {
    typedef __typeof__(*(&(maw[header0.chanNo]))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = maw[header0.chanNo].insert_index(1315,2);
    __item.value = maw3.before;
  }
  // UINT32 header3
  // {
    //  0_25: sampleLength;
    //    26: 0;
    //    27: mawFlag;
    // 28_31: 14;
  // }
  READ_FROM_BUFFER_FULL(1324,uint32 ,header3,header3.u32);
  CHECK_BITS_EQUAL(1321,header3.unnamed_26_26,0);
  CHECK_BITS_EQUAL(1323,header3.unnamed_28_31,14);
  // list(0<=index<header3.sampleLength)

  for (uint32 index = 0; index < (uint32) (header3.sampleLength); ++index)
  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_15: sample1;
      // 16_31: sample2;
      // ENCODE(data[header0.chanNo][(2 * index)],(value=sample1));
      // ENCODE(data[header0.chanNo][((2 * index) + 1)],(value=sample2));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 sample1 : 16; // 0..15
        uint32 sample2 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 sample2 : 16; // 16..31
        uint32 sample1 : 16; // 0..15
#endif
      };
      uint32  u32;
    } ch_data;
    READ_FROM_BUFFER_FULL(1336,uint32 ,ch_data,ch_data.u32);
    {
      typedef __typeof__(*(&(data[header0.chanNo]))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data[header0.chanNo].insert_index(1334,(2 * index));
      __item.value = ch_data.sample1;
    }
    {
      typedef __typeof__(*(&(data[header0.chanNo]))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data[header0.chanNo].insert_index(1335,((2 * index) + 1));
      __item.value = ch_data.sample2;
    }
  }
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
  READ_FROM_BUFFER_FULL(1386,uint32 ,hi,hi.u32);
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
  READ_FROM_BUFFER_FULL(1390,uint32 ,lo,lo.u32);
  {
    time_lo.value = lo.time;
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,WR_MULTI::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for LAND_CAMAC_CONVERTER.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_CONVERTER)
template<typename __data_src_t>
void LAND_CAMAC_CONVERTER::__unpack(__data_src_t &__buffer)
{
  // UINT16 tpat;
  READ_FROM_BUFFER(767,uint16 ,tpat);
  // UINT16 tprev;
  READ_FROM_BUFFER(768,uint16 ,tprev);
  // UINT16 tnext;
  READ_FROM_BUFFER(769,uint16 ,tnext);
  // UINT16 tprev2;
  READ_FROM_BUFFER(770,uint16 ,tprev2);
  // if(EXTERNAL has_data)

  if (has_data())
  {
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_CONVERTER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for LAND_CAMAC_SCALER.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_SCALER)
template<typename __data_src_t>
void LAND_CAMAC_SCALER::__unpack(__data_src_t &__buffer)
{
  // scaler0 = CAMAC_LECROY_4434(channels=32);
  UNPACK_DECL(927,CAMAC_LECROY_4434,scaler0,/*channels*/32);
  // scaler1 = CAMAC_LECROY_4434(channels=32);
  UNPACK_DECL(928,CAMAC_LECROY_4434,scaler1,/*channels*/32);
  // scaler2 = CAMAC_LECROY_4434(channels=32);
  UNPACK_DECL(929,CAMAC_LECROY_4434,scaler2,/*channels*/32);
  // scaler3 = SOFT_SCALER32(channels=16);
  UNPACK_DECL(931,SOFT_SCALER32,scaler3,/*channels*/16);
  // if(EXTERNAL has_timestamp)

  if (has_timestamp())
  {
    // UINT32 timestamp;
    READ_FROM_BUFFER(938,uint32 ,timestamp);
    // UINT32 endianess
    // {
      //  0_31: 0x87654321;
    // }
    READ_FROM_BUFFER_FULL(939,uint32 ,endianess,endianess.u32);
    CHECK_BITS_EQUAL(939,endianess.unnamed_0_31,0x87654321);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_SCALER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for LAND_CAMAC_START_STOP_STAMP.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_START_STOP_STAMP)
template<typename __data_src_t>
void LAND_CAMAC_START_STOP_STAMP::__unpack(__data_src_t &__buffer)
{
  // UINT32 timestamp;
  READ_FROM_BUFFER(945,uint32 ,timestamp);
  // UINT32 endianess
  // {
    //  0_31: 0x87654321;
  // }
  READ_FROM_BUFFER_FULL(946,uint32 ,endianess,endianess.u32);
  CHECK_BITS_EQUAL(946,endianess.unnamed_0_31,0x87654321);
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_START_STOP_STAMP::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for LAND_CAMAC_TCAL_INFO.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_TCAL_INFO)
template<typename __data_src_t>
void LAND_CAMAC_TCAL_INFO::__unpack(__data_src_t &__buffer)
{
  // UINT32 info;
  READ_FROM_BUFFER(898,uint32 ,info);
  // select several

    // rtcal = RANDOM_TCAL(id=231);
    // ntp = NTP_MESSAGE(id=239);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: RANDOM_TCAL rtcal: (s32) => (0xfff00000,0xe7000000)
    // optimized match 2: NTP_MESSAGE ntp: (s32) => (0xfffe0000,0xef000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(904,uint32,__match_peek);
    // differ = 08000000 : 27
    uint32 __match_index = 0 | /* 27,27 */ ((__match_peek >> 27) & 0x00000001);
    static const sint8 __match_index_array[2] = { 1, 2, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(902,RANDOM_TCAL,rtcal,/*id*/231);
        break;
      case 2:
        UNPACK_DECL(903,NTP_MESSAGE,ntp,/*id*/239);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_TCAL_INFO::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TACQUILA_LAND_SUBEVENT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TACQUILA_LAND_SUBEVENT)
template<typename __data_src_t>
void TACQUILA_LAND_SUBEVENT::__unpack(__data_src_t &__buffer)
{
  // select several

    // data_sam5_gtb0 = TACQUILA_DATA(sam=5,gtb=0);
    // data_sam6_gtb0 = TACQUILA_DATA(sam=6,gtb=0);
    // data_sam6_gtb1 = TACQUILA_DATA(sam=6,gtb=1);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TACQUILA_DATA data_sam5_gtb0: (s32) => (0xff0ce000,0x50000000)
    // optimized match 2: TACQUILA_DATA data_sam6_gtb0: (s32) => (0xff0ce000,0x60000000)
    // optimized match 3: TACQUILA_DATA data_sam6_gtb1: (s32) => (0xff0ce000,0x61000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1134,uint32,__match_peek);
    // differ = 31000000 : 24 28 29
    uint32 __match_index = 0 | /* 24,24 */ ((__match_peek >> 24) & 0x00000001) | /* 28,29 */ ((__match_peek >> 27) & 0x00000006);
    static const sint8 __match_index_array[8] = { 0, 0, 1, 0, 2, 3, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(1131,TACQUILA_DATA,data_sam5_gtb0,/*sam*/5,/*gtb*/0);
        break;
      case 2:
        UNPACK_DECL(1132,TACQUILA_DATA,data_sam6_gtb0,/*sam*/6,/*gtb*/0);
        break;
      case 3:
        UNPACK_DECL(1133,TACQUILA_DATA,data_sam6_gtb1,/*sam*/6,/*gtb*/1);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,TACQUILA_LAND_SUBEVENT::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for califa_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(califa_subev)
template<typename __data_src_t>
void califa_subev::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x400);
  UNPACK_DECL(2473,TIMESTAMP_WHITERABBIT,ts,/*id*/0x400);
  // select several

    // dummy = DUMMY_WORD();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: DUMMY_WORD dummy: (s32)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2476,uint32,__match_peek);
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
        UNPACK_DECL(2475,DUMMY_WORD,dummy);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,califa_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for daq_status_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(daq_status_subev)
template<typename __data_src_t>
void daq_status_subev::__unpack(__data_src_t &__buffer)
{
  // status = DAQ_STATUS();
  UNPACK_DECL(2333,DAQ_STATUS,status);
}
FORCE_IMPL_DATA_SRC_FCN(void,daq_status_subev::__unpack);

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
 * Event unpacker for fiber_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fiber_subev)
template<typename __data_src_t>
void fiber_subev::__unpack(__data_src_t &__buffer)
{
  // evhe = FEBEX_EVENTHEADER();
  UNPACK_DECL(2385,FEBEX_EVENTHEADER,evhe);
  // select several

    // GFI0 = FEBEX_NOTRACE(sfp=0,card=0);
    // GFI1 = FEBEX_NOTRACE(sfp=0,card=1);
    // GFI2 = FEBEX_NOTRACE(sfp=0,card=2);
    // GFI3 = FEBEX_NOTRACE(sfp=0,card=3);
    // GFI4 = FEBEX_NOTRACE(sfp=0,card=4);
    // fi4[0] = FEBEX_NOTRACE(sfp=0,card=5);
    // fi4[1] = FEBEX_NOTRACE(sfp=0,card=6);
    // fi4[2] = FEBEX_NOTRACE(sfp=0,card=7);
    // fi4[3] = FEBEX_NOTRACE(sfp=0,card=8);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FEBEX_NOTRACE GFI0: (s32) => (0xfffff0ff,0xff000034)
    // optimized match 2: FEBEX_NOTRACE GFI1: (s32) => (0xfffff0ff,0xff010034)
    // optimized match 3: FEBEX_NOTRACE GFI2: (s32) => (0xfffff0ff,0xff020034)
    // optimized match 4: FEBEX_NOTRACE GFI3: (s32) => (0xfffff0ff,0xff030034)
    // optimized match 5: FEBEX_NOTRACE GFI4: (s32) => (0xfffff0ff,0xff040034)
    // optimized match 6: FEBEX_NOTRACE fi4[0]: (s32) => (0xfffff0ff,0xff050034)
    // optimized match 7: FEBEX_NOTRACE fi4[1]: (s32) => (0xfffff0ff,0xff060034)
    // optimized match 8: FEBEX_NOTRACE fi4[2]: (s32) => (0xfffff0ff,0xff070034)
    // optimized match 9: FEBEX_NOTRACE fi4[3]: (s32) => (0xfffff0ff,0xff080034)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2396,uint32,__match_peek);
    // differ = 000f0000 : 16 17 18 19
    uint32 __match_index = 0 | /* 16,19 */ ((__match_peek >> 16) & 0x0000000f);
    static const sint8 __match_index_array[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 0, 0, 0, 0, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2387,FEBEX_NOTRACE,GFI0,/*sfp*/0,/*card*/0);
        break;
      case 2:
        UNPACK_DECL(2388,FEBEX_NOTRACE,GFI1,/*sfp*/0,/*card*/1);
        break;
      case 3:
        UNPACK_DECL(2389,FEBEX_NOTRACE,GFI2,/*sfp*/0,/*card*/2);
        break;
      case 4:
        UNPACK_DECL(2390,FEBEX_NOTRACE,GFI3,/*sfp*/0,/*card*/3);
        break;
      case 5:
        UNPACK_DECL(2391,FEBEX_NOTRACE,GFI4,/*sfp*/0,/*card*/4);
        break;
      case 6:
        UNPACK_DECL(2392,FEBEX_NOTRACE,fi4[0],/*sfp*/0,/*card*/5);
        break;
      case 7:
        UNPACK_DECL(2393,FEBEX_NOTRACE,fi4[1],/*sfp*/0,/*card*/6);
        break;
      case 8:
        UNPACK_DECL(2394,FEBEX_NOTRACE,fi4[2],/*sfp*/0,/*card*/7);
        break;
      case 9:
        UNPACK_DECL(2395,FEBEX_NOTRACE,fi4[3],/*sfp*/0,/*card*/8);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fiber_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for los_psp_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_psp_subev)
template<typename __data_src_t>
void los_psp_subev::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2338,LAND_STD_VME,land_vme);
  // select several

    // vftx2_1 = VME_GSI_VFTX2_7PS(id=0);
    // vftx2_2 = VME_GSI_VFTX2_7PS(id=1);
    // madc32 = VME_MESYTEC_MADC32(geom=2);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_GSI_VFTX2_7PS vftx2_1: (s32) => (0xfffc001f,0xab000000)
    // optimized match 2: VME_GSI_VFTX2_7PS vftx2_2: (s32) => (0xfffc001f,0xab000001)
    // optimized match 3: VME_MESYTEC_MADC32 madc32: (s32) => (0xffff0000,0x40020000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2343,uint32,__match_peek);
    // differ = eb020001 : 0 17 24 25 27 29 30 31
    MATCH_DECL_QUICK(2340,__match_no,1,vftx2_1,__match_peek,0xfffc001f,0xab000000);
    MATCH_DECL_QUICK(2341,__match_no,2,vftx2_2,__match_peek,0xfffc001f,0xab000001);
    MATCH_DECL_QUICK(2342,__match_no,3,madc32,__match_peek,0xffff0000,0x40020000);
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2340,VME_GSI_VFTX2_7PS,vftx2_1,/*id*/0);
        break;
      case 2:
        UNPACK_DECL(2341,VME_GSI_VFTX2_7PS,vftx2_2,/*id*/1);
        break;
      case 3:
        UNPACK_DECL(2342,VME_MESYTEC_MADC32,madc32,/*geom*/2);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,los_psp_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for los_scaler_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_scaler_subev)
template<typename __data_src_t>
void los_scaler_subev::__unpack(__data_src_t &__buffer)
{
  // scaler = TRLO_SCALER(crate_id=1);
  UNPACK_DECL(2348,TRLO_SCALER,scaler,/*crate_id*/1);
}
FORCE_IMPL_DATA_SRC_FCN(void,los_scaler_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for mark_event_time.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(mark_event_time)
template<typename __data_src_t>
void mark_event_time::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2324,LAND_STD_VME,land_vme);
  // select several

    // sampler_los = TRLO_SAMPLER(id=223);
    // sampler_cb_sum = TRLO_SAMPLER(id=215);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TRLO_SAMPLER sampler_los: (s32) => (0xfffffc00,0xdf000000)
    // optimized match 2: TRLO_SAMPLER sampler_cb_sum: (s32) => (0xfffffc00,0xd7000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2328,uint32,__match_peek);
    // differ = 08000000 : 27
    uint32 __match_index = 0 | /* 27,27 */ ((__match_peek >> 27) & 0x00000001);
    static const sint8 __match_index_array[2] = { 2, 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2326,TRLO_SAMPLER,sampler_los,/*id*/223);
        break;
      case 2:
        UNPACK_DECL(2327,TRLO_SAMPLER,sampler_cb_sum,/*id*/215);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,mark_event_time::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for mfi_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(mfi_subev)
template<typename __data_src_t>
void mfi_subev::__unpack(__data_src_t &__buffer)
{
  // select several

    // pads = NXYTER_PADDING();
    // data00 = NXYTER(gem=0,nxy=0);
    // data01 = NXYTER(gem=0,nxy=1);
    // data10 = NXYTER(gem=1,nxy=0);
    // data11 = NXYTER(gem=1,nxy=1);
    // data20 = NXYTER(gem=2,nxy=0);
    // data21 = NXYTER(gem=2,nxy=1);
    // data30 = NXYTER(gem=3,nxy=0);
    // data31 = NXYTER(gem=3,nxy=1);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: NXYTER_PADDING pads: (s32) => (0xfffff000,0xadd01000)
    // optimized match 2: NXYTER data00: (s32) => (0xffff00ff,0x00000034)
    // optimized match 3: NXYTER data01: (s32) => (0xffff00ff,0x01000034)
    // optimized match 4: NXYTER data10: (s32) => (0xffff00ff,0x00010034)
    // optimized match 5: NXYTER data11: (s32) => (0xffff00ff,0x01010034)
    // optimized match 6: NXYTER data20: (s32) => (0xffff00ff,0x00020034)
    // optimized match 7: NXYTER data21: (s32) => (0xffff00ff,0x01020034)
    // optimized match 8: NXYTER data30: (s32) => (0xffff00ff,0x00030034)
    // optimized match 9: NXYTER data31: (s32) => (0xffff00ff,0x01030034)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2468,uint32,__match_peek);
    // differ = add31034 : 2 4 5 12 16 17 20 22 23 24 26 27 29 31
    // select on bit 24, partition: 1:4(d5) 0:5(d4)
    if (__match_peek & 0x01000000) {
      // select on bit 17, partition: 1:3(d2) 0:2(d3)
      if (__match_peek & 0x00020000) {
        MATCH_DECL_QUICK(2465,__match_no,7,data21,__match_peek,0xffff00ff,0x01020034);
        MATCH_DECL_QUICK(2467,__match_no,9,data31,__match_peek,0xffff00ff,0x01030034);
      } else {
        MATCH_DECL_QUICK(2459,__match_no,1,pads,__match_peek,0xfffff000,0xadd01000);
        MATCH_DECL_QUICK(2461,__match_no,3,data01,__match_peek,0xffff00ff,0x01000034);
        MATCH_DECL_QUICK(2463,__match_no,5,data11,__match_peek,0xffff00ff,0x01010034);
      }
    } else {
      // select on bit 17, partition: 1:2(d2) 0:2(d2)
      if (__match_peek & 0x00020000) {
        MATCH_DECL_QUICK(2464,__match_no,6,data20,__match_peek,0xffff00ff,0x00020034);
        MATCH_DECL_QUICK(2466,__match_no,8,data30,__match_peek,0xffff00ff,0x00030034);
      } else {
        MATCH_DECL_QUICK(2460,__match_no,2,data00,__match_peek,0xffff00ff,0x00000034);
        MATCH_DECL_QUICK(2462,__match_no,4,data10,__match_peek,0xffff00ff,0x00010034);
      }
    }
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2459,NXYTER_PADDING,pads);
        break;
      case 2:
        UNPACK_DECL(2460,NXYTER,data00,/*gem*/0,/*nxy*/0);
        break;
      case 3:
        UNPACK_DECL(2461,NXYTER,data01,/*gem*/0,/*nxy*/1);
        break;
      case 4:
        UNPACK_DECL(2462,NXYTER,data10,/*gem*/1,/*nxy*/0);
        break;
      case 5:
        UNPACK_DECL(2463,NXYTER,data11,/*gem*/1,/*nxy*/1);
        break;
      case 6:
        UNPACK_DECL(2464,NXYTER,data20,/*gem*/2,/*nxy*/0);
        break;
      case 7:
        UNPACK_DECL(2465,NXYTER,data21,/*gem*/2,/*nxy*/1);
        break;
      case 8:
        UNPACK_DECL(2466,NXYTER,data30,/*gem*/3,/*nxy*/0);
        break;
      case 9:
        UNPACK_DECL(2467,NXYTER,data31,/*gem*/3,/*nxy*/1);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,mfi_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for neuland_subevent.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(neuland_subevent)
template<typename __data_src_t>
void neuland_subevent::__unpack(__data_src_t &__buffer)
{
  // select several

    // data_sam5_gtb0 = TACQUILA_DATA_S438B(sam=5,gtb=0);
    // data_sam5_gtb1 = TACQUILA_DATA_S438B(sam=5,gtb=1);
    // data_sam6_gtb0 = TACQUILA_DATA_S438B(sam=6,gtb=0);
    // data_sam6_gtb1 = TACQUILA_DATA_S438B(sam=6,gtb=1);
    // data_sam7_gtb0 = TACQUILA_DATA_S438B(sam=7,gtb=0);
    // data_sam7_gtb1 = TACQUILA_DATA_S438B(sam=7,gtb=1);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TACQUILA_DATA_S438B data_sam5_gtb0: (s32) => (0xff0c0000,0x50000000)
    // optimized match 2: TACQUILA_DATA_S438B data_sam5_gtb1: (s32) => (0xff0c0000,0x51000000)
    // optimized match 3: TACQUILA_DATA_S438B data_sam6_gtb0: (s32) => (0xff0c0000,0x60000000)
    // optimized match 4: TACQUILA_DATA_S438B data_sam6_gtb1: (s32) => (0xff0c0000,0x61000000)
    // optimized match 5: TACQUILA_DATA_S438B data_sam7_gtb0: (s32) => (0xff0c0000,0x70000000)
    // optimized match 6: TACQUILA_DATA_S438B data_sam7_gtb1: (s32) => (0xff0c0000,0x71000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2372,uint32,__match_peek);
    // differ = 31000000 : 24 28 29
    uint32 __match_index = 0 | /* 24,24 */ ((__match_peek >> 24) & 0x00000001) | /* 28,29 */ ((__match_peek >> 27) & 0x00000006);
    static const sint8 __match_index_array[8] = { 0, 0, 1, 2, 3, 4, 5, 6, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2366,TACQUILA_DATA_S438B,data_sam5_gtb0,/*sam*/5,/*gtb*/0);
        break;
      case 2:
        UNPACK_DECL(2367,TACQUILA_DATA_S438B,data_sam5_gtb1,/*sam*/5,/*gtb*/1);
        break;
      case 3:
        UNPACK_DECL(2368,TACQUILA_DATA_S438B,data_sam6_gtb0,/*sam*/6,/*gtb*/0);
        break;
      case 4:
        UNPACK_DECL(2369,TACQUILA_DATA_S438B,data_sam6_gtb1,/*sam*/6,/*gtb*/1);
        break;
      case 5:
        UNPACK_DECL(2370,TACQUILA_DATA_S438B,data_sam7_gtb0,/*sam*/7,/*gtb*/0);
        break;
      case 6:
        UNPACK_DECL(2371,TACQUILA_DATA_S438B,data_sam7_gtb1,/*sam*/7,/*gtb*/1);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,neuland_subevent::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for neuland_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(neuland_tamex_subev)
template<typename __data_src_t>
void neuland_tamex_subev::__unpack(__data_src_t &__buffer)
{
  // UINT32 trigger_window
  // {
    //  0_10: ns_after_trigger;
    // 16_26: ns_before_trigger;
  // }
  READ_FROM_BUFFER_FULL(2427,uint32 ,trigger_window,trigger_window.u32);
  CHECK_UNNAMED_BITS_ZERO(2427,trigger_window.u32,0xf800f800);
  // tamex[0] = TAMEX_CHANNEL(sfp=0,card=0);
  UNPACK_DECL(2429,TAMEX_CHANNEL,tamex[0],/*sfp*/0,/*card*/0);
  // tamex[1] = TAMEX_CHANNEL(sfp=0,card=1);
  UNPACK_DECL(2430,TAMEX_CHANNEL,tamex[1],/*sfp*/0,/*card*/1);
  // tamex[2] = TAMEX_CHANNEL(sfp=0,card=2);
  UNPACK_DECL(2431,TAMEX_CHANNEL,tamex[2],/*sfp*/0,/*card*/2);
  // tamex[3] = TAMEX_CHANNEL(sfp=0,card=3);
  UNPACK_DECL(2432,TAMEX_CHANNEL,tamex[3],/*sfp*/0,/*card*/3);
  // tamex[4] = TAMEX_CHANNEL(sfp=0,card=4);
  UNPACK_DECL(2433,TAMEX_CHANNEL,tamex[4],/*sfp*/0,/*card*/4);
  // tamex[5] = TAMEX_CHANNEL(sfp=0,card=5);
  UNPACK_DECL(2434,TAMEX_CHANNEL,tamex[5],/*sfp*/0,/*card*/5);
  // tamex[6] = TAMEX_CHANNEL(sfp=0,card=6);
  UNPACK_DECL(2435,TAMEX_CHANNEL,tamex[6],/*sfp*/0,/*card*/6);
  // tamex[7] = TAMEX_CHANNEL(sfp=0,card=7);
  UNPACK_DECL(2436,TAMEX_CHANNEL,tamex[7],/*sfp*/0,/*card*/7);
  // tamex[8] = TAMEX_CHANNEL(sfp=0,card=8);
  UNPACK_DECL(2437,TAMEX_CHANNEL,tamex[8],/*sfp*/0,/*card*/8);
  // tamex[9] = TAMEX_CHANNEL(sfp=0,card=9);
  UNPACK_DECL(2438,TAMEX_CHANNEL,tamex[9],/*sfp*/0,/*card*/9);
  // tamex[10] = TAMEX_CHANNEL(sfp=0,card=10);
  UNPACK_DECL(2439,TAMEX_CHANNEL,tamex[10],/*sfp*/0,/*card*/10);
  // tamex[11] = TAMEX_CHANNEL(sfp=0,card=11);
  UNPACK_DECL(2440,TAMEX_CHANNEL,tamex[11],/*sfp*/0,/*card*/11);
  // tamex[12] = TAMEX_CHANNEL(sfp=0,card=12);
  UNPACK_DECL(2441,TAMEX_CHANNEL,tamex[12],/*sfp*/0,/*card*/12);
}
FORCE_IMPL_DATA_SRC_FCN(void,neuland_tamex_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for psp_febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(psp_febex_subev)
template<typename __data_src_t>
void psp_febex_subev::__unpack(__data_src_t &__buffer)
{
  // eh = FEBEX_EVENTHEADER();
  UNPACK_DECL(2406,FEBEX_EVENTHEADER,eh);
  // select several

    // febex1 = FEBEX_NOTRACE(sfp=1,card=0);
    // febex2 = FEBEX_NOTRACE(sfp=1,card=1);
    // febex3 = FEBEX_NOTRACE(sfp=1,card=2);
    // febex4 = FEBEX_NOTRACE(sfp=1,card=3);
    // febex5 = FEBEX_NOTRACE(sfp=1,card=4);
    // febex6 = FEBEX_NOTRACE(sfp=1,card=5);
    // febex7 = FEBEX_NOTRACE(sfp=1,card=6);
    // febex8 = FEBEX_NOTRACE(sfp=1,card=7);
    // febex9 = FEBEX_NOTRACE(sfp=1,card=8);
    // febex10 = FEBEX_NOTRACE(sfp=1,card=9);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FEBEX_NOTRACE febex1: (s32) => (0xfffff0ff,0xff001034)
    // optimized match 2: FEBEX_NOTRACE febex2: (s32) => (0xfffff0ff,0xff011034)
    // optimized match 3: FEBEX_NOTRACE febex3: (s32) => (0xfffff0ff,0xff021034)
    // optimized match 4: FEBEX_NOTRACE febex4: (s32) => (0xfffff0ff,0xff031034)
    // optimized match 5: FEBEX_NOTRACE febex5: (s32) => (0xfffff0ff,0xff041034)
    // optimized match 6: FEBEX_NOTRACE febex6: (s32) => (0xfffff0ff,0xff051034)
    // optimized match 7: FEBEX_NOTRACE febex7: (s32) => (0xfffff0ff,0xff061034)
    // optimized match 8: FEBEX_NOTRACE febex8: (s32) => (0xfffff0ff,0xff071034)
    // optimized match 9: FEBEX_NOTRACE febex9: (s32) => (0xfffff0ff,0xff081034)
    // optimized match 10: FEBEX_NOTRACE febex10: (s32) => (0xfffff0ff,0xff091034)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2419,uint32,__match_peek);
    // differ = 000f0000 : 16 17 18 19
    uint32 __match_index = 0 | /* 16,19 */ ((__match_peek >> 16) & 0x0000000f);
    static const sint8 __match_index_array[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0, 0, 0, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2409,FEBEX_NOTRACE,febex1,/*sfp*/1,/*card*/0);
        break;
      case 2:
        UNPACK_DECL(2410,FEBEX_NOTRACE,febex2,/*sfp*/1,/*card*/1);
        break;
      case 3:
        UNPACK_DECL(2411,FEBEX_NOTRACE,febex3,/*sfp*/1,/*card*/2);
        break;
      case 4:
        UNPACK_DECL(2412,FEBEX_NOTRACE,febex4,/*sfp*/1,/*card*/3);
        break;
      case 5:
        UNPACK_DECL(2413,FEBEX_NOTRACE,febex5,/*sfp*/1,/*card*/4);
        break;
      case 6:
        UNPACK_DECL(2414,FEBEX_NOTRACE,febex6,/*sfp*/1,/*card*/5);
        break;
      case 7:
        UNPACK_DECL(2415,FEBEX_NOTRACE,febex7,/*sfp*/1,/*card*/6);
        break;
      case 8:
        UNPACK_DECL(2416,FEBEX_NOTRACE,febex8,/*sfp*/1,/*card*/7);
        break;
      case 9:
        UNPACK_DECL(2417,FEBEX_NOTRACE,febex9,/*sfp*/1,/*card*/8);
        break;
      case 10:
        UNPACK_DECL(2418,FEBEX_NOTRACE,febex10,/*sfp*/1,/*card*/9);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,psp_febex_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for psp_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(psp_subev)
template<typename __data_src_t>
void psp_subev::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2481,LAND_STD_VME,land_vme);
  // tridi_ts = TRIDI();
  UNPACK_DECL(2482,TRIDI,tridi_ts);
  // select several

    // sis3316_3 = SIS3316_ACTAR_S438(id=3);
    // sis3316_4 = SIS3316_ACTAR_S438(id=4);
    // sis3316_5 = SIS3316_ACTAR_S438(id=5);
    // sis3316_6 = SIS3316_ACTAR_S438(id=6);
    // sis3316_7 = SIS3316_ACTAR_S438(id=7);
    // sis3316_8 = SIS3316_ACTAR_S438(id=8);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: SIS3316_ACTAR_S438 sis3316_3: (s32) => (0xffff00ff,0x33160003)
    // optimized match 2: SIS3316_ACTAR_S438 sis3316_4: (s32) => (0xffff00ff,0x33160004)
    // optimized match 3: SIS3316_ACTAR_S438 sis3316_5: (s32) => (0xffff00ff,0x33160005)
    // optimized match 4: SIS3316_ACTAR_S438 sis3316_6: (s32) => (0xffff00ff,0x33160006)
    // optimized match 5: SIS3316_ACTAR_S438 sis3316_7: (s32) => (0xffff00ff,0x33160007)
    // optimized match 6: SIS3316_ACTAR_S438 sis3316_8: (s32) => (0xffff00ff,0x33160008)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2490,uint32,__match_peek);
    // differ = 0000000f : 0 1 2 3
    uint32 __match_index = 0 | /* 0,3 */ ((__match_peek >> 0) & 0x0000000f);
    static const sint8 __match_index_array[16] = { 0, 0, 0, 1, 2, 3, 4, 5, 6, 0, 0, 0, 0, 0, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2484,SIS3316_ACTAR_S438,sis3316_3,/*id*/3);
        break;
      case 2:
        UNPACK_DECL(2485,SIS3316_ACTAR_S438,sis3316_4,/*id*/4);
        break;
      case 3:
        UNPACK_DECL(2486,SIS3316_ACTAR_S438,sis3316_5,/*id*/5);
        break;
      case 4:
        UNPACK_DECL(2487,SIS3316_ACTAR_S438,sis3316_6,/*id*/6);
        break;
      case 5:
        UNPACK_DECL(2488,SIS3316_ACTAR_S438,sis3316_7,/*id*/7);
        break;
      case 6:
        UNPACK_DECL(2489,SIS3316_ACTAR_S438,sis3316_8,/*id*/8);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,psp_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for sit_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sit_subev)
template<typename __data_src_t>
void sit_subev::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x200);
  UNPACK_DECL(2377,TIMESTAMP_WHITERABBIT,ts,/*id*/0x200);
  // select several

    // dummy = DUMMY_WORD();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: DUMMY_WORD dummy: (s32)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2380,uint32,__match_peek);
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
        UNPACK_DECL(2379,DUMMY_WORD,dummy);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,sit_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for tof13_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tof13_subev)
template<typename __data_src_t>
void tof13_subev::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2353,LAND_STD_VME,land_vme);
  // select several

    // vftx2_1 = VME_GSI_VFTX2(id=0);
    // vftx2_2 = VME_GSI_VFTX2(id=1);
    // vftx2_3 = VME_GSI_VFTX2(id=2);
    // vftx2_4 = VME_GSI_VFTX2(id=3);
    // v1290_1 = VME_CAEN_V1290_S438(geom=4);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_GSI_VFTX2 vftx2_1: (s32) => (0xfffc001f,0xab000000)
    // optimized match 2: VME_GSI_VFTX2 vftx2_2: (s32) => (0xfffc001f,0xab000001)
    // optimized match 3: VME_GSI_VFTX2 vftx2_3: (s32) => (0xfffc001f,0xab000002)
    // optimized match 4: VME_GSI_VFTX2 vftx2_4: (s32) => (0xfffc001f,0xab000003)
    // optimized match 5: VME_CAEN_V1290_S438 v1290_1: (s32) => (0xffffffff,0x4c000004)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2360,uint32,__match_peek);
    // differ = e7000007 : 0 1 2 24 25 26 29 30 31
    // select on bit 1, partition: 1:3(d2) 0:2(d3)
    if (__match_peek & 0x00000002) {
      MATCH_DECL_QUICK(2357,__match_no,3,vftx2_3,__match_peek,0xfffc001f,0xab000002);
      MATCH_DECL_QUICK(2358,__match_no,4,vftx2_4,__match_peek,0xfffc001f,0xab000003);
    } else {
      MATCH_DECL_QUICK(2355,__match_no,1,vftx2_1,__match_peek,0xfffc001f,0xab000000);
      MATCH_DECL_QUICK(2356,__match_no,2,vftx2_2,__match_peek,0xfffc001f,0xab000001);
      MATCH_DECL_QUICK(2359,__match_no,5,v1290_1,__match_peek,0xffffffff,0x4c000004);
    }
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2355,VME_GSI_VFTX2,vftx2_1,/*id*/0);
        break;
      case 2:
        UNPACK_DECL(2356,VME_GSI_VFTX2,vftx2_2,/*id*/1);
        break;
      case 3:
        UNPACK_DECL(2357,VME_GSI_VFTX2,vftx2_3,/*id*/2);
        break;
      case 4:
        UNPACK_DECL(2358,VME_GSI_VFTX2,vftx2_4,/*id*/3);
        break;
      case 5:
        UNPACK_DECL(2359,VME_CAEN_V1290_S438,v1290_1,/*geom*/4);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,tof13_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for tof13_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tof13_tamex_subev)
template<typename __data_src_t>
void tof13_tamex_subev::__unpack(__data_src_t &__buffer)
{
  // UINT32 trigger_window
  // {
    //  0_10: ns_after_trigger;
    // 16_26: ns_before_trigger;
  // }
  READ_FROM_BUFFER_FULL(2449,uint32 ,trigger_window,trigger_window.u32);
  CHECK_UNNAMED_BITS_ZERO(2449,trigger_window.u32,0xf800f800);
  // tamex[0] = TAMEX_CHANNEL(sfp=0,card=0);
  UNPACK_DECL(2451,TAMEX_CHANNEL,tamex[0],/*sfp*/0,/*card*/0);
  // tamex[1] = TAMEX_CHANNEL(sfp=0,card=1);
  UNPACK_DECL(2452,TAMEX_CHANNEL,tamex[1],/*sfp*/0,/*card*/1);
}
FORCE_IMPL_DATA_SRC_FCN(void,tof13_tamex_subev::__unpack);

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
  UNPACK_DECL(2309,TIMESTAMP_WHITERABBIT,ts100,/*id*/0x100);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_100::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for wr_300.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_300)
template<typename __data_src_t>
void wr_300::__unpack(__data_src_t &__buffer)
{
  // ts300 = TIMESTAMP_WHITERABBIT(id=0x300);
  UNPACK_DECL(2314,TIMESTAMP_WHITERABBIT,ts300,/*id*/0x300);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_300::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for wr_500.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_500)
template<typename __data_src_t>
void wr_500::__unpack(__data_src_t &__buffer)
{
  // ts500 = TIMESTAMP_WHITERABBIT(id=0x500);
  UNPACK_DECL(2319,TIMESTAMP_WHITERABBIT,ts500,/*id*/0x500);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_500::__unpack);

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
  // master_ts = wr_100(type=10,subtype=1,control=1,subcrate=0);
  // event_time = mark_event_time(type=88,subtype=0x2260,control=1,subcrate=0);
  // daq_status = daq_status_subev(type=89,subtype=0x22c4,control=1,
                                // subcrate=2);
  // tpat_and_co = LAND_CAMAC_CONVERTER(type=34,subtype=0xc80,control=1,
                                     // subcrate=2);
  // scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c,control=1,subcrate=2);
  // neuland_tacq = neuland_subevent(type=94,subtype=0x24b8,control=3,
                                  // subcrate=0);
  // los_psp = los_psp_subev(type=88,subtype=0x2260,control=9,subcrate=1);
  // los_scaler = los_scaler_subev(type=34,subtype=0xce4,control=9,subcrate=1);
  // tof13 = tof13_subev(type=88,subtype=0x2260,control=9,subcrate=2);
  // sit = sit_subev(type=104,subtype=0x28a0,control=37,subcrate=0);
  // tbm_ts = wr_300(type=10,subtype=1,control=5,subcrate=4);
  // fiber = fiber_subev(type=100,subtype=0x2710,control=9,subcrate=0);
  // psp_febex = psp_febex_subev(type=100,subtype=0x2710,control=9,subcrate=1);
  // neuland_tamex = neuland_tamex_subev(type=102,subtype=0x27d8,control=9,
                                      // subcrate=0);
  // tof13_tamex = tof13_tamex_subev(type=102,subtype=0x27d8,control=9,
                                  // subcrate=1);
  // mfi = mfi_subev(type=97,subtype=0x25e4,control=9,subcrate=0);
  // califa = califa_subev(type=100,subtype=0x2710,control=9,subcrate=2);
  // psp_ts = wr_500(type=10,subtype=1,control=5,subcrate=0);
  // psp_struck = psp_subev(type=88,subtype=0x2260,control=5,subcrate=3);
  // empty_1 = empty_subev(type=10,subtype=1,control=9,subcrate=1);
  // empty_2 = empty_subev(type=10,subtype=1,control=9,subcrate=2);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(2499,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==1)&&(VES10_1_subcrate==0)),master_ts);
  MATCH_SUBEVENT_DECL(2500,__match_no,2,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==1)&&(VES10_1_subcrate==0)),event_time);
  MATCH_SUBEVENT_DECL(2501,__match_no,3,((VES10_1_type==89)&&(VES10_1_subtype==0x22c4)&&(VES10_1_control==1)&&(VES10_1_subcrate==2)),daq_status);
  MATCH_SUBEVENT_DECL(2502,__match_no,4,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)&&(VES10_1_control==1)&&(VES10_1_subcrate==2)),tpat_and_co);
  MATCH_SUBEVENT_DECL(2503,__match_no,5,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)&&(VES10_1_control==1)&&(VES10_1_subcrate==2)),scalers);
  MATCH_SUBEVENT_DECL(2505,__match_no,6,((VES10_1_type==94)&&(VES10_1_subtype==0x24b8)&&(VES10_1_control==3)&&(VES10_1_subcrate==0)),neuland_tacq);
  MATCH_SUBEVENT_DECL(2506,__match_no,7,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==9)&&(VES10_1_subcrate==1)),los_psp);
  MATCH_SUBEVENT_DECL(2507,__match_no,8,((VES10_1_type==34)&&(VES10_1_subtype==0xce4)&&(VES10_1_control==9)&&(VES10_1_subcrate==1)),los_scaler);
  MATCH_SUBEVENT_DECL(2508,__match_no,9,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==9)&&(VES10_1_subcrate==2)),tof13);
  MATCH_SUBEVENT_DECL(2510,__match_no,10,((VES10_1_type==104)&&(VES10_1_subtype==0x28a0)&&(VES10_1_control==37)&&(VES10_1_subcrate==0)),sit);
  MATCH_SUBEVENT_DECL(2512,__match_no,11,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==5)&&(VES10_1_subcrate==4)),tbm_ts);
  MATCH_SUBEVENT_DECL(2513,__match_no,12,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==9)&&(VES10_1_subcrate==0)),fiber);
  MATCH_SUBEVENT_DECL(2514,__match_no,13,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==9)&&(VES10_1_subcrate==1)),psp_febex);
  MATCH_SUBEVENT_DECL(2515,__match_no,14,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==9)&&(VES10_1_subcrate==0)),neuland_tamex);
  MATCH_SUBEVENT_DECL(2516,__match_no,15,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==9)&&(VES10_1_subcrate==1)),tof13_tamex);
  MATCH_SUBEVENT_DECL(2517,__match_no,16,((VES10_1_type==97)&&(VES10_1_subtype==0x25e4)&&(VES10_1_control==9)&&(VES10_1_subcrate==0)),mfi);
  MATCH_SUBEVENT_DECL(2519,__match_no,17,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==9)&&(VES10_1_subcrate==2)),califa);
  MATCH_SUBEVENT_DECL(2521,__match_no,18,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==5)&&(VES10_1_subcrate==0)),psp_ts);
  MATCH_SUBEVENT_DECL(2522,__match_no,19,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)&&(VES10_1_subcrate==3)),psp_struck);
  MATCH_SUBEVENT_DECL(2525,__match_no,20,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==9)&&(VES10_1_subcrate==1)),empty_1);
  MATCH_SUBEVENT_DECL(2526,__match_no,21,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==9)&&(VES10_1_subcrate==2)),empty_2);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2499,wr_100,master_ts,0);
      UNPACK_SUBEVENT_DECL(2499,0,wr_100,master_ts);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2500,mark_event_time,event_time,1);
      UNPACK_SUBEVENT_DECL(2500,0,mark_event_time,event_time);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2501,daq_status_subev,daq_status,2);
      UNPACK_SUBEVENT_DECL(2501,0,daq_status_subev,daq_status);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2502,LAND_CAMAC_CONVERTER,tpat_and_co,3);
      UNPACK_SUBEVENT_DECL(2502,0,LAND_CAMAC_CONVERTER,tpat_and_co);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2503,LAND_CAMAC_SCALER,scalers,4);
      UNPACK_SUBEVENT_DECL(2503,0,LAND_CAMAC_SCALER,scalers);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2505,neuland_subevent,neuland_tacq,5);
      UNPACK_SUBEVENT_DECL(2505,0,neuland_subevent,neuland_tacq);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2506,los_psp_subev,los_psp,6);
      UNPACK_SUBEVENT_DECL(2506,0,los_psp_subev,los_psp);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2507,los_scaler_subev,los_scaler,7);
      UNPACK_SUBEVENT_DECL(2507,0,los_scaler_subev,los_scaler);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2508,tof13_subev,tof13,8);
      UNPACK_SUBEVENT_DECL(2508,0,tof13_subev,tof13);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2510,sit_subev,sit,9);
      UNPACK_SUBEVENT_DECL(2510,0,sit_subev,sit);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2512,wr_300,tbm_ts,10);
      UNPACK_SUBEVENT_DECL(2512,0,wr_300,tbm_ts);
      break;
    case 12:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2513,fiber_subev,fiber,11);
      UNPACK_SUBEVENT_DECL(2513,0,fiber_subev,fiber);
      break;
    case 13:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2514,psp_febex_subev,psp_febex,12);
      UNPACK_SUBEVENT_DECL(2514,0,psp_febex_subev,psp_febex);
      break;
    case 14:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2515,neuland_tamex_subev,neuland_tamex,13);
      UNPACK_SUBEVENT_DECL(2515,0,neuland_tamex_subev,neuland_tamex);
      break;
    case 15:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2516,tof13_tamex_subev,tof13_tamex,14);
      UNPACK_SUBEVENT_DECL(2516,0,tof13_tamex_subev,tof13_tamex);
      break;
    case 16:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2517,mfi_subev,mfi,15);
      UNPACK_SUBEVENT_DECL(2517,0,mfi_subev,mfi);
      break;
    case 17:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2519,califa_subev,califa,16);
      UNPACK_SUBEVENT_DECL(2519,0,califa_subev,califa);
      break;
    case 18:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2521,wr_500,psp_ts,17);
      UNPACK_SUBEVENT_DECL(2521,0,wr_500,psp_ts);
      break;
    case 19:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2522,psp_subev,psp_struck,18);
      UNPACK_SUBEVENT_DECL(2522,0,psp_subev,psp_struck);
      break;
    case 20:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2525,empty_subev,empty_1,19);
      UNPACK_SUBEVENT_DECL(2525,0,empty_subev,empty_1);
      break;
    case 21:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2526,empty_subev,empty_2,20);
      UNPACK_SUBEVENT_DECL(2526,0,empty_subev,empty_2);
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
