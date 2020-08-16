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
  READ_FROM_BUFFER_FULL(1118,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_EQUAL(1113,ch_data.edge,edge);
  CHECK_BITS_EQUAL(1114,ch_data.channel,channel);
  CHECK_BITS_EQUAL(1115,ch_data.high,high_byte);
  CHECK_UNNAMED_BITS_ZERO(1118,ch_data.u32,0x00c00000);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.append_item(1117);
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
    READ_FROM_BUFFER_FULL(25,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(22,ch_data.unnamed_24_31,0);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(24,index);
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
      READ_FROM_BUFFER_FULL(73,uint16 ,ch_data,ch_data.u16);
      CHECK_BITS_EQUAL(70,ch_data.channel,index);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(72,index);
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
      READ_FROM_BUFFER_FULL(80,uint16 ,ch_data,ch_data.u16);
      CHECK_UNNAMED_BITS_ZERO(80,ch_data.u16,0xf000);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(79,index);
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
      READ_FROM_BUFFER_FULL(45,uint16 ,ch_data,ch_data.u16);
      CHECK_BITS_EQUAL(41,ch_data.channel,index);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(44,index);
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
      READ_FROM_BUFFER_FULL(53,uint16 ,ch_data,ch_data.u16);
      CHECK_UNNAMED_BITS_ZERO(53,ch_data.u16,0x7000);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(52,index);
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
  READ_FROM_BUFFER_FULL(781,uint32 ,h1,h1.u32);
  CHECK_BITS_EQUAL(779,h1.ccb_id,ccb_id);
  CHECK_UNNAMED_BITS_ZERO(781,h1.u32,0x00080000);
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
    READ_FROM_BUFFER_FULL(796,uint32 ,h2,h2.u32);
    CHECK_UNNAMED_BITS_ZERO(796,h2.u32,0x7fc000ec);
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
        READ_FROM_BUFFER_FULL(813,uint32 ,ch_data,ch_data.u32);
        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(811,(index * 2));
          __item.wire = ch_data.wire1;
          __item.start = ch_data.start_slice1;
          __item.stop = 0;
        }
        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(812,((index * 2) + 1));
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
        READ_FROM_BUFFER_FULL(828,uint32 ,ch_data_odd,ch_data_odd.u32);
        CHECK_BITS_EQUAL(824,ch_data_odd.start_slice2,255);
        CHECK_BITS_EQUAL(825,ch_data_odd.wire2,0);
        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(827,((h1.data_size - 1) * 2));
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
        READ_FROM_BUFFER_FULL(843,uint32 ,ch_data,ch_data.u32);
        CHECK_UNNAMED_BITS_ZERO(843,ch_data.u32,0xff000000);
        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(842,index);
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
      READ_FROM_BUFFER_FULL(861,uint32 ,trc_h2,trc_h2.u32);
      CHECK_UNNAMED_BITS_ZERO(861,trc_h2.u32,0xe00000ec);
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
        READ_FROM_BUFFER_FULL(873,uint32 ,trc_h3,trc_h3.u32);
        CHECK_UNNAMED_BITS_ZERO(873,trc_h3.u32,0x0f000000);
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
            READ_FROM_BUFFER_FULL(885,uint32 ,ch_counts,ch_counts.u32);
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
      READ_FROM_BUFFER_FULL(895,uint32 ,dummy_h2,dummy_h2.u32);
      CHECK_BITS_EQUAL(894,dummy_h2.unnamed_0_31,0);
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
  READ_FROM_BUFFER(1303,uint32 ,dummy_word);
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
  READ_FROM_BUFFER_FULL(103,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_RANGE_MAX(96,ch_data.channel,(channels - 1));
  CHECK_BITS_EQUAL(99,ch_data.n,0);
  CHECK_BITS_EQUAL(100,ch_data.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(103,ch_data.u32,0x0040f000);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(102,ch_data.channel);
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
  READ_FROM_BUFFER_FULL(120,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_RANGE_MAX(114,ch_data.channel,(channels - 1));
  CHECK_BITS_EQUAL(116,ch_data.n,0);
  CHECK_BITS_EQUAL(117,ch_data.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(120,ch_data.u32,0x0000f000);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(119,ch_data.channel);
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
  READ_FROM_BUFFER_FULL(1247,uint32 ,failure,failure.u32);
  CHECK_UNNAMED_BITS_ZERO(1247,failure.u32,0x003fff00);
  // if(failure.has_continous_event_counter)

  if (failure.has_continous_event_counter)
  {
    // UINT32 continous_event_counter;
    READ_FROM_BUFFER(1250,uint32 ,continous_event_counter);
  }
  // if(failure.has_time_stamp)

  if (failure.has_time_stamp)
  {
    // UINT32 time_stamp;
    READ_FROM_BUFFER(1254,uint32 ,time_stamp);
  }
  // if(failure.has_clock_counter_stamp)

  if (failure.has_clock_counter_stamp)
  {
    // UINT32 clock_counter_stamp;
    READ_FROM_BUFFER(1258,uint32 ,clock_counter_stamp);
  }
  // if(failure.has_update_qdc_iped_value)

  if (failure.has_update_qdc_iped_value)
  {
    // UINT32 iped;
    READ_FROM_BUFFER(1262,uint32 ,iped);
  }
  // if(failure.has_multi_event)

  if (failure.has_multi_event)
  {
    // UINT32 multi_events;
    READ_FROM_BUFFER(1266,uint32 ,multi_events);
  }
  // if(failure.has_multi_trlo_ii_counter0)

  if (failure.has_multi_trlo_ii_counter0)
  {
    // UINT32 multi_trlo_ii_counter0;
    READ_FROM_BUFFER(1270,uint32 ,multi_trlo_ii_counter0);
  }
  // if(failure.has_multi_scaler_counter0)

  if (failure.has_multi_scaler_counter0)
  {
    // UINT32 multi_scaler_counter0;
    READ_FROM_BUFFER(1274,uint32 ,multi_scaler_counter0);
  }
  // if(failure.has_multi_adctdc_counter0)

  if (failure.has_multi_adctdc_counter0)
  {
    // UINT32 multi_adctdc_counter0;
    READ_FROM_BUFFER(1278,uint32 ,multi_adctdc_counter0);
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
  READ_FROM_BUFFER(941,uint32 ,sec);
  // UINT32 frac;
  READ_FROM_BUFFER(942,uint32 ,frac);
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
  READ_FROM_BUFFER_FULL(953,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(952,header.id,id);
  CHECK_UNNAMED_BITS_ZERO(953,header.u32,0x00fe0000);
  // MARK_COUNT(start);
  void *__mark_start = __buffer._data;
  // UINT32 server_id;
  READ_FROM_BUFFER(957,uint32 ,server_id);
  // UINT32 sspp
  // {
    //  0_07: precision;
    //  8_15: poll;
    // 16_19: stratum;
    // 24_26: mode;
    // 27_29: version = CHECK(3);
    // 30_31: leap;
  // }
  READ_FROM_BUFFER_FULL(969,uint32 ,sspp,sspp.u32);
  CHECK_BITS_EQUAL(967,sspp.version,3);
  CHECK_UNNAMED_BITS_ZERO(969,sspp.u32,0x00f00000);
  // UINT32 root_dly
  // {
    //  0_15: frac;
    // 16_31: sec;
  // }
  READ_FROM_BUFFER_FULL(975,uint32 ,root_dly,root_dly.u32);
  // UINT32 root_disp
  // {
    //  0_15: frac;
    // 16_31: sec;
  // }
  READ_FROM_BUFFER_FULL(980,uint32 ,root_disp,root_disp.u32);
  // UINT32 refid;
  READ_FROM_BUFFER(981,uint32 ,refid);
  // reftime = NTP64_TIME();
  UNPACK_DECL(983,NTP64_TIME,reftime);
  // origtime = NTP64_TIME();
  UNPACK_DECL(984,NTP64_TIME,origtime);
  // rectime = NTP64_TIME();
  UNPACK_DECL(985,NTP64_TIME,rectime);
  // tmittime = NTP64_TIME();
  UNPACK_DECL(986,NTP64_TIME,tmittime);
  // rxtime = NTP64_TIME();
  UNPACK_DECL(989,NTP64_TIME,rxtime);
  // if(header.quick_burst)

  if (header.quick_burst)
  {
    // orig2time = NTP64_TIME();
    UNPACK_DECL(993,NTP64_TIME,orig2time);
    // rec2time = NTP64_TIME();
    UNPACK_DECL(994,NTP64_TIME,rec2time);
    // tmit2time = NTP64_TIME();
    UNPACK_DECL(995,NTP64_TIME,tmit2time);
    // rx2time = NTP64_TIME();
    UNPACK_DECL(996,NTP64_TIME,rx2time);
  }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_count,start,end,0,4)
  CHECK_WORD_COUNT(1001,header.word_count,start,end,0,4);
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
  READ_FROM_BUFFER(1009,uint32 ,soft_latches);
  // UINT32 hard_latches;
  READ_FROM_BUFFER(1010,uint32 ,hard_latches);
  // UINT32 clock_ticks;
  READ_FROM_BUFFER(1011,uint32 ,clock_ticks);
  // before = NTP64_TIME();
  UNPACK_DECL(1012,NTP64_TIME,before);
  // after = NTP64_TIME();
  UNPACK_DECL(1013,NTP64_TIME,after);
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
  READ_FROM_BUFFER_FULL(1030,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1029,header.id,id);
  CHECK_UNNAMED_BITS_ZERO(1030,header.u32,0x00f00000);
  // MARK_COUNT(start);
  void *__mark_start = __buffer._data;
  // if(header.has_tstamp1)

  if (header.has_tstamp1)
  {
    // tstamp1 = RANDOM_TCAL_TSTAMP_CLOCK();
    UNPACK_DECL(1036,RANDOM_TCAL_TSTAMP_CLOCK,tstamp1);
  }
  // if(header.has_tstamp2)

  if (header.has_tstamp2)
  {
    // tstamp2 = RANDOM_TCAL_TSTAMP_CLOCK();
    UNPACK_DECL(1040,RANDOM_TCAL_TSTAMP_CLOCK,tstamp2);
  }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_count,start,end,0,4)
  CHECK_WORD_COUNT(1045,header.word_count,start,end,0,4);
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
  READ_FROM_BUFFER_FULL(720,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(717,header.siderem,siderem);
  CHECK_BITS_EQUAL(718,header.gtb,gtb);
  CHECK_BITS_EQUAL(719,header.sam,sam);
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
    READ_FROM_BUFFER_FULL(733,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(730,ch_data.unnamed_28_31,15);
    CHECK_UNNAMED_BITS_ZERO(733,ch_data.u32,0x0e00c000);
    {
      typedef __typeof__(*(&(data[ch_data.adc_no]))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data[ch_data.adc_no].insert_index(732,ch_data.channel);
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
    READ_FROM_BUFFER_FULL(1074,uint32 ,ch_data,ch_data.u32);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(1073,index);
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
  READ_FROM_BUFFER_FULL(424,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(420,header.event_id,event_id);
  CHECK_BITS_EQUAL(422,header.tdc,tdc);
  CHECK_BITS_EQUAL(423,header.unnamed_27_31,1);
  CHECK_UNNAMED_BITS_ZERO(424,header.u32,0x04000000);
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
  PEEK_FROM_BUFFER_FULL(451,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(436,ch_data.tdc,tdc,data_done_0);
  CHECK_JUMP_BITS_EQUAL(441,ch_data.unnamed_27_31,0,data_done_0);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(449,((ch_data.tdc << 5) | ch_data.channel_low));
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
  PEEK_FROM_BUFFER_FULL(459,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(457,__error_flags.tdc,tdc,data_done_1);
  CHECK_JUMP_BITS_EQUAL(458,__error_flags.unnamed_27_31,4,data_done_1);
  CHECK_JUMP_UNNAMED_BITS_ZERO(459,__error_flags.u32,0x04ff8000,data_done_1);
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
  READ_FROM_BUFFER_FULL(470,uint32 ,trailer,trailer.u32);
  CHECK_WORD_COUNT(465,trailer.word_count,tdc_start,tdc_end,4,4);
  CHECK_BITS_EQUAL(466,trailer.event_id,header.event_id);
  CHECK_BITS_EQUAL(468,trailer.tdc,tdc);
  CHECK_BITS_EQUAL(469,trailer.unnamed_27_31,3);
  CHECK_UNNAMED_BITS_ZERO(470,trailer.u32,0x04000000);
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
  READ_FROM_BUFFER_FULL(485,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(482,header.geom,geom);
  CHECK_BITS_EQUAL(484,header.unnamed_27_31,8);
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
    PEEK_FROM_BUFFER(493,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(489,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(489,VME_CAEN_V1190_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(490,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(490,VME_CAEN_V1190_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(491,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(491,VME_CAEN_V1190_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(492,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(492,VME_CAEN_V1190_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_0:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(499,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(498,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(511,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(505,trailer.geom,geom);
  CHECK_WORD_COUNT(506,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(510,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(511,trailer.u32,0x00f00000);
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
  READ_FROM_BUFFER_FULL(548,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_EQUAL(533,ch_data.tdc,tdc);
  CHECK_BITS_EQUAL(538,ch_data.unnamed_27_31,0);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(546,((ch_data.tdc << 5) | ch_data.channel_low));
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
  READ_FROM_BUFFER_FULL(559,uint32 ,error_flags,error_flags.u32);
  CHECK_BITS_EQUAL(557,error_flags.tdc,tdc);
  CHECK_BITS_EQUAL(558,error_flags.unnamed_27_31,4);
  CHECK_UNNAMED_BITS_ZERO(559,error_flags.u32,0x04ff8000);
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
  READ_FROM_BUFFER_FULL(574,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(571,header.geom,geom);
  CHECK_BITS_EQUAL(573,header.unnamed_27_31,8);
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
    PEEK_FROM_BUFFER(587,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(578,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(578,VME_CAEN_V1190_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(579,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(579,VME_CAEN_V1190_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(580,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(580,VME_CAEN_V1190_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(581,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(581,VME_CAEN_V1190_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(583,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(583,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],__visited1,0);
        UNPACK_DECL(583,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(584,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(584,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],__visited1,1);
        UNPACK_DECL(584,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(585,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(585,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],__visited1,2);
        UNPACK_DECL(585,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(586,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(586,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],__visited1,3);
        UNPACK_DECL(586,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_1:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(593,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(592,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(605,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(599,trailer.geom,geom);
  CHECK_WORD_COUNT(600,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(604,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(605,trailer.u32,0x00f00000);
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
  READ_FROM_BUFFER_FULL(219,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(215,header.event_id,event_id);
  CHECK_BITS_EQUAL(217,header.tdc,tdc);
  CHECK_BITS_EQUAL(218,header.unnamed_27_31,1);
  CHECK_UNNAMED_BITS_ZERO(219,header.u32,0x04000000);
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
  PEEK_FROM_BUFFER_FULL(246,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(226,ch_data.tdc,tdc,data_done_2);
  CHECK_JUMP_BITS_EQUAL(236,ch_data.unnamed_27_31,0,data_done_2);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(240,((ch_data.tdc << 3) | ch_data.channel_low));
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
  PEEK_FROM_BUFFER_FULL(254,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(252,__error_flags.tdc,tdc,data_done_3);
  CHECK_JUMP_BITS_EQUAL(253,__error_flags.unnamed_27_31,4,data_done_3);
  CHECK_JUMP_UNNAMED_BITS_ZERO(254,__error_flags.u32,0x04ff8000,data_done_3);
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
  READ_FROM_BUFFER_FULL(265,uint32 ,trailer,trailer.u32);
  CHECK_WORD_COUNT(260,trailer.word_count,tdc_start,tdc_end,4,4);
  CHECK_BITS_EQUAL(261,trailer.event_id,header.event_id);
  CHECK_BITS_EQUAL(263,trailer.tdc,tdc);
  CHECK_BITS_EQUAL(264,trailer.unnamed_27_31,3);
  CHECK_UNNAMED_BITS_ZERO(265,trailer.u32,0x04000000);
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
  READ_FROM_BUFFER_FULL(280,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(277,header.geom,geom);
  CHECK_BITS_EQUAL(279,header.unnamed_27_31,8);
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
    PEEK_FROM_BUFFER(288,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(284,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(284,VME_CAEN_V1290_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(285,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(285,VME_CAEN_V1290_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(286,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(286,VME_CAEN_V1290_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(287,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(287,VME_CAEN_V1290_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_2:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(294,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(293,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(306,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(300,trailer.geom,geom);
  CHECK_WORD_COUNT(301,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(305,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(306,trailer.u32,0x00f00000);
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
  READ_FROM_BUFFER_FULL(343,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_EQUAL(323,ch_data.tdc,tdc);
  CHECK_BITS_EQUAL(333,ch_data.unnamed_27_31,0);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(337,((ch_data.tdc << 3) | ch_data.channel_low));
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
  READ_FROM_BUFFER_FULL(354,uint32 ,error_flags,error_flags.u32);
  CHECK_BITS_EQUAL(352,error_flags.tdc,tdc);
  CHECK_BITS_EQUAL(353,error_flags.unnamed_27_31,4);
  CHECK_UNNAMED_BITS_ZERO(354,error_flags.u32,0x04ff8000);
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
  READ_FROM_BUFFER_FULL(369,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(366,header.geom,geom);
  CHECK_BITS_EQUAL(368,header.unnamed_27_31,8);
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
    PEEK_FROM_BUFFER(382,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(373,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(373,VME_CAEN_V1290_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(374,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(374,VME_CAEN_V1290_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(375,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(375,VME_CAEN_V1290_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(376,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(376,VME_CAEN_V1290_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(378,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(378,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],__visited2,0);
        UNPACK_DECL(378,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(379,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(379,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],__visited2,1);
        UNPACK_DECL(379,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(380,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(380,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],__visited2,2);
        UNPACK_DECL(380,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(381,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(381,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],__visited2,3);
        UNPACK_DECL(381,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_3:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(388,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(387,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(400,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(394,trailer.geom,geom);
  CHECK_WORD_COUNT(395,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(399,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(400,trailer.u32,0x00f00000);
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
  READ_FROM_BUFFER_FULL(138,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(135,header.crate,crate);
  CHECK_BITS_EQUAL(136,header.unnamed_24_26,2);
  CHECK_BITS_EQUAL(137,header.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(138,header.u32,0x0000c0ff);
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
    READ_FROM_BUFFER_FULL(158,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(154,ch_data.unnamed_24_26,0);
    CHECK_BITS_EQUAL(155,ch_data.geom,geom);
    CHECK_UNNAMED_BITS_ZERO(158,ch_data.u32,0x00e08000);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(157,ch_data.channel);
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
  READ_FROM_BUFFER_FULL(167,uint32 ,eob,eob.u32);
  CHECK_BITS_EQUAL(164,eob.unnamed_24_26,4);
  CHECK_BITS_EQUAL(165,eob.geom,geom);
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
  READ_FROM_BUFFER_FULL(186,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(184,header.unnamed_26_26,1);
  CHECK_BITS_EQUAL(185,header.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(186,header.u32,0x03000000);
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
    READ_FROM_BUFFER_FULL(197,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(193,ch_data.unnamed_26_26,0);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(196,ch_data.channel);
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
  READ_FROM_BUFFER_FULL(625,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(622,header.geom,geom);
  CHECK_BITS_EQUAL(623,header.unnamed_24_29,0);
  CHECK_BITS_EQUAL(624,header.unnamed_30_31,1);
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
  PEEK_FROM_BUFFER_FULL(636,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(632,ch_data.unnamed_21_29,32,data_done_4);
  CHECK_JUMP_BITS_EQUAL(633,ch_data.unnamed_30_31,0,data_done_4);
  CHECK_JUMP_UNNAMED_BITS_ZERO(636,ch_data.u32,0x0000a000,data_done_4);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(635,ch_data.channel);
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
  PEEK_FROM_BUFFER_FULL(642,uint32 ,filler,filler.u32);
  CHECK_JUMP_BITS_EQUAL(641,filler.unnamed_0_31,0,data_done_5);
  __buffer.advance(sizeof(filler.u32));
  data_done_5:;
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  READ_FROM_BUFFER_FULL(648,uint32 ,end_of_event,end_of_event.u32);
  CHECK_BITS_EQUAL(647,end_of_event.unnamed_30_31,3);
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
  CHECK_WORD_COUNT(651,header.word_number,start,end,( - 4),4);
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
  READ_FROM_BUFFER_FULL(669,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(666,header.geom,geom);
  CHECK_BITS_EQUAL(667,header.unnamed_24_29,0);
  CHECK_BITS_EQUAL(668,header.unnamed_30_31,1);
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
  PEEK_FROM_BUFFER_FULL(681,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(677,ch_data.unnamed_24_27,0,data_done_6);
  CHECK_JUMP_BITS_EQUAL(678,ch_data.unnamed_28_31,1,data_done_6);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(680,ch_data.channel);
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
  PEEK_FROM_BUFFER_FULL(686,uint32 ,fill_word,fill_word.u32);
  CHECK_JUMP_BITS_EQUAL(685,fill_word.unnamed_0_31,0,data_done_7);
  __buffer.advance(sizeof(fill_word.u32));
  }
  data_done_7:;
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  READ_FROM_BUFFER_FULL(692,uint32 ,end_of_event,end_of_event.u32);
  CHECK_BITS_EQUAL(691,end_of_event.unnamed_30_31,3);
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
  CHECK_WORD_COUNT(695,header.word_number,start,end,( - 4),4);
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
    PEEK_FROM_BUFFER(907,uint32,__match_peek);
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
        UNPACK_CHECK_NO_REVISIT(905,CROS3_REWRITE,ccb[0],__visited3,0);
        UNPACK_DECL(905,CROS3_REWRITE,ccb[0],/*ccb_id*/1);
        break;
      case 2:
        UNPACK_CHECK_NO_REVISIT(906,CROS3_REWRITE,ccb[1],__visited3,1);
        UNPACK_DECL(906,CROS3_REWRITE,ccb[1],/*ccb_id*/2);
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
    MATCH_DECL(759,__match_no,1,EXT_CROS3,ccb[0],/*ccb_id*/1);
    MATCH_DECL(760,__match_no,2,EXT_CROS3,ccb[1],/*ccb_id*/2);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_CHECK_NO_REVISIT(759,EXT_CROS3,ccb[0],__visited4,0);
        UNPACK_DECL(759,EXT_CROS3,ccb[0],/*ccb_id*/1);
        break;
      case 2:
        UNPACK_CHECK_NO_REVISIT(760,EXT_CROS3,ccb[1],__visited4,1);
        UNPACK_DECL(760,EXT_CROS3,ccb[1],/*ccb_id*/2);
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
    PEEK_FROM_BUFFER(1311,uint32,__match_peek);
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
        UNPACK_DECL(1310,DUMMY_WORD,d);
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
  READ_FROM_BUFFER(915,uint16 ,tpat);
  // UINT16 tprev;
  READ_FROM_BUFFER(916,uint16 ,tprev);
  // UINT16 tnext;
  READ_FROM_BUFFER(917,uint16 ,tnext);
  // UINT16 tprev2;
  READ_FROM_BUFFER(918,uint16 ,tprev2);
  // if(EXTERNAL has_data)

  if (has_data())
  {
    // aPHI14829 = CAMAC_PHILLIPS_7164(channels=16,mark_channel_no=1);
    UNPACK_DECL(925,CAMAC_PHILLIPS_7164,aPHI14829,/*channels*/16,/*mark_channel_no*/1);
    // qSIA0429 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    UNPACK_DECL(926,CAMAC_SILENA_4418,qSIA0429,/*channels*/8,/*mark_channel_no*/0);
    // qSIA0480 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    UNPACK_DECL(927,CAMAC_SILENA_4418,qSIA0480,/*channels*/8,/*mark_channel_no*/0);
    // tSIA0400 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    UNPACK_DECL(928,CAMAC_SILENA_4418,tSIA0400,/*channels*/8,/*mark_channel_no*/0);
    // tC_FRS120 = CAMAC_SILENA_4418(channels=6,mark_channel_no=0);
    UNPACK_DECL(929,CAMAC_SILENA_4418,tC_FRS120,/*channels*/6,/*mark_channel_no*/0);
    // tSIA0426 = CAMAC_SILENA_4418(channels=4,mark_channel_no=0);
    UNPACK_DECL(930,CAMAC_SILENA_4418,tSIA0426,/*channels*/4,/*mark_channel_no*/0);
    // qSIA0458 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    UNPACK_DECL(931,CAMAC_SILENA_4418,qSIA0458,/*channels*/8,/*mark_channel_no*/0);
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
    PEEK_FROM_BUFFER(1131,uint32,__match_peek);
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
        UNPACK_DECL(1127,CAMAC_LECROY_2277_1CH_HACK,tdc,/*channel*/0,/*edge*/1,/*high_byte*/0);
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
  UNPACK_DECL(1080,CAMAC_LECROY_4434,scaler0,/*channels*/32);
  // scaler1 = CAMAC_LECROY_4434(channels=32);
  UNPACK_DECL(1081,CAMAC_LECROY_4434,scaler1,/*channels*/32);
  // scaler2 = CAMAC_LECROY_4434(channels=32);
  UNPACK_DECL(1082,CAMAC_LECROY_4434,scaler2,/*channels*/32);
  // if(EXTERNAL has_timestamp)

  if (has_timestamp())
  {
    // UINT32 timestamp;
    READ_FROM_BUFFER(1091,uint32 ,timestamp);
    // UINT32 endianess
    // {
      //  0_31: 0x87654321;
    // }
    READ_FROM_BUFFER_FULL(1092,uint32 ,endianess,endianess.u32);
    CHECK_BITS_EQUAL(1092,endianess.unnamed_0_31,0x87654321);
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
  READ_FROM_BUFFER(1098,uint32 ,timestamp);
  // UINT32 endianess
  // {
    //  0_31: 0x87654321;
  // }
  READ_FROM_BUFFER_FULL(1099,uint32 ,endianess,endianess.u32);
  CHECK_BITS_EQUAL(1099,endianess.unnamed_0_31,0x87654321);
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
  READ_FROM_BUFFER(1051,uint32 ,info);
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
    PEEK_FROM_BUFFER(1057,uint32,__match_peek);
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
        UNPACK_DECL(1055,RANDOM_TCAL,rtcal,/*id*/231);
        break;
      case 2:
        UNPACK_DECL(1056,NTP_MESSAGE,ntp,/*id*/239);
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
    PEEK_FROM_BUFFER(1195,uint32,__match_peek);
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
        UNPACK_DECL(1180,FASTBUS_LECROY_1885,Q47342,/*geom*/7,/*channels*/96);
        break;
      case 2:
        UNPACK_DECL(1181,FASTBUS_LECROY_1885,Q11111,/*geom*/8,/*channels*/96);
        break;
      case 3:
        UNPACK_DECL(1182,FASTBUS_LECROY_1885,Q46848,/*geom*/10,/*channels*/96);
        break;
      case 4:
        UNPACK_DECL(1183,FASTBUS_LECROY_1885,Q47315,/*geom*/11,/*channels*/96);
        break;
      case 5:
        UNPACK_DECL(1184,FASTBUS_LECROY_1885,Q17320,/*geom*/13,/*channels*/96);
        break;
      case 6:
        UNPACK_DECL(1185,FASTBUS_LECROY_1885,Q15372,/*geom*/15,/*channels*/96);
        break;
      case 7:
        UNPACK_DECL(1186,FASTBUS_LECROY_1885,Q46962,/*geom*/16,/*channels*/96);
        break;
      case 8:
        UNPACK_DECL(1187,FASTBUS_LECROY_1885,Q46993,/*geom*/18,/*channels*/96);
        break;
      case 9:
        UNPACK_DECL(1188,FASTBUS_LECROY_1885,Q15358,/*geom*/20,/*channels*/96);
        break;
      case 10:
        UNPACK_DECL(1189,FASTBUS_LECROY_1885,Q47264,/*geom*/23,/*channels*/96);
        break;
      case 11:
        UNPACK_DECL(1190,FASTBUS_LECROY_1875,T81855,/*geom*/3,/*channels*/64);
        break;
      case 12:
        UNPACK_DECL(1191,FASTBUS_LECROY_1875,T87044,/*geom*/4,/*channels*/64);
        break;
      case 13:
        UNPACK_DECL(1192,FASTBUS_LECROY_1875,T87024,/*geom*/5,/*channels*/64);
        break;
      case 14:
        UNPACK_DECL(1193,FASTBUS_LECROY_1875,T81800,/*geom*/6,/*channels*/64);
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
    PEEK_FROM_BUFFER(1217,uint32,__match_peek);
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
        UNPACK_DECL(1208,FASTBUS_LECROY_1885,Q75266,/*geom*/17,/*channels*/96);
        break;
      case 2:
        UNPACK_DECL(1209,FASTBUS_LECROY_1875,T87047,/*geom*/1,/*channels*/64);
        break;
      case 3:
        UNPACK_DECL(1210,FASTBUS_LECROY_1875,T48854,/*geom*/2,/*channels*/64);
        break;
      case 4:
        UNPACK_DECL(1211,FASTBUS_LECROY_1875,T81808,/*geom*/3,/*channels*/64);
        break;
      case 5:
        UNPACK_DECL(1212,FASTBUS_LECROY_1875,T81859,/*geom*/4,/*channels*/64);
        break;
      case 6:
        UNPACK_DECL(1213,FASTBUS_LECROY_1875,T81795,/*geom*/5,/*channels*/64);
        break;
      case 7:
        UNPACK_DECL(1214,FASTBUS_LECROY_1875,T81806,/*geom*/6,/*channels*/64);
        break;
      case 8:
        UNPACK_DECL(1215,FASTBUS_LECROY_1875,T48834,/*geom*/7,/*channels*/64);
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
  READ_FROM_BUFFER_FULL(1146,uint32 ,error_code,error_code.u32);
  CHECK_UNNAMED_BITS_ZERO(1146,error_code.u32,0xfffefff0);
  // UINT32 error_num;
  READ_FROM_BUFFER(1147,uint32 ,error_num);
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
  READ_FROM_BUFFER_FULL(1155,uint32 ,magic,magic.u32);
  CHECK_BITS_EQUAL(1154,magic.unnamed_0_31,0x10000000);
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
  READ_FROM_BUFFER_FULL(1168,uint32 ,error_code,error_code.u32);
  CHECK_UNNAMED_BITS_ZERO(1168,error_code.u32,0xfffffc00);
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
  UNPACK_DECL(1285,LAND_STD_VME,vme);
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
    PEEK_FROM_BUFFER(1295,uint32,__match_peek);
    // differ = fe830000 : 16 17 23 25 26 27 28 29 30 31
    // select on bit 30, partition: 1:2(d2) 0:2(d2)
    if (__match_peek & 0x40000000) {
      MATCH_DECL_QUICK(1293,__match_no,3,scaler[0],__match_peek,0xff000000,0xf4000000);
      MATCH_DECL_QUICK(1294,__match_no,4,scaler[1],__match_peek,0xff000000,0xfc000000);
    } else {
      MATCH_DECL_QUICK(1290,__match_no,1,tCAEN0614,__match_peek,0xffffc0ff,0x82820000);
      MATCH_DECL_QUICK(1292,__match_no,2,qCAEN0472,__match_peek,0xffffc0ff,0x02010000);
    }
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(1290,VME_CAEN_V775,tCAEN0614,/*geom*/16,/*crate*/130);
        break;
      case 2:
        UNPACK_DECL(1292,VME_CAEN_V775,qCAEN0472,/*geom*/0,/*crate*/1);
        break;
      case 3:
        UNPACK_DECL(1293,VME_CAEN_V830,scaler[0],/*geom*/30);
        break;
      case 4:
        UNPACK_DECL(1294,VME_CAEN_V830,scaler[1],/*geom*/31);
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

    // external sst[0] = EXT_SST(siderem=1,gtb=0,sam=5);
    // external sst[1] = EXT_SST(siderem=2,gtb=0,sam=5);
    // external sst[2] = EXT_SST(siderem=3,gtb=0,sam=5);
    // external sst[3] = EXT_SST(siderem=1,gtb=1,sam=5);
    // external sst[4] = EXT_SST(siderem=2,gtb=1,sam=5);
    // external sst[5] = EXT_SST(siderem=3,gtb=1,sam=5);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: EXT_SST sst[0]: could not get bits
    __buffer.peeking();
    MATCH_DECL(741,__match_no,1,EXT_SST,sst[0],/*sam*/5,/*gtb*/0,/*siderem*/1);
    MATCH_DECL(742,__match_no,2,EXT_SST,sst[1],/*sam*/5,/*gtb*/0,/*siderem*/2);
    MATCH_DECL(743,__match_no,3,EXT_SST,sst[2],/*sam*/5,/*gtb*/0,/*siderem*/3);
    MATCH_DECL(744,__match_no,4,EXT_SST,sst[3],/*sam*/5,/*gtb*/1,/*siderem*/1);
    MATCH_DECL(745,__match_no,5,EXT_SST,sst[4],/*sam*/5,/*gtb*/1,/*siderem*/2);
    MATCH_DECL(746,__match_no,6,EXT_SST,sst[5],/*sam*/5,/*gtb*/1,/*siderem*/3);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(741,EXT_SST,sst[0],/*sam*/5,/*gtb*/0,/*siderem*/1);
        break;
      case 2:
        UNPACK_DECL(742,EXT_SST,sst[1],/*sam*/5,/*gtb*/0,/*siderem*/2);
        break;
      case 3:
        UNPACK_DECL(743,EXT_SST,sst[2],/*sam*/5,/*gtb*/0,/*siderem*/3);
        break;
      case 4:
        UNPACK_DECL(744,EXT_SST,sst[3],/*sam*/5,/*gtb*/1,/*siderem*/1);
        break;
      case 5:
        UNPACK_DECL(745,EXT_SST,sst[4],/*sam*/5,/*gtb*/1,/*siderem*/2);
        break;
      case 6:
        UNPACK_DECL(746,EXT_SST,sst[5],/*sam*/5,/*gtb*/1,/*siderem*/3);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,SIDEREM01_VME::__unpack);

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
  // sst = SIDEREM01_VME(type=82,subtype=0x2008,control=3);
  // camac = LAND_CAMAC_CONVERTER(type=34,subtype=0xc80);
  // fastbus1 = LAND_FASTBUS1(type=32,subtype=0xc3a,subcrate=1);
  // fastbus2 = LAND_FASTBUS2(type=32,subtype=0xc3a,subcrate=2);
  // acq = DUMMY(type=35,subtype=0xc1c);
  // vme = LAND_VME(type=88,subtype=0x2260,control=5);
  // camac_tcal_info = LAND_CAMAC_TCAL_INFO(type=0x26ce,subtype=0xc7f);
  // camac_scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c);
  // fastbus_error = LAND_FASTBUS_ERROR(type=31,subtype=0xc1c);
  // pileup = LAND_CAMAC_PILEUP(type=34,subtype=0xdac,control=1);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(1318,__match_no,1,((VES10_1_type==85)&&(VES10_1_subtype==0x2134)),cros3);
  MATCH_SUBEVENT_DECL(1326,__match_no,2,((VES10_1_type==85)&&(VES10_1_subtype==0x213e)),cros3_rewrite);
  MATCH_SUBEVENT_DECL(1328,__match_no,3,((VES10_1_type==82)&&(VES10_1_subtype==0x2008)&&(VES10_1_control==3)),sst);
  MATCH_SUBEVENT_DECL(1329,__match_no,4,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(1330,__match_no,5,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==1)),fastbus1);
  MATCH_SUBEVENT_DECL(1331,__match_no,6,((VES10_1_type==32)&&(VES10_1_subtype==0xc3a)&&(VES10_1_subcrate==2)),fastbus2);
  MATCH_SUBEVENT_DECL(1332,__match_no,7,((VES10_1_type==35)&&(VES10_1_subtype==0xc1c)),acq);
  MATCH_SUBEVENT_DECL(1333,__match_no,8,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)),vme);
  MATCH_SUBEVENT_DECL(1335,__match_no,9,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc7f)),camac_tcal_info);
  MATCH_SUBEVENT_DECL(1341,__match_no,10,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(1342,__match_no,11,((VES10_1_type==31)&&(VES10_1_subtype==0xc1c)),fastbus_error);
  MATCH_SUBEVENT_DECL(1343,__match_no,12,((VES10_1_type==34)&&(VES10_1_subtype==0xdac)&&(VES10_1_control==1)),pileup);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1318,CROS3_SUBEVENT,cros3,0);
      UNPACK_SUBEVENT_DECL(1318,0,CROS3_SUBEVENT,cros3);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1326,CROS3_REWRITE_SUBEVENT,cros3_rewrite,1);
      UNPACK_SUBEVENT_DECL(1326,0,CROS3_REWRITE_SUBEVENT,cros3_rewrite);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1328,SIDEREM01_VME,sst,2);
      UNPACK_SUBEVENT_DECL(1328,0,SIDEREM01_VME,sst);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1329,LAND_CAMAC_CONVERTER,camac,3);
      UNPACK_SUBEVENT_DECL(1329,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1330,LAND_FASTBUS1,fastbus1,4);
      UNPACK_SUBEVENT_DECL(1330,0,LAND_FASTBUS1,fastbus1);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1331,LAND_FASTBUS2,fastbus2,5);
      UNPACK_SUBEVENT_DECL(1331,0,LAND_FASTBUS2,fastbus2);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1332,DUMMY,acq,6);
      UNPACK_SUBEVENT_DECL(1332,0,DUMMY,acq);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1333,LAND_VME,vme,7);
      UNPACK_SUBEVENT_DECL(1333,0,LAND_VME,vme);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1335,LAND_CAMAC_TCAL_INFO,camac_tcal_info,8);
      UNPACK_SUBEVENT_DECL(1335,0,LAND_CAMAC_TCAL_INFO,camac_tcal_info);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1341,LAND_CAMAC_SCALER,camac_scalers,9);
      UNPACK_SUBEVENT_DECL(1341,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1342,LAND_FASTBUS_ERROR,fastbus_error,10);
      UNPACK_SUBEVENT_DECL(1342,0,LAND_FASTBUS_ERROR,fastbus_error);
      break;
    case 12:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1343,LAND_CAMAC_PILEUP,pileup,11);
      UNPACK_SUBEVENT_DECL(1343,0,LAND_CAMAC_PILEUP,pileup);
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
