/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for BARRIER.
 *
 * Do not edit - automatically generated.
 */

// BARRIER()
template<typename __data_src_t>
void BARRIER::__unpack(__data_src_t &__buffer)
{
  // UINT32 barrier
  // {
    //  0_31: 0xbabababa;
  // }
  READ_FROM_BUFFER_FULL(704,uint32 ,barrier,barrier.u32);
  CHECK_BITS_EQUAL(703,barrier.unnamed_0_31,0xbabababa);
}
FORCE_IMPL_DATA_SRC_FCN(void,BARRIER::__unpack);

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
 * Event unpacker for FEBEX3_CALIFA_BASE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX3_CALIFA_BASE()
template<typename __data_src_t>
void FEBEX3_CALIFA_BASE::__unpack(__data_src_t &__buffer)
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
  for ( ; ; ) {
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
  if (__buffer.empty()) goto data_done_0;
  PEEK_FROM_BUFFER_FULL(1805,uint32 ,PADDING,PADDING.u32);
  CHECK_JUMP_BITS_EQUAL(1804,PADDING.all,0xadd,data_done_0);
  __buffer.advance(sizeof(PADDING.u32));
  }
  data_done_0:;
  // UINT32 HEADER NOENCODE
  // {
    //  0_07: header_size;
    //  8_11: trigger;
    // 12_15: sfp_id;
    // 16_23: module_id;
    // 24_31: submemory_id;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 header_size : 8; // 0..7
      uint32 trigger : 4; // 8..11
      uint32 sfp_id : 4; // 12..15
      uint32 module_id : 8; // 16..23
      uint32 submemory_id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 submemory_id : 8; // 24..31
      uint32 module_id : 8; // 16..23
      uint32 sfp_id : 4; // 12..15
      uint32 trigger : 4; // 8..11
      uint32 header_size : 8; // 0..7
#endif
    };
    uint32  u32;
  } HEADER;
  READ_FROM_BUFFER_FULL(1814,uint32 ,HEADER,HEADER.u32);
  // UINT32 DATASIZE NOENCODE
  // {
    //  0_15: sizebytes;
    // 16_31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 sizebytes : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 sizebytes : 16; // 0..15
#endif
    };
    uint32  u32;
  } DATASIZE;
  READ_FROM_BUFFER_FULL(1819,uint32 ,DATASIZE,DATASIZE.u32);
  CHECK_BITS_EQUAL(1818,DATASIZE.unnamed_16_31,0);
  // if((DATASIZE.sizebytes > 0))

  if ((DATASIZE.sizebytes > 0))
  {
    // if((HEADER.submemory_id == 255))

    // else

    if ((HEADER.submemory_id == 255))
    {
      // list(0<=index<(DATASIZE.sizebytes / 4))

      for (uint32 index = 0; index < (uint32) ((DATASIZE.sizebytes / 4)); ++index)
      {
        // UINT32 SYNCHRO NOENCODE;
        uint32  SYNCHRO;READ_FROM_BUFFER(1826,uint32 ,SYNCHRO);
      }
    }

    else
    {
      // UINT32 HEADER_MAGIC NOENCODE
      // {
        //  0_15: sizebytes = MATCH(DATASIZE.sizebytes);
        // 16_31: magic;
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 sizebytes : 16; // 0..15
          uint32 magic : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 magic : 16; // 16..31
          uint32 sizebytes : 16; // 0..15
#endif
        };
        uint32  u32;
      } HEADER_MAGIC;
      READ_FROM_BUFFER_FULL(1833,uint32 ,HEADER_MAGIC,HEADER_MAGIC.u32);
      CHECK_BITS_EQUAL(1831,HEADER_MAGIC.sizebytes,DATASIZE.sizebytes);
      // if((HEADER_MAGIC.magic == 0x115a))

      // else

      if ((HEADER_MAGIC.magic == 0x115a))
      {
        // UINT32 eventid NOENCODE;
        uint32  eventid;READ_FROM_BUFFER(1835,uint32 ,eventid);
        // UINT32 timestamp_lsb NOENCODE;
        uint32  timestamp_lsb;READ_FROM_BUFFER(1836,uint32 ,timestamp_lsb);
        // UINT32 timestamp_msb NOENCODE;
        uint32  timestamp_msb;READ_FROM_BUFFER(1837,uint32 ,timestamp_msb);
        // UINT16 cfd_sample_val1 NOENCODE;
        uint16  cfd_sample_val1;READ_FROM_BUFFER(1839,uint16 ,cfd_sample_val1);
        // UINT16 cfd_sample_val2 NOENCODE;
        uint16  cfd_sample_val2;READ_FROM_BUFFER(1840,uint16 ,cfd_sample_val2);
        // UINT16 cfd_sample_val3 NOENCODE;
        uint16  cfd_sample_val3;READ_FROM_BUFFER(1841,uint16 ,cfd_sample_val3);
        // UINT16 cfd_sample_val4 NOENCODE;
        uint16  cfd_sample_val4;READ_FROM_BUFFER(1842,uint16 ,cfd_sample_val4);
        // UINT32 FLAGS NOENCODE
        // {
          //  0_23: ov;
          // 24_31: selftrigger;
        // }
        union
        {
          struct
          {
#if __BYTE_ORDER == __LITTLE_ENDIAN
            uint32 ov : 24; // 0..23
            uint32 selftrigger : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
            uint32 selftrigger : 8; // 24..31
            uint32 ov : 24; // 0..23
#endif
          };
          uint32  u32;
        } FLAGS;
        READ_FROM_BUFFER_FULL(1847,uint32 ,FLAGS,FLAGS.u32);
        // UINT16 pileup NOENCODE;
        uint16  pileup;READ_FROM_BUFFER(1849,uint16 ,pileup);
        // UINT16 discard NOENCODE;
        uint16  discard;READ_FROM_BUFFER(1850,uint16 ,discard);
        // UINT32 ENERGY_VALUE NOENCODE
        // {
          //  0_15: eneval;
          // 16_31: reservedbits;
        // }
        union
        {
          struct
          {
#if __BYTE_ORDER == __LITTLE_ENDIAN
            uint32 eneval : 16; // 0..15
            uint32 reservedbits : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
            uint32 reservedbits : 16; // 16..31
            uint32 eneval : 16; // 0..15
#endif
          };
          uint32  u32;
        } ENERGY_VALUE;
        READ_FROM_BUFFER_FULL(1855,uint32 ,ENERGY_VALUE,ENERGY_VALUE.u32);
        // UINT32 INTEGRAL_VALUE NOENCODE
        // {
          //  0_15: nf;
          // 16_31: ns;
        // }
        union
        {
          struct
          {
#if __BYTE_ORDER == __LITTLE_ENDIAN
            uint32 nf : 16; // 0..15
            uint32 ns : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
            uint32 ns : 16; // 16..31
            uint32 nf : 16; // 0..15
#endif
          };
          uint32  u32;
        } INTEGRAL_VALUE;
        READ_FROM_BUFFER_FULL(1859,uint32 ,INTEGRAL_VALUE,INTEGRAL_VALUE.u32);
        // ENCODE(energy[((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id)],(value=ENERGY_VALUE.eneval));

        {
          typedef __typeof__(*(&(energy))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = energy.insert_index(1861,((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id));
          __item.value = ENERGY_VALUE.eneval;
        }
        // ENCODE(ts_lsb[((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id)],(value=timestamp_lsb));

        {
          typedef __typeof__(*(&(ts_lsb))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = ts_lsb.insert_index(1862,((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id));
          __item.value = timestamp_lsb;
        }
        // ENCODE(ts_msb[((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id)],(value=timestamp_msb));

        {
          typedef __typeof__(*(&(ts_msb))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = ts_msb.insert_index(1863,((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id));
          __item.value = timestamp_msb;
        }
        // ENCODE(n_f[((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id)],(value=INTEGRAL_VALUE.nf));

        {
          typedef __typeof__(*(&(n_f))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = n_f.insert_index(1864,((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id));
          __item.value = INTEGRAL_VALUE.nf;
        }
        // ENCODE(n_s[((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id)],(value=INTEGRAL_VALUE.ns));

        {
          typedef __typeof__(*(&(n_s))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = n_s.insert_index(1865,((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id));
          __item.value = INTEGRAL_VALUE.ns;
        }
        // if((DATASIZE.sizebytes > 40))

        if ((DATASIZE.sizebytes > 40))
        {
          // UINT32 HEADER_TOT NOENCODE
          // {
            //  0_15: tot;
            // 16_31: magic_beef = MATCH(0xbeef);
          // }
          union
          {
            struct
            {
#if __BYTE_ORDER == __LITTLE_ENDIAN
              uint32 tot : 16; // 0..15
              uint32 magic_beef : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
              uint32 magic_beef : 16; // 16..31
              uint32 tot : 16; // 0..15
#endif
            };
            uint32  u32;
          } HEADER_TOT;
          READ_FROM_BUFFER_FULL(1871,uint32 ,HEADER_TOT,HEADER_TOT.u32);
          CHECK_BITS_EQUAL(1870,HEADER_TOT.magic_beef,0xbeef);
          // UINT16 trace_sample_val1 NOENCODE;
          uint16  trace_sample_val1;READ_FROM_BUFFER(1872,uint16 ,trace_sample_val1);
          // UINT16 trace_sample_val2 NOENCODE;
          uint16  trace_sample_val2;READ_FROM_BUFFER(1873,uint16 ,trace_sample_val2);
          // UINT16 trace_sample_val3 NOENCODE;
          uint16  trace_sample_val3;READ_FROM_BUFFER(1874,uint16 ,trace_sample_val3);
          // UINT16 trace_sample_val4 NOENCODE;
          uint16  trace_sample_val4;READ_FROM_BUFFER(1875,uint16 ,trace_sample_val4);
          // ENCODE(tot[((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id)],(value=HEADER_TOT.tot));

          {
            typedef __typeof__(*(&(tot))) __array_t;
            typedef typename __array_t::item_t __item_t;
            __item_t &__item = tot.insert_index(1876,((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id));
            __item.value = HEADER_TOT.tot;
          }
        }
        // if((DATASIZE.sizebytes > 52))

        if ((DATASIZE.sizebytes > 52))
        {
          // UINT32 HEADER_TRACE NOENCODE
          // {
            //  0_15: datalength;
            // 16_31: magic_2bad = MATCH(0x2bad);
          // }
          union
          {
            struct
            {
#if __BYTE_ORDER == __LITTLE_ENDIAN
              uint32 datalength : 16; // 0..15
              uint32 magic_2bad : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
              uint32 magic_2bad : 16; // 16..31
              uint32 datalength : 16; // 0..15
#endif
            };
            uint32  u32;
          } HEADER_TRACE;
          READ_FROM_BUFFER_FULL(1882,uint32 ,HEADER_TRACE,HEADER_TRACE.u32);
          CHECK_BITS_EQUAL(1881,HEADER_TRACE.magic_2bad,0x2bad);
          // list(0<=index<((HEADER_TRACE.datalength / 4) - 1))

          for (uint32 index = 0; index < (uint32) (((HEADER_TRACE.datalength / 4) - 1)); ++index)
          {
            // UINT32 TRACE_SAMPLES NOENCODE;
            uint32  TRACE_SAMPLES;READ_FROM_BUFFER(1885,uint32 ,TRACE_SAMPLES);
          }
        }
      }

      else
      {
        // if((HEADER_MAGIC.magic == 0xb00b))

        if ((HEADER_MAGIC.magic == 0xb00b))
        {
          // UINT32 pul_eventid NOENCODE;
          uint32  pul_eventid;READ_FROM_BUFFER(1892,uint32 ,pul_eventid);
          // UINT32 pul_timestamp_lsb NOENCODE;
          uint32  pul_timestamp_lsb;READ_FROM_BUFFER(1893,uint32 ,pul_timestamp_lsb);
          // UINT32 pul_timestamp_msb NOENCODE;
          uint32  pul_timestamp_msb;READ_FROM_BUFFER(1894,uint32 ,pul_timestamp_msb);
          // UINT32 N_S_TOT NOENCODE
          // {
            //  0_07: pul_n_s;
            //  8_31: pul_nothingofinterest;
          // }
          union
          {
            struct
            {
#if __BYTE_ORDER == __LITTLE_ENDIAN
              uint32 pul_n_s : 8; // 0..7
              uint32 pul_nothingofinterest : 24; // 8..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
              uint32 pul_nothingofinterest : 24; // 8..31
              uint32 pul_n_s : 8; // 0..7
#endif
            };
            uint32  u32;
          } N_S_TOT;
          READ_FROM_BUFFER_FULL(1899,uint32 ,N_S_TOT,N_S_TOT.u32);
          // UINT32 N_F_TOT NOENCODE
          // {
            //  0_07: pul_firstterm;
            //  8_11: pul_secondterm;
            // 12_15: pul_nothingofinterest2;
            // 16_23: pul_nothingofinterest3;
            // 24_31: pul_n_f;
          // }
          union
          {
            struct
            {
#if __BYTE_ORDER == __LITTLE_ENDIAN
              uint32 pul_firstterm : 8; // 0..7
              uint32 pul_secondterm : 4; // 8..11
              uint32 pul_nothingofinterest2 : 4; // 12..15
              uint32 pul_nothingofinterest3 : 8; // 16..23
              uint32 pul_n_f : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
              uint32 pul_n_f : 8; // 24..31
              uint32 pul_nothingofinterest3 : 8; // 16..23
              uint32 pul_nothingofinterest2 : 4; // 12..15
              uint32 pul_secondterm : 4; // 8..11
              uint32 pul_firstterm : 8; // 0..7
#endif
            };
            uint32  u32;
          } N_F_TOT;
          READ_FROM_BUFFER_FULL(1906,uint32 ,N_F_TOT,N_F_TOT.u32);
          // UINT32 pul_throwme NOENCODE;
          uint32  pul_throwme;READ_FROM_BUFFER(1907,uint32 ,pul_throwme);
        }
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX3_CALIFA_BASE::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FEBEX_BAD_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_BAD_EVENTHEADER()
template<typename __data_src_t>
void FEBEX_BAD_EVENTHEADER::__unpack(__data_src_t &__buffer)
{
  // UINT32 badbad
  // {
    //  0_31: 0xbad00bad;
  // }
  READ_FROM_BUFFER_FULL(1072,uint32 ,badbad,badbad.u32);
  CHECK_BITS_EQUAL(1071,badbad.unnamed_0_31,0xbad00bad);
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_BAD_EVENTHEADER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FEBEX_GOOD_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_GOOD_EVENTHEADER()
template<typename __data_src_t>
void FEBEX_GOOD_EVENTHEADER::__unpack(__data_src_t &__buffer)
{
  // UINT32 febexcards
  // {
    //  0_07: n_febex_sfp0 = RANGE(0,64);
    //  8_15: n_febex_sfp1 = RANGE(0,64);
    // 16_23: n_febex_sfp2 = RANGE(0,64);
    // 24_31: n_febex_sfp3 = RANGE(0,64);
  // }
  READ_FROM_BUFFER_FULL(1082,uint32 ,febexcards,febexcards.u32);
  CHECK_BITS_RANGE_MAX(1078,febexcards.n_febex_sfp0,64);
  CHECK_BITS_RANGE_MAX(1079,febexcards.n_febex_sfp1,64);
  CHECK_BITS_RANGE_MAX(1080,febexcards.n_febex_sfp2,64);
  CHECK_BITS_RANGE_MAX(1081,febexcards.n_febex_sfp3,64);
  // UINT32 trig_length
  // {
    //  0_15: trace_length;
    // 16_31: trigger_delay;
  // }
  READ_FROM_BUFFER_FULL(1086,uint32 ,trig_length,trig_length.u32);
  // UINT32 energy_filter
  // {
    //  0_10: sum_b;
    // 11_20: gap;
    // 21_31: sum_a;
  // }
  READ_FROM_BUFFER_FULL(1091,uint32 ,energy_filter,energy_filter.u32);
  // UINT32 polarity1
  // {
    //  0_31: pola;
  // }
  READ_FROM_BUFFER_FULL(1094,uint32 ,polarity1,polarity1.u32);
  // UINT32 polarity2
  // {
    //  0_31: pola;
  // }
  READ_FROM_BUFFER_FULL(1097,uint32 ,polarity2,polarity2.u32);
  // UINT32 polarity3
  // {
    //  0_31: pola;
  // }
  READ_FROM_BUFFER_FULL(1100,uint32 ,polarity3,polarity3.u32);
  // UINT32 polarity4
  // {
    //  0_31: pola;
  // }
  READ_FROM_BUFFER_FULL(1103,uint32 ,polarity4,polarity4.u32);
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_GOOD_EVENTHEADER::__unpack);

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
  // select

    // good = FEBEX_GOOD_EVENTHEADER();
    // bad = FEBEX_BAD_EVENTHEADER();
  do
  {
    int __match_no = 0;
    // optimized match 1: FEBEX_GOOD_EVENTHEADER good: (s32) => (0x80808080,0x00000000)
    // optimized match 2: FEBEX_BAD_EVENTHEADER bad: (s32) => (0xffffffff,0xbad00bad)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1065,uint32,__match_peek);
    // differ = bad00bad : 0 2 3 5 7 8 9 11 20 22 23 25 27 28 29 31
    MATCH_DECL_QUICK(1063,__match_no,1,good,__match_peek,0x80808080,0x00000000);
    MATCH_DECL_QUICK(1064,__match_no,2,bad,__match_peek,0xffffffff,0xbad00bad);
    // last_subevent_item = 0
    }
    if (!__match_no) ERROR_U_LOC(1065,"No match for select statement.");
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(1063,spurious_match_abort_loop_0,FEBEX_GOOD_EVENTHEADER);
        UNPACK_DECL(1063,FEBEX_GOOD_EVENTHEADER,good);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(1064,spurious_match_abort_loop_0,FEBEX_BAD_EVENTHEADER);
        UNPACK_DECL(1064,FEBEX_BAD_EVENTHEADER,bad);
        break;
    }
  }
  while (0);
  spurious_match_abort_loop_0:;
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
  CHECK_BITS_EQUAL(1122,indicator.unnamed_0_7,52);
  CHECK_BITS_EQUAL(1124,indicator.sfp,sfp);
  CHECK_BITS_EQUAL(1125,indicator.card,card);
  CHECK_BITS_EQUAL(1126,indicator.unnamed_24_31,255);
  // UINT32 data_size NOENCODE
  // {
    //  0_31: size;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 size : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 size : 32; // 0..31
#endif
    };
    uint32  u32;
  } data_size;
  READ_FROM_BUFFER_FULL(1131,uint32 ,data_size,data_size.u32);
  // UINT32 head NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 175;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unused : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 unused : 24; // 0..23
#endif
    };
    uint32  u32;
  } head;
  READ_FROM_BUFFER_FULL(1136,uint32 ,head,head.u32);
  CHECK_BITS_EQUAL(1135,head.unnamed_24_31,175);
  // UINT32 triggertime NOENCODE
  // {
    //  0_31: trigger_time;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 trigger_time : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 trigger_time : 32; // 0..31
#endif
    };
    uint32  u32;
  } triggertime;
  READ_FROM_BUFFER_FULL(1140,uint32 ,triggertime,triggertime.u32);
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
  READ_FROM_BUFFER_FULL(1144,uint32 ,time,time.u32);
  // list(0<=i<((data_size.size - 16) >> 3))

  for (uint32 i = 0; i < (uint32) (((data_size.size - 16) >> 3)); ++i)
  {
    // UINT32 time NOENCODE
    // {
      //  0_10: time;
      // 11_14: unused1;
      //    15: sign;
      // 16_19: unused2;
      // 20_23: multi_hit;
      // 24_27: n_hit;
      // 28_31: channel_id;
      // ENCODE(t[channel_id],(value=(((sign * ( - time)) + ((sign - 1) * ( - time))) & 0xfff)));
      // ENCODE(n_hit[channel_id],(value=n_hit));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time : 11; // 0..10
        uint32 unused1 : 4; // 11..14
        uint32 sign : 1; // 15
        uint32 unused2 : 4; // 16..19
        uint32 multi_hit : 4; // 20..23
        uint32 n_hit : 4; // 24..27
        uint32 channel_id : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 channel_id : 4; // 28..31
        uint32 n_hit : 4; // 24..27
        uint32 multi_hit : 4; // 20..23
        uint32 unused2 : 4; // 16..19
        uint32 sign : 1; // 15
        uint32 unused1 : 4; // 11..14
        uint32 time : 11; // 0..10
#endif
      };
      uint32  u32;
    } time;
    READ_FROM_BUFFER_FULL(1157,uint32 ,time,time.u32);
    {
      typedef __typeof__(*(&(t))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = t.insert_index(1155,time.channel_id);
      __item.value = (((time.sign * ( - time.time)) + ((time.sign - 1) * ( - time.time))) & 0xfff);
    }
    {
      typedef __typeof__(*(&(n_hit))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = n_hit.insert_index(1156,time.channel_id);
      __item.value = time.n_hit;
    }
    // UINT32 energy NOENCODE
    // {
      //  0_21: energy;
      //    22: unused1;
      //    23: sign;
      // 24_27: unused2;
      // 28_31: channel_id;
      // ENCODE(e[channel_id],(value=((sign * ( - energy)) + ((sign - 1) * ( - energy)))));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 energy : 22; // 0..21
        uint32 unused1 : 1; // 22
        uint32 sign : 1; // 23
        uint32 unused2 : 4; // 24..27
        uint32 channel_id : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 channel_id : 4; // 28..31
        uint32 unused2 : 4; // 24..27
        uint32 sign : 1; // 23
        uint32 unused1 : 1; // 22
        uint32 energy : 22; // 0..21
#endif
      };
      uint32  u32;
    } energy;
    READ_FROM_BUFFER_FULL(1166,uint32 ,energy,energy.u32);
    {
      typedef __typeof__(*(&(e))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = e.insert_index(1165,energy.channel_id);
      __item.value = ((energy.sign * ( - energy.energy)) + ((energy.sign - 1) * ( - energy.energy)));
    }
  }
  // UINT32 trailer NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 191;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unused : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 unused : 24; // 0..23
#endif
    };
    uint32  u32;
  } trailer;
  READ_FROM_BUFFER_FULL(1172,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(1171,trailer.unnamed_24_31,191);
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
  READ_FROM_BUFFER_FULL(1112,uint32 ,pads_data,pads_data.u32);
  CHECK_BITS_EQUAL(1111,pads_data.unnamed_20_31,0xadd);
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_PADDING::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FEBEX_TRACE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_TRACE(sfp,card)
template<typename __data_src_t>
void FEBEX_TRACE::__unpack(__data_src_t &__buffer,uint32 sfp,uint32 card)
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
  CHECK_BITS_EQUAL(1182,header.unnamed_0_7,52);
  CHECK_BITS_EQUAL(1184,header.sfp,sfp);
  CHECK_BITS_EQUAL(1185,header.card,card);
  CHECK_BITS_RANGE_MAX(1186,header.channel_id,254);
  // UINT32 trace_size NOENCODE
  // {
    //  0_31: size;
    // ENCODE(trace_length[header.channel_id],(value=((size / 2) - 4)));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 size : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 size : 32; // 0..31
#endif
    };
    uint32  u32;
  } trace_size;
  READ_FROM_BUFFER_FULL(1192,uint32 ,trace_size,trace_size.u32);
  {
    typedef __typeof__(*(&(trace_length))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = trace_length.insert_index(1191,header.channel_id);
    __item.value = ((trace_size.size / 2) - 4);
  }
  // UINT32 trace_header NOENCODE
  // {
    //  0_17: notused1;
    //    18: filter_mode;
    //    19: filter_onoff;
    // 20_22: notused2;
    //    23: adc_type;
    // 24_31: 170;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 notused1 : 18; // 0..17
      uint32 filter_mode : 1; // 18
      uint32 filter_onoff : 1; // 19
      uint32 notused2 : 3; // 20..22
      uint32 adc_type : 1; // 23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 adc_type : 1; // 23
      uint32 notused2 : 3; // 20..22
      uint32 filter_onoff : 1; // 19
      uint32 filter_mode : 1; // 18
      uint32 notused1 : 18; // 0..17
#endif
    };
    uint32  u32;
  } trace_header;
  READ_FROM_BUFFER_FULL(1201,uint32 ,trace_header,trace_header.u32);
  CHECK_BITS_EQUAL(1200,trace_header.unnamed_24_31,170);
  // if((trace_header.filter_onoff == 0))

  // else

  if ((trace_header.filter_onoff == 0))
  {
    // list(0<=i<((trace_size.size / 4) - 2))

    for (uint32 i = 0; i < (uint32) (((trace_size.size / 4) - 2)); ++i)
    {
      // UINT32 channel_trace NOENCODE
      // {
        //  0_13: data1;
        // 14_15: nik_knows;
        // 16_29: data2;
        // 30_31: nik_knows2;
        // ENCODE(trace[header.channel_id][((2 * i) + 0)],(value=data1));
        // ENCODE(trace[header.channel_id][((2 * i) + 1)],(value=data2));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 data1 : 14; // 0..13
          uint32 nik_knows : 2; // 14..15
          uint32 data2 : 14; // 16..29
          uint32 nik_knows2 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 nik_knows2 : 2; // 30..31
          uint32 data2 : 14; // 16..29
          uint32 nik_knows : 2; // 14..15
          uint32 data1 : 14; // 0..13
#endif
        };
        uint32  u32;
      } channel_trace;
      READ_FROM_BUFFER_FULL(1213,uint32 ,channel_trace,channel_trace.u32);
      {
        typedef __typeof__(*(&(trace[header.channel_id]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = trace[header.channel_id].insert_index(1211,((2 * i) + 0));
        __item.value = channel_trace.data1;
      }
      {
        typedef __typeof__(*(&(trace[header.channel_id]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = trace[header.channel_id].insert_index(1212,((2 * i) + 1));
        __item.value = channel_trace.data2;
      }
    }
  }

  else
  {
    // list(0<=i<((trace_size.size / 8) - 1))

    for (uint32 i = 0; i < (uint32) (((trace_size.size / 8) - 1)); ++i)
    {
      // UINT32 channel_trace NOENCODE
      // {
        //  0_13: data1;
        // 14_31: nik_knows;
        // ENCODE(trace[header.channel_id][i],(value=data1));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 data1 : 14; // 0..13
          uint32 nik_knows : 18; // 14..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 nik_knows : 18; // 14..31
          uint32 data1 : 14; // 0..13
#endif
        };
        uint32  u32;
      } channel_trace;
      READ_FROM_BUFFER_FULL(1222,uint32 ,channel_trace,channel_trace.u32);
      {
        typedef __typeof__(*(&(trace[header.channel_id]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = trace[header.channel_id].insert_index(1221,i);
        __item.value = channel_trace.data1;
      }
      // UINT32 channel_filter NOENCODE
      // {
        //  0_22: data1;
        //    23: sign;
        // 24_31: nik_knows2;
        // ENCODE(filter[header.channel_id][i],(value=(data1 * (1 - (2 * sign)))));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 data1 : 23; // 0..22
          uint32 sign : 1; // 23
          uint32 nik_knows2 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 nik_knows2 : 8; // 24..31
          uint32 sign : 1; // 23
          uint32 data1 : 23; // 0..22
#endif
        };
        uint32  u32;
      } channel_filter;
      READ_FROM_BUFFER_FULL(1229,uint32 ,channel_filter,channel_filter.u32);
      {
        typedef __typeof__(*(&(filter[header.channel_id]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = filter[header.channel_id].insert_index(1228,i);
        __item.value = (channel_filter.data1 * (1 - (2 * channel_filter.sign)));
      }
    }
  }
  // UINT32 trace_trailer NOENCODE
  // {
    //  0_23: notused;
    // 24_31: 187;
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
  } trace_trailer;
  READ_FROM_BUFFER_FULL(1236,uint32 ,trace_trailer,trace_trailer.u32);
  CHECK_BITS_EQUAL(1235,trace_trailer.unnamed_24_31,187);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FEBEX_TRACE::__unpack,uint32 sfp,uint32 card);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for GSI_CLOCKTDC_16PH_ITEM.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_16PH_ITEM(sfp,tdc)
template<typename __data_src_t>
void GSI_CLOCKTDC_16PH_ITEM::__unpack(__data_src_t &__buffer,uint32 sfp,uint32 tdc)
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
  READ_FROM_BUFFER_FULL(846,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(841,header._0x34,52);
  CHECK_BITS_EQUAL(843,header.sfp_id,sfp);
  CHECK_BITS_EQUAL(844,header.tdc_id,tdc);
  // MATCH_END;
  // UINT32 channel_num;
  READ_FROM_BUFFER(850,uint32 ,channel_num);
  // UINT32 event_counter_lo_ NOENCODE
  // {
    //  0_31: value;
    // ENCODE(event_counter_lo32,(value=value));
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
  } event_counter_lo_;
  READ_FROM_BUFFER_FULL(854,uint32 ,event_counter_lo_,event_counter_lo_.u32);
  {
    event_counter_lo32.value = event_counter_lo_.value;
  }
  // UINT32 event_counter_hi_ NOENCODE
  // {
    //  0_15: value;
    // ENCODE(event_counter_hi16,(value=value));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 value : 16; // 0..15
      uint32 dummy_16_31 : 16;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 dummy_16_31 : 16;
      uint32 value : 16; // 0..15
#endif
    };
    uint32  u32;
  } event_counter_hi_;
  READ_FROM_BUFFER_FULL(858,uint32 ,event_counter_hi_,event_counter_hi_.u32);
  CHECK_UNNAMED_BITS_ZERO(858,event_counter_hi_.u32,0xffff0000);
  {
    event_counter_hi16.value = event_counter_hi_.value;
  }
  // UINT32 trigger_coarse_lo_ NOENCODE
  // {
    //  0_09: ignore;
    // 10_31: value;
    // ENCODE(trigger_coarse_lo22,(value=value));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 ignore : 10; // 0..9
      uint32 value : 22; // 10..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 value : 22; // 10..31
      uint32 ignore : 10; // 0..9
#endif
    };
    uint32  u32;
  } trigger_coarse_lo_;
  READ_FROM_BUFFER_FULL(863,uint32 ,trigger_coarse_lo_,trigger_coarse_lo_.u32);
  {
    trigger_coarse_lo22.value = trigger_coarse_lo_.value;
  }
  // UINT32 trigger_coarse_hi_ NOENCODE
  // {
    //  0_23: value;
    // 24_31: ignore;
    // ENCODE(trigger_coarse_hi24,(value=value));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 value : 24; // 0..23
      uint32 ignore : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 ignore : 8; // 24..31
      uint32 value : 24; // 0..23
#endif
    };
    uint32  u32;
  } trigger_coarse_hi_;
  READ_FROM_BUFFER_FULL(868,uint32 ,trigger_coarse_hi_,trigger_coarse_hi_.u32);
  {
    trigger_coarse_hi24.value = trigger_coarse_hi_.value;
  }
  // UINT32 channel_header
  // {
    //  0_07: _0x34 = MATCH(52);
    //  8_11: trigger_type;
    // 12_15: sfp_id = MATCH(sfp);
    // 16_23: tdc_id = MATCH(tdc);
    // 24_31: channel_id = RANGE(0,128);
  // }
  READ_FROM_BUFFER_FULL(875,uint32 ,channel_header,channel_header.u32);
  CHECK_BITS_EQUAL(870,channel_header._0x34,52);
  CHECK_BITS_EQUAL(872,channel_header.sfp_id,sfp);
  CHECK_BITS_EQUAL(873,channel_header.tdc_id,tdc);
  CHECK_BITS_RANGE_MAX(874,channel_header.channel_id,128);
  // UINT32 data_byte_num;
  READ_FROM_BUFFER(876,uint32 ,data_byte_num);
  // list(0<=i<(data_byte_num / 4))

  for (uint32 i = 0; i < (uint32) ((data_byte_num / 4)); ++i)
  {
    // UINT32 data
    // {
      //  0_04: time_fine;
      //  5_16: time_coarse;
      //    17: time_coarse_ext;
      //    18: edge;
      //    19: ws;
      //    20: time_coarse_overflow;
      //    21: rb_overflow;
      //    22: dummy;
      //    23: is_data;
      // 24_31: channel;
      // ENCODE(time_coarse[(((((128 > channel) || ((128 == channel) && (0 == edge))) && is_data) * ((channel * 2) + edge)) + (( ! (((128 > channel) || ((128 == channel) && (0 == edge))) && is_data)) * 0x101))],(value=time_coarse));
      // ENCODE(time_fine[(((((128 > channel) || ((128 == channel) && (0 == edge))) && is_data) * ((channel * 2) + edge)) + (( ! (((128 > channel) || ((128 == channel) && (0 == edge))) && is_data)) * 0x101))],(value=time_fine));
    // }
    READ_FROM_BUFFER_FULL(911,uint32 ,data,data.u32);
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(903,(((((128 > data.channel) || ((128 == data.channel) && (0 == data.edge))) && data.is_data) * ((data.channel * 2) + data.edge)) + (( ! (((128 > data.channel) || ((128 == data.channel) && (0 == data.edge))) && data.is_data)) * 0x101)));
      __item.value = data.time_coarse;
    }
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(910,(((((128 > data.channel) || ((128 == data.channel) && (0 == data.edge))) && data.is_data) * ((data.channel * 2) + data.edge)) + (( ! (((128 > data.channel) || ((128 == data.channel) && (0 == data.edge))) && data.is_data)) * 0x101)));
      __item.value = data.time_fine;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,GSI_CLOCKTDC_16PH_ITEM::__unpack,uint32 sfp
                                                                 ,uint32 tdc);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for GSI_CLOCKTDC_BAD00BAD.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_BAD00BAD()
template<typename __data_src_t>
void GSI_CLOCKTDC_BAD00BAD::__unpack(__data_src_t &__buffer)
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
  CHECK_BITS_EQUAL(711,bad00bad.bad00bad,0xbad00bad);
}
FORCE_IMPL_DATA_SRC_FCN(void,GSI_CLOCKTDC_BAD00BAD::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for GSI_CLOCKTDC_FUSER.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_FUSER(a_sfp0_num,a_sfp1_num,a_sfp2_num,a_sfp3_num,
                   // ch_per_ctdc)
template<typename __data_src_t>
void GSI_CLOCKTDC_FUSER::__unpack(__data_src_t &__buffer,uint32 a_sfp0_num
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
  READ_FROM_BUFFER_FULL(722,uint32 ,slave_num,slave_num.u32);
  CHECK_BITS_EQUAL(718,slave_num.sfp0_num,a_sfp0_num);
  CHECK_BITS_EQUAL(719,slave_num.sfp1_num,a_sfp1_num);
  CHECK_BITS_EQUAL(720,slave_num.sfp2_num,a_sfp2_num);
  CHECK_BITS_EQUAL(721,slave_num.sfp3_num,a_sfp3_num);
  // UINT32 trig_window;
  READ_FROM_BUFFER(723,uint32 ,trig_window);
  // UINT32 channel_num
  // {
    //  0_31: num = MATCH(ch_per_ctdc);
  // }
  READ_FROM_BUFFER_FULL(726,uint32 ,channel_num,channel_num.u32);
  CHECK_BITS_EQUAL(725,channel_num.num,ch_per_ctdc);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,GSI_CLOCKTDC_FUSER::__unpack,uint32 a_sfp0_num
                                                             ,uint32 a_sfp1_num
                                                             ,uint32 a_sfp2_num
                                                             ,uint32 a_sfp3_num
                                                             ,uint32 ch_per_ctdc);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for GSI_CLOCKTDC_ITEM.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_ITEM(sfp,tdc)
template<typename __data_src_t>
void GSI_CLOCKTDC_ITEM::__unpack(__data_src_t &__buffer,uint32 sfp,uint32 tdc)
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
  READ_FROM_BUFFER_FULL(758,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(753,header._0x34,52);
  CHECK_BITS_EQUAL(755,header.sfp_id,sfp);
  CHECK_BITS_EQUAL(756,header.tdc_id,tdc);
  // MATCH_END;
  // UINT32 channel_num;
  READ_FROM_BUFFER(762,uint32 ,channel_num);
  // UINT32 event_counter_lo_ NOENCODE
  // {
    //  0_31: value;
    // ENCODE(event_counter_lo32,(value=value));
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
  } event_counter_lo_;
  READ_FROM_BUFFER_FULL(766,uint32 ,event_counter_lo_,event_counter_lo_.u32);
  {
    event_counter_lo32.value = event_counter_lo_.value;
  }
  // UINT32 event_counter_hi_ NOENCODE
  // {
    //  0_15: value;
    // ENCODE(event_counter_hi16,(value=value));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 value : 16; // 0..15
      uint32 dummy_16_31 : 16;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 dummy_16_31 : 16;
      uint32 value : 16; // 0..15
#endif
    };
    uint32  u32;
  } event_counter_hi_;
  READ_FROM_BUFFER_FULL(770,uint32 ,event_counter_hi_,event_counter_hi_.u32);
  CHECK_UNNAMED_BITS_ZERO(770,event_counter_hi_.u32,0xffff0000);
  {
    event_counter_hi16.value = event_counter_hi_.value;
  }
  // UINT32 trigger_coarse_lo_ NOENCODE
  // {
    //  0_09: ignore;
    // 10_31: value;
    // ENCODE(trigger_coarse_lo22,(value=value));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 ignore : 10; // 0..9
      uint32 value : 22; // 10..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 value : 22; // 10..31
      uint32 ignore : 10; // 0..9
#endif
    };
    uint32  u32;
  } trigger_coarse_lo_;
  READ_FROM_BUFFER_FULL(775,uint32 ,trigger_coarse_lo_,trigger_coarse_lo_.u32);
  {
    trigger_coarse_lo22.value = trigger_coarse_lo_.value;
  }
  // UINT32 trigger_coarse_hi_ NOENCODE
  // {
    //  0_23: value;
    // 24_31: ignore;
    // ENCODE(trigger_coarse_hi24,(value=value));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 value : 24; // 0..23
      uint32 ignore : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 ignore : 8; // 24..31
      uint32 value : 24; // 0..23
#endif
    };
    uint32  u32;
  } trigger_coarse_hi_;
  READ_FROM_BUFFER_FULL(780,uint32 ,trigger_coarse_hi_,trigger_coarse_hi_.u32);
  {
    trigger_coarse_hi24.value = trigger_coarse_hi_.value;
  }
  // UINT32 channel_header
  // {
    //  0_07: _0x34 = MATCH(52);
    //  8_11: trigger_type;
    // 12_15: sfp_id = MATCH(sfp);
    // 16_23: tdc_id = MATCH(tdc);
    // 24_31: channel_id = RANGE(0,128);
  // }
  READ_FROM_BUFFER_FULL(787,uint32 ,channel_header,channel_header.u32);
  CHECK_BITS_EQUAL(782,channel_header._0x34,52);
  CHECK_BITS_EQUAL(784,channel_header.sfp_id,sfp);
  CHECK_BITS_EQUAL(785,channel_header.tdc_id,tdc);
  CHECK_BITS_RANGE_MAX(786,channel_header.channel_id,128);
  // UINT32 data_byte_num;
  READ_FROM_BUFFER(788,uint32 ,data_byte_num);
  // list(0<=i<(data_byte_num / 4))

  for (uint32 i = 0; i < (uint32) ((data_byte_num / 4)); ++i)
  {
    // UINT32 data
    // {
      //  0_03: time_fine;
      //  4_15: time_coarse;
      //    16: time_coarse_ext;
      //    17: edge;
      //    18: ws;
      //    19: time_coarse_overflow;
      //    20: rb_overflow;
      // 21_23: status;
      // 24_31: channel;
      // ENCODE(time_coarse[(((((128 > channel) || ((128 == channel) && (0 == edge))) && (4 == status)) * ((channel * 2) + edge)) + (( ! (((128 > channel) || ((128 == channel) && (0 == edge))) && (4 == status))) * 0x101))],(value=time_coarse));
      // ENCODE(time_fine[(((((128 > channel) || ((128 == channel) && (0 == edge))) && (4 == status)) * ((channel * 2) + edge)) + (( ! (((128 > channel) || ((128 == channel) && (0 == edge))) && (4 == status))) * 0x101))],(value=time_fine));
    // }
    READ_FROM_BUFFER_FULL(821,uint32 ,data,data.u32);
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(813,(((((128 > data.channel) || ((128 == data.channel) && (0 == data.edge))) && (4 == data.status)) * ((data.channel * 2) + data.edge)) + (( ! (((128 > data.channel) || ((128 == data.channel) && (0 == data.edge))) && (4 == data.status))) * 0x101)));
      __item.value = data.time_coarse;
    }
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(820,(((((128 > data.channel) || ((128 == data.channel) && (0 == data.edge))) && (4 == data.status)) * ((data.channel * 2) + data.edge)) + (( ! (((128 > data.channel) || ((128 == data.channel) && (0 == data.edge))) && (4 == data.status))) * 0x101)));
      __item.value = data.time_fine;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,GSI_CLOCKTDC_ITEM::__unpack,uint32 sfp,uint32 tdc);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for GSI_CLOCKTDC_PADDING.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_PADDING()
template<typename __data_src_t>
void GSI_CLOCKTDC_PADDING::__unpack(__data_src_t &__buffer)
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
  CHECK_BITS_EQUAL(733,padding.unnamed_20_31,0xadd);
}
FORCE_IMPL_DATA_SRC_FCN(void,GSI_CLOCKTDC_PADDING::__unpack);

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
  READ_FROM_BUFFER_FULL(1266,uint32 ,failure,failure.u32);
  CHECK_UNNAMED_BITS_ZERO(1266,failure.u32,0x003fff00);
  // if(failure.has_continous_event_counter)

  if (failure.has_continous_event_counter)
  {
    // UINT32 continous_event_counter;
    READ_FROM_BUFFER(1269,uint32 ,continous_event_counter);
  }
  // if(failure.has_time_stamp)

  if (failure.has_time_stamp)
  {
    // UINT32 time_stamp;
    READ_FROM_BUFFER(1273,uint32 ,time_stamp);
  }
  // if(failure.has_clock_counter_stamp)

  if (failure.has_clock_counter_stamp)
  {
    // UINT32 clock_counter_stamp;
    READ_FROM_BUFFER(1277,uint32 ,clock_counter_stamp);
  }
  // if(failure.has_update_qdc_iped_value)

  if (failure.has_update_qdc_iped_value)
  {
    // UINT32 iped;
    READ_FROM_BUFFER(1281,uint32 ,iped);
  }
  // if(failure.has_multi_event)

  if (failure.has_multi_event)
  {
    // UINT32 multi_events;
    READ_FROM_BUFFER(1285,uint32 ,multi_events);
  }
  // if(failure.has_multi_trlo_ii_counter0)

  if (failure.has_multi_trlo_ii_counter0)
  {
    // UINT32 multi_trlo_ii_counter0;
    READ_FROM_BUFFER(1289,uint32 ,multi_trlo_ii_counter0);
  }
  // if(failure.has_multi_scaler_counter0)

  if (failure.has_multi_scaler_counter0)
  {
    // UINT32 multi_scaler_counter0;
    READ_FROM_BUFFER(1293,uint32 ,multi_scaler_counter0);
  }
  // if(failure.has_multi_adctdc_counter0)

  if (failure.has_multi_adctdc_counter0)
  {
    // UINT32 multi_adctdc_counter0;
    READ_FROM_BUFFER(1297,uint32 ,multi_adctdc_counter0);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_STD_VME::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for MEGA_PULSER.
 *
 * Do not edit - automatically generated.
 */

// MEGA_PULSER()
template<typename __data_src_t>
void MEGA_PULSER::__unpack(__data_src_t &__buffer)
{
  // UINT32 mega;
  READ_FROM_BUFFER(1938,uint32 ,mega);
}
FORCE_IMPL_DATA_SRC_FCN(void,MEGA_PULSER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX3_FH_DATA.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_FH_DATA()
template<typename __data_src_t>
void TAMEX3_FH_DATA::__unpack(__data_src_t &__buffer)
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
  // UINT32 tdc_header NOENCODE
  // {
    //  0_15: lec;
    //    16: buf_no;
    // 17_19: reserved;
    // 20_23: trigger_type;
    // 24_31: 170;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 lec : 16; // 0..15
      uint32 buf_no : 1; // 16
      uint32 reserved : 3; // 17..19
      uint32 trigger_type : 4; // 20..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 trigger_type : 4; // 20..23
      uint32 reserved : 3; // 17..19
      uint32 buf_no : 1; // 16
      uint32 lec : 16; // 0..15
#endif
    };
    uint32  u32;
  } tdc_header;
  READ_FROM_BUFFER_FULL(1011,uint32 ,tdc_header,tdc_header.u32);
  CHECK_BITS_EQUAL(1010,tdc_header.unnamed_24_31,170);
  // list(0<=i<((data_size.bytes / 4) - 3))

  for (uint32 i = 0; i < (uint32) (((data_size.bytes / 4) - 3)); ++i)
  {
    // UINT32 data NOENCODE
    // {
      //  0_10: coarse;
      //    11: is_leading;
      // 12_21: fine;
      // 22_28: channel_index;
      // 29_31: type;
      // ENCODE(time_coarse[(((4 == type) * channel_index) + ((4 != type) * 33))],(value=coarse));
      // ENCODE(time_fine[(((4 == type) * channel_index) + ((4 != type) * 33))],(value=fine));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 coarse : 11; // 0..10
        uint32 is_leading : 1; // 11
        uint32 fine : 10; // 12..21
        uint32 channel_index : 7; // 22..28
        uint32 type : 3; // 29..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 type : 3; // 29..31
        uint32 channel_index : 7; // 22..28
        uint32 fine : 10; // 12..21
        uint32 is_leading : 1; // 11
        uint32 coarse : 11; // 0..10
#endif
      };
      uint32  u32;
    } data;
    READ_FROM_BUFFER_FULL(1030,uint32 ,data,data.u32);
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(1025,(((4 == data.type) * data.channel_index) + ((4 != data.type) * 33)));
      __item.value = data.coarse;
    }
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(1029,(((4 == data.type) * data.channel_index) + ((4 != data.type) * 33)));
      __item.value = data.fine;
    }
  }
  // UINT32 error_bits NOENCODE
  // {
    //  0_23: bits;
    // 24_31: 238;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 bits : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 bits : 24; // 0..23
#endif
    };
    uint32  u32;
  } error_bits;
  READ_FROM_BUFFER_FULL(1036,uint32 ,error_bits,error_bits.u32);
  CHECK_BITS_EQUAL(1035,error_bits.unnamed_24_31,238);
  // UINT32 trailer NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 187;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unused : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 unused : 24; // 0..23
#endif
    };
    uint32  u32;
  } trailer;
  READ_FROM_BUFFER_FULL(1041,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(1040,trailer.unnamed_24_31,187);
}
FORCE_IMPL_DATA_SRC_FCN(void,TAMEX3_FH_DATA::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX3_FH_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_FH_SFP(sfp,card)
template<typename __data_src_t>
void TAMEX3_FH_SFP::__unpack(__data_src_t &__buffer,uint32 sfp,uint32 card)
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
  CHECK_BITS_EQUAL(1047,indicator.unnamed_0_7,52);
  CHECK_BITS_EQUAL(1049,indicator.sfp,sfp);
  CHECK_BITS_EQUAL(1050,indicator.card,card);
  CHECK_BITS_EQUAL(1051,indicator.unnamed_24_31,0);
  // select optional

    // data = TAMEX3_FH_DATA();
  do
  {
    if (__buffer.empty()) goto no_match_1;
    int __match_no = 0;
    // optimized match 1: TAMEX3_FH_DATA data: (s32) => (0x00000000,0x00000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1056,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) goto no_match_1;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(1055,spurious_match_abort_loop_1,TAMEX3_FH_DATA);
        UNPACK_DECL(1055,TAMEX3_FH_DATA,data);
        break;
    }
  }
  while (0);
  spurious_match_abort_loop_1:;
    no_match_1:;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX3_FH_SFP::__unpack,uint32 sfp,uint32 card);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX3_PADDING.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_PADDING()
template<typename __data_src_t>
void TAMEX3_PADDING::__unpack(__data_src_t &__buffer)
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
  CHECK_BITS_EQUAL(929,padding.unnamed_20_31,0xadd);
}
FORCE_IMPL_DATA_SRC_FCN(void,TAMEX3_PADDING::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX3_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_SFP(sfp,card)
template<typename __data_src_t>
void TAMEX3_SFP::__unpack(__data_src_t &__buffer,uint32 sfp,uint32 card)
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
  CHECK_BITS_EQUAL(940,indicator.unnamed_0_7,52);
  CHECK_BITS_EQUAL(942,indicator.sfp,sfp);
  CHECK_BITS_EQUAL(943,indicator.card,card);
  CHECK_BITS_EQUAL(944,indicator.unnamed_24_31,0);
  // MATCH_END;
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
  READ_FROM_BUFFER_FULL(952,uint32 ,data_size,data_size.u32);
  // UINT32 tdc_header NOENCODE
  // {
    //  0_15: lec;
    //    16: buf_no;
    // 17_19: reserved;
    // 20_23: trigger_type;
    // 24_31: 170;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 lec : 16; // 0..15
      uint32 buf_no : 1; // 16
      uint32 reserved : 3; // 17..19
      uint32 trigger_type : 4; // 20..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 trigger_type : 4; // 20..23
      uint32 reserved : 3; // 17..19
      uint32 buf_no : 1; // 16
      uint32 lec : 16; // 0..15
#endif
    };
    uint32  u32;
  } tdc_header;
  READ_FROM_BUFFER_FULL(960,uint32 ,tdc_header,tdc_header.u32);
  CHECK_BITS_EQUAL(959,tdc_header.unnamed_24_31,170);
  // list(0<=i<((data_size.bytes / 4) - 3))

  for (uint32 i = 0; i < (uint32) (((data_size.bytes / 4) - 3)); ++i)
  {
    // UINT32 data NOENCODE
    // {
      //  0_10: coarse;
      //    11: is_leading;
      // 12_21: fine;
      // 22_28: channel_index;
      // 29_31: type;
      // ENCODE(time_coarse[(((4 == type) * channel_index) + ((4 != type) * 33))],(value=coarse));
      // ENCODE(time_fine[(((4 == type) * channel_index) + ((4 != type) * 33))],(value=fine));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 coarse : 11; // 0..10
        uint32 is_leading : 1; // 11
        uint32 fine : 10; // 12..21
        uint32 channel_index : 7; // 22..28
        uint32 type : 3; // 29..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 type : 3; // 29..31
        uint32 channel_index : 7; // 22..28
        uint32 fine : 10; // 12..21
        uint32 is_leading : 1; // 11
        uint32 coarse : 11; // 0..10
#endif
      };
      uint32  u32;
    } data;
    READ_FROM_BUFFER_FULL(979,uint32 ,data,data.u32);
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(974,(((4 == data.type) * data.channel_index) + ((4 != data.type) * 33)));
      __item.value = data.coarse;
    }
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(978,(((4 == data.type) * data.channel_index) + ((4 != data.type) * 33)));
      __item.value = data.fine;
    }
  }
  // UINT32 error_bits NOENCODE
  // {
    //  0_23: bits;
    // 24_31: 238;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 bits : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 bits : 24; // 0..23
#endif
    };
    uint32  u32;
  } error_bits;
  READ_FROM_BUFFER_FULL(985,uint32 ,error_bits,error_bits.u32);
  CHECK_BITS_EQUAL(984,error_bits.unnamed_24_31,238);
  // UINT32 trailer NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 187;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unused : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 unused : 24; // 0..23
#endif
    };
    uint32  u32;
  } trailer;
  READ_FROM_BUFFER_FULL(990,uint32 ,trailer,trailer.u32);
  CHECK_BITS_EQUAL(989,trailer.unnamed_24_31,187);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX3_SFP::__unpack,uint32 sfp,uint32 card);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX3_WINDOW.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_WINDOW()
template<typename __data_src_t>
void TAMEX3_WINDOW::__unpack(__data_src_t &__buffer)
{
  // UINT32 trigger_window
  // {
    //  0_15: post_trig_ns;
    // 16_31: pre_trig_ns;
  // }
  READ_FROM_BUFFER_FULL(921,uint32 ,trigger_window,trigger_window.u32);
}
FORCE_IMPL_DATA_SRC_FCN(void,TAMEX3_WINDOW::__unpack);

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
  READ_FROM_BUFFER_FULL(1571,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1566,header.id,id);
  CHECK_BITS_EQUAL(1567,header.unnamed_12_15,0);
  CHECK_BITS_EQUAL(1569,header.unnamed_17_31,0);
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
  READ_FROM_BUFFER_FULL(1576,uint32 ,d1,d1.u32);
  CHECK_BITS_EQUAL(1574,d1.unnamed_16_31,0x3e1);
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
  READ_FROM_BUFFER_FULL(1581,uint32 ,d2,d2.u32);
  CHECK_BITS_EQUAL(1579,d2.unnamed_16_31,0x4e1);
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
  READ_FROM_BUFFER_FULL(1586,uint32 ,d3,d3.u32);
  CHECK_BITS_EQUAL(1584,d3.unnamed_16_31,0x5e1);
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
  READ_FROM_BUFFER_FULL(1591,uint32 ,d4,d4.u32);
  CHECK_BITS_EQUAL(1589,d4.unnamed_16_31,0x6e1);
  {
    t4.value = d4.t4;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TIMESTAMP_WHITERABBIT::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLOII_LMU_SCALERS.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_LMU_SCALERS(id)
template<typename __data_src_t>
void TRLOII_LMU_SCALERS::__unpack(__data_src_t &__buffer,uint32 id)
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
  READ_FROM_BUFFER_FULL(1317,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1316,header.id,id);
  // list(0<=i<header.before_lmu)

  for (uint32 i = 0; i < (uint32) (header.before_lmu); ++i)
  {
    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu[i],(value=value));
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
    } scaler;
    READ_FROM_BUFFER_FULL(1323,uint32 ,scaler,scaler.u32);
    {
      typedef __typeof__(*(&(before_lmu))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = before_lmu.insert_index(1322,i);
      __item.value = scaler.value;
    }
  }
  // list(0<=i<header.before_lmu_mux)

  for (uint32 i = 0; i < (uint32) (header.before_lmu_mux); ++i)
  {
    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_mux[i],(value=value));
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
    } scaler;
    READ_FROM_BUFFER_FULL(1329,uint32 ,scaler,scaler.u32);
    {
      typedef __typeof__(*(&(before_lmu_mux))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = before_lmu_mux.insert_index(1328,i);
      __item.value = scaler.value;
    }
  }
  // list(0<=i<header.before_lmu_aux)

  for (uint32 i = 0; i < (uint32) (header.before_lmu_aux); ++i)
  {
    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_aux[i],(value=value));
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
    } scaler;
    READ_FROM_BUFFER_FULL(1335,uint32 ,scaler,scaler.u32);
    {
      typedef __typeof__(*(&(before_lmu_aux))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = before_lmu_aux.insert_index(1334,i);
      __item.value = scaler.value;
    }
  }
  // list(0<=i<header.after_lmu)

  for (uint32 i = 0; i < (uint32) (header.after_lmu); ++i)
  {
    // UINT32 scaler_bdt NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_dt[i],(value=value));
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
    } scaler_bdt;
    READ_FROM_BUFFER_FULL(1342,uint32 ,scaler_bdt,scaler_bdt.u32);
    {
      typedef __typeof__(*(&(before_dt))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = before_dt.insert_index(1341,i);
      __item.value = scaler_bdt.value;
    }
    // UINT32 scaler_adt NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_dt[i],(value=value));
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
    } scaler_adt;
    READ_FROM_BUFFER_FULL(1346,uint32 ,scaler_adt,scaler_adt.u32);
    {
      typedef __typeof__(*(&(after_dt))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = after_dt.insert_index(1345,i);
      __item.value = scaler_adt.value;
    }
    // UINT32 scaler_ard NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_reduction[i],(value=value));
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
    } scaler_ard;
    READ_FROM_BUFFER_FULL(1350,uint32 ,scaler_ard,scaler_ard.u32);
    {
      typedef __typeof__(*(&(after_reduction))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = after_reduction.insert_index(1349,i);
      __item.value = scaler_ard.value;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_LMU_SCALERS::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLOII_SAMPLER.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER(mark)
template<typename __data_src_t>
void TRLOII_SAMPLER::__unpack(__data_src_t &__buffer,uint32 mark)
{
  // MEMBER(DATA32 sampler[512] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_09: word_num;
    //    10: overflow;
    // 16_31: mark = MATCH(mark);
  // }
  READ_FROM_BUFFER_FULL(1363,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1362,header.mark,mark);
  CHECK_UNNAMED_BITS_ZERO(1363,header.u32,0x0000f800);
  // list(0<=index<header.word_num)

  for (uint32 index = 0; index < (uint32) (header.word_num); ++index)
  {
    // UINT32 time_lo NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler[index],(value=time));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time : 30; // 0..29
        uint32 dunno : 1; // 30
        uint32 overflow : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 overflow : 1; // 31
        uint32 dunno : 1; // 30
        uint32 time : 30; // 0..29
#endif
      };
      uint32  u32;
    } time_lo;
    READ_FROM_BUFFER_FULL(1371,uint32 ,time_lo,time_lo.u32);
    {
      typedef __typeof__(*(&(sampler))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = sampler.insert_index(1370,index);
      __item.value = time_lo.time;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_SAMPLER::__unpack,uint32 mark);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLOII_SAMPLER_TWO.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER_TWO(mark)
template<typename __data_src_t>
void TRLOII_SAMPLER_TWO::__unpack(__data_src_t &__buffer,uint32 mark)
{
  // MEMBER(DATA32 sampler_hi[512] ZERO_SUPPRESS);
  // MEMBER(DATA32 sampler_lo[512] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_09: word_num;
    //    10: overflow;
    // 16_31: mark = MATCH(mark);
  // }
  READ_FROM_BUFFER_FULL(1384,uint32 ,header,header.u32);
  CHECK_BITS_EQUAL(1383,header.mark,mark);
  CHECK_UNNAMED_BITS_ZERO(1384,header.u32,0x0000f800);
  // list(0<=index<(header.word_num / 2))

  for (uint32 index = 0; index < (uint32) ((header.word_num / 2)); ++index)
  {
    // UINT32 time_lo NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler_lo[index],(value=time));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time : 30; // 0..29
        uint32 dunno : 1; // 30
        uint32 overflow : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 overflow : 1; // 31
        uint32 dunno : 1; // 30
        uint32 time : 30; // 0..29
#endif
      };
      uint32  u32;
    } time_lo;
    READ_FROM_BUFFER_FULL(1392,uint32 ,time_lo,time_lo.u32);
    {
      typedef __typeof__(*(&(sampler_lo))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = sampler_lo.insert_index(1391,index);
      __item.value = time_lo.time;
    }
    // UINT32 time_hi NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler_hi[index],(value=time));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time : 30; // 0..29
        uint32 dunno : 1; // 30
        uint32 overflow : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 overflow : 1; // 31
        uint32 dunno : 1; // 30
        uint32 time : 30; // 0..29
#endif
      };
      uint32  u32;
    } time_hi;
    READ_FROM_BUFFER_FULL(1398,uint32 ,time_hi,time_hi.u32);
    {
      typedef __typeof__(*(&(sampler_hi))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = sampler_hi.insert_index(1397,index);
      __item.value = time_hi.time;
    }
  }
  // if(((header.word_num % 2) == 1))

  if (((header.word_num % 2) == 1))
  {
    // UINT32 last_word NOENCODE;
    uint32  last_word;READ_FROM_BUFFER(1402,uint32 ,last_word);
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_SAMPLER_TWO::__unpack,uint32 mark);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLOII_TPAT.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_TPAT(id)
template<typename __data_src_t>
void TRLOII_TPAT::__unpack(__data_src_t &__buffer,uint32 id)
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
  CHECK_BITS_EQUAL(1418,header.id,id);
  {
    n.value = (header.uint32_num / 3);
  }
  // list(0<=index<(header.uint32_num / 3))

  for (uint32 index = 0; index < (uint32) ((header.uint32_num / 3)); ++index)
  {
    // UINT32 time_lo NOENCODE
    // {
      //  0_31: t;
      // ENCODE(ts_lo APPEND_LIST,(value=t));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 t : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 t : 32; // 0..31
#endif
      };
      uint32  u32;
    } time_lo;
    READ_FROM_BUFFER_FULL(1426,uint32 ,time_lo,time_lo.u32);
    {
      typedef __typeof__(*(&(ts_lo))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts_lo.append_item(1425);
      __item.value = time_lo.t;
    }
    // UINT32 time_hi NOENCODE
    // {
      //  0_30: t;
      //    31: overflow;
      // ENCODE(ts_hi APPEND_LIST,(value=t));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 t : 31; // 0..30
        uint32 overflow : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 overflow : 1; // 31
        uint32 t : 31; // 0..30
#endif
      };
      uint32  u32;
    } time_hi;
    READ_FROM_BUFFER_FULL(1431,uint32 ,time_hi,time_hi.u32);
    {
      typedef __typeof__(*(&(ts_hi))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts_hi.append_item(1430);
      __item.value = time_hi.t;
    }
    // UINT32 trigger NOENCODE
    // {
      //  0_15: tpat;
      // 16_23: dunno;
      // 24_27: encoded;
      // 28_31: lec;
      // ENCODE(tpat APPEND_LIST,(value=tpat));
      // ENCODE(trig APPEND_LIST,(value=encoded));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 tpat : 16; // 0..15
        uint32 dunno : 8; // 16..23
        uint32 encoded : 4; // 24..27
        uint32 lec : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 lec : 4; // 28..31
        uint32 encoded : 4; // 24..27
        uint32 dunno : 8; // 16..23
        uint32 tpat : 16; // 0..15
#endif
      };
      uint32  u32;
    } trigger;
    READ_FROM_BUFFER_FULL(1439,uint32 ,trigger,trigger.u32);
    {
      typedef __typeof__(*(&(tpat))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = tpat.append_item(1437);
      __item.value = trigger.tpat;
    }
    {
      typedef __typeof__(*(&(trig))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = trig.append_item(1438);
      __item.value = trigger.encoded;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_TPAT::__unpack,uint32 id);

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
  if (__buffer.empty()) goto data_done_2;
  PEEK_FROM_BUFFER_FULL(451,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(436,ch_data.tdc,tdc,data_done_2);
  CHECK_JUMP_BITS_EQUAL(441,ch_data.unnamed_27_31,0,data_done_2);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(449,((ch_data.tdc << 5) | ch_data.channel_low));
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
  PEEK_FROM_BUFFER_FULL(459,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(457,__error_flags.tdc,tdc,data_done_3);
  CHECK_JUMP_BITS_EQUAL(458,__error_flags.unnamed_27_31,4,data_done_3);
  CHECK_JUMP_UNNAMED_BITS_ZERO(459,__error_flags.u32,0x04ff8000,data_done_3);
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
        CHECK_SPURIOUS_MATCH_DECL(489,spurious_match_abort_loop_2,VME_CAEN_V1190_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(489,VME_CAEN_V1190_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(490,spurious_match_abort_loop_2,VME_CAEN_V1190_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(490,VME_CAEN_V1190_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(491,spurious_match_abort_loop_2,VME_CAEN_V1190_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(491,VME_CAEN_V1190_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(492,spurious_match_abort_loop_2,VME_CAEN_V1190_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(492,VME_CAEN_V1190_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_2:;
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
        CHECK_SPURIOUS_MATCH_DECL(578,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(578,VME_CAEN_V1190_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(579,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(579,VME_CAEN_V1190_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(580,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(580,VME_CAEN_V1190_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(581,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(581,VME_CAEN_V1190_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(583,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(583,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],__visited1,0);
        UNPACK_DECL(583,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(584,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(584,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],__visited1,1);
        UNPACK_DECL(584,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(585,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(585,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],__visited1,2);
        UNPACK_DECL(585,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(586,spurious_match_abort_loop_3,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(586,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],__visited1,3);
        UNPACK_DECL(586,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_3:;
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
  if (__buffer.empty()) goto data_done_4;
  PEEK_FROM_BUFFER_FULL(246,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(226,ch_data.tdc,tdc,data_done_4);
  CHECK_JUMP_BITS_EQUAL(236,ch_data.unnamed_27_31,0,data_done_4);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(240,((ch_data.tdc << 3) | ch_data.channel_low));
    __item.value = ch_data.value;
  }
  }
  data_done_4:;
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
  if (__buffer.empty()) goto data_done_5;
  PEEK_FROM_BUFFER_FULL(254,uint32 ,error_flags,__error_flags.u32);
  CHECK_JUMP_BITS_EQUAL(252,__error_flags.tdc,tdc,data_done_5);
  CHECK_JUMP_BITS_EQUAL(253,__error_flags.unnamed_27_31,4,data_done_5);
  CHECK_JUMP_UNNAMED_BITS_ZERO(254,__error_flags.u32,0x04ff8000,data_done_5);
  error_flags.u32 = __error_flags.u32;
  __buffer.advance(sizeof(__error_flags.u32));
  data_done_5:;
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
        CHECK_SPURIOUS_MATCH_DECL(284,spurious_match_abort_loop_4,VME_CAEN_V1290_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(284,VME_CAEN_V1290_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(285,spurious_match_abort_loop_4,VME_CAEN_V1290_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(285,VME_CAEN_V1290_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(286,spurious_match_abort_loop_4,VME_CAEN_V1290_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(286,VME_CAEN_V1290_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(287,spurious_match_abort_loop_4,VME_CAEN_V1290_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(287,VME_CAEN_V1290_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
    }
  }
  spurious_match_abort_loop_4:;
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
        CHECK_SPURIOUS_MATCH_DECL(373,spurious_match_abort_loop_5,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/0,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(373,VME_CAEN_V1290_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(374,spurious_match_abort_loop_5,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/1,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(374,VME_CAEN_V1290_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(375,spurious_match_abort_loop_5,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/2,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(375,VME_CAEN_V1290_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(376,spurious_match_abort_loop_5,VME_CAEN_V1290_SHORT_SUBTDC,/*tdc*/3,/*event_id*/(header.event_number & 0xfff)/*,data:member*/);
        UNPACK_DECL(376,VME_CAEN_V1290_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(378,spurious_match_abort_loop_5,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/0);
        UNPACK_CHECK_NO_REVISIT(378,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],__visited2,0);
        UNPACK_DECL(378,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(379,spurious_match_abort_loop_5,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/1);
        UNPACK_CHECK_NO_REVISIT(379,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],__visited2,1);
        UNPACK_DECL(379,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(380,spurious_match_abort_loop_5,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/2);
        UNPACK_CHECK_NO_REVISIT(380,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],__visited2,2);
        UNPACK_DECL(380,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(381,spurious_match_abort_loop_5,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,/*tdc*/3);
        UNPACK_CHECK_NO_REVISIT(381,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],__visited2,3);
        UNPACK_DECL(381,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_5:;
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
  READ_FROM_BUFFER_FULL(1455,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(1451,custom_header.id,id);
  CHECK_BITS_EQUAL(1454,custom_header.unnamed_24_31,171);
  CHECK_UNNAMED_BITS_ZERO(1455,custom_header.u32,0x00fc0000);
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
    READ_FROM_BUFFER_FULL(1465,uint32 ,event_header,event_header.u32);
    CHECK_BITS_EQUAL(1459,event_header.unnamed_0_7,170);
    CHECK_BITS_EQUAL(1461,event_header.unnamed_29_30,1);
    CHECK_BITS_EQUAL(1462,event_header.unnamed_31_31,1);
    CHECK_UNNAMED_BITS_ZERO(1465,event_header.u32,0x1f000700);
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
    READ_FROM_BUFFER_FULL(1478,uint32 ,event,event.u32);
    CHECK_UNNAMED_BITS_ZERO(1478,event.u32,0xc0000000);
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(1476,event.channel);
      __item.value = event.time_fine;
    }
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(1477,event.channel);
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
  READ_FROM_BUFFER_FULL(1530,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(1526,custom_header.id,id);
  CHECK_BITS_EQUAL(1529,custom_header.unnamed_24_31,171);
  CHECK_UNNAMED_BITS_ZERO(1530,custom_header.u32,0x00fc0000);
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
    READ_FROM_BUFFER_FULL(1540,uint32 ,event_header,event_header.u32);
    CHECK_BITS_EQUAL(1534,event_header.unnamed_0_7,170);
    CHECK_BITS_EQUAL(1536,event_header.unnamed_29_30,1);
    CHECK_BITS_EQUAL(1537,event_header.unnamed_31_31,1);
    CHECK_UNNAMED_BITS_ZERO(1540,event_header.u32,0x1f000700);
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
    READ_FROM_BUFFER_FULL(1552,uint32 ,event,event.u32);
    CHECK_UNNAMED_BITS_ZERO(1552,event.u32,0xc0000000);
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(1550,event.channel);
      __item.value = event.time_fine;
    }
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(1551,event.channel);
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
  READ_FROM_BUFFER_FULL(1493,uint32 ,custom_header,custom_header.u32);
  CHECK_BITS_EQUAL(1489,custom_header.id,id);
  CHECK_BITS_EQUAL(1492,custom_header.unnamed_24_31,171);
  CHECK_UNNAMED_BITS_ZERO(1493,custom_header.u32,0x00fc0000);
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
    READ_FROM_BUFFER_FULL(1503,uint32 ,event_header,event_header.u32);
    CHECK_BITS_EQUAL(1497,event_header.unnamed_0_7,170);
    CHECK_BITS_EQUAL(1499,event_header.unnamed_29_30,1);
    CHECK_BITS_EQUAL(1500,event_header.unnamed_31_31,1);
    CHECK_UNNAMED_BITS_ZERO(1503,event_header.u32,0x1f000700);
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
    READ_FROM_BUFFER_FULL(1515,uint32 ,event,event.u32);
    CHECK_UNNAMED_BITS_ZERO(1515,event.u32,0x80000000);
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.insert_index(1513,event.channel);
      __item.value = event.time_fine;
    }
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.insert_index(1514,event.channel);
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
  if (__buffer.empty()) goto data_done_6;
  PEEK_FROM_BUFFER_FULL(636,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(632,ch_data.unnamed_21_29,32,data_done_6);
  CHECK_JUMP_BITS_EQUAL(633,ch_data.unnamed_30_31,0,data_done_6);
  CHECK_JUMP_UNNAMED_BITS_ZERO(636,ch_data.u32,0x0000a000,data_done_6);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(635,ch_data.channel);
    __item.value = ch_data.value;
    __item.overflow = ch_data.outofrange;
  }
  }
  data_done_6:;
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
  if (__buffer.empty()) goto data_done_7;
  PEEK_FROM_BUFFER_FULL(642,uint32 ,filler,filler.u32);
  CHECK_JUMP_BITS_EQUAL(641,filler.unnamed_0_31,0,data_done_7);
  __buffer.advance(sizeof(filler.u32));
  data_done_7:;
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
  if (__buffer.empty()) goto data_done_8;
  PEEK_FROM_BUFFER_FULL(681,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(677,ch_data.unnamed_24_27,0,data_done_8);
  CHECK_JUMP_BITS_EQUAL(678,ch_data.unnamed_28_31,1,data_done_8);
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
  data_done_8:;
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
  if (__buffer.empty()) goto data_done_9;
  PEEK_FROM_BUFFER_FULL(686,uint32 ,fill_word,fill_word.u32);
  CHECK_JUMP_BITS_EQUAL(685,fill_word.unnamed_0_31,0,data_done_9);
  __buffer.advance(sizeof(fill_word.u32));
  }
  data_done_9:;
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
 * Event unpacker for VME_MESYTEC_MQDC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MQDC32(geom)
template<typename __data_src_t>
void VME_MESYTEC_MQDC32::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA12_OVERFLOW data[32] ZERO_SUPPRESS);
  // MARK_COUNT(start);
  void *__mark_start = __buffer._data;
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
  CHECK_BITS_EQUAL(1702,header.unnamed_12_14,0);
  CHECK_BITS_EQUAL(1703,header.geom,geom);
  CHECK_BITS_EQUAL(1704,header.unnamed_24_29,0);
  CHECK_BITS_EQUAL(1705,header.unnamed_30_31,1);
  CHECK_UNNAMED_BITS_ZERO(1706,header.u32,0x00008000);
  // several UINT32 ch_data NOENCODE
  // {
    //  0_11: value;
    //    15: outofrange;
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
      uint32 value : 12; // 0..11
      uint32 dummy_12_14 : 3;
      uint32 outofrange : 1; // 15
      uint32 channel : 5; // 16..20
      uint32 unnamed_21_29 : 9; // 21..29
      uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_30_31 : 2; // 30..31
      uint32 unnamed_21_29 : 9; // 21..29
      uint32 channel : 5; // 16..20
      uint32 outofrange : 1; // 15
      uint32 dummy_12_14 : 3;
      uint32 value : 12; // 0..11
#endif
    };
    uint32  u32;
  } ch_data;
  if (__buffer.empty()) goto data_done_10;
  PEEK_FROM_BUFFER_FULL(1717,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(1713,ch_data.unnamed_21_29,32,data_done_10);
  CHECK_JUMP_BITS_EQUAL(1714,ch_data.unnamed_30_31,0,data_done_10);
  CHECK_JUMP_UNNAMED_BITS_ZERO(1717,ch_data.u32,0x00007000,data_done_10);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(1716,ch_data.channel);
    __item.value = ch_data.value;
    __item.overflow = ch_data.outofrange;
  }
  }
  data_done_10:;
  // optional UINT32 ch_data NOENCODE
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
  } ch_data;
  if (__buffer.empty()) goto data_done_11;
  PEEK_FROM_BUFFER_FULL(1722,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(1721,ch_data.unnamed_0_31,0,data_done_11);
  __buffer.advance(sizeof(ch_data.u32));
  data_done_11:;
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  READ_FROM_BUFFER_FULL(1729,uint32 ,end_of_event,end_of_event.u32);
  CHECK_BITS_EQUAL(1728,end_of_event.unnamed_30_31,3);
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
  CHECK_WORD_COUNT(1732,header.word_number,start,end,( - 4),4);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_MESYTEC_MQDC32::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_MESYTEC_MTDC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MTDC32(geom)
template<typename __data_src_t>
void VME_MESYTEC_MTDC32::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA16 data[34] ZERO_SUPPRESS);
  // MARK_COUNT(start);
  void *__mark_start = __buffer._data;
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
  CHECK_BITS_EQUAL(1659,header.geom,geom);
  CHECK_BITS_EQUAL(1660,header.unnamed_24_29,0);
  CHECK_BITS_EQUAL(1661,header.unnamed_30_31,1);
  CHECK_UNNAMED_BITS_ZERO(1662,header.u32,0x00000c00);
  // several UINT32 ch_data NOENCODE
  // {
    //  0_15: value;
    // 16_20: channel;
    //    21: trig;
    // 22_29: 16;
    // 30_31: 0;
    // ENCODE(data[((trig * 32) + channel)],(value=value));
  // }
  for ( ; ; ) {
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 value : 16; // 0..15
      uint32 channel : 5; // 16..20
      uint32 trig : 1; // 21
      uint32 unnamed_22_29 : 8; // 22..29
      uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_30_31 : 2; // 30..31
      uint32 unnamed_22_29 : 8; // 22..29
      uint32 trig : 1; // 21
      uint32 channel : 5; // 16..20
      uint32 value : 16; // 0..15
#endif
    };
    uint32  u32;
  } ch_data;
  if (__buffer.empty()) goto data_done_12;
  PEEK_FROM_BUFFER_FULL(1674,uint32 ,ch_data,ch_data.u32);
  CHECK_JUMP_BITS_EQUAL(1670,ch_data.unnamed_22_29,16,data_done_12);
  CHECK_JUMP_BITS_EQUAL(1671,ch_data.unnamed_30_31,0,data_done_12);
  __buffer.advance(sizeof(ch_data.u32));
  {
    typedef __typeof__(*(&(data))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = data.insert_index(1673,((ch_data.trig * 32) + ch_data.channel));
    __item.value = ch_data.value;
  }
  }
  data_done_12:;
  // optional UINT32 fill NOENCODE
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
  } fill;
  if (__buffer.empty()) goto data_done_13;
  PEEK_FROM_BUFFER_FULL(1679,uint32 ,fill,fill.u32);
  CHECK_JUMP_BITS_EQUAL(1678,fill.unnamed_0_31,0,data_done_13);
  __buffer.advance(sizeof(fill.u32));
  data_done_13:;
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  READ_FROM_BUFFER_FULL(1686,uint32 ,end_of_event,end_of_event.u32);
  CHECK_BITS_EQUAL(1685,end_of_event.unnamed_30_31,3);
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
  CHECK_WORD_COUNT(1689,header.word_number,start,end,( - 4),4);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_MESYTEC_MTDC32::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_MESYTEC_VMMR8.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_VMMR8(geom)
template<typename __data_src_t>
void VME_MESYTEC_VMMR8::__unpack(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA12 data[512] ZERO_SUPPRESS_MULTI(20));
  // MARK_COUNT(start);
  void *__mark_start = __buffer._data;
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
  CHECK_BITS_EQUAL(1746,header.unnamed_12_15,0);
  CHECK_BITS_EQUAL(1747,header.geom,geom);
  CHECK_BITS_EQUAL(1749,header.unnamed_25_29,0);
  CHECK_BITS_EQUAL(1750,header.unnamed_30_31,1);
  // list(0<=index<(header.word_number - 1))

  for (uint32 index = 0; index < (uint32) ((header.word_number - 1)); ++index)
  {
    // UINT32 event NOENCODE
    // {
      //  0_11: part0;
      // 12_15: part1;
      // 16_23: part2;
      // 24_27: part3;
      // 28_29: type;
      // 30_31: 0;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 part0 : 12; // 0..11
        uint32 part1 : 4; // 12..15
        uint32 part2 : 8; // 16..23
        uint32 part3 : 4; // 24..27
        uint32 type : 2; // 28..29
        uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_30_31 : 2; // 30..31
        uint32 type : 2; // 28..29
        uint32 part3 : 4; // 24..27
        uint32 part2 : 8; // 16..23
        uint32 part1 : 4; // 12..15
        uint32 part0 : 12; // 0..11
#endif
      };
      uint32  u32;
    } event;
    READ_FROM_BUFFER_FULL(1761,uint32 ,event,event.u32);
    CHECK_BITS_EQUAL(1760,event.unnamed_30_31,0);
    // if((1 == event.type))

    if ((1 == event.type))
    {
      // ENCODE(data[(((event.part2 << 4) | event.part1) + (64 * event.part3))],(value=event.part0));

      {
        typedef __typeof__(*(&(data))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = data.insert_index(1768,(((event.part2 << 4) | event.part1) + (64 * event.part3)));
        __item.value = event.part0;
      }
    }
  }
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  READ_FROM_BUFFER_FULL(1782,uint32 ,end_of_event,end_of_event.u32);
  CHECK_BITS_EQUAL(1781,end_of_event.unnamed_30_31,3);
  // MARK_COUNT(end);
  void *__mark_end = __buffer._data;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
  CHECK_WORD_COUNT(1785,header.word_number,start,end,( - 4),4);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_MESYTEC_VMMR8::__unpack,uint32 geom);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_SIS_3820_SCALER.
 *
 * Do not edit - automatically generated.
 */

// VME_SIS_3820_SCALER(geom)
template<typename __data_src_t>
void VME_SIS_3820_SCALER::__unpack(__data_src_t &__buffer,uint32 geom)
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
  CHECK_BITS_EQUAL(1620,custom_header.unnamed_19_19,0);
  CHECK_BITS_EQUAL(1622,custom_header.unnamed_26_26,0);
  CHECK_BITS_EQUAL(1623,custom_header.id,geom);
  // if((1 == custom_header.mode))

  if ((1 == custom_header.mode))
  {
    // list(0<=index<custom_header.nwords)

    for (uint32 index = 0; index < (uint32) (custom_header.nwords); ++index)
    {
      // if((32 == custom_header.data_format))

      if ((32 == custom_header.data_format))
      {
        // UINT32 event NOENCODE
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
        } event;
        READ_FROM_BUFFER_FULL(1631,uint32 ,event,event.u32);
        // ENCODE(data[index],(value=event.val));

        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(1632,index);
          __item.value = event.val;
        }
      }
      // if((24 == custom_header.data_format))

      if ((24 == custom_header.data_format))
      {
        // UINT32 event NOENCODE
        // {
          //  0_23: val;
          // 24_28: channel;
          //    29: 0;
          // 30_31: user_bits;
        // }
        union
        {
          struct
          {
#if __BYTE_ORDER == __LITTLE_ENDIAN
            uint32 val : 24; // 0..23
            uint32 channel : 5; // 24..28
            uint32 unnamed_29_29 : 1; // 29
            uint32 user_bits : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
            uint32 user_bits : 2; // 30..31
            uint32 unnamed_29_29 : 1; // 29
            uint32 channel : 5; // 24..28
            uint32 val : 24; // 0..23
#endif
          };
          uint32  u32;
        } event;
        READ_FROM_BUFFER_FULL(1640,uint32 ,event,event.u32);
        CHECK_BITS_EQUAL(1638,event.unnamed_29_29,0);
        // ENCODE(data[event.channel],(value=event.val));

        {
          typedef __typeof__(*(&(data))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = data.insert_index(1641,event.channel);
          __item.value = event.val;
        }
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_SIS_3820_SCALER::__unpack,uint32 geom);

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
  READ_FROM_BUFFER_FULL(1602,uint32 ,hi,hi.u32);
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
  READ_FROM_BUFFER_FULL(1606,uint32 ,lo,lo.u32);
  {
    time_lo.value = lo.time;
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,WR_MULTI::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for fibsipm_data.
 *
 * Do not edit - automatically generated.
 */

// fibsipm_data()
template<typename __data_src_t>
void fibsipm_data::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2089,LAND_STD_VME,land_vme);
  // select several

    // ctdc[0] = GSI_CLOCKTDC_ITEM(sfp=0,tdc=0);
    // ctdc[1] = GSI_CLOCKTDC_ITEM(sfp=0,tdc=1);
    // ctdc[2] = GSI_CLOCKTDC_ITEM(sfp=0,tdc=2);
    // ctdc[3] = GSI_CLOCKTDC_ITEM(sfp=0,tdc=3);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: GSI_CLOCKTDC_ITEM ctdc[0]: (s32) => (0x00fff0ff,0x00000034)
    // optimized match 2: GSI_CLOCKTDC_ITEM ctdc[1]: (s32) => (0x00fff0ff,0x00010034)
    // optimized match 3: GSI_CLOCKTDC_ITEM ctdc[2]: (s32) => (0x00fff0ff,0x00020034)
    // optimized match 4: GSI_CLOCKTDC_ITEM ctdc[3]: (s32) => (0x00fff0ff,0x00030034)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2095,uint32,__match_peek);
    // differ = 00030000 : 16 17
    uint32 __match_index = 0 | /* 16,17 */ ((__match_peek >> 16) & 0x00000003);
    static const sint8 __match_index_array[4] = { 1, 2, 3, 4, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(2091,spurious_match_abort_loop_6,GSI_CLOCKTDC_ITEM,/*sfp*/0,/*tdc*/0);
        UNPACK_DECL(2091,GSI_CLOCKTDC_ITEM,ctdc[0],/*sfp*/0,/*tdc*/0);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(2092,spurious_match_abort_loop_6,GSI_CLOCKTDC_ITEM,/*sfp*/0,/*tdc*/1);
        UNPACK_DECL(2092,GSI_CLOCKTDC_ITEM,ctdc[1],/*sfp*/0,/*tdc*/1);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(2093,spurious_match_abort_loop_6,GSI_CLOCKTDC_ITEM,/*sfp*/0,/*tdc*/2);
        UNPACK_DECL(2093,GSI_CLOCKTDC_ITEM,ctdc[2],/*sfp*/0,/*tdc*/2);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(2094,spurious_match_abort_loop_6,GSI_CLOCKTDC_ITEM,/*sfp*/0,/*tdc*/3);
        UNPACK_DECL(2094,GSI_CLOCKTDC_ITEM,ctdc[3],/*sfp*/0,/*tdc*/3);
        break;
    }
  }
  spurious_match_abort_loop_6:;
}
FORCE_IMPL_DATA_SRC_FCN(void,fibsipm_data::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for neuland_sfp.
 *
 * Do not edit - automatically generated.
 */

// neuland_sfp(sfp)
template<typename __data_src_t>
void neuland_sfp::__unpack(__data_src_t &__buffer,uint32 sfp)
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
    // optimized match 1: TAMEX3_FH_SFP card[0]: (s32) => (0xffff00ff,0x00000034)
    // optimized match 2: TAMEX3_FH_SFP card[1]: (s32) => (0xffff00ff,0x00010034)
    // optimized match 3: TAMEX3_FH_SFP card[2]: (s32) => (0xffff00ff,0x00020034)
    // optimized match 4: TAMEX3_FH_SFP card[3]: (s32) => (0xffff00ff,0x00030034)
    // optimized match 5: TAMEX3_FH_SFP card[4]: (s32) => (0xffff00ff,0x00040034)
    // optimized match 6: TAMEX3_FH_SFP card[5]: (s32) => (0xffff00ff,0x00050034)
    // optimized match 7: TAMEX3_FH_SFP card[6]: (s32) => (0xffff00ff,0x00060034)
    // optimized match 8: TAMEX3_FH_SFP card[7]: (s32) => (0xffff00ff,0x00070034)
    // optimized match 9: TAMEX3_FH_SFP card[8]: (s32) => (0xffff00ff,0x00080034)
    // optimized match 10: TAMEX3_FH_SFP card[9]: (s32) => (0xffff00ff,0x00090034)
    // optimized match 11: TAMEX3_FH_SFP card[10]: (s32) => (0xffff00ff,0x000a0034)
    // optimized match 12: TAMEX3_FH_SFP card[11]: (s32) => (0xffff00ff,0x000b0034)
    // optimized match 13: TAMEX3_FH_SFP card[12]: (s32) => (0xffff00ff,0x000c0034)
    // optimized match 14: TAMEX3_FH_SFP card[13]: (s32) => (0xffff00ff,0x000d0034)
    // optimized match 15: TAMEX3_FH_SFP card[14]: (s32) => (0xffff00ff,0x000e0034)
    // optimized match 16: TAMEX3_FH_SFP card[15]: (s32) => (0xffff00ff,0x000f0034)
    // optimized match 17: TAMEX3_FH_SFP card[16]: (s32) => (0xffff00ff,0x00100034)
    // optimized match 18: TAMEX3_FH_SFP card[17]: (s32) => (0xffff00ff,0x00110034)
    // optimized match 19: TAMEX3_FH_SFP card[18]: (s32) => (0xffff00ff,0x00120034)
    // optimized match 20: TAMEX3_FH_SFP card[19]: (s32) => (0xffff00ff,0x00130034)
    // optimized match 21: TAMEX3_FH_SFP card[20]: (s32) => (0xffff00ff,0x00140034)
    // optimized match 22: TAMEX3_FH_SFP card[21]: (s32) => (0xffff00ff,0x00150034)
    // optimized match 23: TAMEX3_FH_SFP card[22]: (s32) => (0xffff00ff,0x00160034)
    // optimized match 24: TAMEX3_FH_SFP card[23]: (s32) => (0xffff00ff,0x00170034)
    // optimized match 25: TAMEX3_FH_SFP card[24]: (s32) => (0xffff00ff,0x00180034)
    // optimized match 26: TAMEX3_FH_SFP card[25]: (s32) => (0xffff00ff,0x00190034)
    // optimized match 27: TAMEX3_FH_SFP card[26]: (s32) => (0xffff00ff,0x001a0034)
    // optimized match 28: TAMEX3_FH_SFP card[27]: (s32) => (0xffff00ff,0x001b0034)
    // optimized match 29: TAMEX3_FH_SFP card[28]: (s32) => (0xffff00ff,0x001c0034)
    // optimized match 30: TAMEX3_FH_SFP card[29]: (s32) => (0xffff00ff,0x001d0034)
    // optimized match 31: TAMEX3_FH_SFP card[30]: (s32) => (0xffff00ff,0x001e0034)
    // optimized match 32: TAMEX3_FH_SFP card[31]: (s32) => (0xffff00ff,0x001f0034)
    // optimized match 33: TAMEX3_FH_SFP card[32]: (s32) => (0xffff00ff,0x00200034)
    // optimized match 34: TAMEX3_FH_SFP card[33]: (s32) => (0xffff00ff,0x00210034)
    // optimized match 35: TAMEX3_FH_SFP card[34]: (s32) => (0xffff00ff,0x00220034)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1995,uint32,__match_peek);
    // differ = 003f0000 : 16 17 18 19 20 21
    uint32 __match_index = 0 | /* 16,21 */ ((__match_peek >> 16) & 0x0000003f);
    static const sint8 __match_index_array[64] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(1960,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/0);
        UNPACK_DECL(1960,TAMEX3_FH_SFP,card[0],/*sfp*/sfp,/*card*/0);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(1961,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/1);
        UNPACK_DECL(1961,TAMEX3_FH_SFP,card[1],/*sfp*/sfp,/*card*/1);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(1962,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/2);
        UNPACK_DECL(1962,TAMEX3_FH_SFP,card[2],/*sfp*/sfp,/*card*/2);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(1963,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/3);
        UNPACK_DECL(1963,TAMEX3_FH_SFP,card[3],/*sfp*/sfp,/*card*/3);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(1964,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/4);
        UNPACK_DECL(1964,TAMEX3_FH_SFP,card[4],/*sfp*/sfp,/*card*/4);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(1965,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/5);
        UNPACK_DECL(1965,TAMEX3_FH_SFP,card[5],/*sfp*/sfp,/*card*/5);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(1966,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/6);
        UNPACK_DECL(1966,TAMEX3_FH_SFP,card[6],/*sfp*/sfp,/*card*/6);
        break;
      case 8:
        CHECK_SPURIOUS_MATCH_DECL(1967,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/7);
        UNPACK_DECL(1967,TAMEX3_FH_SFP,card[7],/*sfp*/sfp,/*card*/7);
        break;
      case 9:
        CHECK_SPURIOUS_MATCH_DECL(1968,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/8);
        UNPACK_DECL(1968,TAMEX3_FH_SFP,card[8],/*sfp*/sfp,/*card*/8);
        break;
      case 10:
        CHECK_SPURIOUS_MATCH_DECL(1969,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/9);
        UNPACK_DECL(1969,TAMEX3_FH_SFP,card[9],/*sfp*/sfp,/*card*/9);
        break;
      case 11:
        CHECK_SPURIOUS_MATCH_DECL(1970,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/10);
        UNPACK_DECL(1970,TAMEX3_FH_SFP,card[10],/*sfp*/sfp,/*card*/10);
        break;
      case 12:
        CHECK_SPURIOUS_MATCH_DECL(1971,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/11);
        UNPACK_DECL(1971,TAMEX3_FH_SFP,card[11],/*sfp*/sfp,/*card*/11);
        break;
      case 13:
        CHECK_SPURIOUS_MATCH_DECL(1972,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/12);
        UNPACK_DECL(1972,TAMEX3_FH_SFP,card[12],/*sfp*/sfp,/*card*/12);
        break;
      case 14:
        CHECK_SPURIOUS_MATCH_DECL(1973,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/13);
        UNPACK_DECL(1973,TAMEX3_FH_SFP,card[13],/*sfp*/sfp,/*card*/13);
        break;
      case 15:
        CHECK_SPURIOUS_MATCH_DECL(1974,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/14);
        UNPACK_DECL(1974,TAMEX3_FH_SFP,card[14],/*sfp*/sfp,/*card*/14);
        break;
      case 16:
        CHECK_SPURIOUS_MATCH_DECL(1975,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/15);
        UNPACK_DECL(1975,TAMEX3_FH_SFP,card[15],/*sfp*/sfp,/*card*/15);
        break;
      case 17:
        CHECK_SPURIOUS_MATCH_DECL(1976,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/16);
        UNPACK_DECL(1976,TAMEX3_FH_SFP,card[16],/*sfp*/sfp,/*card*/16);
        break;
      case 18:
        CHECK_SPURIOUS_MATCH_DECL(1977,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/17);
        UNPACK_DECL(1977,TAMEX3_FH_SFP,card[17],/*sfp*/sfp,/*card*/17);
        break;
      case 19:
        CHECK_SPURIOUS_MATCH_DECL(1978,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/18);
        UNPACK_DECL(1978,TAMEX3_FH_SFP,card[18],/*sfp*/sfp,/*card*/18);
        break;
      case 20:
        CHECK_SPURIOUS_MATCH_DECL(1979,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/19);
        UNPACK_DECL(1979,TAMEX3_FH_SFP,card[19],/*sfp*/sfp,/*card*/19);
        break;
      case 21:
        CHECK_SPURIOUS_MATCH_DECL(1980,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/20);
        UNPACK_DECL(1980,TAMEX3_FH_SFP,card[20],/*sfp*/sfp,/*card*/20);
        break;
      case 22:
        CHECK_SPURIOUS_MATCH_DECL(1981,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/21);
        UNPACK_DECL(1981,TAMEX3_FH_SFP,card[21],/*sfp*/sfp,/*card*/21);
        break;
      case 23:
        CHECK_SPURIOUS_MATCH_DECL(1982,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/22);
        UNPACK_DECL(1982,TAMEX3_FH_SFP,card[22],/*sfp*/sfp,/*card*/22);
        break;
      case 24:
        CHECK_SPURIOUS_MATCH_DECL(1983,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/23);
        UNPACK_DECL(1983,TAMEX3_FH_SFP,card[23],/*sfp*/sfp,/*card*/23);
        break;
      case 25:
        CHECK_SPURIOUS_MATCH_DECL(1984,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/24);
        UNPACK_DECL(1984,TAMEX3_FH_SFP,card[24],/*sfp*/sfp,/*card*/24);
        break;
      case 26:
        CHECK_SPURIOUS_MATCH_DECL(1985,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/25);
        UNPACK_DECL(1985,TAMEX3_FH_SFP,card[25],/*sfp*/sfp,/*card*/25);
        break;
      case 27:
        CHECK_SPURIOUS_MATCH_DECL(1986,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/26);
        UNPACK_DECL(1986,TAMEX3_FH_SFP,card[26],/*sfp*/sfp,/*card*/26);
        break;
      case 28:
        CHECK_SPURIOUS_MATCH_DECL(1987,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/27);
        UNPACK_DECL(1987,TAMEX3_FH_SFP,card[27],/*sfp*/sfp,/*card*/27);
        break;
      case 29:
        CHECK_SPURIOUS_MATCH_DECL(1988,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/28);
        UNPACK_DECL(1988,TAMEX3_FH_SFP,card[28],/*sfp*/sfp,/*card*/28);
        break;
      case 30:
        CHECK_SPURIOUS_MATCH_DECL(1989,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/29);
        UNPACK_DECL(1989,TAMEX3_FH_SFP,card[29],/*sfp*/sfp,/*card*/29);
        break;
      case 31:
        CHECK_SPURIOUS_MATCH_DECL(1990,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/30);
        UNPACK_DECL(1990,TAMEX3_FH_SFP,card[30],/*sfp*/sfp,/*card*/30);
        break;
      case 32:
        CHECK_SPURIOUS_MATCH_DECL(1991,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/31);
        UNPACK_DECL(1991,TAMEX3_FH_SFP,card[31],/*sfp*/sfp,/*card*/31);
        break;
      case 33:
        CHECK_SPURIOUS_MATCH_DECL(1992,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/32);
        UNPACK_DECL(1992,TAMEX3_FH_SFP,card[32],/*sfp*/sfp,/*card*/32);
        break;
      case 34:
        CHECK_SPURIOUS_MATCH_DECL(1993,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/33);
        UNPACK_DECL(1993,TAMEX3_FH_SFP,card[33],/*sfp*/sfp,/*card*/33);
        break;
      case 35:
        CHECK_SPURIOUS_MATCH_DECL(1994,spurious_match_abort_loop_7,TAMEX3_FH_SFP,/*sfp*/sfp,/*card*/34);
        UNPACK_DECL(1994,TAMEX3_FH_SFP,card[34],/*sfp*/sfp,/*card*/34);
        break;
    }
  }
  spurious_match_abort_loop_7:;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,neuland_sfp::__unpack,uint32 sfp);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for neuland_tamex_subev_data.
 *
 * Do not edit - automatically generated.
 */

// neuland_tamex_subev_data()
template<typename __data_src_t>
void neuland_tamex_subev_data::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2000,LAND_STD_VME,land_vme);
  // select several

    // padding0 = TAMEX3_PADDING();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TAMEX3_PADDING padding0: (s32) => (0xfff00000,0xadd00000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2003,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(2002,spurious_match_abort_loop_8,TAMEX3_PADDING);
        UNPACK_DECL(2002,TAMEX3_PADDING,padding0);
        break;
    }
  }
  spurious_match_abort_loop_8:;
  // sfp[0] = neuland_sfp(sfp=0);
  UNPACK_DECL(2004,neuland_sfp,sfp[0],/*sfp*/0);
}
FORCE_IMPL_DATA_SRC_FCN(void,neuland_tamex_subev_data::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for s2_vme_subev_data.
 *
 * Do not edit - automatically generated.
 */

// s2_vme_subev_data()
template<typename __data_src_t>
void s2_vme_subev_data::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2112,LAND_STD_VME,land_vme);
  // barrier = BARRIER();
  UNPACK_DECL(2113,BARRIER,barrier);
  // vftx21 = VME_GSI_VFTX2(id=1);
  UNPACK_DECL(2114,VME_GSI_VFTX2,vftx21,/*id*/1);
  // mqdc = VME_MESYTEC_MQDC32(geom=2);
  UNPACK_DECL(2115,VME_MESYTEC_MQDC32,mqdc,/*geom*/2);
}
FORCE_IMPL_DATA_SRC_FCN(void,s2_vme_subev_data::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for s8_vme_subev_data.
 *
 * Do not edit - automatically generated.
 */

// s8_vme_subev_data()
template<typename __data_src_t>
void s8_vme_subev_data::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2144,LAND_STD_VME,land_vme);
  // select several

    // vftx21 = VME_GSI_VFTX2_7PS(id=0);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_GSI_VFTX2_7PS vftx21: (s32) => (0xfffc001f,0xab000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2147,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(2146,spurious_match_abort_loop_9,VME_GSI_VFTX2_7PS,/*id*/0);
        UNPACK_DECL(2146,VME_GSI_VFTX2_7PS,vftx21,/*id*/0);
        break;
    }
  }
  spurious_match_abort_loop_9:;
}
FORCE_IMPL_DATA_SRC_FCN(void,s8_vme_subev_data::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for sofia_mwpc_subev_data.
 *
 * Do not edit - automatically generated.
 */

// sofia_mwpc_subev_data()
template<typename __data_src_t>
void sofia_mwpc_subev_data::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2044,LAND_STD_VME,land_vme);
  // select several

    // vmmr8 = VME_MESYTEC_VMMR8(geom=0);
    // madc32[0] = VME_MESYTEC_MADC32(geom=1);
    // madc32[1] = VME_MESYTEC_MADC32(geom=2);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_MESYTEC_VMMR8 vmmr8: (s32) => (0xfefff000,0x40000000)
    // optimized match 2: VME_MESYTEC_MADC32 madc32[0]: (s32) => (0xffff0000,0x40010000)
    // optimized match 3: VME_MESYTEC_MADC32 madc32[1]: (s32) => (0xffff0000,0x40020000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2049,uint32,__match_peek);
    // differ = 00030000 : 16 17
    uint32 __match_index = 0 | /* 16,17 */ ((__match_peek >> 16) & 0x00000003);
    static const sint8 __match_index_array[4] = { 1, 2, 3, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(2046,spurious_match_abort_loop_10,VME_MESYTEC_VMMR8,/*geom*/0);
        UNPACK_DECL(2046,VME_MESYTEC_VMMR8,vmmr8,/*geom*/0);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(2047,spurious_match_abort_loop_10,VME_MESYTEC_MADC32,/*geom*/1);
        UNPACK_DECL(2047,VME_MESYTEC_MADC32,madc32[0],/*geom*/1);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(2048,spurious_match_abort_loop_10,VME_MESYTEC_MADC32,/*geom*/2);
        UNPACK_DECL(2048,VME_MESYTEC_MADC32,madc32[1],/*geom*/2);
        break;
    }
  }
  spurious_match_abort_loop_10:;
}
FORCE_IMPL_DATA_SRC_FCN(void,sofia_mwpc_subev_data::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for sofia_tof_subev_data.
 *
 * Do not edit - automatically generated.
 */

// sofia_tof_subev_data()
template<typename __data_src_t>
void sofia_tof_subev_data::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2025,LAND_STD_VME,land_vme);
  // select several

    // vftx2[0] = VME_GSI_VFTX2_7PS(id=0);
    // vftx2[1] = VME_GSI_VFTX2_7PS(id=1);
    // vftx2[2] = VME_GSI_VFTX2_7PS(id=2);
    // vftx2[3] = VME_GSI_VFTX2_7PS(id=3);
    // sis3820scaler[0] = VME_SIS_3820_SCALER(geom=4);
    // b = BARRIER();
    // sis3820scaler[1] = VME_SIS_3820_SCALER(geom=5);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_GSI_VFTX2_7PS vftx2[0]: (s32) => (0xfffc001f,0xab000000)
    // optimized match 2: VME_GSI_VFTX2_7PS vftx2[1]: (s32) => (0xfffc001f,0xab000001)
    // optimized match 3: VME_GSI_VFTX2_7PS vftx2[2]: (s32) => (0xfffc001f,0xab000002)
    // optimized match 4: VME_GSI_VFTX2_7PS vftx2[3]: (s32) => (0xfffc001f,0xab000003)
    // optimized match 5: VME_SIS_3820_SCALER sis3820scaler[0]: (s32) => (0xfc080000,0x20000000)
    // optimized match 6: BARRIER b: (s32) => (0xffffffff,0xbabababa)
    // optimized match 7: VME_SIS_3820_SCALER sis3820scaler[1]: (s32) => (0xfc080000,0x28000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2034,uint32,__match_peek);
    // differ = 9bbababb : 0 1 3 4 5 7 9 11 12 13 15 17 19 20 21 23 24 25 27 28 31
    // select on bit 31, partition: 1:2(d5) 0:5(d2)
    if (__match_peek & 0x80000000) {
      // select on bit 1, partition: 1:2(d3) 0:3(d2)
      if (__match_peek & 0x00000002) {
        MATCH_DECL_QUICK(2029,__match_no,3,vftx2[2],__match_peek,0xfffc001f,0xab000002);
        MATCH_DECL_QUICK(2030,__match_no,4,vftx2[3],__match_peek,0xfffc001f,0xab000003);
        MATCH_DECL_QUICK(2032,__match_no,6,b,__match_peek,0xffffffff,0xbabababa);
      } else {
        MATCH_DECL_QUICK(2027,__match_no,1,vftx2[0],__match_peek,0xfffc001f,0xab000000);
        MATCH_DECL_QUICK(2028,__match_no,2,vftx2[1],__match_peek,0xfffc001f,0xab000001);
      }
    } else {
      MATCH_DECL_QUICK(2031,__match_no,5,sis3820scaler[0],__match_peek,0xfc080000,0x20000000);
      MATCH_DECL_QUICK(2033,__match_no,7,sis3820scaler[1],__match_peek,0xfc080000,0x28000000);
    }
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(2027,spurious_match_abort_loop_11,VME_GSI_VFTX2_7PS,/*id*/0);
        UNPACK_DECL(2027,VME_GSI_VFTX2_7PS,vftx2[0],/*id*/0);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(2028,spurious_match_abort_loop_11,VME_GSI_VFTX2_7PS,/*id*/1);
        UNPACK_DECL(2028,VME_GSI_VFTX2_7PS,vftx2[1],/*id*/1);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(2029,spurious_match_abort_loop_11,VME_GSI_VFTX2_7PS,/*id*/2);
        UNPACK_DECL(2029,VME_GSI_VFTX2_7PS,vftx2[2],/*id*/2);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(2030,spurious_match_abort_loop_11,VME_GSI_VFTX2_7PS,/*id*/3);
        UNPACK_DECL(2030,VME_GSI_VFTX2_7PS,vftx2[3],/*id*/3);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(2031,spurious_match_abort_loop_11,VME_SIS_3820_SCALER,/*geom*/4);
        UNPACK_DECL(2031,VME_SIS_3820_SCALER,sis3820scaler[0],/*geom*/4);
        break;
      case 6:
        CHECK_SPURIOUS_MATCH_DECL(2032,spurious_match_abort_loop_11,BARRIER);
        UNPACK_DECL(2032,BARRIER,b);
        break;
      case 7:
        CHECK_SPURIOUS_MATCH_DECL(2033,spurious_match_abort_loop_11,VME_SIS_3820_SCALER,/*geom*/5);
        UNPACK_DECL(2033,VME_SIS_3820_SCALER,sis3820scaler[1],/*geom*/5);
        break;
    }
  }
  spurious_match_abort_loop_11:;
}
FORCE_IMPL_DATA_SRC_FCN(void,sofia_tof_subev_data::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for sofia_trim_subev_data.
 *
 * Do not edit - automatically generated.
 */

// sofia_trim_subev_data()
template<typename __data_src_t>
void sofia_trim_subev_data::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2074,LAND_STD_VME,land_vme);
  // select several

    // mdpp = VME_MESYTEC_MDPP16(geom=0);
    // vmmr8 = VME_MESYTEC_VMMR8(geom=1);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_MESYTEC_MDPP16 mdpp: (s32) => (0xffff0000,0x40000000)
    // optimized match 2: VME_MESYTEC_VMMR8 vmmr8: (s32) => (0xfefff000,0x40010000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2078,uint32,__match_peek);
    // differ = 00010000 : 16
    uint32 __match_index = 0 | /* 16,16 */ ((__match_peek >> 16) & 0x00000001);
    static const sint8 __match_index_array[2] = { 1, 2, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(2076,spurious_match_abort_loop_12,VME_MESYTEC_MDPP16,/*geom*/0);
        UNPACK_DECL(2076,VME_MESYTEC_MDPP16,mdpp,/*geom*/0);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(2077,spurious_match_abort_loop_12,VME_MESYTEC_VMMR8,/*geom*/1);
        UNPACK_DECL(2077,VME_MESYTEC_VMMR8,vmmr8,/*geom*/1);
        break;
    }
  }
  spurious_match_abort_loop_12:;
}
FORCE_IMPL_DATA_SRC_FCN(void,sofia_trim_subev_data::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for sofia_twim_subev_data.
 *
 * Do not edit - automatically generated.
 */

// sofia_twim_subev_data()
template<typename __data_src_t>
void sofia_twim_subev_data::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2059,LAND_STD_VME,land_vme);
  // select several

    // mdpp16[0] = VME_MESYTEC_MDPP16(geom=0);
    // mdpp16[1] = VME_MESYTEC_MDPP16(geom=1);
    // sis3820scaler = VME_SIS_3820_SCALER(geom=2);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: VME_MESYTEC_MDPP16 mdpp16[0]: (s32) => (0xffff0000,0x40000000)
    // optimized match 2: VME_MESYTEC_MDPP16 mdpp16[1]: (s32) => (0xffff0000,0x40010000)
    // optimized match 3: VME_SIS_3820_SCALER sis3820scaler: (s32) => (0xfc080000,0x10000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2064,uint32,__match_peek);
    // differ = 50010000 : 16 28 30
    uint32 __match_index = 0 | /* 16,16 */ ((__match_peek >> 16) & 0x00000001) | /* 28,28 */ ((__match_peek >> 27) & 0x00000002) | /* 30,30 */ ((__match_peek >> 28) & 0x00000004);
    static const sint8 __match_index_array[8] = { 0, 0, 3, 3, 1, 2, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(2061,spurious_match_abort_loop_13,VME_MESYTEC_MDPP16,/*geom*/0);
        UNPACK_DECL(2061,VME_MESYTEC_MDPP16,mdpp16[0],/*geom*/0);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(2062,spurious_match_abort_loop_13,VME_MESYTEC_MDPP16,/*geom*/1);
        UNPACK_DECL(2062,VME_MESYTEC_MDPP16,mdpp16[1],/*geom*/1);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(2063,spurious_match_abort_loop_13,VME_SIS_3820_SCALER,/*geom*/2);
        UNPACK_DECL(2063,VME_SIS_3820_SCALER,sis3820scaler,/*geom*/2);
        break;
    }
  }
  spurious_match_abort_loop_13:;
}
FORCE_IMPL_DATA_SRC_FCN(void,sofia_twim_subev_data::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for CALIFA_MESSEL.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CALIFA_MESSEL)
template<typename __data_src_t>
void CALIFA_MESSEL::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0xa00);
  UNPACK_DECL(1916,TIMESTAMP_WHITERABBIT,ts,/*id*/0xa00);
  // select several

    // febex3 = FEBEX3_CALIFA_BASE();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FEBEX3_CALIFA_BASE febex3: (s32) => (0xfff00000,0xadd00000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1919,uint32,__match_peek);
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
        UNPACK_DECL(1918,FEBEX3_CALIFA_BASE,febex3);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,CALIFA_MESSEL::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for CALIFA_WIXHAUSEN.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CALIFA_WIXHAUSEN)
template<typename __data_src_t>
void CALIFA_WIXHAUSEN::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0xb00);
  UNPACK_DECL(1925,TIMESTAMP_WHITERABBIT,ts,/*id*/0xb00);
  // select several

    // febex3 = FEBEX3_CALIFA_BASE();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FEBEX3_CALIFA_BASE febex3: (s32) => (0xfff00000,0xadd00000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(1928,uint32,__match_peek);
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
        UNPACK_DECL(1927,FEBEX3_CALIFA_BASE,febex3);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,CALIFA_WIXHAUSEN::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for fibsipm_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fibsipm_subev)
template<typename __data_src_t>
void fibsipm_subev::__unpack(__data_src_t &__buffer)
{
  // select several

    // data = fibsipm_data();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: fibsipm_data data: could not get bits
    __buffer.peeking();
    MATCH_DECL(2101,__match_no,1,fibsipm_data,data);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2101,fibsipm_data,data);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fibsipm_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for lmu_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(lmu_subev)
template<typename __data_src_t>
void lmu_subev::__unpack(__data_src_t &__buffer)
{
  // scalers = TRLOII_LMU_SCALERS(id=199);
  UNPACK_DECL(1943,TRLOII_LMU_SCALERS,scalers,/*id*/199);
  // pulser = MEGA_PULSER();
  UNPACK_DECL(1944,MEGA_PULSER,pulser);
}
FORCE_IMPL_DATA_SRC_FCN(void,lmu_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for main_tpat_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(main_tpat_subev)
template<typename __data_src_t>
void main_tpat_subev::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2132,LAND_STD_VME,land_vme);
  // tpat = TRLOII_TPAT(id=207);
  UNPACK_DECL(2133,TRLOII_TPAT,tpat,/*id*/207);
}
FORCE_IMPL_DATA_SRC_FCN(void,main_tpat_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for main_wr.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(main_wr)
template<typename __data_src_t>
void main_wr::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x300);
  UNPACK_DECL(1933,TIMESTAMP_WHITERABBIT,ts,/*id*/0x300);
}
FORCE_IMPL_DATA_SRC_FCN(void,main_wr::__unpack);

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
  // select several

    // data = neuland_tamex_subev_data();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: neuland_tamex_subev_data data: could not get bits
    __buffer.peeking();
    MATCH_DECL(2010,__match_no,1,neuland_tamex_subev_data,data);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2010,neuland_tamex_subev_data,data);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,neuland_tamex_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for s2_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(s2_vme_subev)
template<typename __data_src_t>
void s2_vme_subev::__unpack(__data_src_t &__buffer)
{
  // select several

    // data = s2_vme_subev_data();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: s2_vme_subev_data data: could not get bits
    __buffer.peeking();
    MATCH_DECL(2121,__match_no,1,s2_vme_subev_data,data);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2121,s2_vme_subev_data,data);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,s2_vme_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for s8_tpat_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(s8_tpat_subev)
template<typename __data_src_t>
void s8_tpat_subev::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2138,LAND_STD_VME,land_vme);
  // tpat = TRLOII_TPAT(id=207);
  UNPACK_DECL(2139,TRLOII_TPAT,tpat,/*id*/207);
}
FORCE_IMPL_DATA_SRC_FCN(void,s8_tpat_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for s8_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(s8_vme_subev)
template<typename __data_src_t>
void s8_vme_subev::__unpack(__data_src_t &__buffer)
{
  // select several

    // data = s8_vme_subev_data();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: s8_vme_subev_data data: could not get bits
    __buffer.peeking();
    MATCH_DECL(2153,__match_no,1,s8_vme_subev_data,data);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2153,s8_vme_subev_data,data);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,s8_vme_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for s8_wr.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(s8_wr)
template<typename __data_src_t>
void s8_wr::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x800);
  UNPACK_DECL(2127,TIMESTAMP_WHITERABBIT,ts,/*id*/0x800);
}
FORCE_IMPL_DATA_SRC_FCN(void,s8_wr::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for sofia_mwpc_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sofia_mwpc_subev)
template<typename __data_src_t>
void sofia_mwpc_subev::__unpack(__data_src_t &__buffer)
{
  // select several

    // data = sofia_mwpc_subev_data();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: sofia_mwpc_subev_data data: could not get bits
    __buffer.peeking();
    MATCH_DECL(2054,__match_no,1,sofia_mwpc_subev_data,data);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2054,sofia_mwpc_subev_data,data);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,sofia_mwpc_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for sofia_sampler_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sofia_sampler_subev)
template<typename __data_src_t>
void sofia_sampler_subev::__unpack(__data_src_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  UNPACK_DECL(2016,LAND_STD_VME,land_vme);
  // select several

    // sofstart = TRLOII_SAMPLER(mark=0x1050);
    // ms = TRLOII_SAMPLER(mark=0x1060);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TRLOII_SAMPLER sofstart: (s32) => (0xfffff800,0x10500000)
    // optimized match 2: TRLOII_SAMPLER ms: (s32) => (0xfffff800,0x10600000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(2020,uint32,__match_peek);
    // differ = 00300000 : 20 21
    uint32 __match_index = 0 | /* 20,21 */ ((__match_peek >> 20) & 0x00000003);
    static const sint8 __match_index_array[4] = { 0, 1, 2, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2018,TRLOII_SAMPLER,sofstart,/*mark*/0x1050);
        break;
      case 2:
        UNPACK_DECL(2019,TRLOII_SAMPLER,ms,/*mark*/0x1060);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,sofia_sampler_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for sofia_tof_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sofia_tof_subev)
template<typename __data_src_t>
void sofia_tof_subev::__unpack(__data_src_t &__buffer)
{
  // select several

    // data = sofia_tof_subev_data();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: sofia_tof_subev_data data: could not get bits
    __buffer.peeking();
    MATCH_DECL(2039,__match_no,1,sofia_tof_subev_data,data);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2039,sofia_tof_subev_data,data);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,sofia_tof_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for sofia_trim_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sofia_trim_subev)
template<typename __data_src_t>
void sofia_trim_subev::__unpack(__data_src_t &__buffer)
{
  // select several

    // data = sofia_trim_subev_data();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: sofia_trim_subev_data data: could not get bits
    __buffer.peeking();
    MATCH_DECL(2083,__match_no,1,sofia_trim_subev_data,data);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2083,sofia_trim_subev_data,data);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,sofia_trim_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for sofia_twim_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sofia_twim_subev)
template<typename __data_src_t>
void sofia_twim_subev::__unpack(__data_src_t &__buffer)
{
  // select several

    // data = sofia_twim_subev_data();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: sofia_twim_subev_data data: could not get bits
    __buffer.peeking();
    MATCH_DECL(2069,__match_no,1,sofia_twim_subev_data,data);
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(2069,sofia_twim_subev_data,data);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,sofia_twim_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for sofia_wr.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sofia_wr)
template<typename __data_src_t>
void sofia_wr::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0xe00);
  UNPACK_DECL(1949,TIMESTAMP_WHITERABBIT,ts,/*id*/0xe00);
}
FORCE_IMPL_DATA_SRC_FCN(void,sofia_wr::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for wr_neuland.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_neuland)
template<typename __data_src_t>
void wr_neuland::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x900);
  UNPACK_DECL(1954,TIMESTAMP_WHITERABBIT,ts,/*id*/0x900);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_neuland::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for wr_s2.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_s2)
template<typename __data_src_t>
void wr_s2::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x200);
  UNPACK_DECL(2107,TIMESTAMP_WHITERABBIT,ts,/*id*/0x200);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_s2::__unpack);

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
  // main_ts = main_wr(type=10,subtype=1,control=30);
  // main_tpat = main_tpat_subev(type=36,subtype=0xe10,control=30);
  // sofia_sampler = sofia_sampler_subev(type=39,subtype=0xf3c,control=30);
  // neuland_ts = wr_neuland(type=10,subtype=1,control=21);
  // neuland_tamex_1 = neuland_tamex_subev(type=102,subtype=0x27d8,control=21);
  // neuland_tamex_2 = neuland_tamex_subev(type=102,subtype=0x27d8,control=22);
  // neuland_tamex_3 = neuland_tamex_subev(type=102,subtype=0x27d8,control=23);
  // neuland_tamex_4 = neuland_tamex_subev(type=102,subtype=0x27d8,control=24);
  // revisit califa_messel = CALIFA_MESSEL(type=100,subtype=0x2710,subcrate=2,
                                        // procid=2,control=9);
  // revisit califa_wixhausen = CALIFA_WIXHAUSEN(type=100,subtype=0x2710,
                                              // subcrate=2,procid=2,
                                              // control=10);
  // sofia_ts = sofia_wr(type=10,subtype=1,control=101);
  // sofia_tof = sofia_tof_subev(type=88,subtype=0x2260,control=101);
  // sofia_mwpc = sofia_mwpc_subev(type=88,subtype=0x2260,control=102);
  // sofia_twim = sofia_twim_subev(type=88,subtype=0x2260,control=103);
  // sofia_trim = sofia_trim_subev(type=88,subtype=0x2260,control=104);
  // fibsipm = fibsipm_subev(type=103,subtype=0x283c,control=50);
  // s2_ts = wr_s2(type=10,subtype=1,control=20,procid=35);
  // s2_vme = s2_vme_subev(type=12,subtype=1,control=20,procid=35);
  // s8_ts = s8_wr(type=10,subtype=1,control=80);
  // s8_tpat = s8_tpat_subev(type=36,subtype=0xe10,control=80);
  // s8_vme = s8_vme_subev(type=88,subtype=0x2260,control=80);
  // ignore_unknown_subevent;
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(2159,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==30)),main_ts);
  MATCH_SUBEVENT_DECL(2160,__match_no,2,((VES10_1_type==36)&&(VES10_1_subtype==0xe10)&&(VES10_1_control==30)),main_tpat);
  MATCH_SUBEVENT_DECL(2161,__match_no,3,((VES10_1_type==39)&&(VES10_1_subtype==0xf3c)&&(VES10_1_control==30)),sofia_sampler);
  MATCH_SUBEVENT_DECL(2163,__match_no,4,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==21)),neuland_ts);
  MATCH_SUBEVENT_DECL(2164,__match_no,5,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==21)),neuland_tamex_1);
  MATCH_SUBEVENT_DECL(2165,__match_no,6,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==22)),neuland_tamex_2);
  MATCH_SUBEVENT_DECL(2166,__match_no,7,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==23)),neuland_tamex_3);
  MATCH_SUBEVENT_DECL(2167,__match_no,8,((VES10_1_type==102)&&(VES10_1_subtype==0x27d8)&&(VES10_1_control==24)),neuland_tamex_4);
  MATCH_SUBEVENT_DECL(2169,__match_no,9,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==9)&&(VES10_1_subcrate==2)&&(VES10_1_procid==2)),califa_messel);
  MATCH_SUBEVENT_DECL(2170,__match_no,10,((VES10_1_type==100)&&(VES10_1_subtype==0x2710)&&(VES10_1_control==10)&&(VES10_1_subcrate==2)&&(VES10_1_procid==2)),califa_wixhausen);
  MATCH_SUBEVENT_DECL(2172,__match_no,11,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==101)),sofia_ts);
  MATCH_SUBEVENT_DECL(2173,__match_no,12,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==101)),sofia_tof);
  MATCH_SUBEVENT_DECL(2174,__match_no,13,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==102)),sofia_mwpc);
  MATCH_SUBEVENT_DECL(2175,__match_no,14,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==103)),sofia_twim);
  MATCH_SUBEVENT_DECL(2176,__match_no,15,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==104)),sofia_trim);
  MATCH_SUBEVENT_DECL(2178,__match_no,16,((VES10_1_type==103)&&(VES10_1_subtype==0x283c)&&(VES10_1_control==50)),fibsipm);
  MATCH_SUBEVENT_DECL(2180,__match_no,17,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==20)&&(VES10_1_procid==35)),s2_ts);
  MATCH_SUBEVENT_DECL(2181,__match_no,18,((VES10_1_type==12)&&(VES10_1_subtype==1)&&(VES10_1_control==20)&&(VES10_1_procid==35)),s2_vme);
  MATCH_SUBEVENT_DECL(2183,__match_no,19,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==80)),s8_ts);
  MATCH_SUBEVENT_DECL(2184,__match_no,20,((VES10_1_type==36)&&(VES10_1_subtype==0xe10)&&(VES10_1_control==80)),s8_tpat);
  MATCH_SUBEVENT_DECL(2185,__match_no,21,((VES10_1_type==88)&&(VES10_1_subtype==0x2260)&&(VES10_1_control==80)),s8_vme);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2159,main_wr,main_ts,0);
      UNPACK_SUBEVENT_DECL(2159,0,main_wr,main_ts);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2160,main_tpat_subev,main_tpat,1);
      UNPACK_SUBEVENT_DECL(2160,0,main_tpat_subev,main_tpat);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2161,sofia_sampler_subev,sofia_sampler,2);
      UNPACK_SUBEVENT_DECL(2161,0,sofia_sampler_subev,sofia_sampler);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2163,wr_neuland,neuland_ts,3);
      UNPACK_SUBEVENT_DECL(2163,0,wr_neuland,neuland_ts);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2164,neuland_tamex_subev,neuland_tamex_1,4);
      UNPACK_SUBEVENT_DECL(2164,0,neuland_tamex_subev,neuland_tamex_1);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2165,neuland_tamex_subev,neuland_tamex_2,5);
      UNPACK_SUBEVENT_DECL(2165,0,neuland_tamex_subev,neuland_tamex_2);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2166,neuland_tamex_subev,neuland_tamex_3,6);
      UNPACK_SUBEVENT_DECL(2166,0,neuland_tamex_subev,neuland_tamex_3);
      break;
    case 8:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2167,neuland_tamex_subev,neuland_tamex_4,7);
      UNPACK_SUBEVENT_DECL(2167,0,neuland_tamex_subev,neuland_tamex_4);
      break;
    case 9:
      UNPACK_SUBEVENT_DECL(2169,0,CALIFA_MESSEL,califa_messel);
      break;
    case 10:
      UNPACK_SUBEVENT_DECL(2170,0,CALIFA_WIXHAUSEN,califa_wixhausen);
      break;
    case 11:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2172,sofia_wr,sofia_ts,8);
      UNPACK_SUBEVENT_DECL(2172,0,sofia_wr,sofia_ts);
      break;
    case 12:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2173,sofia_tof_subev,sofia_tof,9);
      UNPACK_SUBEVENT_DECL(2173,0,sofia_tof_subev,sofia_tof);
      break;
    case 13:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2174,sofia_mwpc_subev,sofia_mwpc,10);
      UNPACK_SUBEVENT_DECL(2174,0,sofia_mwpc_subev,sofia_mwpc);
      break;
    case 14:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2175,sofia_twim_subev,sofia_twim,11);
      UNPACK_SUBEVENT_DECL(2175,0,sofia_twim_subev,sofia_twim);
      break;
    case 15:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2176,sofia_trim_subev,sofia_trim,12);
      UNPACK_SUBEVENT_DECL(2176,0,sofia_trim_subev,sofia_trim);
      break;
    case 16:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2178,fibsipm_subev,fibsipm,13);
      UNPACK_SUBEVENT_DECL(2178,0,fibsipm_subev,fibsipm);
      break;
    case 17:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2180,wr_s2,s2_ts,14);
      UNPACK_SUBEVENT_DECL(2180,0,wr_s2,s2_ts);
      break;
    case 18:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2181,s2_vme_subev,s2_vme,15);
      UNPACK_SUBEVENT_DECL(2181,0,s2_vme_subev,s2_vme);
      break;
    case 19:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2183,s8_wr,s8_ts,16);
      UNPACK_SUBEVENT_DECL(2183,0,s8_wr,s8_ts);
      break;
    case 20:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2184,s8_tpat_subev,s8_tpat,17);
      UNPACK_SUBEVENT_DECL(2184,0,s8_tpat_subev,s8_tpat);
      break;
    case 21:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(2185,s8_vme_subev,s8_vme,18);
      UNPACK_SUBEVENT_DECL(2185,0,s8_vme_subev,s8_vme);
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
