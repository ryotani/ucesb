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
  READ_FROM_BUFFER_FULL(1129,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_EQUAL(1124,ch_data.edge,edge);
  CHECK_BITS_EQUAL(1125,ch_data.channel,channel);
  CHECK_BITS_EQUAL(1126,ch_data.high,high_byte);
  CHECK_UNNAMED_BITS_ZERO(1129,ch_data.u32,0x00c00000);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.append_item(1128);
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
    READ_FROM_BUFFER_FULL(28,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(25,ch_data.unnamed_24_31,0);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(27,index);
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
      READ_FROM_BUFFER_FULL(76,uint16 ,ch_data,ch_data.u16);
      CHECK_BITS_EQUAL(73,ch_data.channel,index);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(75,index);
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
      READ_FROM_BUFFER_FULL(83,uint16 ,ch_data,ch_data.u16);
      CHECK_UNNAMED_BITS_ZERO(83,ch_data.u16,0xf000);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(82,index);
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
      READ_FROM_BUFFER_FULL(48,uint16 ,ch_data,ch_data.u16);
      CHECK_BITS_EQUAL(44,ch_data.channel,index);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(47,index);
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
      READ_FROM_BUFFER_FULL(56,uint16 ,ch_data,ch_data.u16);
      CHECK_UNNAMED_BITS_ZERO(56,ch_data.u16,0x7000);
      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(55,index);
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
  READ_FROM_BUFFER_FULL(797,uint32 ,h1,h1.u32);
  CHECK_BITS_EQUAL(795,h1.ccb_id,ccb_id);
  CHECK_UNNAMED_BITS_ZERO(797,h1.u32,0x00080000);
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
    READ_FROM_BUFFER_FULL(812,uint32 ,h2,h2.u32);
    CHECK_UNNAMED_BITS_ZERO(812,h2.u32,0x7fc000ec);
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
        READ_FROM_BUFFER_FULL(829,uint32 ,ch_data,ch_data.u32);
        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(827,(index * 2));
          __item.wire = ch_data.wire1;
          __item.start = ch_data.start_slice1;
          __item.stop = 0;
        }
        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(828,((index * 2) + 1));
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
        READ_FROM_BUFFER_FULL(844,uint32 ,ch_data_odd,ch_data_odd.u32);
        CHECK_BITS_EQUAL(840,ch_data_odd.start_slice2,255);
        CHECK_BITS_EQUAL(841,ch_data_odd.wire2,0);
        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(843,((h1.data_size - 1) * 2));
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
        READ_FROM_BUFFER_FULL(859,uint32 ,ch_data,ch_data.u32);
        CHECK_UNNAMED_BITS_ZERO(859,ch_data.u32,0xff000000);
        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(858,index);
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
      READ_FROM_BUFFER_FULL(877,uint32 ,trc_h2,trc_h2.u32);
      CHECK_UNNAMED_BITS_ZERO(877,trc_h2.u32,0xe00000ec);
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
        READ_FROM_BUFFER_FULL(889,uint32 ,trc_h3,trc_h3.u32);
        CHECK_UNNAMED_BITS_ZERO(889,trc_h3.u32,0x0f000000);
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
            READ_FROM_BUFFER_FULL(901,uint32 ,ch_counts,ch_counts.u32);
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
      READ_FROM_BUFFER_FULL(911,uint32 ,dummy_h2,dummy_h2.u32);
      CHECK_BITS_EQUAL(910,dummy_h2.unnamed_0_31,0);
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
  READ_FROM_BUFFER(1421,uint32 ,dummy_word);
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
  READ_FROM_BUFFER_FULL(106,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_RANGE_MAX(99,ch_data.channel,(channels - 1));
  CHECK_BITS_EQUAL(102,ch_data.n,0);
  CHECK_BITS_EQUAL(103,ch_data.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(106,ch_data.u32,0x0040f000);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(105,ch_data.channel);
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
  READ_FROM_BUFFER_FULL(123,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_RANGE_MAX(117,ch_data.channel,(channels - 1));
  CHECK_BITS_EQUAL(119,ch_data.n,0);
  CHECK_BITS_EQUAL(120,ch_data.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(123,ch_data.u32,0x0000f000);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(122,ch_data.channel);
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
  READ_FROM_BUFFER_FULL(1172,uint32 ,failure,failure.u32);
  CHECK_UNNAMED_BITS_ZERO(1172,failure.u32,0x003fff00);
  // if(failure.has_continous_event_counter)

  if (failure.has_continous_event_counter)
  {
    // UINT32 continous_event_counter;
    READ_FROM_BUFFER(1175,uint32 ,continous_event_counter);
  }
  // if(failure.has_time_stamp)

  if (failure.has_time_stamp)
  {
    // UINT32 time_stamp;
    READ_FROM_BUFFER(1179,uint32 ,time_stamp);
  }
  // if(failure.has_clock_counter_stamp)

  if (failure.has_clock_counter_stamp)
  {
    // UINT32 clock_counter_stamp;
    READ_FROM_BUFFER(1183,uint32 ,clock_counter_stamp);
  }
  // if(failure.has_update_qdc_iped_value)

  if (failure.has_update_qdc_iped_value)
  {
    // UINT32 iped;
    READ_FROM_BUFFER(1187,uint32 ,iped);
  }
  // if(failure.has_multi_event)

  if (failure.has_multi_event)
  {
    // UINT32 multi_events;
    READ_FROM_BUFFER(1191,uint32 ,multi_events);
  }
  // if(failure.has_multi_trlo_ii_counter0)

  if (failure.has_multi_trlo_ii_counter0)
  {
    // UINT32 multi_trlo_ii_counter0;
    READ_FROM_BUFFER(1195,uint32 ,multi_trlo_ii_counter0);
  }
  // if(failure.has_multi_scaler_counter0)

  if (failure.has_multi_scaler_counter0)
  {
    // UINT32 multi_scaler_counter0;
    READ_FROM_BUFFER(1199,uint32 ,multi_scaler_counter0);
  }
  // if(failure.has_multi_adctdc_counter0)

  if (failure.has_multi_adctdc_counter0)
  {
    // UINT32 multi_adctdc_counter0;
    READ_FROM_BUFFER(1203,uint32 ,multi_adctdc_counter0);
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
  READ_FROM_BUFFER(952,uint32 ,sec);
  // UINT32 frac;
  READ_FROM_BUFFER(953,uint32 ,frac);
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
  READ_FROM_BUFFER_FULL(964,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(963,header.id,id);
  CHECK_UNNAMED_BITS_ZERO(964,header.u32,0x00fe0000);
  // MARK_COUNT(start);
  void *__mark_start = __buffer._data;
  // UINT32 server_id;
  READ_FROM_BUFFER(968,uint32 ,server_id);
  // UINT32 sspp
  // {
    //  0_07: precision;
    //  8_15: poll;
    // 16_19: stratum;
    // 24_26: mode;
    // 27_29: version = CHECK(3);
    // 30_31: leap;
  // }
  READ_FROM_BUFFER_FULL(980,uint32 ,sspp,sspp.u32);
  CHECK_BITS_EQUAL(978,sspp.version,3);
  CHECK_UNNAMED_BITS_ZERO(980,sspp.u32,0x00f00000);
  // UINT32 root_dly
  // {
    //  0_15: frac;
    // 16_31: sec;
  // }
  READ_FROM_BUFFER_FULL(986,uint32 ,root_dly,root_dly.u32);
  // UINT32 root_disp
  // {
    //  0_15: frac;
    // 16_31: sec;
  // }
  READ_FROM_BUFFER_FULL(991,uint32 ,root_disp,root_disp.u32);
  // UINT32 refid;
  READ_FROM_BUFFER(992,uint32 ,refid);
  // reftime = NTP64_TIME();
  UNPACK_DECL(994,NTP64_TIME,reftime);
  // origtime = NTP64_TIME();
  UNPACK_DECL(995,NTP64_TIME,origtime);
  // rectime = NTP64_TIME();
  UNPACK_DECL(996,NTP64_TIME,rectime);
  // tmittime = NTP64_TIME();
  UNPACK_DECL(997,NTP64_TIME,tmittime);
  // rxtime = NTP64_TIME();
  UNPACK_DECL(1000,NTP64_TIME,rxtime);
  // if(header.quick_burst)

  if (header.quick_burst)
  {
    // orig2time = NTP64_TIME();
    UNPACK_DECL(1004,NTP64_TIME,orig2time);
    // rec2time = NTP64_TIME();
    UNPACK_DECL(1005,NTP64_TIME,rec2time);
    // tmit2time = NTP64_TIME();
    UNPACK_DECL(1006,NTP64_TIME,tmit2time);
    // rx2time = NTP64_TIME();
    UNPACK_DECL(1007,NTP64_TIME,rx2time);
  }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_count,start,end,0,4)
  CHECK_WORD_COUNT(1012,header.word_count,start,end,0,4);
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
  READ_FROM_BUFFER(1020,uint32 ,soft_latches);
  // UINT32 hard_latches;
  READ_FROM_BUFFER(1021,uint32 ,hard_latches);
  // UINT32 clock_ticks;
  READ_FROM_BUFFER(1022,uint32 ,clock_ticks);
  // before = NTP64_TIME();
  UNPACK_DECL(1023,NTP64_TIME,before);
  // after = NTP64_TIME();
  UNPACK_DECL(1024,NTP64_TIME,after);
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
  READ_FROM_BUFFER_FULL(1041,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1040,header.id,id);
  CHECK_UNNAMED_BITS_ZERO(1041,header.u32,0x00f00000);
  // MARK_COUNT(start);
  void *__mark_start = __buffer._data;
  // if(header.has_tstamp1)

  if (header.has_tstamp1)
  {
    // tstamp1 = RANDOM_TCAL_TSTAMP_CLOCK();
    UNPACK_DECL(1047,RANDOM_TCAL_TSTAMP_CLOCK,tstamp1);
  }
  // if(header.has_tstamp2)

  if (header.has_tstamp2)
  {
    // tstamp2 = RANDOM_TCAL_TSTAMP_CLOCK();
    UNPACK_DECL(1051,RANDOM_TCAL_TSTAMP_CLOCK,tstamp2);
  }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_count,start,end,0,4)
  CHECK_WORD_COUNT(1056,header.word_count,start,end,0,4);
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
  READ_FROM_BUFFER_FULL(725,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(722,header.siderem,siderem);
  CHECK_BITS_EQUAL(723,header.gtb,gtb);
  CHECK_BITS_EQUAL(724,header.sam,sam);
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
    READ_FROM_BUFFER_FULL(738,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(735,ch_data.unnamed_28_31,15);
    CHECK_UNNAMED_BITS_ZERO(738,ch_data.u32,0x0e00c000);
    {
      typedef __typeof__(*(&(data[ch_data.adc_no]))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data[ch_data.adc_no].insert_index(737,ch_data.channel);
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
    READ_FROM_BUFFER_FULL(1085,uint32 ,ch_data,ch_data.u32);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(1084,index);
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
  READ_FROM_BUFFER_FULL(1372,uint32 ,header,header.u32);
  CHECK_BITS_RANGE_MAX(1367,header.trigger_tac,1);
  CHECK_BITS_RANGE(1368,header.trigger_sam,1,2);
  CHECK_BITS_EQUAL(1370,header.gtb,gtb);
  CHECK_BITS_EQUAL(1371,header.sam,sam);
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
      READ_FROM_BUFFER_FULL(1390,uint32 ,ch_data,ch_data.u32);
      CHECK_BITS_EQUAL(1384,ch_data.unnamed_21_21,0);
      CHECK_BITS_RANGE_MAX(1385,ch_data.channel,16);
      CHECK_BITS_RANGE(1386,ch_data.module,1,30);
      {
        typedef __typeof__(*(&(tac[(ch_data.module - 1)]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = tac[(ch_data.module - 1)].insert_index(1388,ch_data.channel);
        __item.value = ch_data.tac_value;
      }
      {
        typedef __typeof__(*(&(clk[(ch_data.module - 1)]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = clk[(ch_data.module - 1)].insert_index(1389,ch_data.channel);
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
      READ_FROM_BUFFER_FULL(1401,uint32 ,ch_data2,ch_data2.u32);
      CHECK_BITS_EQUAL(1396,ch_data2.unnamed_21_21,1);
      CHECK_BITS_RANGE_MAX(1397,ch_data2.channel,16);
      CHECK_BITS_RANGE(1398,ch_data2.module,1,30);
      {
        typedef __typeof__(*(&(adc[(ch_data2.module - 1)]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = adc[(ch_data2.module - 1)].insert_index(1400,ch_data2.channel);
        __item.value = ch_data2.adc_value;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TACQUILA_DATA::__unpack,uint32 sam,uint32 gtb);

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
  READ_FROM_BUFFER_FULL(1218,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1217,header.id,id);
  CHECK_UNNAMED_BITS_ZERO(1218,header.u32,0x00fffc00);
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
    READ_FROM_BUFFER_FULL(1229,uint32 ,data,data.u32);
    {
      typedef __typeof__(*(&(stamps))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = stamps.append_item(1228);
      __item.value = data.stamp;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLO_SAMPLER::__unpack,uint32 id);

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
  READ_FROM_BUFFER_FULL(427,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(423,header.event_id,event_id);
  CHECK_BITS_EQUAL(425,header.tdc,tdc);
  CHECK_BITS_EQUAL(426,header.unnamed_27_31,1);
  CHECK_UNNAMED_BITS_ZERO(427,header.u32,0x04000000);
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
  PEEK_FROM_BUFFER_FULL(454,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(439,ch_data.tdc,tdc,data_done_0);
  CHECK_JUMP_BITS_EQUAL(444,ch_data.unnamed_27_31,0,data_done_0);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(452,((ch_data.tdc << 5) | ch_data.channel_low));
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
  PEEK_FROM_BUFFER_FULL(462,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(460,__error_flags.tdc,tdc,data_done_1);
  CHECK_JUMP_BITS_EQUAL(461,__error_flags.unnamed_27_31,4,data_done_1);
  CHECK_JUMP_UNNAMED_BITS_ZERO(462,__error_flags.u32,0x04ff8000,data_done_1);
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
  READ_FROM_BUFFER_FULL(473,uint32 ,trailer,trailer.u32);
  CHECK_WORD_COUNT(468,trailer.word_count,tdc_start,tdc_end,4,4);
  CHECK_BITS_EQUAL(469,trailer.event_id,header.event_id);
  CHECK_BITS_EQUAL(471,trailer.tdc,tdc);
  CHECK_BITS_EQUAL(472,trailer.unnamed_27_31,3);
  CHECK_UNNAMED_BITS_ZERO(473,trailer.u32,0x04000000);
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
  READ_FROM_BUFFER_FULL(488,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(485,header.geom,geom);
  CHECK_BITS_EQUAL(487,header.unnamed_27_31,8);
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
    PEEK_FROM_BUFFER(496,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(492,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(492,VME_CAEN_V1190_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(493,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(493,VME_CAEN_V1190_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(494,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(494,VME_CAEN_V1190_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(495,spurious_match_abort_loop_0,VME_CAEN_V1190_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(495,VME_CAEN_V1190_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_0:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(502,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(501,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(514,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(508,trailer.geom,geom);
  CHECK_WORD_COUNT(509,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(513,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(514,trailer.u32,0x00f00000);
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
  READ_FROM_BUFFER_FULL(551,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_EQUAL(536,ch_data.tdc,tdc);
  CHECK_BITS_EQUAL(541,ch_data.unnamed_27_31,0);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(549,((ch_data.tdc << 5) | ch_data.channel_low));
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
  READ_FROM_BUFFER_FULL(562,uint32 ,error_flags,error_flags.u32);
  CHECK_BITS_EQUAL(560,error_flags.tdc,tdc);
  CHECK_BITS_EQUAL(561,error_flags.unnamed_27_31,4);
  CHECK_UNNAMED_BITS_ZERO(562,error_flags.u32,0x04ff8000);
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
  READ_FROM_BUFFER_FULL(577,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(574,header.geom,geom);
  CHECK_BITS_EQUAL(576,header.unnamed_27_31,8);
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
    PEEK_FROM_BUFFER(590,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(581,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(581,VME_CAEN_V1190_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(582,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(582,VME_CAEN_V1190_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(583,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(583,VME_CAEN_V1190_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(584,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(584,VME_CAEN_V1190_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(586,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(586,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],__visited1,0);
        UNPACK_DECL(586,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(587,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(587,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],__visited1,1);
        UNPACK_DECL(587,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(588,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(588,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],__visited1,2);
        UNPACK_DECL(588,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(589,spurious_match_abort_loop_1,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(589,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],__visited1,3);
        UNPACK_DECL(589,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_1:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(596,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(595,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(608,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(602,trailer.geom,geom);
  CHECK_WORD_COUNT(603,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(607,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(608,trailer.u32,0x00f00000);
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
  READ_FROM_BUFFER_FULL(222,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(218,header.event_id,event_id);
  CHECK_BITS_EQUAL(220,header.tdc,tdc);
  CHECK_BITS_EQUAL(221,header.unnamed_27_31,1);
  CHECK_UNNAMED_BITS_ZERO(222,header.u32,0x04000000);
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
  PEEK_FROM_BUFFER_FULL(249,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(229,ch_data.tdc,tdc,data_done_2);
  CHECK_JUMP_BITS_EQUAL(239,ch_data.unnamed_27_31,0,data_done_2);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(243,((ch_data.tdc << 3) | ch_data.channel_low));
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
  PEEK_FROM_BUFFER_FULL(257,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(255,__error_flags.tdc,tdc,data_done_3);
  CHECK_JUMP_BITS_EQUAL(256,__error_flags.unnamed_27_31,4,data_done_3);
  CHECK_JUMP_UNNAMED_BITS_ZERO(257,__error_flags.u32,0x04ff8000,data_done_3);
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
  READ_FROM_BUFFER_FULL(268,uint32 ,trailer,trailer.u32);
  CHECK_WORD_COUNT(263,trailer.word_count,tdc_start,tdc_end,4,4);
  CHECK_BITS_EQUAL(264,trailer.event_id,header.event_id);
  CHECK_BITS_EQUAL(266,trailer.tdc,tdc);
  CHECK_BITS_EQUAL(267,trailer.unnamed_27_31,3);
  CHECK_UNNAMED_BITS_ZERO(268,trailer.u32,0x04000000);
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
  READ_FROM_BUFFER_FULL(283,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(280,header.geom,geom);
  CHECK_BITS_EQUAL(282,header.unnamed_27_31,8);
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
    PEEK_FROM_BUFFER(291,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(287,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(287,VME_CAEN_V1290_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(288,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(288,VME_CAEN_V1290_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(289,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(289,VME_CAEN_V1290_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(290,spurious_match_abort_loop_2,VME_CAEN_V1290_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(290,VME_CAEN_V1290_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_2:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(297,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(296,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(309,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(303,trailer.geom,geom);
  CHECK_WORD_COUNT(304,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(308,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(309,trailer.u32,0x00f00000);
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
  READ_FROM_BUFFER_FULL(346,uint32 ,ch_data,ch_data.u32);
  CHECK_BITS_EQUAL(326,ch_data.tdc,tdc);
  CHECK_BITS_EQUAL(336,ch_data.unnamed_27_31,0);
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(340,((ch_data.tdc << 3) | ch_data.channel_low));
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
  READ_FROM_BUFFER_FULL(357,uint32 ,error_flags,error_flags.u32);
  CHECK_BITS_EQUAL(355,error_flags.tdc,tdc);
  CHECK_BITS_EQUAL(356,error_flags.unnamed_27_31,4);
  CHECK_UNNAMED_BITS_ZERO(357,error_flags.u32,0x04ff8000);
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
  READ_FROM_BUFFER_FULL(372,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(369,header.geom,geom);
  CHECK_BITS_EQUAL(371,header.unnamed_27_31,8);
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
    PEEK_FROM_BUFFER(385,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(376,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(376,VME_CAEN_V1290_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(377,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(377,VME_CAEN_V1290_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(378,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(378,VME_CAEN_V1290_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(379,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(379,VME_CAEN_V1290_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(381,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(381,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],__visited2,0);
        UNPACK_DECL(381,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(382,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(382,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],__visited2,1);
        UNPACK_DECL(382,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(383,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(383,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],__visited2,2);
        UNPACK_DECL(383,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(384,spurious_match_abort_loop_3,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(384,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],__visited2,3);
        UNPACK_DECL(384,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_3:;
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  READ_FROM_BUFFER_FULL(391,uint32 ,trigger,trigger.u32);
  CHECK_BITS_EQUAL(390,trigger.unnamed_27_31,17);
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
  READ_FROM_BUFFER_FULL(403,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(397,trailer.geom,geom);
  CHECK_WORD_COUNT(398,trailer.word_count,v1190_start,v1190_end,4,4);
  CHECK_BITS_EQUAL(402,trailer.unnamed_27_31,16);
  CHECK_UNNAMED_BITS_ZERO(403,trailer.u32,0x00f00000);
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
  READ_FROM_BUFFER_FULL(141,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(138,header.crate,crate);
  CHECK_BITS_EQUAL(139,header.unnamed_24_26,2);
  CHECK_BITS_EQUAL(140,header.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(141,header.u32,0x0000c0ff);
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
    READ_FROM_BUFFER_FULL(161,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(157,ch_data.unnamed_24_26,0);
    CHECK_BITS_EQUAL(158,ch_data.geom,geom);
    CHECK_UNNAMED_BITS_ZERO(161,ch_data.u32,0x00e08000);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(160,ch_data.channel);
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
  READ_FROM_BUFFER_FULL(170,uint32 ,eob,eob.u32);
  CHECK_BITS_EQUAL(167,eob.unnamed_24_26,4);
  CHECK_BITS_EQUAL(168,eob.geom,geom);
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
  READ_FROM_BUFFER_FULL(189,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(187,header.unnamed_26_26,1);
  CHECK_BITS_EQUAL(188,header.geom,geom);
  CHECK_UNNAMED_BITS_ZERO(189,header.u32,0x03000000);
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
    READ_FROM_BUFFER_FULL(200,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(196,ch_data.unnamed_26_26,0);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(199,ch_data.channel);
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
  READ_FROM_BUFFER_FULL(628,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(625,header.geom,geom);
  CHECK_BITS_EQUAL(626,header.unnamed_24_29,0);
  CHECK_BITS_EQUAL(627,header.unnamed_30_31,1);
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
  PEEK_FROM_BUFFER_FULL(639,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(635,ch_data.unnamed_21_29,32,data_done_4);
  CHECK_JUMP_BITS_EQUAL(636,ch_data.unnamed_30_31,0,data_done_4);
  CHECK_JUMP_UNNAMED_BITS_ZERO(639,ch_data.u32,0x0000a000,data_done_4);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(638,ch_data.channel);
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
  PEEK_FROM_BUFFER_FULL(645,uint32 ,filler,filler.u32);
  CHECK_JUMP_BITS_EQUAL(644,filler.unnamed_0_31,0,data_done_5);
  __buffer.advance(sizeof(filler.u32));
  data_done_5:;
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  READ_FROM_BUFFER_FULL(651,uint32 ,end_of_event,end_of_event.u32);
  CHECK_BITS_EQUAL(650,end_of_event.unnamed_30_31,3);
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
  CHECK_WORD_COUNT(654,header.word_number,start,end,( - 4),4);
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
  READ_FROM_BUFFER_FULL(672,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(669,header.geom,geom);
  CHECK_BITS_EQUAL(670,header.unnamed_24_29,0);
  CHECK_BITS_EQUAL(671,header.unnamed_30_31,1);
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
  PEEK_FROM_BUFFER_FULL(684,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(680,ch_data.unnamed_24_27,0,data_done_6);
  CHECK_JUMP_BITS_EQUAL(681,ch_data.unnamed_28_31,1,data_done_6);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(683,ch_data.channel);
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
  PEEK_FROM_BUFFER_FULL(689,uint32 ,fill_word,fill_word.u32);
  CHECK_JUMP_BITS_EQUAL(688,fill_word.unnamed_0_31,0,data_done_7);
  __buffer.advance(sizeof(fill_word.u32));
  }
  data_done_7:;
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  READ_FROM_BUFFER_FULL(695,uint32 ,end_of_event,end_of_event.u32);
  CHECK_BITS_EQUAL(694,end_of_event.unnamed_30_31,3);
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
  CHECK_WORD_COUNT(698,header.word_number,start,end,( - 4),4);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_MESYTEC_MDPP16::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_VUPROM_V35.
 *
 * Do not edit - automatically generated.
 */

// VME_VUPROM_V35()
template<typename __data_src_t>
void VME_VUPROM_V35::__unpack(__data_src_t &__buffer)
{
  // MEMBER(DATA12 data[192] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_08: word_number;
    //     9: raw_marker;
    // 10_15: 0;
    // 16_23: geom;
    // 24_31: 254;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_number : 9; // 0..8
      uint32 raw_marker : 1; // 9
      uint32 unnamed_10_15 : 6; // 10..15
      uint32 geom : 8; // 16..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 geom : 8; // 16..23
      uint32 unnamed_10_15 : 6; // 10..15
      uint32 raw_marker : 1; // 9
      uint32 word_number : 9; // 0..8
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(1334,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1331,header.unnamed_10_15,0);
  CHECK_BITS_EQUAL(1333,header.unnamed_24_31,254);
  // list(0<=index<header.word_number)

  for (uint32 index = 0; index < (uint32) (header.word_number); ++index)
  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_09: value;
      // 10_15: 0;
      // 16_23: channel;
      // 24_31: geom;
      // ENCODE(data[channel],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 10; // 0..9
        uint32 unnamed_10_15 : 6; // 10..15
        uint32 channel : 8; // 16..23
        uint32 geom : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 geom : 8; // 24..31
        uint32 channel : 8; // 16..23
        uint32 unnamed_10_15 : 6; // 10..15
        uint32 value : 10; // 0..9
#endif
      };
      uint32  u32;
    } ch_data;
    READ_FROM_BUFFER_FULL(1346,uint32 ,ch_data,ch_data.u32);
    CHECK_BITS_EQUAL(1341,ch_data.unnamed_10_15,0);
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(1345,ch_data.channel);
      __item.value = ch_data.value;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,VME_VUPROM_V35::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for CB_VME_LEFT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CB_VME_LEFT)
template<typename __data_src_t>
void CB_VME_LEFT::__unpack(__data_src_t &__buffer)
{
  // vme = LAND_STD_VME();
  UNPACK_DECL(1296,LAND_STD_VME,vme);
  // select several

    // adc[0] = VME_MESYTEC_MADC32(geom=0);
    // adc[1] = VME_MESYTEC_MADC32(geom=1);
    // adc[2] = VME_MESYTEC_MADC32(geom=2);
    // adc[3] = VME_MESYTEC_MADC32(geom=3);
    // madc0_psp = VME_MESYTEC_MADC32(geom=4);
    // tdc = VME_VUPROM_V35();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_MESYTEC_MADC32 adc[0]: (s32) => (0xffff0000,0x40000000)
    // optimized match 2: VME_MESYTEC_MADC32 adc[1]: (s32) => (0xffff0000,0x40010000)
    // optimized match 3: VME_MESYTEC_MADC32 adc[2]: (s32) => (0xffff0000,0x40020000)
    // optimized match 4: VME_MESYTEC_MADC32 adc[3]: (s32) => (0xffff0000,0x40030000)
    // optimized match 5: VME_MESYTEC_MADC32 madc0_psp: (s32) => (0xffff0000,0x40040000)
    // optimized match 6: VME_VUPROM_V35 tdc: (s32) => (0xff00fc00,0xfe000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1305,uint32,__match_peek);
    // differ = be070000 : 16 17 18 25 26 27 28 29 31
    // select on bit 17, partition: 1:4(d2) 0:3(d3)
    if (__match_peek & 0x00020000) {
      MATCH_DECL_QUICK(1301,__match_no,3,adc[2],__match_peek,0xffff0000,0x40020000);
      MATCH_DECL_QUICK(1302,__match_no,4,adc[3],__match_peek,0xffff0000,0x40030000);
      MATCH_DECL_QUICK(1304,__match_no,6,tdc,__match_peek,0xff00fc00,0xfe000000);
    } else {
      // select on bit 31, partition: 1:3(d1) 0:1(d3)
      if (__match_peek & 0x80000000) {
        UNPACK_DECL(1304,VME_VUPROM_V35,tdc);
        continue;
      } else {
        MATCH_DECL_QUICK(1299,__match_no,1,adc[0],__match_peek,0xffff0000,0x40000000);
        MATCH_DECL_QUICK(1300,__match_no,2,adc[1],__match_peek,0xffff0000,0x40010000);
        MATCH_DECL_QUICK(1303,__match_no,5,madc0_psp,__match_peek,0xffff0000,0x40040000);
      }
    }
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(1299,VME_MESYTEC_MADC32,adc[0],/*geom*/0);
        break;
      case 2:
        UNPACK_DECL(1300,VME_MESYTEC_MADC32,adc[1],/*geom*/1);
        break;
      case 3:
        UNPACK_DECL(1301,VME_MESYTEC_MADC32,adc[2],/*geom*/2);
        break;
      case 4:
        UNPACK_DECL(1302,VME_MESYTEC_MADC32,adc[3],/*geom*/3);
        break;
      case 5:
        UNPACK_DECL(1303,VME_MESYTEC_MADC32,madc0_psp,/*geom*/4);
        break;
      case 6:
        UNPACK_DECL(1304,VME_VUPROM_V35,tdc);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,CB_VME_LEFT::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for CB_VME_RIGHT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CB_VME_RIGHT)
template<typename __data_src_t>
void CB_VME_RIGHT::__unpack(__data_src_t &__buffer)
{
  // vme = LAND_STD_VME();
  UNPACK_DECL(1283,LAND_STD_VME,vme);
  // select several

    // adc[0] = VME_MESYTEC_MADC32(geom=0);
    // adc[1] = VME_MESYTEC_MADC32(geom=1);
    // adc[2] = VME_MESYTEC_MADC32(geom=2);
    // adc[3] = VME_MESYTEC_MADC32(geom=3);
    // tdc = VME_VUPROM_V35();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_MESYTEC_MADC32 adc[0]: (s32) => (0xffff0000,0x40000000)
    // optimized match 2: VME_MESYTEC_MADC32 adc[1]: (s32) => (0xffff0000,0x40010000)
    // optimized match 3: VME_MESYTEC_MADC32 adc[2]: (s32) => (0xffff0000,0x40020000)
    // optimized match 4: VME_MESYTEC_MADC32 adc[3]: (s32) => (0xffff0000,0x40030000)
    // optimized match 5: VME_VUPROM_V35 tdc: (s32) => (0xff00fc00,0xfe000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1291,uint32,__match_peek);
    // differ = be030000 : 16 17 25 26 27 28 29 31
    // select on bit 17, partition: 1:3(d2) 0:3(d2)
    if (__match_peek & 0x00020000) {
      MATCH_DECL_QUICK(1288,__match_no,3,adc[2],__match_peek,0xffff0000,0x40020000);
      MATCH_DECL_QUICK(1289,__match_no,4,adc[3],__match_peek,0xffff0000,0x40030000);
      MATCH_DECL_QUICK(1290,__match_no,5,tdc,__match_peek,0xff00fc00,0xfe000000);
    } else {
      MATCH_DECL_QUICK(1286,__match_no,1,adc[0],__match_peek,0xffff0000,0x40000000);
      MATCH_DECL_QUICK(1287,__match_no,2,adc[1],__match_peek,0xffff0000,0x40010000);
      MATCH_DECL_QUICK(1290,__match_no,5,tdc,__match_peek,0xff00fc00,0xfe000000);
    }
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(1286,VME_MESYTEC_MADC32,adc[0],/*geom*/0);
        break;
      case 2:
        UNPACK_DECL(1287,VME_MESYTEC_MADC32,adc[1],/*geom*/1);
        break;
      case 3:
        UNPACK_DECL(1288,VME_MESYTEC_MADC32,adc[2],/*geom*/2);
        break;
      case 4:
        UNPACK_DECL(1289,VME_MESYTEC_MADC32,adc[3],/*geom*/3);
        break;
      case 5:
        UNPACK_DECL(1290,VME_VUPROM_V35,tdc);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,CB_VME_RIGHT::__unpack);

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
    PEEK_FROM_BUFFER(923,uint32,__match_peek);
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
        UNPACK_CHECK_NO_REVISIT(921,CROS3_REWRITE,ccb[0],__visited3,0);
        UNPACK_DECL(921,CROS3_REWRITE,ccb[0],/*ccb_id*/1);
        break;
      case 2:
        UNPACK_CHECK_NO_REVISIT(922,CROS3_REWRITE,ccb[1],__visited3,1);
        UNPACK_DECL(922,CROS3_REWRITE,ccb[1],/*ccb_id*/2);
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
    MATCH_DECL(775,__match_no,1,EXT_CROS3,ccb[0],/*ccb_id*/1);
    MATCH_DECL(776,__match_no,2,EXT_CROS3,ccb[1],/*ccb_id*/2);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_CHECK_NO_REVISIT(775,EXT_CROS3,ccb[0],__visited4,0);
        UNPACK_DECL(775,EXT_CROS3,ccb[0],/*ccb_id*/1);
        break;
      case 2:
        UNPACK_CHECK_NO_REVISIT(776,EXT_CROS3,ccb[1],__visited4,1);
        UNPACK_DECL(776,EXT_CROS3,ccb[1],/*ccb_id*/2);
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
    PEEK_FROM_BUFFER(1429,uint32,__match_peek);
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
        UNPACK_DECL(1428,DUMMY_WORD,d);
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
  READ_FROM_BUFFER(931,uint16 ,tpat);
  // UINT16 tprev;
  READ_FROM_BUFFER(932,uint16 ,tprev);
  // UINT16 tnext;
  READ_FROM_BUFFER(933,uint16 ,tnext);
  // UINT16 tprev2;
  READ_FROM_BUFFER(934,uint16 ,tprev2);
  // if(EXTERNAL has_data)

  if (has_data())
  {
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
    // tcal = CAMAC_LECROY_2277_1CH_HACK(channel=1,edge=1,high_byte=0);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: CAMAC_LECROY_2277_1CH_HACK tdc: (s32) => (0xffff0000,0x00010000)
    // optimized match 2: CAMAC_LECROY_2277_1CH_HACK tcal: (s32) => (0xffff0000,0x00030000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1142,uint32,__match_peek);
    // differ = 00020000 : 17
    uint32 __match_index = 0 | /* 17,17 */ ((__match_peek >> 17) & 0x00000001);
    static const sint8 __match_index_array[2] = { 1, 2, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(1138,CAMAC_LECROY_2277_1CH_HACK,tdc,/*channel*/0,/*edge*/1,/*high_byte*/0);
        break;
      case 2:
        UNPACK_DECL(1140,CAMAC_LECROY_2277_1CH_HACK,tcal,/*channel*/1,/*edge*/1,/*high_byte*/0);
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
  UNPACK_DECL(1091,CAMAC_LECROY_4434,scaler0,/*channels*/32);
  // scaler1 = CAMAC_LECROY_4434(channels=32);
  UNPACK_DECL(1092,CAMAC_LECROY_4434,scaler1,/*channels*/32);
  // scaler2 = CAMAC_LECROY_4434(channels=32);
  UNPACK_DECL(1093,CAMAC_LECROY_4434,scaler2,/*channels*/32);
  // scaler3 = SOFT_SCALER32(channels=16);
  UNPACK_DECL(1095,SOFT_SCALER32,scaler3,/*channels*/16);
  // if(EXTERNAL has_timestamp)

  if (has_timestamp())
  {
    // UINT32 timestamp;
    READ_FROM_BUFFER(1102,uint32 ,timestamp);
    // UINT32 endianess
    // {
      //  0_31: 0x87654321;
    // }
    READ_FROM_BUFFER_FULL(1103,uint32 ,endianess,endianess.u32);
    CHECK_BITS_EQUAL(1103,endianess.unnamed_0_31,0x87654321);
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
  READ_FROM_BUFFER(1109,uint32 ,timestamp);
  // UINT32 endianess
  // {
    //  0_31: 0x87654321;
  // }
  READ_FROM_BUFFER_FULL(1110,uint32 ,endianess,endianess.u32);
  CHECK_BITS_EQUAL(1110,endianess.unnamed_0_31,0x87654321);
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
  READ_FROM_BUFFER(1062,uint32 ,info);
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
    PEEK_FROM_BUFFER(1068,uint32,__match_peek);
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
        UNPACK_DECL(1066,RANDOM_TCAL,rtcal,/*id*/231);
        break;
      case 2:
        UNPACK_DECL(1067,NTP_MESSAGE,ntp,/*id*/239);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_TCAL_INFO::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for MASTER_VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(MASTER_VME)
template<typename __data_src_t>
void MASTER_VME::__unpack(__data_src_t &__buffer)
{
  // vme = LAND_STD_VME();
  UNPACK_DECL(1235,LAND_STD_VME,vme);
  // select several

    // sampler_pos = TRLO_SAMPLER(id=223);
    // sampler_cb_sum = TRLO_SAMPLER(id=215);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TRLO_SAMPLER sampler_pos: (s32) => (0xfffffc00,0xdf000000)
    // optimized match 2: TRLO_SAMPLER sampler_cb_sum: (s32) => (0xfffffc00,0xd7000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1241,uint32,__match_peek);
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
        UNPACK_DECL(1239,TRLO_SAMPLER,sampler_pos,/*id*/223);
        break;
      case 2:
        UNPACK_DECL(1240,TRLO_SAMPLER,sampler_cb_sum,/*id*/215);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,MASTER_VME::__unpack);

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

    // external sst[0] = EXT_SST(siderem=1,gtb=0,sam=5,branch=1);
    // external sst[1] = EXT_SST(siderem=2,gtb=0,sam=5,branch=1);
    // external sst[2] = EXT_SST(siderem=1,gtb=1,sam=5,branch=1);
    // external sst[3] = EXT_SST(siderem=2,gtb=1,sam=5,branch=1);
    // external sst[4] = EXT_SST(siderem=1,gtb=0,sam=6,branch=1);
    // external sst[5] = EXT_SST(siderem=2,gtb=0,sam=6,branch=1);
    // external sst[6] = EXT_SST(siderem=1,gtb=1,sam=6,branch=1);
    // external sst[7] = EXT_SST(siderem=2,gtb=1,sam=6,branch=1);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: EXT_SST sst[0]: could not get bits
    __buffer.peeking();
    MATCH_DECL(746,__match_no,1,EXT_SST,sst[0],/*sam*/5,/*gtb*/0,/*siderem*/1,/*branch*/1);
    MATCH_DECL(747,__match_no,2,EXT_SST,sst[1],/*sam*/5,/*gtb*/0,/*siderem*/2,/*branch*/1);
    MATCH_DECL(748,__match_no,3,EXT_SST,sst[2],/*sam*/5,/*gtb*/1,/*siderem*/1,/*branch*/1);
    MATCH_DECL(749,__match_no,4,EXT_SST,sst[3],/*sam*/5,/*gtb*/1,/*siderem*/2,/*branch*/1);
    MATCH_DECL(750,__match_no,5,EXT_SST,sst[4],/*sam*/6,/*gtb*/0,/*siderem*/1,/*branch*/1);
    MATCH_DECL(751,__match_no,6,EXT_SST,sst[5],/*sam*/6,/*gtb*/0,/*siderem*/2,/*branch*/1);
    MATCH_DECL(752,__match_no,7,EXT_SST,sst[6],/*sam*/6,/*gtb*/1,/*siderem*/1,/*branch*/1);
    MATCH_DECL(753,__match_no,8,EXT_SST,sst[7],/*sam*/6,/*gtb*/1,/*siderem*/2,/*branch*/1);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(746,EXT_SST,sst[0],/*sam*/5,/*gtb*/0,/*siderem*/1,/*branch*/1);
        break;
      case 2:
        UNPACK_DECL(747,EXT_SST,sst[1],/*sam*/5,/*gtb*/0,/*siderem*/2,/*branch*/1);
        break;
      case 3:
        UNPACK_DECL(748,EXT_SST,sst[2],/*sam*/5,/*gtb*/1,/*siderem*/1,/*branch*/1);
        break;
      case 4:
        UNPACK_DECL(749,EXT_SST,sst[3],/*sam*/5,/*gtb*/1,/*siderem*/2,/*branch*/1);
        break;
      case 5:
        UNPACK_DECL(750,EXT_SST,sst[4],/*sam*/6,/*gtb*/0,/*siderem*/1,/*branch*/1);
        break;
      case 6:
        UNPACK_DECL(751,EXT_SST,sst[5],/*sam*/6,/*gtb*/0,/*siderem*/2,/*branch*/1);
        break;
      case 7:
        UNPACK_DECL(752,EXT_SST,sst[6],/*sam*/6,/*gtb*/1,/*siderem*/1,/*branch*/1);
        break;
      case 8:
        UNPACK_DECL(753,EXT_SST,sst[7],/*sam*/6,/*gtb*/1,/*siderem*/2,/*branch*/1);
        break;
    }
  }
  // optional UINT32 error_marker
  // {
    //  0_31: 0x89abdcef;
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
  } __error_marker;
  if (__buffer.empty()) goto data_done_8;
  PEEK_FROM_BUFFER_FULL(759,uint32 ,error_marker,__error_marker.u32);
  CHECK_JUMP_BITS_EQUAL(758,__error_marker.unnamed_0_31,0x89abdcef,data_done_8);
  error_marker.u32 = __error_marker.u32;
  __buffer.advance(sizeof(__error_marker.u32));
  data_done_8:;
  // optional UINT32 error_marker2
  // {
    //  0_31: 0x89abcdef;
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
  } __error_marker2;
  if (__buffer.empty()) goto data_done_9;
  PEEK_FROM_BUFFER_FULL(764,uint32 ,error_marker2,__error_marker2.u32);
  CHECK_JUMP_BITS_EQUAL(763,__error_marker2.unnamed_0_31,0x89abcdef,data_done_9);
  error_marker2.u32 = __error_marker2.u32;
  __buffer.advance(sizeof(__error_marker2.u32));
  data_done_9:;
}
FORCE_IMPL_DATA_SRC_FCN(void,SIDEREM01_VME::__unpack);

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
    PEEK_FROM_BUFFER(1414,uint32,__match_peek);
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
        UNPACK_DECL(1411,TACQUILA_DATA,data_sam5_gtb0,/*sam*/5,/*gtb*/0);
        break;
      case 2:
        UNPACK_DECL(1412,TACQUILA_DATA,data_sam6_gtb0,/*sam*/6,/*gtb*/0);
        break;
      case 3:
        UNPACK_DECL(1413,TACQUILA_DATA,data_sam6_gtb1,/*sam*/6,/*gtb*/1);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,TACQUILA_LAND_SUBEVENT::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TACQUILA_NEULAND_SUBEVENT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TACQUILA_NEULAND_SUBEVENT)
template<typename __data_src_t>
void TACQUILA_NEULAND_SUBEVENT::__unpack(__data_src_t &__buffer)
{
  // select several

    // data_sam7_gtb0 = TACQUILA_DATA(sam=7,gtb=0);
    // data_sam7_gtb1 = TACQUILA_DATA(sam=7,gtb=1);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TACQUILA_DATA data_sam7_gtb0: (s32) => (0xff0ce000,0x70000000)
    // optimized match 2: TACQUILA_DATA data_sam7_gtb1: (s32) => (0xff0ce000,0x71000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1314,uint32,__match_peek);
    // differ = 01000000 : 24
    uint32 __match_index = 0 | /* 24,24 */ ((__match_peek >> 24) & 0x00000001);
    static const sint8 __match_index_array[2] = { 1, 2, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(1312,TACQUILA_DATA,data_sam7_gtb0,/*sam*/7,/*gtb*/0);
        break;
      case 2:
        UNPACK_DECL(1313,TACQUILA_DATA,data_sam7_gtb1,/*sam*/7,/*gtb*/1);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,TACQUILA_NEULAND_SUBEVENT::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CRATE1.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(VME_CRATE1)
template<typename __data_src_t>
void VME_CRATE1::__unpack(__data_src_t &__buffer)
{
  // vme = LAND_STD_VME();
  UNPACK_DECL(1246,LAND_STD_VME,vme);
  // select several

    // qdc792POS_ROLU = VME_CAEN_V775(geom=31,crate=1);
    // tdc775POS_ROLU = VME_CAEN_V775(geom=31,crate=130);
    // qdc792PIXEL = VME_CAEN_V775(geom=31,crate=3);
    // scaler = VME_CAEN_V830(geom=0);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_CAEN_V775 qdc792POS_ROLU: (s32) => (0xffffc0ff,0xfa010000)
    // optimized match 2: VME_CAEN_V775 tdc775POS_ROLU: (s32) => (0xffffc0ff,0xfa820000)
    // optimized match 3: VME_CAEN_V775 qdc792PIXEL: (s32) => (0xffffc0ff,0xfa030000)
    // optimized match 4: VME_CAEN_V830 scaler: (s32) => (0xff000000,0x04000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1255,uint32,__match_peek);
    // differ = fe830000 : 16 17 23 25 26 27 28 29 30 31
    // select on bit 31, partition: 1:1(d3) 0:3(d1)
    if (__match_peek & 0x80000000) {
      MATCH_DECL_QUICK(1250,__match_no,1,qdc792POS_ROLU,__match_peek,0xffffc0ff,0xfa010000);
      MATCH_DECL_QUICK(1251,__match_no,2,tdc775POS_ROLU,__match_peek,0xffffc0ff,0xfa820000);
      MATCH_DECL_QUICK(1252,__match_no,3,qdc792PIXEL,__match_peek,0xffffc0ff,0xfa030000);
    } else {
      UNPACK_DECL(1254,VME_CAEN_V830,scaler,/*geom*/0);
      continue;
    }
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(1250,VME_CAEN_V775,qdc792POS_ROLU,/*geom*/31,/*crate*/1);
        break;
      case 2:
        UNPACK_DECL(1251,VME_CAEN_V775,tdc775POS_ROLU,/*geom*/31,/*crate*/130);
        break;
      case 3:
        UNPACK_DECL(1252,VME_CAEN_V775,qdc792PIXEL,/*geom*/31,/*crate*/3);
        break;
      case 4:
        UNPACK_DECL(1254,VME_CAEN_V830,scaler,/*geom*/0);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,VME_CRATE1::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CRATE2.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(VME_CRATE2)
template<typename __data_src_t>
void VME_CRATE2::__unpack(__data_src_t &__buffer)
{
  // vme = LAND_STD_VME();
  UNPACK_DECL(1260,LAND_STD_VME,vme);
  // select several

    // qdc792TFW1 = VME_CAEN_V775(geom=31,crate=1);
    // qdc792TFW2 = VME_CAEN_V775(geom=31,crate=2);
    // tdc775TFW1 = VME_CAEN_V775(geom=31,crate=131);
    // tdc775TFW2 = VME_CAEN_V775(geom=31,crate=132);
    // tdc775NTF = VME_CAEN_V775(geom=31,crate=6);
    // qdc792NTF = VME_CAEN_V775(geom=31,crate=133);
    // qdc792GFI1 = VME_CAEN_V775(geom=31,crate=7);
    // qdc792GFI2 = VME_CAEN_V775(geom=31,crate=8);
    // qdc792GFI3 = VME_CAEN_V775(geom=31,crate=9);
    // qdc792MFITEST = VME_CAEN_V775(geom=31,crate=10);
    // scaler = VME_CAEN_V830(geom=0);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_CAEN_V775 qdc792TFW1: (s32) => (0xffffc0ff,0xfa010000)
    // optimized match 2: VME_CAEN_V775 qdc792TFW2: (s32) => (0xffffc0ff,0xfa020000)
    // optimized match 3: VME_CAEN_V775 tdc775TFW1: (s32) => (0xffffc0ff,0xfa830000)
    // optimized match 4: VME_CAEN_V775 tdc775TFW2: (s32) => (0xffffc0ff,0xfa840000)
    // optimized match 5: VME_CAEN_V775 tdc775NTF: (s32) => (0xffffc0ff,0xfa060000)
    // optimized match 6: VME_CAEN_V775 qdc792NTF: (s32) => (0xffffc0ff,0xfa850000)
    // optimized match 7: VME_CAEN_V775 qdc792GFI1: (s32) => (0xffffc0ff,0xfa070000)
    // optimized match 8: VME_CAEN_V775 qdc792GFI2: (s32) => (0xffffc0ff,0xfa080000)
    // optimized match 9: VME_CAEN_V775 qdc792GFI3: (s32) => (0xffffc0ff,0xfa090000)
    // optimized match 10: VME_CAEN_V775 qdc792MFITEST: (s32) => (0xffffc0ff,0xfa0a0000)
    // optimized match 11: VME_CAEN_V830 scaler: (s32) => (0xff000000,0x04000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1278,uint32,__match_peek);
    // differ = fe8f0000 : 16 17 18 19 23 25 26 27 28 29 30 31
    // select on bit 17, partition: 1:6(d5) 0:6(d5)
    if (__match_peek & 0x00020000) {
      // select on bit 18, partition: 1:4(d2) 0:3(d3)
      if (__match_peek & 0x00040000) {
        MATCH_DECL_QUICK(1268,__match_no,5,tdc775NTF,__match_peek,0xffffc0ff,0xfa060000);
        MATCH_DECL_QUICK(1271,__match_no,7,qdc792GFI1,__match_peek,0xffffc0ff,0xfa070000);
        MATCH_DECL_QUICK(1277,__match_no,11,scaler,__match_peek,0xff000000,0x04000000);
      } else {
        // select on bit 31, partition: 1:1(d3) 0:3(d1)
        if (__match_peek & 0x80000000) {
          MATCH_DECL_QUICK(1265,__match_no,2,qdc792TFW2,__match_peek,0xffffc0ff,0xfa020000);
          MATCH_DECL_QUICK(1266,__match_no,3,tdc775TFW1,__match_peek,0xffffc0ff,0xfa830000);
          MATCH_DECL_QUICK(1275,__match_no,10,qdc792MFITEST,__match_peek,0xffffc0ff,0xfa0a0000);
        } else {
          UNPACK_DECL(1277,VME_CAEN_V830,scaler,/*geom*/0);
          continue;
        }
      }
    } else {
      // select on bit 23, partition: 1:4(d2) 0:3(d3)
      if (__match_peek & 0x00800000) {
        MATCH_DECL_QUICK(1267,__match_no,4,tdc775TFW2,__match_peek,0xffffc0ff,0xfa840000);
        MATCH_DECL_QUICK(1269,__match_no,6,qdc792NTF,__match_peek,0xffffc0ff,0xfa850000);
        MATCH_DECL_QUICK(1277,__match_no,11,scaler,__match_peek,0xff000000,0x04000000);
      } else {
        // select on bit 31, partition: 1:1(d3) 0:3(d1)
        if (__match_peek & 0x80000000) {
          MATCH_DECL_QUICK(1264,__match_no,1,qdc792TFW1,__match_peek,0xffffc0ff,0xfa010000);
          MATCH_DECL_QUICK(1272,__match_no,8,qdc792GFI2,__match_peek,0xffffc0ff,0xfa080000);
          MATCH_DECL_QUICK(1273,__match_no,9,qdc792GFI3,__match_peek,0xffffc0ff,0xfa090000);
        } else {
          UNPACK_DECL(1277,VME_CAEN_V830,scaler,/*geom*/0);
          continue;
        }
      }
    }
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(1264,VME_CAEN_V775,qdc792TFW1,/*geom*/31,/*crate*/1);
        break;
      case 2:
        UNPACK_DECL(1265,VME_CAEN_V775,qdc792TFW2,/*geom*/31,/*crate*/2);
        break;
      case 3:
        UNPACK_DECL(1266,VME_CAEN_V775,tdc775TFW1,/*geom*/31,/*crate*/131);
        break;
      case 4:
        UNPACK_DECL(1267,VME_CAEN_V775,tdc775TFW2,/*geom*/31,/*crate*/132);
        break;
      case 5:
        UNPACK_DECL(1268,VME_CAEN_V775,tdc775NTF,/*geom*/31,/*crate*/6);
        break;
      case 6:
        UNPACK_DECL(1269,VME_CAEN_V775,qdc792NTF,/*geom*/31,/*crate*/133);
        break;
      case 7:
        UNPACK_DECL(1271,VME_CAEN_V775,qdc792GFI1,/*geom*/31,/*crate*/7);
        break;
      case 8:
        UNPACK_DECL(1272,VME_CAEN_V775,qdc792GFI2,/*geom*/31,/*crate*/8);
        break;
      case 9:
        UNPACK_DECL(1273,VME_CAEN_V775,qdc792GFI3,/*geom*/31,/*crate*/9);
        break;
      case 10:
        UNPACK_DECL(1275,VME_CAEN_V775,qdc792MFITEST,/*geom*/31,/*crate*/10);
        break;
      case 11:
        UNPACK_DECL(1277,VME_CAEN_V830,scaler,/*geom*/0);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,VME_CRATE2::__unpack);

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
  // acq = DUMMY(type=35,subtype=0xc1c);
  // vme1 = VME_CRATE1(type=88,subtype=0x2260,control=5,subcrate=1);
  // vme2 = VME_CRATE2(type=88,subtype=0x2260,control=5,subcrate=2);
  // vme_cbr = CB_VME_RIGHT(type=88,subtype=0x2260,control=5,subcrate=3);
  // vme_cbl = CB_VME_LEFT(type=88,subtype=0x2260,control=5,subcrate=4);
  // vme_master = MASTER_VME(type=88,subtype=0x2260,subcrate=6);
  // camac_tcal_info = LAND_CAMAC_TCAL_INFO(type=0x26ce,subtype=0xc7f);
  // camac_scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c);
  // pileup = LAND_CAMAC_PILEUP(type=34,subtype=0xdac,control=1);
  // tacquila = TACQUILA_LAND_SUBEVENT(type=94,subtype=0x24b8,subcrate=0);
  // neuland = TACQUILA_NEULAND_SUBEVENT(type=94,subtype=0x24b8,subcrate=1);
  // ignore_unknown_subevent;
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(1435,__match_no,1,((VES10_1_type==85)&&(VES10_1_subtype==0x2134)),cros3);
  MATCH_SUBEVENT_DECL(1437,__match_no,2,((VES10_1_type==85)&&(VES10_1_subtype==0x213e)),cros3_rewrite);
  MATCH_SUBEVENT_DECL(1439,__match_no,3,((VES10_1_type==82)&&(VES10_1_subtype==0x2008)&&(VES10_1_control==3)),sst);
  MATCH_SUBEVENT_DECL(1440,__match_no,4,((VES10_1_type==34)&&(VES10_1_subtype==0xc80)),camac);
  MATCH_SUBEVENT_DECL(1441,__match_no,5,((VES10_1_type==35)&&(VES10_1_subtype==0xc1c)),acq);
  MATCH_SUBEVENT_DECL(1443,__match_no,6,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)&&(VES10_1_subcrate==1)),vme1);
  MATCH_SUBEVENT_DECL(1444,__match_no,7,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)&&(VES10_1_subcrate==2)),vme2);
  MATCH_SUBEVENT_DECL(1446,__match_no,8,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)&&(VES10_1_subcrate==3)),vme_cbr);
  MATCH_SUBEVENT_DECL(1447,__match_no,9,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==5)&&(VES10_1_subcrate==4)),vme_cbl);
  MATCH_SUBEVENT_DECL(1449,__match_no,10,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_subcrate==6)),vme_master);
  MATCH_SUBEVENT_DECL(1451,__match_no,11,((VES10_1_type==0x26ce)&&(VES10_1_subtype==0xc7f)),camac_tcal_info);
  MATCH_SUBEVENT_DECL(1452,__match_no,12,((VES10_1_type==34)&&(VES10_1_subtype==0xc1c)),camac_scalers);
  MATCH_SUBEVENT_DECL(1453,__match_no,13,((VES10_1_type==34)&&(VES10_1_subtype==0xdac)&&(VES10_1_control==1)),pileup);
  MATCH_SUBEVENT_DECL(1455,__match_no,14,((VES10_1_type==94)&&(VES10_1_subtype==0x24b8)&&(VES10_1_subcrate==0)),tacquila);
  MATCH_SUBEVENT_DECL(1456,__match_no,15,((VES10_1_type==94)&&(VES10_1_subtype==0x24b8)&&(VES10_1_subcrate==1)),neuland);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1435,CROS3_SUBEVENT,cros3,0);
      UNPACK_SUBEVENT_DECL(1435,0,CROS3_SUBEVENT,cros3);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1437,CROS3_REWRITE_SUBEVENT,cros3_rewrite,1);
      UNPACK_SUBEVENT_DECL(1437,0,CROS3_REWRITE_SUBEVENT,cros3_rewrite);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1439,SIDEREM01_VME,sst,2);
      UNPACK_SUBEVENT_DECL(1439,0,SIDEREM01_VME,sst);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1440,LAND_CAMAC_CONVERTER,camac,3);
      UNPACK_SUBEVENT_DECL(1440,0,LAND_CAMAC_CONVERTER,camac);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1441,DUMMY,acq,4);
      UNPACK_SUBEVENT_DECL(1441,0,DUMMY,acq);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1443,VME_CRATE1,vme1,5);
      UNPACK_SUBEVENT_DECL(1443,0,VME_CRATE1,vme1);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1444,VME_CRATE2,vme2,6);
      UNPACK_SUBEVENT_DECL(1444,0,VME_CRATE2,vme2);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1446,CB_VME_RIGHT,vme_cbr,7);
      UNPACK_SUBEVENT_DECL(1446,0,CB_VME_RIGHT,vme_cbr);
      break;
    case 9:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1447,CB_VME_LEFT,vme_cbl,8);
      UNPACK_SUBEVENT_DECL(1447,0,CB_VME_LEFT,vme_cbl);
      break;
    case 10:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1449,MASTER_VME,vme_master,9);
      UNPACK_SUBEVENT_DECL(1449,0,MASTER_VME,vme_master);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1451,LAND_CAMAC_TCAL_INFO,camac_tcal_info,10);
      UNPACK_SUBEVENT_DECL(1451,0,LAND_CAMAC_TCAL_INFO,camac_tcal_info);
      break;
    case 12:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1452,LAND_CAMAC_SCALER,camac_scalers,11);
      UNPACK_SUBEVENT_DECL(1452,0,LAND_CAMAC_SCALER,camac_scalers);
      break;
    case 13:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1453,LAND_CAMAC_PILEUP,pileup,12);
      UNPACK_SUBEVENT_DECL(1453,0,LAND_CAMAC_PILEUP,pileup);
      break;
    case 14:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1455,TACQUILA_LAND_SUBEVENT,tacquila,13);
      UNPACK_SUBEVENT_DECL(1455,0,TACQUILA_LAND_SUBEVENT,tacquila);
      break;
    case 15:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(1456,TACQUILA_NEULAND_SUBEVENT,neuland,14);
      UNPACK_SUBEVENT_DECL(1456,0,TACQUILA_NEULAND_SUBEVENT,neuland);
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
