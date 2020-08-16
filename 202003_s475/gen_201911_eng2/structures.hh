/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for BARRIER.
 *
 * Do not edit - automatically generated.
 */

// BARRIER()
#if !PACKER_CODE
# define DECLARED_UNPACK_BARRIER
class BARRIER
#else//PACKER_CODE
# define DECLARED_PACKER_BARRIER
class PACKER_BARRIER
#endif//PACKER_CODE

{
public:
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
  } barrier;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(BARRIER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for CAMAC_LECROY_4434.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_LECROY_4434(channels)
#if !PACKER_CODE
# define DECLARED_UNPACK_CAMAC_LECROY_4434
class CAMAC_LECROY_4434
#else//PACKER_CODE
# define DECLARED_PACKER_CAMAC_LECROY_4434
class PACKER_CAMAC_LECROY_4434
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA24,DATA24,32> data;
  // list(0<=index<channels)

    // UINT32 ch_data NOENCODE
    // {
      //  0_23: value;
      // 24_31: 0;
      // ENCODE(data[index],(value=value));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 channels);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 channels);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 channels);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(CAMAC_LECROY_4434);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for CAMAC_PHILLIPS_7164.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_PHILLIPS_7164(channels,mark_channel_no)
#if !PACKER_CODE
# define DECLARED_UNPACK_CAMAC_PHILLIPS_7164
class CAMAC_PHILLIPS_7164
#else//PACKER_CODE
# define DECLARED_PACKER_CAMAC_PHILLIPS_7164
class PACKER_CAMAC_PHILLIPS_7164
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 data[16] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12,DATA12,16> data;
  // list(0<=index<channels)

    // if(mark_channel_no)

    // else

      // UINT16 ch_data NOENCODE
      // {
        //  0_11: value;
        // 12_15: channel = CHECK(index);
        // ENCODE(data[index],(value=value));
      // }
      // UINT16 ch_data NOENCODE
      // {
        //  0_11: value;
        // ENCODE(data[index],(value=value));
      // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 channels,uint32 mark_channel_no);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 channels,uint32 mark_channel_no);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 channels,uint32 mark_channel_no);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(CAMAC_PHILLIPS_7164);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for CAMAC_SILENA_4418.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_SILENA_4418(channels,mark_channel_no)
#if !PACKER_CODE
# define DECLARED_UNPACK_CAMAC_SILENA_4418
class CAMAC_SILENA_4418
#else//PACKER_CODE
# define DECLARED_PACKER_CAMAC_SILENA_4418
class PACKER_CAMAC_SILENA_4418
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12_OVERFLOW data[8] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12_OVERFLOW,DATA12_OVERFLOW,8> data;
  // list(0<=index<channels)

    // if(mark_channel_no)

    // else

      // UINT16 ch_data NOENCODE
      // {
        //  0_11: value;
        // 12_14: channel = CHECK(index);
        //    15: overflow;
        // ENCODE(data[index],(value=value,overflow=overflow));
      // }
      // UINT16 ch_data NOENCODE
      // {
        //  0_11: value;
        //    15: overflow;
        // ENCODE(data[index],(value=value,overflow=overflow));
      // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 channels,uint32 mark_channel_no);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 channels,uint32 mark_channel_no);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 channels,uint32 mark_channel_no);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(CAMAC_SILENA_4418);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EXT_SST.
 *
 * Do not edit - automatically generated.
 */


/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FASTBUS_LECROY_1875.
 *
 * Do not edit - automatically generated.
 */

// FASTBUS_LECROY_1875(geom,channels)
#if !PACKER_CODE
# define DECLARED_UNPACK_FASTBUS_LECROY_1875
class FASTBUS_LECROY_1875
#else//PACKER_CODE
# define DECLARED_PACKER_FASTBUS_LECROY_1875
class PACKER_FASTBUS_LECROY_1875
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12_RANGE data[64] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12_RANGE,DATA12_RANGE,64> data;
  // UINT32 ch_data NOENCODE
  // {
    //  0_11: value;
    // 16_21: channel = RANGE(0,(channels - 1));
    //    23: range;
    // 24_26: n = CHECK(0);
    // 27_31: geom = MATCH(geom);
    // ENCODE(data[channel],(value=value,range=range));
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom,uint32 channels);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom,uint32 channels);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geom,uint32 channels);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FASTBUS_LECROY_1875);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FASTBUS_LECROY_1885.
 *
 * Do not edit - automatically generated.
 */

// FASTBUS_LECROY_1885(geom,channels)
#if !PACKER_CODE
# define DECLARED_UNPACK_FASTBUS_LECROY_1885
class FASTBUS_LECROY_1885
#else//PACKER_CODE
# define DECLARED_PACKER_FASTBUS_LECROY_1885
class PACKER_FASTBUS_LECROY_1885
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12_RANGE data[96] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12_RANGE,DATA12_RANGE,96> data;
  // UINT32 ch_data NOENCODE
  // {
    //  0_11: value;
    // 16_22: channel = RANGE(0,(channels - 1));
    //    23: range;
    // 24_26: n = CHECK(0);
    // 27_31: geom = MATCH(geom);
    // ENCODE(data[channel],(value=value,range=range));
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom,uint32 channels);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom,uint32 channels);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geom,uint32 channels);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FASTBUS_LECROY_1885);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FEBEX_BAD_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_BAD_EVENTHEADER()
#if !PACKER_CODE
# define DECLARED_UNPACK_FEBEX_BAD_EVENTHEADER
class FEBEX_BAD_EVENTHEADER
#else//PACKER_CODE
# define DECLARED_PACKER_FEBEX_BAD_EVENTHEADER
class PACKER_FEBEX_BAD_EVENTHEADER
#endif//PACKER_CODE

{
public:
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
  } badbad;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FEBEX_BAD_EVENTHEADER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FEBEX_GOOD_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_GOOD_EVENTHEADER()
#if !PACKER_CODE
# define DECLARED_UNPACK_FEBEX_GOOD_EVENTHEADER
class FEBEX_GOOD_EVENTHEADER
#else//PACKER_CODE
# define DECLARED_PACKER_FEBEX_GOOD_EVENTHEADER
class PACKER_FEBEX_GOOD_EVENTHEADER
#endif//PACKER_CODE

{
public:
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
  } febexcards;
  // UINT32 trig_length
  // {
    //  0_15: trace_length;
    // 16_31: trigger_delay;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 trace_length : 16; // 0..15
      uint32 trigger_delay : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 trigger_delay : 16; // 16..31
      uint32 trace_length : 16; // 0..15
#endif
    };
    uint32  u32;
  } trig_length;
  // UINT32 energy_filter
  // {
    //  0_10: sum_b;
    // 11_20: gap;
    // 21_31: sum_a;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 sum_b : 11; // 0..10
      uint32 gap : 10; // 11..20
      uint32 sum_a : 11; // 21..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 sum_a : 11; // 21..31
      uint32 gap : 10; // 11..20
      uint32 sum_b : 11; // 0..10
#endif
    };
    uint32  u32;
  } energy_filter;
  // UINT32 polarity1
  // {
    //  0_31: pola;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 pola : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 pola : 32; // 0..31
#endif
    };
    uint32  u32;
  } polarity1;
  // UINT32 polarity2
  // {
    //  0_31: pola;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 pola : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 pola : 32; // 0..31
#endif
    };
    uint32  u32;
  } polarity2;
  // UINT32 polarity3
  // {
    //  0_31: pola;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 pola : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 pola : 32; // 0..31
#endif
    };
    uint32  u32;
  } polarity3;
  // UINT32 polarity4
  // {
    //  0_31: pola;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 pola : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 pola : 32; // 0..31
#endif
    };
    uint32  u32;
  } polarity4;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FEBEX_GOOD_EVENTHEADER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FEBEX_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_EVENTHEADER()
#if !PACKER_CODE
# define DECLARED_UNPACK_FEBEX_EVENTHEADER
class FEBEX_EVENTHEADER
#else//PACKER_CODE
# define DECLARED_PACKER_FEBEX_EVENTHEADER
class PACKER_FEBEX_EVENTHEADER
#endif//PACKER_CODE

{
public:
  // select

    // good = FEBEX_GOOD_EVENTHEADER();
    // bad = FEBEX_BAD_EVENTHEADER();
  SINGLE(FEBEX_GOOD_EVENTHEADER,good);
  SINGLE(FEBEX_BAD_EVENTHEADER,bad);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FEBEX_EVENTHEADER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FEBEX_NOTRACE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_NOTRACE(sfp,card)
#if !PACKER_CODE
# define DECLARED_UNPACK_FEBEX_NOTRACE
class FEBEX_NOTRACE
#else//PACKER_CODE
# define DECLARED_PACKER_FEBEX_NOTRACE
class PACKER_FEBEX_NOTRACE
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA8 n_hit[16]);
  raw_array<DATA8,DATA8,16> n_hit;
  // MEMBER(DATA12 t[16] ZERO_SUPPRESS_MULTI(32));
  raw_array_multi_zero_suppress<DATA12,DATA12,16,32> t;
  // MEMBER(DATA32 e[16] ZERO_SUPPRESS_MULTI(32));
  raw_array_multi_zero_suppress<DATA32,DATA32,16,32> e;
  // UINT32 indicator NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: 255;
  // }
  // UINT32 data_size NOENCODE
  // {
    //  0_31: size;
  // }
  // UINT32 head NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 175;
  // }
  // UINT32 triggertime NOENCODE
  // {
    //  0_31: trigger_time;
  // }
  // UINT32 time NOENCODE
  // {
    //  0_31: time;
  // }
  // list(0<=i<((data_size.size - 16) >> 3))

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
    // UINT32 energy NOENCODE
    // {
      //  0_21: energy;
      //    22: unused1;
      //    23: sign;
      // 24_27: unused2;
      // 28_31: channel_id;
      // ENCODE(e[channel_id],(value=((sign * ( - energy)) + ((sign - 1) * ( - energy)))));
    // }
  // UINT32 trailer NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 191;
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sfp,uint32 card);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FEBEX_NOTRACE);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FEBEX_PADDING.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_PADDING()
#if !PACKER_CODE
# define DECLARED_UNPACK_FEBEX_PADDING
class FEBEX_PADDING
#else//PACKER_CODE
# define DECLARED_PACKER_FEBEX_PADDING
class PACKER_FEBEX_PADDING
#endif//PACKER_CODE

{
public:
  // UINT32 pads_data NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FEBEX_PADDING);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FEBEX_TRACE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_TRACE(sfp,card)
#if !PACKER_CODE
# define DECLARED_UNPACK_FEBEX_TRACE
class FEBEX_TRACE
#else//PACKER_CODE
# define DECLARED_PACKER_FEBEX_TRACE
class PACKER_FEBEX_TRACE
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 trace_length[16] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,16> trace_length;
  // MEMBER(DATA16 trace[16][1000] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA16,DATA16,1000> trace[16];
  // MEMBER(DATA32 filter[16][1000] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,1000> filter[16];
  // UINT32 header NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: channel_id = RANGE(0,254);
  // }
  // UINT32 trace_size NOENCODE
  // {
    //  0_31: size;
    // ENCODE(trace_length[header.channel_id],(value=((size / 2) - 4)));
  // }
  // UINT32 trace_header NOENCODE
  // {
    //  0_17: notused1;
    //    18: filter_mode;
    //    19: filter_onoff;
    // 20_22: notused2;
    //    23: adc_type;
    // 24_31: 170;
  // }
  // if((trace_header.filter_onoff == 0))

  // else

    // list(0<=i<((trace_size.size / 4) - 2))

      // UINT32 channel_trace NOENCODE
      // {
        //  0_13: data1;
        // 14_15: nik_knows;
        // 16_29: data2;
        // 30_31: nik_knows2;
        // ENCODE(trace[header.channel_id][((2 * i) + 0)],(value=data1));
        // ENCODE(trace[header.channel_id][((2 * i) + 1)],(value=data2));
      // }
    // list(0<=i<((trace_size.size / 8) - 1))

      // UINT32 channel_trace NOENCODE
      // {
        //  0_13: data1;
        // 14_31: nik_knows;
        // ENCODE(trace[header.channel_id][i],(value=data1));
      // }
      // UINT32 channel_filter NOENCODE
      // {
        //  0_22: data1;
        //    23: sign;
        // 24_31: nik_knows2;
        // ENCODE(filter[header.channel_id][i],(value=(data1 * (1 - (2 * sign)))));
      // }
  // UINT32 trace_trailer NOENCODE
  // {
    //  0_23: notused;
    // 24_31: 187;
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sfp,uint32 card);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FEBEX_TRACE);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for GSI_CLOCKTDC_16PH_ITEM.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_16PH_ITEM(sfp,tdc)
#if !PACKER_CODE
# define DECLARED_UNPACK_GSI_CLOCKTDC_16PH_ITEM
class GSI_CLOCKTDC_16PH_ITEM
#else//PACKER_CODE
# define DECLARED_PACKER_GSI_CLOCKTDC_16PH_ITEM
class PACKER_GSI_CLOCKTDC_16PH_ITEM
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 event_counter_lo32);
  DATA32 event_counter_lo32;
  // MEMBER(DATA32 event_counter_hi16);
  DATA32 event_counter_hi16;
  // MEMBER(DATA32 trigger_coarse_lo22);
  DATA32 trigger_coarse_lo22;
  // MEMBER(DATA32 trigger_coarse_hi24);
  DATA32 trigger_coarse_hi24;
  // MEMBER(DATA12 time_coarse[258] ZERO_SUPPRESS_MULTI(80));
  raw_array_multi_zero_suppress<DATA12,DATA12,258,80> time_coarse;
  // MEMBER(DATA12 time_fine[258] ZERO_SUPPRESS_MULTI(80));
  raw_array_multi_zero_suppress<DATA12,DATA12,258,80> time_fine;
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
  } header;
  // MATCH_END;
  // UINT32 channel_num;
  uint32  channel_num;
  // UINT32 event_counter_lo_ NOENCODE
  // {
    //  0_31: value;
    // ENCODE(event_counter_lo32,(value=value));
  // }
  // UINT32 event_counter_hi_ NOENCODE
  // {
    //  0_15: value;
    // ENCODE(event_counter_hi16,(value=value));
  // }
  // UINT32 trigger_coarse_lo_ NOENCODE
  // {
    //  0_09: ignore;
    // 10_31: value;
    // ENCODE(trigger_coarse_lo22,(value=value));
  // }
  // UINT32 trigger_coarse_hi_ NOENCODE
  // {
    //  0_23: value;
    // 24_31: ignore;
    // ENCODE(trigger_coarse_hi24,(value=value));
  // }
  // UINT32 channel_header
  // {
    //  0_07: _0x34 = MATCH(52);
    //  8_11: trigger_type;
    // 12_15: sfp_id = MATCH(sfp);
    // 16_23: tdc_id = MATCH(tdc);
    // 24_31: channel_id = RANGE(0,128);
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
  } channel_header;
  // UINT32 data_byte_num;
  uint32  data_byte_num;
  // list(0<=i<(data_byte_num / 4))

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
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time_fine : 5; // 0..4
        uint32 time_coarse : 12; // 5..16
        uint32 time_coarse_ext : 1; // 17
        uint32 edge : 1; // 18
        uint32 ws : 1; // 19
        uint32 time_coarse_overflow : 1; // 20
        uint32 rb_overflow : 1; // 21
        uint32 dummy : 1; // 22
        uint32 is_data : 1; // 23
        uint32 channel : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 channel : 8; // 24..31
        uint32 is_data : 1; // 23
        uint32 dummy : 1; // 22
        uint32 rb_overflow : 1; // 21
        uint32 time_coarse_overflow : 1; // 20
        uint32 ws : 1; // 19
        uint32 edge : 1; // 18
        uint32 time_coarse_ext : 1; // 17
        uint32 time_coarse : 12; // 5..16
        uint32 time_fine : 5; // 0..4
#endif
      };
      uint32  u32;
    } data;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 tdc);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 tdc);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sfp,uint32 tdc);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(GSI_CLOCKTDC_16PH_ITEM);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for GSI_CLOCKTDC_BAD00BAD.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_BAD00BAD()
#if !PACKER_CODE
# define DECLARED_UNPACK_GSI_CLOCKTDC_BAD00BAD
class GSI_CLOCKTDC_BAD00BAD
#else//PACKER_CODE
# define DECLARED_PACKER_GSI_CLOCKTDC_BAD00BAD
class PACKER_GSI_CLOCKTDC_BAD00BAD
#endif//PACKER_CODE

{
public:
  // UINT32 bad00bad NOENCODE
  // {
    //  0_31: bad00bad = MATCH(0xbad00bad);
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(GSI_CLOCKTDC_BAD00BAD);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for GSI_CLOCKTDC_FUSER.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_FUSER(a_sfp0_num,a_sfp1_num,a_sfp2_num,a_sfp3_num,
                   // ch_per_ctdc)
#if !PACKER_CODE
# define DECLARED_UNPACK_GSI_CLOCKTDC_FUSER
class GSI_CLOCKTDC_FUSER
#else//PACKER_CODE
# define DECLARED_PACKER_GSI_CLOCKTDC_FUSER
class PACKER_GSI_CLOCKTDC_FUSER
#endif//PACKER_CODE

{
public:
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
  } slave_num;
  // UINT32 trig_window;
  uint32  trig_window;
  // UINT32 channel_num
  // {
    //  0_31: num = MATCH(ch_per_ctdc);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 num : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 num : 32; // 0..31
#endif
    };
    uint32  u32;
  } channel_num;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 a_sfp0_num,uint32 a_sfp1_num
                                      ,uint32 a_sfp2_num,uint32 a_sfp3_num
                                      ,uint32 ch_per_ctdc);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 a_sfp0_num,uint32 a_sfp1_num
                                            ,uint32 a_sfp2_num,uint32 a_sfp3_num
                                            ,uint32 ch_per_ctdc);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 a_sfp0_num,uint32 a_sfp1_num
                                       ,uint32 a_sfp2_num,uint32 a_sfp3_num
                                       ,uint32 ch_per_ctdc);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(GSI_CLOCKTDC_FUSER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for GSI_CLOCKTDC_ITEM.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_ITEM(sfp,tdc)
#if !PACKER_CODE
# define DECLARED_UNPACK_GSI_CLOCKTDC_ITEM
class GSI_CLOCKTDC_ITEM
#else//PACKER_CODE
# define DECLARED_PACKER_GSI_CLOCKTDC_ITEM
class PACKER_GSI_CLOCKTDC_ITEM
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 event_counter_lo32);
  DATA32 event_counter_lo32;
  // MEMBER(DATA32 event_counter_hi16);
  DATA32 event_counter_hi16;
  // MEMBER(DATA32 trigger_coarse_lo22);
  DATA32 trigger_coarse_lo22;
  // MEMBER(DATA32 trigger_coarse_hi24);
  DATA32 trigger_coarse_hi24;
  // MEMBER(DATA12 time_coarse[258] ZERO_SUPPRESS_MULTI(80));
  raw_array_multi_zero_suppress<DATA12,DATA12,258,80> time_coarse;
  // MEMBER(DATA12 time_fine[258] ZERO_SUPPRESS_MULTI(80));
  raw_array_multi_zero_suppress<DATA12,DATA12,258,80> time_fine;
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
  } header;
  // MATCH_END;
  // UINT32 channel_num;
  uint32  channel_num;
  // UINT32 event_counter_lo_ NOENCODE
  // {
    //  0_31: value;
    // ENCODE(event_counter_lo32,(value=value));
  // }
  // UINT32 event_counter_hi_ NOENCODE
  // {
    //  0_15: value;
    // ENCODE(event_counter_hi16,(value=value));
  // }
  // UINT32 trigger_coarse_lo_ NOENCODE
  // {
    //  0_09: ignore;
    // 10_31: value;
    // ENCODE(trigger_coarse_lo22,(value=value));
  // }
  // UINT32 trigger_coarse_hi_ NOENCODE
  // {
    //  0_23: value;
    // 24_31: ignore;
    // ENCODE(trigger_coarse_hi24,(value=value));
  // }
  // UINT32 channel_header
  // {
    //  0_07: _0x34 = MATCH(52);
    //  8_11: trigger_type;
    // 12_15: sfp_id = MATCH(sfp);
    // 16_23: tdc_id = MATCH(tdc);
    // 24_31: channel_id = RANGE(0,128);
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
  } channel_header;
  // UINT32 data_byte_num;
  uint32  data_byte_num;
  // list(0<=i<(data_byte_num / 4))

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
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 time_fine : 4; // 0..3
        uint32 time_coarse : 12; // 4..15
        uint32 time_coarse_ext : 1; // 16
        uint32 edge : 1; // 17
        uint32 ws : 1; // 18
        uint32 time_coarse_overflow : 1; // 19
        uint32 rb_overflow : 1; // 20
        uint32 status : 3; // 21..23
        uint32 channel : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 channel : 8; // 24..31
        uint32 status : 3; // 21..23
        uint32 rb_overflow : 1; // 20
        uint32 time_coarse_overflow : 1; // 19
        uint32 ws : 1; // 18
        uint32 edge : 1; // 17
        uint32 time_coarse_ext : 1; // 16
        uint32 time_coarse : 12; // 4..15
        uint32 time_fine : 4; // 0..3
#endif
      };
      uint32  u32;
    } data;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 tdc);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 tdc);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sfp,uint32 tdc);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(GSI_CLOCKTDC_ITEM);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for GSI_CLOCKTDC_PADDING.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_PADDING()
#if !PACKER_CODE
# define DECLARED_UNPACK_GSI_CLOCKTDC_PADDING
class GSI_CLOCKTDC_PADDING
#else//PACKER_CODE
# define DECLARED_PACKER_GSI_CLOCKTDC_PADDING
class PACKER_GSI_CLOCKTDC_PADDING
#endif//PACKER_CODE

{
public:
  // UINT32 padding NOENCODE
  // {
    //  0_19: whatever;
    // 20_31: 0xadd;
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(GSI_CLOCKTDC_PADDING);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for GSI_SAM_PADDING.
 *
 * Do not edit - automatically generated.
 */

// GSI_SAM_PADDING()
#if !PACKER_CODE
# define DECLARED_UNPACK_GSI_SAM_PADDING
class GSI_SAM_PADDING
#else//PACKER_CODE
# define DECLARED_PACKER_GSI_SAM_PADDING
class PACKER_GSI_SAM_PADDING
#endif//PACKER_CODE

{
public:
  // UINT32 padding NOENCODE
  // {
    //  0_31: 0xadadadad;
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(GSI_SAM_PADDING);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for LAND_STD_VME.
 *
 * Do not edit - automatically generated.
 */

// LAND_STD_VME()
#if !PACKER_CODE
# define DECLARED_UNPACK_LAND_STD_VME
class LAND_STD_VME
#else//PACKER_CODE
# define DECLARED_PACKER_LAND_STD_VME
class PACKER_LAND_STD_VME
#endif//PACKER_CODE

{
public:
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
  } failure;
  // if(failure.has_continous_event_counter)

    // UINT32 continous_event_counter;
    uint32  continous_event_counter;
  // if(failure.has_time_stamp)

    // UINT32 time_stamp;
    uint32  time_stamp;
  // if(failure.has_clock_counter_stamp)

    // UINT32 clock_counter_stamp;
    uint32  clock_counter_stamp;
  // if(failure.has_update_qdc_iped_value)

    // UINT32 iped;
    uint32  iped;
  // if(failure.has_multi_event)

    // UINT32 multi_events;
    uint32  multi_events;
  // if(failure.has_multi_trlo_ii_counter0)

    // UINT32 multi_trlo_ii_counter0;
    uint32  multi_trlo_ii_counter0;
  // if(failure.has_multi_scaler_counter0)

    // UINT32 multi_scaler_counter0;
    uint32  multi_scaler_counter0;
  // if(failure.has_multi_adctdc_counter0)

    // UINT32 multi_adctdc_counter0;
    uint32  multi_adctdc_counter0;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(LAND_STD_VME);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX3_FH_DATA.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_FH_DATA()
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX3_FH_DATA
class TAMEX3_FH_DATA
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX3_FH_DATA
class PACKER_TAMEX3_FH_DATA
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 time_coarse[34] ZERO_SUPPRESS_MULTI(256));
  raw_array_multi_zero_suppress<DATA12,DATA12,34,256> time_coarse;
  // MEMBER(DATA12 time_fine[34] ZERO_SUPPRESS_MULTI(256));
  raw_array_multi_zero_suppress<DATA12,DATA12,34,256> time_fine;
  // UINT32 data_size NOENCODE
  // {
    //  0_31: bytes;
  // }
  // UINT32 tdc_header NOENCODE
  // {
    //  0_15: lec;
    //    16: buf_no;
    // 17_19: reserved;
    // 20_23: trigger_type;
    // 24_31: 170;
  // }
  // list(0<=i<((data_size.bytes / 4) - 3))

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
  // UINT32 error_bits NOENCODE
  // {
    //  0_23: bits;
    // 24_31: 238;
  // }
  // UINT32 trailer NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 187;
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TAMEX3_FH_DATA);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX3_FH_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_FH_SFP(sfp,card)
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX3_FH_SFP
class TAMEX3_FH_SFP
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX3_FH_SFP
class PACKER_TAMEX3_FH_SFP
#endif//PACKER_CODE

{
public:
  // UINT32 indicator NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: 0;
  // }
  // select optional

    // data = TAMEX3_FH_DATA();
  SINGLE(TAMEX3_FH_DATA,data);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sfp,uint32 card);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TAMEX3_FH_SFP);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX3_PADDING.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_PADDING()
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX3_PADDING
class TAMEX3_PADDING
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX3_PADDING
class PACKER_TAMEX3_PADDING
#endif//PACKER_CODE

{
public:
  // UINT32 padding NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TAMEX3_PADDING);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX3_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_SFP(sfp,card)
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX3_SFP
class TAMEX3_SFP
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX3_SFP
class PACKER_TAMEX3_SFP
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 time_coarse[34] ZERO_SUPPRESS_MULTI(256));
  raw_array_multi_zero_suppress<DATA12,DATA12,34,256> time_coarse;
  // MEMBER(DATA12 time_fine[34] ZERO_SUPPRESS_MULTI(256));
  raw_array_multi_zero_suppress<DATA12,DATA12,34,256> time_fine;
  // UINT32 indicator NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: 0;
  // }
  // MATCH_END;
  // UINT32 data_size NOENCODE
  // {
    //  0_31: bytes;
  // }
  // UINT32 tdc_header NOENCODE
  // {
    //  0_15: lec;
    //    16: buf_no;
    // 17_19: reserved;
    // 20_23: trigger_type;
    // 24_31: 170;
  // }
  // list(0<=i<((data_size.bytes / 4) - 3))

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
  // UINT32 error_bits NOENCODE
  // {
    //  0_23: bits;
    // 24_31: 238;
  // }
  // UINT32 trailer NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 187;
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sfp,uint32 card);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TAMEX3_SFP);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX3_WINDOW.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_WINDOW()
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX3_WINDOW
class TAMEX3_WINDOW
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX3_WINDOW
class PACKER_TAMEX3_WINDOW
#endif//PACKER_CODE

{
public:
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
  } trigger_window;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TAMEX3_WINDOW);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TIMESTAMP_WHITERABBIT.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_TIMESTAMP_WHITERABBIT
class TIMESTAMP_WHITERABBIT
#else//PACKER_CODE
# define DECLARED_PACKER_TIMESTAMP_WHITERABBIT
class PACKER_TIMESTAMP_WHITERABBIT
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 subsystem_id);
  DATA12 subsystem_id;
  // MEMBER(DATA16 t1);
  DATA16 t1;
  // MEMBER(DATA16 t2);
  DATA16 t2;
  // MEMBER(DATA16 t3);
  DATA16 t3;
  // MEMBER(DATA16 t4);
  DATA16 t4;
  // UINT32 header NOENCODE
  // {
    //  0_11: id = MATCH(id);
    // 12_15: 0;
    //    16: error_bit;
    // 17_31: 0;
    // ENCODE(subsystem_id,(value=id));
  // }
  // UINT32 d1 NOENCODE
  // {
    //  0_15: t1;
    // 16_31: 0x3e1;
    // ENCODE(t1,(value=t1));
  // }
  // UINT32 d2 NOENCODE
  // {
    //  0_15: t2;
    // 16_31: 0x4e1;
    // ENCODE(t2,(value=t2));
  // }
  // UINT32 d3 NOENCODE
  // {
    //  0_15: t3;
    // 16_31: 0x5e1;
    // ENCODE(t3,(value=t3));
  // }
  // UINT32 d4 NOENCODE
  // {
    //  0_15: t4;
    // 16_31: 0x6e1;
    // ENCODE(t4,(value=t4));
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TIMESTAMP_WHITERABBIT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRLOII_LMU_SCALERS.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_LMU_SCALERS(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLOII_LMU_SCALERS
class TRLOII_LMU_SCALERS
#else//PACKER_CODE
# define DECLARED_PACKER_TRLOII_LMU_SCALERS
class PACKER_TRLOII_LMU_SCALERS
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 before_lmu[63] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,63> before_lmu;
  // MEMBER(DATA32 before_lmu_mux[31] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,31> before_lmu_mux;
  // MEMBER(DATA32 before_lmu_aux[31] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,31> before_lmu_aux;
  // MEMBER(DATA32 before_dt[127] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,127> before_dt;
  // MEMBER(DATA32 after_dt[127] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,127> after_dt;
  // MEMBER(DATA32 after_reduction[127] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,127> after_reduction;
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
  } header;
  // list(0<=i<header.before_lmu)

    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu[i],(value=value));
    // }
  // list(0<=i<header.before_lmu_mux)

    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_mux[i],(value=value));
    // }
  // list(0<=i<header.before_lmu_aux)

    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_aux[i],(value=value));
    // }
  // list(0<=i<header.after_lmu)

    // UINT32 scaler_bdt NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_dt[i],(value=value));
    // }
    // UINT32 scaler_adt NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_dt[i],(value=value));
    // }
    // UINT32 scaler_ard NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_reduction[i],(value=value));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TRLOII_LMU_SCALERS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRLOII_SAMPLER.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER(mark)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLOII_SAMPLER
class TRLOII_SAMPLER
#else//PACKER_CODE
# define DECLARED_PACKER_TRLOII_SAMPLER
class PACKER_TRLOII_SAMPLER
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 sampler[512] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,512> sampler;
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
  } header;
  // list(0<=index<header.word_num)

    // UINT32 time_lo NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler[index],(value=time));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 mark);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 mark);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 mark);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TRLOII_SAMPLER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRLOII_SAMPLER_TWO.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER_TWO(mark)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLOII_SAMPLER_TWO
class TRLOII_SAMPLER_TWO
#else//PACKER_CODE
# define DECLARED_PACKER_TRLOII_SAMPLER_TWO
class PACKER_TRLOII_SAMPLER_TWO
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 sampler_hi[512] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,512> sampler_hi;
  // MEMBER(DATA32 sampler_lo[512] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,512> sampler_lo;
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
  } header;
  // list(0<=index<(header.word_num / 2))

    // UINT32 time_lo NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler_lo[index],(value=time));
    // }
    // UINT32 time_hi NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler_hi[index],(value=time));
    // }
  // if(((header.word_num % 2) == 1))

    // UINT32 last_word NOENCODE;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 mark);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 mark);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 mark);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TRLOII_SAMPLER_TWO);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRLOII_TPAT.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_TPAT(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLOII_TPAT
class TRLOII_TPAT
#else//PACKER_CODE
# define DECLARED_PACKER_TRLOII_TPAT
class PACKER_TRLOII_TPAT
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 n);
  DATA32 n;
  // MEMBER(DATA16 tpat[170] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA16,DATA16,170> tpat;
  // MEMBER(DATA8 trig[170] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA8,DATA8,170> trig;
  // MEMBER(DATA32 ts_lo[170] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA32,DATA32,170> ts_lo;
  // MEMBER(DATA32 ts_hi[170] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA32,DATA32,170> ts_hi;
  // UINT32 header NOENCODE
  // {
    //  0_11: uint32_num;
    // 12_23: event_num;
    // 24_31: id = MATCH(id);
    // ENCODE(n,(value=(uint32_num / 3)));
  // }
  // list(0<=index<(header.uint32_num / 3))

    // UINT32 time_lo NOENCODE
    // {
      //  0_31: t;
      // ENCODE(ts_lo APPEND_LIST,(value=t));
    // }
    // UINT32 time_hi NOENCODE
    // {
      //  0_30: t;
      //    31: overflow;
      // ENCODE(ts_hi APPEND_LIST,(value=t));
    // }
    // UINT32 trigger NOENCODE
    // {
      //  0_15: tpat;
      // 16_23: dunno;
      // 24_27: encoded;
      // 28_31: lec;
      // ENCODE(tpat APPEND_LIST,(value=tpat));
      // ENCODE(trig APPEND_LIST,(value=encoded));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TRLOII_TPAT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1190_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SUBTDC(tdc,event_id,data)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1190_SUBTDC
class VME_CAEN_V1190_SUBTDC
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1190_SUBTDC
class PACKER_VME_CAEN_V1190_SUBTDC
#endif//PACKER_CODE

{
public:
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
  } header;
  // several UINT32 ch_data NOENCODE
  // {
    //  0_18: value;
    // 19_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 5) | channel_low)],(value=value));
  // }
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
  } error_flags;
  // MARK_COUNT(tdc_end);
  // UINT32 trailer
  // {
    //  0_11: word_count = CHECK_COUNT(tdc_start,tdc_end,4,4);
    // 12_23: event_id = CHECK(header.event_id);
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 3;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_count : 12; // 0..11
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
      uint32 word_count : 12; // 0..11
#endif
    };
    uint32  u32;
  } trailer;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc,uint32 event_id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V1190_SUBTDC);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1190.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1190
class VME_CAEN_V1190
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1190
class PACKER_VME_CAEN_V1190
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
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
  } header;
  // select several

    // tdc[0] = VME_CAEN_V1190_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[1] = VME_CAEN_V1190_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[2] = VME_CAEN_V1190_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[3] = VME_CAEN_V1190_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                   // data=data);
  SINGLE(VME_CAEN_V1190_SUBTDC,tdc[4]);
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 time_tag : 27; // 0..26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 time_tag : 27; // 0..26
#endif
    };
    uint32  u32;
  } trigger;
  // MARK_COUNT(v1190_end);
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geom : 5; // 0..4
      uint32 word_count : 15; // 5..19
      uint32 dummy_20_23 : 4;
      uint32 tdc_error : 1; // 24
      uint32 buffer_overflow : 1; // 25
      uint32 trigger_lost : 1; // 26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 trigger_lost : 1; // 26
      uint32 buffer_overflow : 1; // 25
      uint32 tdc_error : 1; // 24
      uint32 dummy_20_23 : 4;
      uint32 word_count : 15; // 5..19
      uint32 geom : 5; // 0..4
#endif
    };
    uint32  u32;
  } trailer;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geom);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V1190);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1190_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SHORT_SUBTDC(tdc,event_id,data)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1190_SHORT_SUBTDC
class VME_CAEN_V1190_SHORT_SUBTDC
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1190_SHORT_SUBTDC
class PACKER_VME_CAEN_V1190_SHORT_SUBTDC
#endif//PACKER_CODE

{
public:
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

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc,uint32 event_id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V1190_SHORT_SUBTDC);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1190_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SHORT_SUBTDC_ERROR(tdc)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1190_SHORT_SUBTDC_ERROR
class VME_CAEN_V1190_SHORT_SUBTDC_ERROR
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1190_SHORT_SUBTDC_ERROR
class PACKER_VME_CAEN_V1190_SHORT_SUBTDC_ERROR
#endif//PACKER_CODE

{
public:
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
  } error_flags;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 tdc);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V1190_SHORT_SUBTDC_ERROR);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1190_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SHORT(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1190_SHORT
class VME_CAEN_V1190_SHORT
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1190_SHORT
class PACKER_VME_CAEN_V1190_SHORT
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
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
  } header;
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
  SINGLE(VME_CAEN_V1190_SHORT_SUBTDC,tdc[4]);
  SINGLE(VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[4]);
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 time_tag : 27; // 0..26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 time_tag : 27; // 0..26
#endif
    };
    uint32  u32;
  } trigger;
  // MARK_COUNT(v1190_end);
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geom : 5; // 0..4
      uint32 word_count : 15; // 5..19
      uint32 dummy_20_23 : 4;
      uint32 tdc_error : 1; // 24
      uint32 buffer_overflow : 1; // 25
      uint32 trigger_lost : 1; // 26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 trigger_lost : 1; // 26
      uint32 buffer_overflow : 1; // 25
      uint32 tdc_error : 1; // 24
      uint32 dummy_20_23 : 4;
      uint32 word_count : 15; // 5..19
      uint32 geom : 5; // 0..4
#endif
    };
    uint32  u32;
  } trailer;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geom);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V1190_SHORT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1290_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SUBTDC(tdc,event_id,data)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1290_SUBTDC
class VME_CAEN_V1290_SUBTDC
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1290_SUBTDC
class PACKER_VME_CAEN_V1290_SUBTDC
#endif//PACKER_CODE

{
public:
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
  } header;
  // several UINT32 ch_data NOENCODE
  // {
    //  0_20: value;
    // 21_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 3) | channel_low)],(value=value));
  // }
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
  } error_flags;
  // MARK_COUNT(tdc_end);
  // UINT32 trailer
  // {
    //  0_11: word_count = CHECK_COUNT(tdc_start,tdc_end,4,4);
    // 12_23: event_id = CHECK(header.event_id);
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 3;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_count : 12; // 0..11
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
      uint32 word_count : 12; // 0..11
#endif
    };
    uint32  u32;
  } trailer;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc,uint32 event_id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V1290_SUBTDC);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1290.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1290
class VME_CAEN_V1290
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1290
class PACKER_VME_CAEN_V1290
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
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
  } header;
  // select several

    // tdc[0] = VME_CAEN_V1290_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[1] = VME_CAEN_V1290_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[2] = VME_CAEN_V1290_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[3] = VME_CAEN_V1290_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                   // data=data);
  SINGLE(VME_CAEN_V1290_SUBTDC,tdc[4]);
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 time_tag : 27; // 0..26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 time_tag : 27; // 0..26
#endif
    };
    uint32  u32;
  } trigger;
  // MARK_COUNT(v1190_end);
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geom : 5; // 0..4
      uint32 word_count : 15; // 5..19
      uint32 dummy_20_23 : 4;
      uint32 tdc_error : 1; // 24
      uint32 buffer_overflow : 1; // 25
      uint32 trigger_lost : 1; // 26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 trigger_lost : 1; // 26
      uint32 buffer_overflow : 1; // 25
      uint32 tdc_error : 1; // 24
      uint32 dummy_20_23 : 4;
      uint32 word_count : 15; // 5..19
      uint32 geom : 5; // 0..4
#endif
    };
    uint32  u32;
  } trailer;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geom);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V1290);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1290_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SHORT_SUBTDC(tdc,event_id,data)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1290_SHORT_SUBTDC
class VME_CAEN_V1290_SHORT_SUBTDC
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1290_SHORT_SUBTDC
class PACKER_VME_CAEN_V1290_SHORT_SUBTDC
#endif//PACKER_CODE

{
public:
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

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc,uint32 event_id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V1290_SHORT_SUBTDC);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1290_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SHORT_SUBTDC_ERROR(tdc)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1290_SHORT_SUBTDC_ERROR
class VME_CAEN_V1290_SHORT_SUBTDC_ERROR
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1290_SHORT_SUBTDC_ERROR
class PACKER_VME_CAEN_V1290_SHORT_SUBTDC_ERROR
#endif//PACKER_CODE

{
public:
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
  } error_flags;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 tdc);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V1290_SHORT_SUBTDC_ERROR);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1290_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SHORT(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1290_SHORT
class VME_CAEN_V1290_SHORT
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1290_SHORT
class PACKER_VME_CAEN_V1290_SHORT
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
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
  } header;
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
  SINGLE(VME_CAEN_V1290_SHORT_SUBTDC,tdc[4]);
  SINGLE(VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[4]);
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 time_tag : 27; // 0..26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 time_tag : 27; // 0..26
#endif
    };
    uint32  u32;
  } trigger;
  // MARK_COUNT(v1190_end);
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geom : 5; // 0..4
      uint32 word_count : 15; // 5..19
      uint32 dummy_20_23 : 4;
      uint32 tdc_error : 1; // 24
      uint32 buffer_overflow : 1; // 25
      uint32 trigger_lost : 1; // 26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 trigger_lost : 1; // 26
      uint32 buffer_overflow : 1; // 25
      uint32 tdc_error : 1; // 24
      uint32 dummy_20_23 : 4;
      uint32 word_count : 15; // 5..19
      uint32 geom : 5; // 0..4
#endif
    };
    uint32  u32;
  } trailer;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geom);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V1290_SHORT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V775.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V775(geom,crate)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V775
class VME_CAEN_V775
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V775
class PACKER_VME_CAEN_V775
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12_OVERFLOW data[32] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12_OVERFLOW,DATA12_OVERFLOW,32> data;
  // UINT32 header NOENCODE
  // {
    //  8_13: count;
    // 16_23: crate = MATCH(crate);
    // 24_26: 2;
    // 27_31: geom = MATCH(geom);
  // }
  // list(0<=index<header.count)

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
  // UINT32 eob
  // {
    //  0_23: event_number;
    // 24_26: 4;
    // 27_31: geom = CHECK(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 event_number : 24; // 0..23
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 event_number : 24; // 0..23
#endif
    };
    uint32  u32;
  } eob;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom,uint32 crate);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom,uint32 crate);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geom,uint32 crate);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V775);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V775_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V775_FRS(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V775_FRS
class VME_CAEN_V775_FRS
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V775_FRS
class PACKER_VME_CAEN_V775_FRS
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 data[32] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12,DATA12,32> data;
  // UINT32 header NOENCODE
  // {
    //  8_13: count;
    // 14_15: 0;
    // 16_23: crate;
    // 24_26: 2;
    // 27_31: geom = MATCH(geom);
  // }
  // list(0<=index<header.count)

    // UINT32 ch_data NOENCODE
    // {
      //  0_11: value;
      //    12: overflow;
      //    13: underflow;
      //    14: valid;
      // 16_20: channel;
      // 24_26: 0;
      // 27_31: geom = MATCH(geom);
      // ENCODE(data[channel],(value=value));
    // }
  // UINT32 eob
  // {
    //  0_23: event_number;
    // 24_26: 4;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 event_number : 24; // 0..23
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 event_number : 24; // 0..23
#endif
    };
    uint32  u32;
  } eob;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geom);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V775_FRS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V830.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V830(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V830
class VME_CAEN_V830
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V830
class PACKER_VME_CAEN_V830
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,32> data;
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
  } header;
  // list(0<=index<header.count)

    // UINT32 ch_data NOENCODE
    // {
      //  0_25: value;
      //    26: 0;
      // 27_31: channel;
      // ENCODE(data[channel],(value=value));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geom);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V830);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V830_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V830_FRS(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V830_FRS
class VME_CAEN_V830_FRS
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V830_FRS
class PACKER_VME_CAEN_V830_FRS
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 data[32]);
  raw_array<DATA32,DATA32,32> data;
  // UINT32 header NOENCODE
  // {
    //  0_15: trigger_number;
    // 16_17: 0;
    // 18_23: count;
    // 24_25: reserved;
    //    26: 1;
    // 27_31: geom = MATCH(geom);
  // }
  // list(0<=index<header.count)

    // UINT32 ch_data NOENCODE
    // {
      //  0_31: value;
      // ENCODE(data[index],(value=value));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geom);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_CAEN_V830_FRS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_GSI_VFTX2.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_GSI_VFTX2
class VME_GSI_VFTX2
#else//PACKER_CODE
# define DECLARED_PACKER_VME_GSI_VFTX2
class PACKER_VME_GSI_VFTX2
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 time_fine[32] ZERO_SUPPRESS_MULTI(100));
  raw_array_multi_zero_suppress<DATA12,DATA12,32,100> time_fine;
  // MEMBER(DATA16 time_coarse[32] ZERO_SUPPRESS_MULTI(100));
  raw_array_multi_zero_suppress<DATA16,DATA16,32,100> time_coarse;
  // MEMBER(DATA16 time_trigger);
  DATA16 time_trigger;
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
  } custom_header;
  // if((0 < custom_header.count))

    // UINT32 event_header
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
  // list(1<=index<custom_header.count)

    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_29: channel;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_GSI_VFTX2);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_GSI_VFTX2_7PS.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_7PS(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_GSI_VFTX2_7PS
class VME_GSI_VFTX2_7PS
#else//PACKER_CODE
# define DECLARED_PACKER_VME_GSI_VFTX2_7PS
class PACKER_VME_GSI_VFTX2_7PS
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 time_fine[32] ZERO_SUPPRESS_MULTI(100));
  raw_array_multi_zero_suppress<DATA12,DATA12,32,100> time_fine;
  // MEMBER(DATA16 time_coarse[32] ZERO_SUPPRESS_MULTI(100));
  raw_array_multi_zero_suppress<DATA16,DATA16,32,100> time_coarse;
  // MEMBER(DATA16 time_trigger);
  DATA16 time_trigger;
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
  } custom_header;
  // if((0 < custom_header.count))

    // UINT32 event_header NOENCODE
    // {
      //  0_07: 170;
      // 11_23: trigger_timestamp;
      // 29_30: 1;
      //    31: 1;
      // ENCODE(time_trigger,(value=trigger_timestamp));
    // }
  // list(1<=index<custom_header.count)

    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_29: channel;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_GSI_VFTX2_7PS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_GSI_VFTX2_LT.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_LT(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_GSI_VFTX2_LT
class VME_GSI_VFTX2_LT
#else//PACKER_CODE
# define DECLARED_PACKER_VME_GSI_VFTX2_LT
class PACKER_VME_GSI_VFTX2_LT
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 time_fine[64] ZERO_SUPPRESS_MULTI(100));
  raw_array_multi_zero_suppress<DATA12,DATA12,64,100> time_fine;
  // MEMBER(DATA16 time_coarse[64] ZERO_SUPPRESS_MULTI(100));
  raw_array_multi_zero_suppress<DATA16,DATA16,64,100> time_coarse;
  // MEMBER(DATA16 time_trigger);
  DATA16 time_trigger;
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
  } custom_header;
  // if((0 < custom_header.count))

    // UINT32 event_header
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
  // list(1<=index<custom_header.count)

    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_30: channel;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_GSI_VFTX2_LT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_MESYTEC_MADC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MADC32(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_MESYTEC_MADC32
class VME_MESYTEC_MADC32
#else//PACKER_CODE
# define DECLARED_PACKER_VME_MESYTEC_MADC32
class PACKER_VME_MESYTEC_MADC32
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA14_OVERFLOW data[32] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA14_OVERFLOW,DATA14_OVERFLOW,32> data;
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
  // several UINT32 ch_data NOENCODE
  // {
    //  0_12: value;
    //    14: outofrange;
    // 16_20: channel;
    // 21_29: 32;
    // 30_31: 0;
    // ENCODE(data[channel],(value=value,overflow=outofrange));
  // }
  // optional UINT32 filler NOENCODE
  // {
    //  0_31: 0;
  // }
  // UINT32 end_of_event
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
  // MARK_COUNT(end);
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geom);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_MESYTEC_MADC32);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_MESYTEC_MDPP16.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MDPP16(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_MESYTEC_MDPP16
class VME_MESYTEC_MDPP16
#else//PACKER_CODE
# define DECLARED_PACKER_VME_MESYTEC_MDPP16
class PACKER_VME_MESYTEC_MDPP16
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA16_OVERFLOW data[34] ZERO_SUPPRESS_MULTI(100));
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,34,100> data;
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
  // several UINT32 fill_word NOENCODE
  // {
    //  0_31: 0;
  // }
  // UINT32 end_of_event
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
  // MARK_COUNT(end);
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geom);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_MESYTEC_MDPP16);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for WR_MULTI.
 *
 * Do not edit - automatically generated.
 */

// WR_MULTI()
#if !PACKER_CODE
# define DECLARED_UNPACK_WR_MULTI
class WR_MULTI
#else//PACKER_CODE
# define DECLARED_PACKER_WR_MULTI
class PACKER_WR_MULTI
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 time_hi);
  DATA32 time_hi;
  // MEMBER(DATA32 time_lo);
  DATA32 time_lo;
  // UINT32 hi NOENCODE
  // {
    //  0_31: time;
    // ENCODE(time_hi,(value=time));
  // }
  // UINT32 lo NOENCODE
  // {
    //  0_31: time;
    // ENCODE(time_lo,(value=time));
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(WR_MULTI);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for ams_siderem_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(ams_siderem_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_ams_siderem_subev
class ams_siderem_subev
#else//PACKER_CODE
# define DECLARED_PACKER_ams_siderem_subev
class PACKER_ams_siderem_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // padd = GSI_SAM_PADDING();
    // external sst[0] = EXT_SST(siderem=1,gtb=0,sam=4,branch=0);
    // external sst[1] = EXT_SST(siderem=2,gtb=0,sam=4,branch=0);
    // external sst[2] = EXT_SST(siderem=1,gtb=1,sam=4,branch=0);
  SINGLE(GSI_SAM_PADDING,padd);
  SINGLE(EXT_SST,sst[3]);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(ams_siderem_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_master_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_master_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_master_subev
class frs_master_subev
#else//PACKER_CODE
# define DECLARED_PACKER_frs_master_subev
class PACKER_frs_master_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // land_vme = LAND_STD_VME();
  // barrier = BARRIER();
  // select several

    // tdc0 = VME_CAEN_V1290(geom=1);
  SINGLE(VME_CAEN_V1290,tdc0);
  // barrier = BARRIER();
  // select several

    // scaler0 = VME_CAEN_V830_FRS(geom=8);
    // qdc0 = VME_CAEN_V775_FRS(geom=11);
  SINGLE(VME_CAEN_V830_FRS,scaler0);
  SINGLE(VME_CAEN_V775_FRS,qdc0);
  SINGLE(BARRIER,barrier);
  SINGLE(LAND_STD_VME,land_vme);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(frs_master_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_subev
class frs_subev
#else//PACKER_CODE
# define DECLARED_PACKER_frs_subev
class PACKER_frs_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // land_vme = LAND_STD_VME();
  // select several

    // scaler_0 = VME_CAEN_V830_FRS(geom=0);
    // tdc0 = VME_CAEN_V775_FRS(geom=8);
    // tdc1 = VME_CAEN_V775_FRS(geom=9);
    // adc0 = VME_CAEN_V775_FRS(geom=3);
    // adc1 = VME_CAEN_V775_FRS(geom=12);
  SINGLE(VME_CAEN_V775_FRS,tdc0);
  SINGLE(VME_CAEN_V775_FRS,adc0);
  SINGLE(VME_CAEN_V830_FRS,scaler_0);
  SINGLE(VME_CAEN_V775_FRS,tdc1);
  SINGLE(VME_CAEN_V775_FRS,adc1);
  SINGLE(LAND_STD_VME,land_vme);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(frs_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_tpcs2_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tpcs2_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_tpcs2_subev
class frs_tpcs2_subev
#else//PACKER_CODE
# define DECLARED_PACKER_frs_tpcs2_subev
class PACKER_frs_tpcs2_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // land_vme = LAND_STD_VME();
  // select several

    // tdc0 = VME_CAEN_V775_FRS(geom=8);
    // adc0 = VME_CAEN_V775_FRS(geom=12);
  SINGLE(VME_CAEN_V775_FRS,tdc0);
  SINGLE(VME_CAEN_V775_FRS,adc0);
  SINGLE(LAND_STD_VME,land_vme);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(frs_tpcs2_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_tpcs4_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tpcs4_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_tpcs4_subev
class frs_tpcs4_subev
#else//PACKER_CODE
# define DECLARED_PACKER_frs_tpcs4_subev
class PACKER_frs_tpcs4_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // land_vme = LAND_STD_VME();
  // select several

    // tdc0 = VME_CAEN_V775_FRS(geom=0);
    // adc0 = VME_CAEN_V775_FRS(geom=1);
  SINGLE(VME_CAEN_V775_FRS,tdc0);
  SINGLE(VME_CAEN_V775_FRS,adc0);
  SINGLE(LAND_STD_VME,land_vme);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(frs_tpcs4_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
class unpack_event : public unpack_event_base
{
public:
  // frs = frs_subev(type=12,subtype=1,procid=30);
  // tpc_s2 = frs_tpcs2_subev(type=12,subtype=1,procid=25);
  // tpc_s4 = frs_tpcs4_subev(type=12,subtype=1,procid=20);
  // ams_siderem = ams_siderem_subev(procid=100,type=12,subtype=1,control=20);
  // ignore_unknown_subevent;
SINGLE(frs_subev,frs);
SINGLE(frs_tpcs4_subev,tpc_s4);
SINGLE(frs_tpcs2_subev,tpc_s2);
SINGLE(ams_siderem_subev,ams_siderem);
public:
#ifndef __PSDC__
  bitsone<5> __visited;
  void __clear_visited() { __visited.clear(); }
  bool ignore_unknown_subevent() { return true; }
#endif//!__PSDC__

public:
#ifndef __PSDC__
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  // void __clean_event();

  STRUCT_FCNS_DECL(unpack_event);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EVENT.
 *
 * Do not edit - automatically generated.
 */

// STICKY_EVENT
class unpack_sticky_event : public unpack_sticky_event_base
{
public:
public:
#ifndef __PSDC__
  void __clear_visited() { }
  bool ignore_unknown_subevent() { return false; }
#endif//!__PSDC__

public:
#ifndef __PSDC__
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  // void __clean_event();

  STRUCT_FCNS_DECL(unpack_sticky_event);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
