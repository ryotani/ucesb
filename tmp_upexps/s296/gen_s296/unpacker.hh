/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for CAMAC_LECROY_2277_1CH_HACK.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_LECROY_2277_1CH_HACK(channel,edge,high_byte)
template<typename __data_src_t>
void CAMAC_LECROY_2277_1CH_HACK::__unpack(__data_src_t &__buffer,uint32 channel
                                                                ,uint32 edge
                                                                ,uint32 high_byte)
{
  // MEMBER(DATA16 data[16] NO_INDEX_LIST);
  // UINT32 ch_data NOENCODE
  // {
    //  0_15: value;
    //    16: edge = CHECK(edge);
    // 17_21: channel = CHECK(channel);
    // 24_31: high = CHECK(high_byte);
    // ENCODE(data APPEND_LIST,(value=value));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 value : 16; // 0..15
      uint32 edge : 1; // 16
      uint32 channel : 5; // 17..21
      uint32 dummy_22_23 : 2;
      uint32 high : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 high : 8; // 24..31
      uint32 dummy_22_23 : 2;
      uint32 channel : 5; // 17..21
      uint32 edge : 1; // 16
      uint32 value : 16; // 0..15
#endif
    };
    uint32  u32;
  } ch_data;
  READ_FROM_BUFFER_FULL(1128,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_EQUAL(1123,ch_data.edge,edge);
  CHECK_BITS_EQUAL(1124,ch_data.channel,channel);
  CHECK_BITS_EQUAL(1125,ch_data.high,high_byte);
  CHECK_UNNAMED_BITS_ZERO(1128,ch_data.u32,0x00c00000);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.append_item(1127);
    __item.value = ch_data.value;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CAMAC_LECROY_2277_1CH_HACK::__unpack,uint32 channel
                                                                     ,uint32 edge
                                                                     ,uint32 high_byte);

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
 * Event unpacker for CROS3_REWRITE.
 *
 * Do not edit - automatically generated.
 */

// CROS3_REWRITE(ccb_id)
template<typename __data_src_t>
void CROS3_REWRITE::__unpack(__data_src_t &__buffer,uint32 ccb_id)
{
  // MEMBER(WIRE_START_END data[32768] ZERO_SUPPRESS);
  // UINT32 h1
  // {
    //  0_15: data_size;
    //    16: threshold_curve;
    //    17: leading_edge;
    //    18: data;
    // 20_23: trigger_time;
    // 24_27: ccb_id = MATCH(ccb_id);
    // 28_31: event_counter;
  // }
  READ_FROM_BUFFER_FULL(791,uint32 ,h1,h1.u32);
  CHECK_BITS_EQUAL(789,h1.ccb_id,ccb_id);
  CHECK_UNNAMED_BITS_ZERO(791,h1.u32,0x00080000);
  // if(h1.data)

  // else

  if (h1.data)
  {
    // UINT32 h2
    // {
      //  0_01: read_out_mode;
      //     4: pulser_enabled;
      //  8_10: statistics;
      //    11: both_edges;
      // 12_19: slices;
      // 20_21: scale;
      //    31: odd_length16;
    // }
    READ_FROM_BUFFER_FULL(806,uint32 ,h2,h2.u32);
    CHECK_UNNAMED_BITS_ZERO(806,h2.u32,0x7fc000ec);
    // if(h1.leading_edge)

    // else

    if (h1.leading_edge)
    {
      // list(0<=index<static_cast<uint32>((h1.data_size - h2.odd_length16)))

      for (uint32 index = 0; index < (uint32) (static_cast<uint32>((h1.data_size - h2.odd_length16))); ++index)
      {
        // UINT32 ch_data NOENCODE
        // {
          //  0_07: start_slice1;
          //  8_15: wire1;
          // 16_23: start_slice2;
          // 24_31: wire2;
          // ENCODE(data[(index * 2)],(wire=wire1,start=start_slice1,stop=0));
          // ENCODE(data[((index * 2) + 1)],(wire=wire2,start=start_slice2,
                                          // stop=0));
        // }
        union
        {
          struct
          {
#if __BYTE_ORDER == __LITTLE_ENDIAN
            uint32 start_slice1 : 8; // 0..7
            uint32 wire1 : 8; // 8..15
            uint32 start_slice2 : 8; // 16..23
            uint32 wire2 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
            uint32 wire2 : 8; // 24..31
            uint32 start_slice2 : 8; // 16..23
            uint32 wire1 : 8; // 8..15
            uint32 start_slice1 : 8; // 0..7
#endif
          };
          uint32  u32;
        } ch_data;
        READ_FROM_BUFFER_FULL(823,uint32 ,ch_data,ch_data.u32);
        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(821,(index * 2));
          __item.wire = ch_data.wire1;
          __item.start = ch_data.start_slice1;
          __item.stop = 0;
        }
        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(822,((index * 2) + 1));
          __item.wire = ch_data.wire2;
          __item.start = ch_data.start_slice2;
          __item.stop = 0;
        }
      }
      // if(h2.odd_length16)

      if (h2.odd_length16)
      {
        // UINT32 ch_data_odd NOENCODE
        // {
          //  0_07: start_slice1;
          //  8_15: wire1;
          // 16_23: start_slice2 = CHECK(255);
          // 24_31: wire2 = CHECK(0);
          // ENCODE(data[((h1.data_size - 1) * 2)],(wire=wire1,start=start_slice1,
                                                 // stop=0));
        // }
        union
        {
          struct
          {
#if __BYTE_ORDER == __LITTLE_ENDIAN
            uint32 start_slice1 : 8; // 0..7
            uint32 wire1 : 8; // 8..15
            uint32 start_slice2 : 8; // 16..23
            uint32 wire2 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
            uint32 wire2 : 8; // 24..31
            uint32 start_slice2 : 8; // 16..23
            uint32 wire1 : 8; // 8..15
            uint32 start_slice1 : 8; // 0..7
#endif
          };
          uint32  u32;
        } ch_data_odd;
        READ_FROM_BUFFER_FULL(838,uint32 ,ch_data_odd,ch_data_odd.u32);
        CHECK_BITS_EQUAL(834,ch_data_odd.start_slice2,255);
        CHECK_BITS_EQUAL(835,ch_data_odd.wire2,0);
        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(837,((h1.data_size - 1) * 2));
          __item.wire = ch_data_odd.wire1;
          __item.start = ch_data_odd.start_slice1;
          __item.stop = 0;
        }
      }
    }

    else
    {
      // list(0<=index<h1.data_size)

      for (uint32 index = 0; index < (uint32) (h1.data_size); ++index)
      {
        // UINT32 ch_data NOENCODE
        // {
          //  0_07: start_slice;
          //  8_15: wire;
          // 16_23: end_slice;
          // ENCODE(data[index],(wire=wire,start=start_slice,stop=end_slice));
        // }
        union
        {
          struct
          {
#if __BYTE_ORDER == __LITTLE_ENDIAN
            uint32 start_slice : 8; // 0..7
            uint32 wire : 8; // 8..15
            uint32 end_slice : 8; // 16..23
            uint32 dummy_24_31 : 8;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
            uint32 dummy_24_31 : 8;
            uint32 end_slice : 8; // 16..23
            uint32 wire : 8; // 8..15
            uint32 start_slice : 8; // 0..7
#endif
          };
          uint32  u32;
        } ch_data;
        READ_FROM_BUFFER_FULL(853,uint32 ,ch_data,ch_data.u32);
        CHECK_UNNAMED_BITS_ZERO(853,ch_data.u32,0xff000000);
        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(852,index);
          __item.wire = ch_data.wire;
          __item.start = ch_data.start_slice;
          __item.stop = ch_data.end_slice;
        }
      }
    }
  }

  else
  {
    // if(h1.threshold_curve)

    // else

    if (h1.threshold_curve)
    {
      // UINT32 trc_h2
      // {
        //  0_01: read_out_mode;
        //     4: pulser_enabled;
        //  8_10: statistics;
        //    11: both_edges;
        // 12_19: threshold_start;
        // 20_23: threshold_step;
        // 24_28: boards;
      // }
      READ_FROM_BUFFER_FULL(871,uint32 ,trc_h2,trc_h2.u32);
      CHECK_UNNAMED_BITS_ZERO(871,trc_h2.u32,0xe00000ec);
      // list(0<=board<trc_h2.boards)

      for (uint32 board = 0; board < (uint32) (trc_h2.boards); ++board)
      {
        // UINT32 trc_h3 NOENCODE
        // {
          //  0_07: test_pulser_even;
          //  8_15: test_pulser_odd;
          // 16_23: threshold_steps;
          // 28_31: ad_id;
        // }
        union
        {
          struct
          {
#if __BYTE_ORDER == __LITTLE_ENDIAN
            uint32 test_pulser_even : 8; // 0..7
            uint32 test_pulser_odd : 8; // 8..15
            uint32 threshold_steps : 8; // 16..23
            uint32 dummy_24_27 : 4;
            uint32 ad_id : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
            uint32 ad_id : 4; // 28..31
            uint32 dummy_24_27 : 4;
            uint32 threshold_steps : 8; // 16..23
            uint32 test_pulser_odd : 8; // 8..15
            uint32 test_pulser_even : 8; // 0..7
#endif
          };
          uint32  u32;
        } trc_h3;
        READ_FROM_BUFFER_FULL(883,uint32 ,trc_h3,trc_h3.u32);
        CHECK_UNNAMED_BITS_ZERO(883,trc_h3.u32,0x0f000000);
        // list(0<=index_thr<trc_h3.threshold_steps)

        for (uint32 index_thr = 0; index_thr < (uint32) (trc_h3.threshold_steps); ++index_thr)
        {
          // list(0<=index_wire2<8)

          for (uint32 index_wire2 = 0; index_wire2 < (uint32) (8); ++index_wire2)
          {
            // UINT32 ch_counts NOENCODE
            // {
              //  0_11: counts1;
              // 12_15: wire1;
              // 16_27: counts2;
              // 28_31: wire2;
            // }
            union
            {
              struct
              {
#if __BYTE_ORDER == __LITTLE_ENDIAN
                uint32 counts1 : 12; // 0..11
                uint32 wire1 : 4; // 12..15
                uint32 counts2 : 12; // 16..27
                uint32 wire2 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
                uint32 wire2 : 4; // 28..31
                uint32 counts2 : 12; // 16..27
                uint32 wire1 : 4; // 12..15
                uint32 counts1 : 12; // 0..11
#endif
              };
              uint32  u32;
            } ch_counts;
            READ_FROM_BUFFER_FULL(895,uint32 ,ch_counts,ch_counts.u32);
          }
        }
      }
    }

    else
    {
      // UINT32 dummy_h2 NOENCODE
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
      } dummy_h2;
      READ_FROM_BUFFER_FULL(905,uint32 ,dummy_h2,dummy_h2.u32);
      CHECK_BITS_EQUAL(904,dummy_h2.unnamed_0_31,0);
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CROS3_REWRITE::__unpack,uint32 ccb_id);

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
  READ_FROM_BUFFER(1313,uint32 ,dummy_word);
}
FORCE_IMPL_DATA_SRC_FCN(void,DUMMY_WORD::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EXT_CROS3.
 *
 * Do not edit - automatically generated.
 */


/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EXT_SST.
 *
 * Do not edit - automatically generated.
 */


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
  READ_FROM_BUFFER_FULL(1257,uint32 ,failure,failure.u32);
  CHECK_UNNAMED_BITS_ZERO(1257,failure.u32,0x003fff00);
  // if(failure.has_continous_event_counter)

  if (failure.has_continous_event_counter)
  {
    // UINT32 continous_event_counter;
    READ_FROM_BUFFER(1260,uint32 ,continous_event_counter);
  }
  // if(failure.has_time_stamp)

  if (failure.has_time_stamp)
  {
    // UINT32 time_stamp;
    READ_FROM_BUFFER(1264,uint32 ,time_stamp);
  }
  // if(failure.has_clock_counter_stamp)

  if (failure.has_clock_counter_stamp)
  {
    // UINT32 clock_counter_stamp;
    READ_FROM_BUFFER(1268,uint32 ,clock_counter_stamp);
  }
  // if(failure.has_update_qdc_iped_value)

  if (failure.has_update_qdc_iped_value)
  {
    // UINT32 iped;
    READ_FROM_BUFFER(1272,uint32 ,iped);
  }
  // if(failure.has_multi_event)

  if (failure.has_multi_event)
  {
    // UINT32 multi_events;
    READ_FROM_BUFFER(1276,uint32 ,multi_events);
  }
  // if(failure.has_multi_trlo_ii_counter0)

  if (failure.has_multi_trlo_ii_counter0)
  {
    // UINT32 multi_trlo_ii_counter0;
    READ_FROM_BUFFER(1280,uint32 ,multi_trlo_ii_counter0);
  }
  // if(failure.has_multi_scaler_counter0)

  if (failure.has_multi_scaler_counter0)
  {
    // UINT32 multi_scaler_counter0;
    READ_FROM_BUFFER(1284,uint32 ,multi_scaler_counter0);
  }
  // if(failure.has_multi_adctdc_counter0)

  if (failure.has_multi_adctdc_counter0)
  {
    // UINT32 multi_adctdc_counter0;
    READ_FROM_BUFFER(1288,uint32 ,multi_adctdc_counter0);
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
  READ_FROM_BUFFER(951,uint32 ,sec);
  // UINT32 frac;
  READ_FROM_BUFFER(952,uint32 ,frac);
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
  READ_FROM_BUFFER_FULL(963,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(962,header.id,id);
  CHECK_UNNAMED_BITS_ZERO(963,header.u32,0x00fe0000);
  // MARK_COUNT(start);
  void *__mark_start = __buffer._data;
  // UINT32 server_id;
  READ_FROM_BUFFER(967,uint32 ,server_id);
  // UINT32 sspp
  // {
    //  0_07: precision;
    //  8_15: poll;
    // 16_19: stratum;
    // 24_26: mode;
    // 27_29: version = CHECK(3);
    // 30_31: leap;
  // }
  READ_FROM_BUFFER_FULL(979,uint32 ,sspp,sspp.u32);
  CHECK_BITS_EQUAL(977,sspp.version,3);
  CHECK_UNNAMED_BITS_ZERO(979,sspp.u32,0x00f00000);
  // UINT32 root_dly
  // {
    //  0_15: frac;
    // 16_31: sec;
  // }
  READ_FROM_BUFFER_FULL(985,uint32 ,root_dly,root_dly.u32);
  // UINT32 root_disp
  // {
    //  0_15: frac;
    // 16_31: sec;
  // }
  READ_FROM_BUFFER_FULL(990,uint32 ,root_disp,root_disp.u32);
  // UINT32 refid;
  READ_FROM_BUFFER(991,uint32 ,refid);
  // reftime = NTP64_TIME();
  UNPACK_DECL(993,NTP64_TIME,reftime);
  // origtime = NTP64_TIME();
  UNPACK_DECL(994,NTP64_TIME,origtime);
  // rectime = NTP64_TIME();
  UNPACK_DECL(995,NTP64_TIME,rectime);
  // tmittime = NTP64_TIME();
  UNPACK_DECL(996,NTP64_TIME,tmittime);
  // rxtime = NTP64_TIME();
  UNPACK_DECL(999,NTP64_TIME,rxtime);
  // if(header.quick_burst)

  if (header.quick_burst)
  {
    // orig2time = NTP64_TIME();
    UNPACK_DECL(1003,NTP64_TIME,orig2time);
    // rec2time = NTP64_TIME();
    UNPACK_DECL(1004,NTP64_TIME,rec2time);
    // tmit2time = NTP64_TIME();
    UNPACK_DECL(1005,NTP64_TIME,tmit2time);
    // rx2time = NTP64_TIME();
    UNPACK_DECL(1006,NTP64_TIME,rx2time);
  }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_count,start,end,0,4)
  CHECK_WORD_COUNT(1011,header.word_count,start,end,0,4);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,NTP_MESSAGE::__unpack,uint32 id);

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
  READ_FROM_BUFFER(1019,uint32 ,soft_latches);
  // UINT32 hard_latches;
  READ_FROM_BUFFER(1020,uint32 ,hard_latches);
  // UINT32 clock_ticks;
  READ_FROM_BUFFER(1021,uint32 ,clock_ticks);
  // before = NTP64_TIME();
  UNPACK_DECL(1022,NTP64_TIME,before);
  // after = NTP64_TIME();
  UNPACK_DECL(1023,NTP64_TIME,after);
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
  READ_FROM_BUFFER_FULL(1040,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1039,header.id,id);
  CHECK_UNNAMED_BITS_ZERO(1040,header.u32,0x00f00000);
  // MARK_COUNT(start);
  void *__mark_start = __buffer._data;
  // if(header.has_tstamp1)

  if (header.has_tstamp1)
  {
    // tstamp1 = RANDOM_TCAL_TSTAMP_CLOCK();
    UNPACK_DECL(1046,RANDOM_TCAL_TSTAMP_CLOCK,tstamp1);
  }
  // if(header.has_tstamp2)

  if (header.has_tstamp2)
  {
    // tstamp2 = RANDOM_TCAL_TSTAMP_CLOCK();
    UNPACK_DECL(1050,RANDOM_TCAL_TSTAMP_CLOCK,tstamp2);
  }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_count,start,end,0,4)
  CHECK_WORD_COUNT(1055,header.word_count,start,end,0,4);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,RANDOM_TCAL::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SIDEREM_BLOCK.
 *
 * Do not edit - automatically generated.
 */

// SIDEREM_BLOCK(sam,gtb,siderem)
template<typename __data_src_t>
void SIDEREM_BLOCK::__unpack(__data_src_t &__buffer,uint32 sam,uint32 gtb
                                                   ,uint32 siderem)
{
  // MEMBER(DATA12 data[4][512] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_11: count;
    // 12_15: local_event_counter;
    // 16_19: local_trigger;
    // 20_23: siderem = MATCH(siderem);
    // 24_27: gtb = MATCH(gtb);
    // 28_31: sam = MATCH(sam);
  // }
  READ_FROM_BUFFER_FULL(724,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(721,header.siderem,siderem);
  CHECK_BITS_EQUAL(722,header.gtb,gtb);
  CHECK_BITS_EQUAL(723,header.sam,sam);
  // list(0<=index<header.count)

  for (uint32 index = 0; index < (uint32) (header.count); ++index)
  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_11: value;
      // 12_13: adc_no;
      // 16_24: channel;
      // 28_31: 15;
      // ENCODE(data[adc_no][channel],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 12; // 0..11
        uint32 adc_no : 2; // 12..13
        uint32 dummy_14_15 : 2;
        uint32 channel : 9; // 16..24
        uint32 dummy_25_27 : 3;
        uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_28_31 : 4; // 28..31
        uint32 dummy_25_27 : 3;
        uint32 channel : 9; // 16..24
        uint32 dummy_14_15 : 2;
        uint32 adc_no : 2; // 12..13
        uint32 value : 12; // 0..11
#endif
      };
      uint32  u32;
    } ch_data;
    READ_FROM_BUFFER_FULL(737,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(734,ch_data.unnamed_28_31,15);
    CHECK_UNNAMED_BITS_ZERO(737,ch_data.u32,0x0e00c000);
    {
      typedef __typeof__(*(&(data[ch_data.adc_no]))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data[ch_data.adc_no].insert_index(736,ch_data.channel);
      __item.value = ch_data.value;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,SIDEREM_BLOCK::__unpack,uint32 sam,uint32 gtb
                                                        ,uint32 siderem);

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
    READ_FROM_BUFFER_FULL(1084,uint32 ,ch_data,ch_data.u32);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(1083,index);
      __item.value = ch_data.value;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,SOFT_SCALER32::__unpack,uint32 channels);

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
  if (__buffer.empty()) goto data_done_0;
  PEEK_FROM_BUFFER_FULL(453,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(438,ch_data.tdc,tdc,data_done_0);
  CHECK_JUMP_BITS_EQUAL(443,ch_data.unnamed_27_31,0,data_done_0);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(451,((ch_data.tdc << 5) | ch_data.channel_low));
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
  PEEK_FROM_BUFFER_FULL(461,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(459,__error_flags.tdc,tdc,data_done_1);
  CHECK_JUMP_BITS_EQUAL(460,__error_flags.unnamed_27_31,4,data_done_1);
  CHECK_JUMP_UNNAMED_BITS_ZERO(461,__error_flags.u32,0x04ff8000,data_done_1);
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
        CHECK_SPURIOUS_MATCH_DECL(580,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(580,VME_CAEN_V1190_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(581,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(581,VME_CAEN_V1190_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(582,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(582,VME_CAEN_V1190_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(583,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(583,VME_CAEN_V1190_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(585,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(585,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],__visited1,0);
        UNPACK_DECL(585,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(586,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(586,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],__visited1,1);
        UNPACK_DECL(586,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(587,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(587,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],__visited1,2);
        UNPACK_DECL(587,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(588,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(588,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],__visited1,3);
        UNPACK_DECL(588,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_1:;
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
  if (__buffer.empty()) goto data_done_2;
  PEEK_FROM_BUFFER_FULL(248,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(228,ch_data.tdc,tdc,data_done_2);
  CHECK_JUMP_BITS_EQUAL(238,ch_data.unnamed_27_31,0,data_done_2);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(242,((ch_data.tdc << 3) | ch_data.channel_low));
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
  PEEK_FROM_BUFFER_FULL(256,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(254,__error_flags.tdc,tdc,data_done_3);
  CHECK_JUMP_BITS_EQUAL(255,__error_flags.unnamed_27_31,4,data_done_3);
  CHECK_JUMP_UNNAMED_BITS_ZERO(256,__error_flags.u32,0x04ff8000,data_done_3);
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
        CHECK_SPURIOUS_MATCH_DECL(286,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(286,VME_CAEN_V1290_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(287,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(287,VME_CAEN_V1290_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(288,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(288,VME_CAEN_V1290_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(289,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(289,VME_CAEN_V1290_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_2:;
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
        CHECK_SPURIOUS_MATCH_DECL(375,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(375,VME_CAEN_V1290_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(376,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(376,VME_CAEN_V1290_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(377,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(377,VME_CAEN_V1290_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(378,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(378,VME_CAEN_V1290_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(380,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(380,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],__visited2,0);
        UNPACK_DECL(380,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(381,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(381,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],__visited2,1);
        UNPACK_DECL(381,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(382,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(382,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],__visited2,2);
        UNPACK_DECL(382,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(383,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(383,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],__visited2,3);
        UNPACK_DECL(383,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_3:;
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
  if (__buffer.empty()) goto data_done_4;
  PEEK_FROM_BUFFER_FULL(638,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(634,ch_data.unnamed_21_29,32,data_done_4);
  CHECK_JUMP_BITS_EQUAL(635,ch_data.unnamed_30_31,0,data_done_4);
  CHECK_JUMP_UNNAMED_BITS_ZERO(638,ch_data.u32,0x0000a000,data_done_4);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(637,ch_data.channel);
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
  PEEK_FROM_BUFFER_FULL(644,uint32 ,filler,filler.u32);
  CHECK_JUMP_BITS_EQUAL(643,filler.unnamed_0_31,0,data_done_5);
  __buffer.advance(sizeof(filler.u32));
  data_done_5:;
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
  if (__buffer.empty()) goto data_done_6;
  PEEK_FROM_BUFFER_FULL(683,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(679,ch_data.unnamed_24_27,0,data_done_6);
  CHECK_JUMP_BITS_EQUAL(680,ch_data.unnamed_28_31,1,data_done_6);
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
  PEEK_FROM_BUFFER_FULL(688,uint32 ,fill_word,fill_word.u32);
  CHECK_JUMP_BITS_EQUAL(687,fill_word.unnamed_0_31,0,data_done_7);
  __buffer.advance(sizeof(fill_word.u32));
  }
  data_done_7:;
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
 * Event unpacker for CROS3_REWRITE_SUBEVENT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CROS3_REWRITE_SUBEVENT)
template<typename __data_src_t>
void CROS3_REWRITE_SUBEVENT::__unpack(__data_src_t &__buffer)
{
  // select several

    // norevisit ccb[0] = CROS3_REWRITE(ccb_id=1);
    // norevisit ccb[1] = CROS3_REWRITE(ccb_id=2);
  bitsone<2> __visited3;
  __visited3.clear();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: CROS3_REWRITE ccb[0]: (s32) => (0x0f080000,0x01000000)
    // optimized match 2: CROS3_REWRITE ccb[1]: (s32) => (0x0f080000,0x02000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(917,uint32,__match_peek);
    // differ = 03000000 : 24 25
    uint32 __match_index = 0 | /* 24,25 */ ((__match_peek >> 24) & 0x00000003);
    static const sint8 __match_index_array[4] = { 0, 1, 2, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_CHECK_NO_REVISIT(915,CROS3_REWRITE,ccb[0],__visited3,0);
        UNPACK_DECL(915,CROS3_REWRITE,ccb[0],/*ccb_id*/1);
        break;
      case 2:
        UNPACK_CHECK_NO_REVISIT(916,CROS3_REWRITE,ccb[1],__visited3,1);
        UNPACK_DECL(916,CROS3_REWRITE,ccb[1],/*ccb_id*/2);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,CROS3_REWRITE_SUBEVENT::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for CROS3_SUBEVENT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CROS3_SUBEVENT)
template<typename __data_src_t>
void CROS3_SUBEVENT::__unpack(__data_src_t &__buffer)
{
  // select several

    // external norevisit ccb[0] = EXT_CROS3(ccb_id=1);
    // external norevisit ccb[1] = EXT_CROS3(ccb_id=2);
  bitsone<2> __visited4;
  __visited4.clear();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: EXT_CROS3 ccb[0]: could not get bits
    __buffer.peeking();
    MATCH_DECL(769,__match_no,1,EXT_CROS3,ccb[0],/*ccb_id*/1);
    MATCH_DECL(770,__match_no,2,EXT_CROS3,ccb[1],/*ccb_id*/2);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_CHECK_NO_REVISIT(769,EXT_CROS3,ccb[0],__visited4,0);
        UNPACK_DECL(769,EXT_CROS3,ccb[0],/*ccb_id*/1);
        break;
      case 2:
        UNPACK_CHECK_NO_REVISIT(770,EXT_CROS3,ccb[1],__visited4,1);
        UNPACK_DECL(770,EXT_CROS3,ccb[1],/*ccb_id*/2);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,CROS3_SUBEVENT::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for DUMMY.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(DUMMY)
template<typename __data_src_t>
void DUMMY::__unpack(__data_src_t &__buffer)
{
  // select several

    // d = DUMMY_WORD();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: DUMMY_WORD d: (s32)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1321,uint32,__match_peek);
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
        UNPACK_DECL(1320,DUMMY_WORD,d);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,DUMMY::__unpack);

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
  READ_FROM_BUFFER(925,uint16 ,tpat);
  // UINT16 tprev;
  READ_FROM_BUFFER(926,uint16 ,tprev);
  // UINT16 tnext;
  READ_FROM_BUFFER(927,uint16 ,tnext);
  // UINT16 tprev2;
  READ_FROM_BUFFER(928,uint16 ,tprev2);
  // if(EXTERNAL has_data)

  if (has_data())
  {
    // aPHI14829 = CAMAC_PHILLIPS_7164(channels=16,mark_channel_no=1);
    UNPACK_DECL(935,CAMAC_PHILLIPS_7164,aPHI14829,/*channels*/16,/*mark_channel_no*/1);
    // qSIA0429 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    UNPACK_DECL(936,CAMAC_SILENA_4418,qSIA0429,/*channels*/8,/*mark_channel_no*/0);
    // qSIA0480 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    UNPACK_DECL(937,CAMAC_SILENA_4418,qSIA0480,/*channels*/8,/*mark_channel_no*/0);
    // tSIA0400 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    UNPACK_DECL(938,CAMAC_SILENA_4418,tSIA0400,/*channels*/8,/*mark_channel_no*/0);
    // tC_FRS120 = CAMAC_SILENA_4418(channels=6,mark_channel_no=0);
    UNPACK_DECL(939,CAMAC_SILENA_4418,tC_FRS120,/*channels*/6,/*mark_channel_no*/0);
    // tSIA0426 = CAMAC_SILENA_4418(channels=4,mark_channel_no=0);
    UNPACK_DECL(940,CAMAC_SILENA_4418,tSIA0426,/*channels*/4,/*mark_channel_no*/0);
    // qSIA0458 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    UNPACK_DECL(941,CAMAC_SILENA_4418,qSIA0458,/*channels*/8,/*mark_channel_no*/0);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_CONVERTER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for LAND_CAMAC_PILEUP.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_PILEUP)
template<typename __data_src_t>
void LAND_CAMAC_PILEUP::__unpack(__data_src_t &__buffer)
{
  // select several

    // tdc = CAMAC_LECROY_2277_1CH_HACK(channel=0,edge=1,high_byte=0);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: CAMAC_LECROY_2277_1CH_HACK tdc: (s32) => (0xffff0000,0x00010000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1141,uint32,__match_peek);
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
        UNPACK_DECL(1137,CAMAC_LECROY_2277_1CH_HACK,tdc,/*channel*/0,/*edge*/1,/*high_byte*/0);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_PILEUP::__unpack);

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
  UNPACK_DECL(1090,CAMAC_LECROY_4434,scaler0,/*channels*/32);
  // scaler1 = CAMAC_LECROY_4434(channels=32);
  UNPACK_DECL(1091,CAMAC_LECROY_4434,scaler1,/*channels*/32);
  // scaler2 = CAMAC_LECROY_4434(channels=32);
  UNPACK_DECL(1092,CAMAC_LECROY_4434,scaler2,/*channels*/32);
  // scaler3 = SOFT_SCALER32(channels=16);
  UNPACK_DECL(1094,SOFT_SCALER32,scaler3,/*channels*/16);
  // if(EXTERNAL has_timestamp)

  if (has_timestamp())
  {
    // UINT32 timestamp;
    READ_FROM_BUFFER(1101,uint32 ,timestamp);
    // UINT32 endianess
    // {
      //  0_31: 0x87654321;
    // }
    READ_FROM_BUFFER_FULL(1102,uint32 ,endianess,endianess.u32);
    CHECK_BITS_EQUAL(1102,endianess.unnamed_0_31,0x87654321);
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
  READ_FROM_BUFFER(1108,uint32 ,timestamp);
  // UINT32 endianess
  // {
    //  0_31: 0x87654321;
  // }
  READ_FROM_BUFFER_FULL(1109,uint32 ,endianess,endianess.u32);
  CHECK_BITS_EQUAL(1109,endianess.unnamed_0_31,0x87654321);
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
  READ_FROM_BUFFER(1061,uint32 ,info);
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
    PEEK_FROM_BUFFER(1067,uint32,__match_peek);
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
        UNPACK_DECL(1065,RANDOM_TCAL,rtcal,/*id*/231);
        break;
      case 2:
        UNPACK_DECL(1066,NTP_MESSAGE,ntp,/*id*/239);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_TCAL_INFO::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for LAND_FASTBUS1.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_FASTBUS1)
template<typename __data_src_t>
void LAND_FASTBUS1::__unpack(__data_src_t &__buffer)
{
  // select several

    // Q47342 = FASTBUS_LECROY_1885(geom=7,channels=96);
    // Q11111 = FASTBUS_LECROY_1885(geom=8,channels=96);
    // Q46848 = FASTBUS_LECROY_1885(geom=10,channels=96);
    // Q47315 = FASTBUS_LECROY_1885(geom=11,channels=96);
    // Q17320 = FASTBUS_LECROY_1885(geom=13,channels=96);
    // Q15372 = FASTBUS_LECROY_1885(geom=15,channels=96);
    // Q46962 = FASTBUS_LECROY_1885(geom=16,channels=96);
    // Q46993 = FASTBUS_LECROY_1885(geom=18,channels=96);
    // Q15358 = FASTBUS_LECROY_1885(geom=20,channels=96);
    // Q47264 = FASTBUS_LECROY_1885(geom=23,channels=96);
    // T81855 = FASTBUS_LECROY_1875(geom=3,channels=64);
    // T87044 = FASTBUS_LECROY_1875(geom=4,channels=64);
    // T87024 = FASTBUS_LECROY_1875(geom=5,channels=64);
    // T81800 = FASTBUS_LECROY_1875(geom=6,channels=64);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FASTBUS_LECROY_1885 Q47342: (s32) => (0xff00f000,0x38000000)
    // optimized match 2: FASTBUS_LECROY_1885 Q11111: (s32) => (0xff00f000,0x40000000)
    // optimized match 3: FASTBUS_LECROY_1885 Q46848: (s32) => (0xff00f000,0x50000000)
    // optimized match 4: FASTBUS_LECROY_1885 Q47315: (s32) => (0xff00f000,0x58000000)
    // optimized match 5: FASTBUS_LECROY_1885 Q17320: (s32) => (0xff00f000,0x68000000)
    // optimized match 6: FASTBUS_LECROY_1885 Q15372: (s32) => (0xff00f000,0x78000000)
    // optimized match 7: FASTBUS_LECROY_1885 Q46962: (s32) => (0xff00f000,0x80000000)
    // optimized match 8: FASTBUS_LECROY_1885 Q46993: (s32) => (0xff00f000,0x90000000)
    // optimized match 9: FASTBUS_LECROY_1885 Q15358: (s32) => (0xff00f000,0xa0000000)
    // optimized match 10: FASTBUS_LECROY_1885 Q47264: (s32) => (0xff00f000,0xb8000000)
    // optimized match 11: FASTBUS_LECROY_1875 T81855: (s32) => (0xff40f000,0x18000000)
    // optimized match 12: FASTBUS_LECROY_1875 T87044: (s32) => (0xff40f000,0x20000000)
    // optimized match 13: FASTBUS_LECROY_1875 T87024: (s32) => (0xff40f000,0x28000000)
    // optimized match 14: FASTBUS_LECROY_1875 T81800: (s32) => (0xff40f000,0x30000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1205,uint32,__match_peek);
    // differ = f8000000 : 27 28 29 30 31
    uint32 __match_index = 0 | /* 27,31 */ ((__match_peek >> 27) & 0x0000001f);
    static const sint8 __match_index_array[32] = { 0, 0, 0, 11, 12, 13, 14, 1, 2, 0, 3, 4, 0, 5, 0, 6, 7, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(1190,FASTBUS_LECROY_1885,Q47342,/*geom*/7,/*channels*/96);
        break;
      case 2:
        UNPACK_DECL(1191,FASTBUS_LECROY_1885,Q11111,/*geom*/8,/*channels*/96);
        break;
      case 3:
        UNPACK_DECL(1192,FASTBUS_LECROY_1885,Q46848,/*geom*/10,/*channels*/96);
        break;
      case 4:
        UNPACK_DECL(1193,FASTBUS_LECROY_1885,Q47315,/*geom*/11,/*channels*/96);
        break;
      case 5:
        UNPACK_DECL(1194,FASTBUS_LECROY_1885,Q17320,/*geom*/13,/*channels*/96);
        break;
      case 6:
        UNPACK_DECL(1195,FASTBUS_LECROY_1885,Q15372,/*geom*/15,/*channels*/96);
        break;
      case 7:
        UNPACK_DECL(1196,FASTBUS_LECROY_1885,Q46962,/*geom*/16,/*channels*/96);
        break;
      case 8:
        UNPACK_DECL(1197,FASTBUS_LECROY_1885,Q46993,/*geom*/18,/*channels*/96);
        break;
      case 9:
        UNPACK_DECL(1198,FASTBUS_LECROY_1885,Q15358,/*geom*/20,/*channels*/96);
        break;
      case 10:
        UNPACK_DECL(1199,FASTBUS_LECROY_1885,Q47264,/*geom*/23,/*channels*/96);
        break;
      case 11:
        UNPACK_DECL(1200,FASTBUS_LECROY_1875,T81855,/*geom*/3,/*channels*/64);
        break;
      case 12:
        UNPACK_DECL(1201,FASTBUS_LECROY_1875,T87044,/*geom*/4,/*channels*/64);
        break;
      case 13:
        UNPACK_DECL(1202,FASTBUS_LECROY_1875,T87024,/*geom*/5,/*channels*/64);
        break;
      case 14:
        UNPACK_DECL(1203,FASTBUS_LECROY_1875,T81800,/*geom*/6,/*channels*/64);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_FASTBUS1::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for LAND_FASTBUS2.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_FASTBUS2)
template<typename __data_src_t>
void LAND_FASTBUS2::__unpack(__data_src_t &__buffer)
{
  // select several

    // Q75266 = FASTBUS_LECROY_1885(geom=17,channels=96);
    // T87047 = FASTBUS_LECROY_1875(geom=1,channels=64);
    // T48854 = FASTBUS_LECROY_1875(geom=2,channels=64);
    // T81808 = FASTBUS_LECROY_1875(geom=3,channels=64);
    // T81859 = FASTBUS_LECROY_1875(geom=4,channels=64);
    // T81795 = FASTBUS_LECROY_1875(geom=5,channels=64);
    // T81806 = FASTBUS_LECROY_1875(geom=6,channels=64);
    // T48834 = FASTBUS_LECROY_1875(geom=7,channels=64);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FASTBUS_LECROY_1885 Q75266: (s32) => (0xff00f000,0x88000000)
    // optimized match 2: FASTBUS_LECROY_1875 T87047: (s32) => (0xff40f000,0x08000000)
    // optimized match 3: FASTBUS_LECROY_1875 T48854: (s32) => (0xff40f000,0x10000000)
    // optimized match 4: FASTBUS_LECROY_1875 T81808: (s32) => (0xff40f000,0x18000000)
    // optimized match 5: FASTBUS_LECROY_1875 T81859: (s32) => (0xff40f000,0x20000000)
    // optimized match 6: FASTBUS_LECROY_1875 T81795: (s32) => (0xff40f000,0x28000000)
    // optimized match 7: FASTBUS_LECROY_1875 T81806: (s32) => (0xff40f000,0x30000000)
    // optimized match 8: FASTBUS_LECROY_1875 T48834: (s32) => (0xff40f000,0x38000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1227,uint32,__match_peek);
    // differ = b8000000 : 27 28 29 31
    uint32 __match_index = 0 | /* 27,29 */ ((__match_peek >> 27) & 0x00000007) | /* 31,31 */ ((__match_peek >> 28) & 0x00000008);
    static const sint8 __match_index_array[16] = { 0, 2, 3, 4, 5, 6, 7, 8, 0, 1, 0, 0, 0, 0, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(1218,FASTBUS_LECROY_1885,Q75266,/*geom*/17,/*channels*/96);
        break;
      case 2:
        UNPACK_DECL(1219,FASTBUS_LECROY_1875,T87047,/*geom*/1,/*channels*/64);
        break;
      case 3:
        UNPACK_DECL(1220,FASTBUS_LECROY_1875,T48854,/*geom*/2,/*channels*/64);
        break;
      case 4:
        UNPACK_DECL(1221,FASTBUS_LECROY_1875,T81808,/*geom*/3,/*channels*/64);
        break;
      case 5:
        UNPACK_DECL(1222,FASTBUS_LECROY_1875,T81859,/*geom*/4,/*channels*/64);
        break;
      case 6:
        UNPACK_DECL(1223,FASTBUS_LECROY_1875,T81795,/*geom*/5,/*channels*/64);
        break;
      case 7:
        UNPACK_DECL(1224,FASTBUS_LECROY_1875,T81806,/*geom*/6,/*channels*/64);
        break;
      case 8:
        UNPACK_DECL(1225,FASTBUS_LECROY_1875,T48834,/*geom*/7,/*channels*/64);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_FASTBUS2::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for LAND_FASTBUS_ERROR.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_FASTBUS_ERROR)
template<typename __data_src_t>
void LAND_FASTBUS_ERROR::__unpack(__data_src_t &__buffer)
{
  // UINT32 error_code
  // {
    //     0: timeout_waiting_smi;
    //     1: illegal_block_transfer;
    //     2: fifa_address_overflow;
    //     3: fifa_register_error;
    //    16: init_error;
  // }
  READ_FROM_BUFFER_FULL(1156,uint32 ,error_code,error_code.u32);
  CHECK_UNNAMED_BITS_ZERO(1156,error_code.u32,0xfffefff0);
  // UINT32 error_num;
  READ_FROM_BUFFER(1157,uint32 ,error_num);
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_FASTBUS_ERROR::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for LAND_FASTBUS_ERROR_NGF.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_FASTBUS_ERROR_NGF)
template<typename __data_src_t>
void LAND_FASTBUS_ERROR_NGF::__unpack(__data_src_t &__buffer)
{
  // UINT32 magic
  // {
    //  0_31: 0x10000000;
  // }
  READ_FROM_BUFFER_FULL(1165,uint32 ,magic,magic.u32);
  CHECK_BITS_EQUAL(1164,magic.unnamed_0_31,0x10000000);
  // UINT32 error_code
  // {
    //     0: error;
    //     1: uninitialized;
    //     2: ss1;
    //     3: wc;
    //     4: mid;
    //     5: fifo_empty;
    //     6: fifo_not_empty;
    //     7: not_finished;
    //     8: bad_end_addr;
    //     9: word_lost;
  // }
  READ_FROM_BUFFER_FULL(1178,uint32 ,error_code,error_code.u32);
  CHECK_UNNAMED_BITS_ZERO(1178,error_code.u32,0xfffffc00);
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_FASTBUS_ERROR_NGF::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for LAND_VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_VME)
template<typename __data_src_t>
void LAND_VME::__unpack(__data_src_t &__buffer)
{
  // vme = LAND_STD_VME();
  UNPACK_DECL(1295,LAND_STD_VME,vme);
  // select several

    // tCAEN0614 = VME_CAEN_V775(geom=16,crate=130);
    // qCAEN0472 = VME_CAEN_V775(geom=0,crate=1);
    // scaler[0] = VME_CAEN_V830(geom=30);
    // scaler[1] = VME_CAEN_V830(geom=31);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_CAEN_V775 tCAEN0614: (s32) => (0xffffc0ff,0x82820000)
    // optimized match 2: VME_CAEN_V775 qCAEN0472: (s32) => (0xffffc0ff,0x02010000)
    // optimized match 3: VME_CAEN_V830 scaler[0]: (s32) => (0xff000000,0xf4000000)
    // optimized match 4: VME_CAEN_V830 scaler[1]: (s32) => (0xff000000,0xfc000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1305,uint32,__match_peek);
    // differ = fe830000 : 16 17 23 25 26 27 28 29 30 31
    // select on bit 30, partition: 1:2(d2) 0:2(d2)
    if (__match_peek & 0x40000000) {
      MATCH_DECL_QUICK(1303,__match_no,3,scaler[0],__match_peek,0xff000000,0xf4000000);
      MATCH_DECL_QUICK(1304,__match_no,4,scaler[1],__match_peek,0xff000000,0xfc000000);
    } else {
      MATCH_DECL_QUICK(1300,__match_no,1,tCAEN0614,__match_peek,0xffffc0ff,0x82820000);
      MATCH_DECL_QUICK(1302,__match_no,2,qCAEN0472,__match_peek,0xffffc0ff,0x02010000);
    }
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(1300,VME_CAEN_V775,tCAEN0614,/*geom*/16,/*crate*/130);
        break;
      case 2:
        UNPACK_DECL(1302,VME_CAEN_V775,qCAEN0472,/*geom*/0,/*crate*/1);
        break;
      case 3:
        UNPACK_DECL(1303,VME_CAEN_V830,scaler[0],/*geom*/30);
        break;
      case 4:
        UNPACK_DECL(1304,VME_CAEN_V830,scaler[1],/*geom*/31);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_VME::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SIDEREM01_VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(SIDEREM01_VME)
template<typename __data_src_t>
void SIDEREM01_VME::__unpack(__data_src_t &__buffer)
{
  // select several

    // external sst[0] = EXT_SST(siderem=1,gtb=0,sam=5,branch=0);
    // external sst[1] = EXT_SST(siderem=2,gtb=0,sam=5,branch=0);
    // external sst[2] = EXT_SST(siderem=1,gtb=1,sam=5,branch=0);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: EXT_SST sst[0]: could not get bits
    __buffer.peeking();
    MATCH_DECL(745,__match_no,1,EXT_SST,sst[0],/*sam*/5,/*gtb*/0,/*siderem*/1,/*branch*/0);
    MATCH_DECL(746,__match_no,2,EXT_SST,sst[1],/*sam*/5,/*gtb*/0,/*siderem*/2,/*branch*/0);
    MATCH_DECL(747,__match_no,3,EXT_SST,sst[2],/*sam*/5,/*gtb*/1,/*siderem*/1,/*branch*/0);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(745,EXT_SST,sst[0],/*sam*/5,/*gtb*/0,/*siderem*/1,/*branch*/0);
        break;
      case 2:
        UNPACK_DECL(746,EXT_SST,sst[1],/*sam*/5,/*gtb*/0,/*siderem*/2,/*branch*/0);
        break;
      case 3:
        UNPACK_DECL(747,EXT_SST,sst[2],/*sam*/5,/*gtb*/1,/*siderem*/1,/*branch*/0);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,SIDEREM01_VME::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SIDEREM02_VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(SIDEREM02_VME)
template<typename __data_src_t>
void SIDEREM02_VME::__unpack(__data_src_t &__buffer)
{
  // select several

    // external sst[0] = EXT_SST(siderem=1,gtb=0,sam=5,branch=1);
    // external sst[1] = EXT_SST(siderem=1,gtb=1,sam=5,branch=1);
    // external sst[2] = EXT_SST(siderem=2,gtb=1,sam=5,branch=1);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: EXT_SST sst[0]: could not get bits
    __buffer.peeking();
    MATCH_DECL(755,__match_no,1,EXT_SST,sst[0],/*sam*/5,/*gtb*/0,/*siderem*/1,/*branch*/1);
    MATCH_DECL(756,__match_no,2,EXT_SST,sst[1],/*sam*/5,/*gtb*/1,/*siderem*/1,/*branch*/1);
    MATCH_DECL(757,__match_no,3,EXT_SST,sst[2],/*sam*/5,/*gtb*/1,/*siderem*/2,/*branch*/1);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(755,EXT_SST,sst[0],/*sam*/5,/*gtb*/0,/*siderem*/1,/*branch*/1);
        break;
      case 2:
        UNPACK_DECL(756,EXT_SST,sst[1],/*sam*/5,/*gtb*/1,/*siderem*/1,/*branch*/1);
        break;
      case 3:
        UNPACK_DECL(757,EXT_SST,sst[2],/*sam*/5,/*gtb*/1,/*siderem*/2,/*branch*/1);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,SIDEREM02_VME::__unpack);

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
  // cros3 = CROS3_SUBEVENT(type=85,subtype=0x2134);
  // cros3_rewrite = CROS3_REWRITE_SUBEVENT(type=85,subtype=0x213e);
  // sst1 = SIDEREM01_VME(type=82,subtype=0x2008,control=3);
  // sst2 = SIDEREM02_VME(type=82,subtype=0x2008,control=2);
  // camac = LAND_CAMAC_CONVERTER(type=34,subtype=0xc80);
  // fastbus1 = LAND_FASTBUS1(type=32,subtype=0xc3a,subcrate=1);
  // fastbus2 = LAND_FASTBUS2(type=32,subtype=0xc3a,subcrate=2);
  // acq = DUMMY(type=35,subtype=0xc1c);
  // vme = LAND_VME(type=88,subtype=0x2260,control=5);
  // camac_tcal_info = LAND_CAMAC_TCAL_INFO(type=0x26ce,subtype=0xc7f);
  // camac_scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c);
  // fastbus1_error = LAND_FASTBUS_ERROR_NGF(type=31,subtype=0xc3b,subcrate=1);
  // fastbus2_error = LAND_FASTBUS_ERROR_NGF(type=31,subtype=0xc3b,subcrate=2);
  // pileup = LAND_CAMAC_PILEUP(type=34,subtype=0xdac,control=1);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(1327,__match_no,1,((VES10_1_type==85)&&(VES10_1_subtype==0x2134)),cros3);
  MATCH_SUBEVENT_DECL(1330,__match_no,2,((VES10_1_type==85)&&(VES10_1_subtype==0x213e)),cros3_rewrite);
  MATCH_SUBEVENT_DECL(1332,__match_no,3,((VES10_1_type==82)&&(VES10_1_subtype==0x2008)&&(VES10_1_control==3)),sst1);
  MATCH_SUBEVENT_DECL(1333,__match_no,4,((VES10_1_type==82)&&(VES10_1_subtype==0x2008)&&(VES10_1_control==2)),sst2);
  MATCH_SUBEVENT_DECL(1334,__match_no,5,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(1335,__match_no,6,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==1)),fastbus1);
  MATCH_SUBEVENT_DECL(1336,__match_no,7,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==2)),fastbus2);
  MATCH_SUBEVENT_DECL(1337,__match_no,8,((VES10_1_type==35)&&(VES10_1_subtype==0xc1c)),acq);
  MATCH_SUBEVENT_DECL(1338,__match_no,9,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)),vme);
  MATCH_SUBEVENT_DECL(1340,__match_no,10,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc7f)),camac_tcal_info);
  MATCH_SUBEVENT_DECL(1346,__match_no,11,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(1347,__match_no,12,((VES10_1_type==31)&&(VES10_1_subtype==0xc3b)&&(VES10_1_subcrate==1)),fastbus1_error);
  MATCH_SUBEVENT_DECL(1348,__match_no,13,((VES10_1_type==31)&&(VES10_1_subtype==0xc3b)&&(VES10_1_subcrate==2)),fastbus2_error);
  MATCH_SUBEVENT_DECL(1349,__match_no,14,((VES10_1_type==34)&&(VES10_1_subtype==0xdac)&&(VES10_1_control==1)),pileup);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1327,CROS3_SUBEVENT,cros3,0);
      UNPACK_SUBEVENT_DECL(1327,0,CROS3_SUBEVENT,cros3);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1330,CROS3_REWRITE_SUBEVENT,cros3_rewrite,1);
      UNPACK_SUBEVENT_DECL(1330,0,CROS3_REWRITE_SUBEVENT,cros3_rewrite);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1332,SIDEREM01_VME,sst1,2);
      UNPACK_SUBEVENT_DECL(1332,0,SIDEREM01_VME,sst1);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1333,SIDEREM02_VME,sst2,3);
      UNPACK_SUBEVENT_DECL(1333,0,SIDEREM02_VME,sst2);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1334,LAND_CAMAC_CONVERTER,camac,4);
      UNPACK_SUBEVENT_DECL(1334,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1335,LAND_FASTBUS1,fastbus1,5);
      UNPACK_SUBEVENT_DECL(1335,0,LAND_FASTBUS1,fastbus1);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1336,LAND_FASTBUS2,fastbus2,6);
      UNPACK_SUBEVENT_DECL(1336,0,LAND_FASTBUS2,fastbus2);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1337,DUMMY,acq,7);
      UNPACK_SUBEVENT_DECL(1337,0,DUMMY,acq);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1338,LAND_VME,vme,8);
      UNPACK_SUBEVENT_DECL(1338,0,LAND_VME,vme);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1340,LAND_CAMAC_TCAL_INFO,camac_tcal_info,9);
      UNPACK_SUBEVENT_DECL(1340,0,LAND_CAMAC_TCAL_INFO,camac_tcal_info);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1346,LAND_CAMAC_SCALER,camac_scalers,10);
      UNPACK_SUBEVENT_DECL(1346,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 12:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1347,LAND_FASTBUS_ERROR_NGF,fastbus1_error,11);
      UNPACK_SUBEVENT_DECL(1347,0,LAND_FASTBUS_ERROR_NGF,fastbus1_error);
      break;
    case 13:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1348,LAND_FASTBUS_ERROR_NGF,fastbus2_error,12);
      UNPACK_SUBEVENT_DECL(1348,0,LAND_FASTBUS_ERROR_NGF,fastbus2_error);
      break;
    case 14:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1349,LAND_CAMAC_PILEUP,pileup,13);
      UNPACK_SUBEVENT_DECL(1349,0,LAND_CAMAC_PILEUP,pileup);
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
