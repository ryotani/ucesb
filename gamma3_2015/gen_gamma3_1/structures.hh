/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for CAEN_V775.
 *
 * Do not edit - automatically generated.
 */

// CAEN_V775(geom,crate)
#if !PACKER_CODE
# define DECLARED_UNPACK_CAEN_V775
class CAEN_V775
#else//PACKER_CODE
# define DECLARED_PACKER_CAEN_V775
class PACKER_CAEN_V775
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12_OVERFLOW data[32] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12_OVERFLOW,DATA12_OVERFLOW,32> data;
  // UINT32 header NOENCODE
  // {
    //  0_07: undefined;
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

  STRUCT_FCNS_DECL(CAEN_V775);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for CAEN_V830_SCALER.
 *
 * Do not edit - automatically generated.
 */

// CAEN_V830_SCALER(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_CAEN_V830_SCALER
class CAEN_V830_SCALER
#else//PACKER_CODE
# define DECLARED_PACKER_CAEN_V830_SCALER
class PACKER_CAEN_V830_SCALER
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,32> data;
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
  } sc_header;
  // UINT32 header
  // {
    //  0_15: event_number;
    // 16_17: ts;
    // 18_23: count;
    // 24_25: undefined;
    //    26: 1;
    // 27_31: geom;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 event_number : 16; // 0..15
      uint32 ts : 2; // 16..17
      uint32 count : 6; // 18..23
      uint32 undefined : 2; // 24..25
      uint32 unnamed_26_26 : 1; // 26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_26_26 : 1; // 26
      uint32 undefined : 2; // 24..25
      uint32 count : 6; // 18..23
      uint32 ts : 2; // 16..17
      uint32 event_number : 16; // 0..15
#endif
    };
    uint32  u32;
  } header;
  // list(0<=index<header.count)

    // UINT32 sc NOENCODE
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
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(CAEN_V830_SCALER);
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
  // MEMBER(DATA32 timestamp);
  DATA32 timestamp;
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
  } failure;
  // if(failure.has_time_stamp)

    // UINT32 time_stamp
    // {
      //  0_31: value;
      // ENCODE(timestamp,(value=value));
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
    } time_stamp;
  // if(failure.has_multi_event)

    // UINT32 multi_events;
    uint32  multi_events;
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
 * Event unpacker associated structures for SERIAL_TS_EVENT.
 *
 * Do not edit - automatically generated.
 */

// SERIAL_TS_EVENT()
#if !PACKER_CODE
# define DECLARED_UNPACK_SERIAL_TS_EVENT
class SERIAL_TS_EVENT
#else//PACKER_CODE
# define DECLARED_PACKER_SERIAL_TS_EVENT
class PACKER_SERIAL_TS_EVENT
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 ts_hi);
  DATA32 ts_hi;
  // MEMBER(DATA32 ts_lo);
  DATA32 ts_lo;
  // UINT32 ts_lsb NOENCODE
  // {
    //  0_31: t_lsb;
    // ENCODE(ts_lo,(value=t_lsb));
  // }
  // UINT32 ts_msb NOENCODE
  // {
    //  0_30: t_msb;
    //    31: missed_event;
    // ENCODE(ts_hi,(value=t_msb));
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

  STRUCT_FCNS_DECL(SERIAL_TS_EVENT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for SERIAL_TS.
 *
 * Do not edit - automatically generated.
 */

// SERIAL_TS()
#if !PACKER_CODE
# define DECLARED_UNPACK_SERIAL_TS
class SERIAL_TS
#else//PACKER_CODE
# define DECLARED_PACKER_SERIAL_TS
class PACKER_SERIAL_TS
#endif//PACKER_CODE

{
public:
  // UINT32 header NOENCODE
  // {
    //  0_31: multi_events;
  // }
  // list(0<=i<header.multi_events)

    // multi event = SERIAL_TS_EVENT();
    MULTI(SERIAL_TS_EVENT,event);

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

  STRUCT_FCNS_DECL(SERIAL_TS);
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
 * Event unpacker associated structures for TRIGBUF_ENTRY.
 *
 * Do not edit - automatically generated.
 */

// TRIGBUF_ENTRY()
#if !PACKER_CODE
# define DECLARED_UNPACK_TRIGBUF_ENTRY
class TRIGBUF_ENTRY
#else//PACKER_CODE
# define DECLARED_PACKER_TRIGBUF_ENTRY
class PACKER_TRIGBUF_ENTRY
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 ts_hi);
  DATA32 ts_hi;
  // MEMBER(DATA32 ts_lo);
  DATA32 ts_lo;
  // MEMBER(DATA32 tpat);
  DATA32 tpat;
  // MEMBER(DATA8 trig);
  DATA8 trig;
  // UINT32 ts_lsb NOENCODE
  // {
    //  0_31: t_lsb;
    // ENCODE(ts_lo,(value=t_lsb));
  // }
  // UINT32 ts_msb NOENCODE
  // {
    //  0_30: t_msb;
    //    31: missed_event;
    // ENCODE(ts_hi,(value=t_msb));
  // }
  // UINT32 info NOENCODE
  // {
    //  0_23: tpat;
    // 24_27: trig;
    // 28_31: cnt;
    // ENCODE(tpat,(value=tpat));
    // ENCODE(trig,(value=trig));
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

  STRUCT_FCNS_DECL(TRIGBUF_ENTRY);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRIGBUF.
 *
 * Do not edit - automatically generated.
 */

// TRIGBUF(multi_events)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRIGBUF
class TRIGBUF
#else//PACKER_CODE
# define DECLARED_PACKER_TRIGBUF
class PACKER_TRIGBUF
#endif//PACKER_CODE

{
public:
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
  } header;
  // list(0<=i<multi_events)

    // multi entry = TRIGBUF_ENTRY();
    MULTI(TRIGBUF_ENTRY,entry);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 multi_events);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 multi_events);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 multi_events);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TRIGBUF);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRLO.
 *
 * Do not edit - automatically generated.
 */

// TRLO(id,multi_events)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLO
class TRLO
#else//PACKER_CODE
# define DECLARED_PACKER_TRLO
class PACKER_TRLO
#endif//PACKER_CODE

{
public:
  // wr_ts = TIMESTAMP_WHITERABBIT(id=id);
  // serial_ts = SERIAL_TS();
  // trigbuf = TRIGBUF(multi_events=multi_events);
  SINGLE(TIMESTAMP_WHITERABBIT,wr_ts);
  SINGLE(TRIGBUF,trigbuf);
  SINGLE(SERIAL_TS,serial_ts);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id,uint32 multi_events);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id,uint32 multi_events);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id,uint32 multi_events);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TRLO);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRLO_EVENT_TRIGGER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_EVENT_TRIGGER()
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLO_EVENT_TRIGGER
class TRLO_EVENT_TRIGGER
#else//PACKER_CODE
# define DECLARED_PACKER_TRLO_EVENT_TRIGGER
class PACKER_TRLO_EVENT_TRIGGER
#endif//PACKER_CODE

{
public:
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
  } time_lo;
  // UINT32 time_hi
  // {
    //  0_30: val;
    //    31: missed_event;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 val : 31; // 0..30
      uint32 missed_event : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 missed_event : 1; // 31
      uint32 val : 31; // 0..30
#endif
    };
    uint32  u32;
  } time_hi;
  // UINT32 status
  // {
    //  0_23: tpat;
    // 24_27: trig;
    // 28_31: count;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 tpat : 24; // 0..23
      uint32 trig : 4; // 24..27
      uint32 count : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 count : 4; // 28..31
      uint32 trig : 4; // 24..27
      uint32 tpat : 24; // 0..23
#endif
    };
    uint32  u32;
  } status;

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

  STRUCT_FCNS_DECL(TRLO_EVENT_TRIGGER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRLO_SAMPLER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_SAMPLER(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLO_SAMPLER
class TRLO_SAMPLER
#else//PACKER_CODE
# define DECLARED_PACKER_TRLO_SAMPLER
class PACKER_TRLO_SAMPLER
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 stamps[512] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA32,DATA32,512> stamps;
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
  } header;
  // list(0<=index<header.count)

    // UINT32 data NOENCODE
    // {
      //  0_31: stamp;
      // ENCODE(stamps APPEND_LIST,(value=stamp));
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

  STRUCT_FCNS_DECL(TRLO_SAMPLER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRLO_TRIG_SCALER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_TRIG_SCALER(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLO_TRIG_SCALER
class TRLO_TRIG_SCALER
#else//PACKER_CODE
# define DECLARED_PACKER_TRLO_TRIG_SCALER
class PACKER_TRLO_TRIG_SCALER
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 before_lmu[16] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,16> before_lmu;
  // MEMBER(DATA32 before_lmu_mux[1] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,1> before_lmu_mux;
  // MEMBER(DATA32 before_lmu_aux[4] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,4> before_lmu_aux;
  // MEMBER(DATA32 before_deadtime[16] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,16> before_deadtime;
  // MEMBER(DATA32 after_deadtime[16] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,16> after_deadtime;
  // MEMBER(DATA32 after_reduction[16] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,16> after_reduction;
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
  } header;
  // list(0<=index<header.before_lmu)

    // UINT32 b_lmu NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu[index],(value=value));
    // }
  // list(0<=index<header.before_lmu_mux)

    // UINT32 b_lmu_mux NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_mux[index],(value=value));
    // }
  // list(0<=index<header.before_lmu_aux)

    // UINT32 b_lmu_aux NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_aux[index],(value=value));
    // }
  // list(0<=index<header.after_lmu)

    // UINT32 b_deadtime NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_deadtime[index],(value=value));
    // }
  // list(0<=index<header.after_lmu)

    // UINT32 a_deadtime NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_deadtime[index],(value=value));
    // }
  // list(0<=index<header.after_lmu)

    // UINT32 a_reduction NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_reduction[index],(value=value));
    // }
  // list(0<=index<16)

    // UINT32 val;
    uint32  val;

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

  STRUCT_FCNS_DECL(TRLO_TRIG_SCALER);
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
 * Event unpacker associated structures for VME_MESY_MADC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESY_MADC32(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_MESY_MADC32
class VME_MESY_MADC32
#else//PACKER_CODE
# define DECLARED_PACKER_VME_MESY_MADC32
class PACKER_VME_MESY_MADC32
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA16 data[32] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA16,DATA16,32> data;
  // UINT32 header NOENCODE
  // {
    //  0_11: word_number;
    // 12_14: adc_resol;
    //    15: out_form;
    // 16_23: geom = MATCH(geom);
    // 24_29: 0;
    // 30_31: 1;
  // }
  // list(0<=index<(header.word_number - 1))

    // UINT32 ch_data NOENCODE
    // {
      //  0_12: value;
      //    14: outofrange;
      // 16_20: channel;
      // 21_29: 32;
      // 30_31: 0;
      // ENCODE(data[channel],(value=value));
    // }
  // UINT32 end_of_event NOENCODE
  // {
    //  0_29: counter;
    // 30_31: 3;
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

  STRUCT_FCNS_DECL(VME_MESY_MADC32);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_MESY_MADC32_PADDING.
 *
 * Do not edit - automatically generated.
 */

// VME_MESY_MADC32_PADDING()
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_MESY_MADC32_PADDING
class VME_MESY_MADC32_PADDING
#else//PACKER_CODE
# define DECLARED_PACKER_VME_MESY_MADC32_PADDING
class PACKER_VME_MESY_MADC32_PADDING
#endif//PACKER_CODE

{
public:
  // UINT32 padding NOENCODE
  // {
    //  0_31: value = MATCH(0x32323232);
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

  STRUCT_FCNS_DECL(VME_MESY_MADC32_PADDING);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_STRUCK_SIS3316_CHANNEL_DATA.
 *
 * Do not edit - automatically generated.
 */

// VME_STRUCK_SIS3316_CHANNEL_DATA(id,ch)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_STRUCK_SIS3316_CHANNEL_DATA
class VME_STRUCK_SIS3316_CHANNEL_DATA
#else//PACKER_CODE
# define DECLARED_PACKER_VME_STRUCK_SIS3316_CHANNEL_DATA
class PACKER_VME_STRUCK_SIS3316_CHANNEL_DATA
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 ts[2] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,2> ts;
  // MEMBER(DATA32 gate[8] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,8> gate;
  // MEMBER(DATA32 maw[3] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,3> maw;
  // MEMBER(DATA32 maxe[2] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,2> maxe;
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
  } header0;
  // UINT32 header2
  // {
    //  0_31: timeS;
    // ENCODE(ts[1],(value=timeS));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 timeS : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 timeS : 32; // 0..31
#endif
    };
    uint32  u32;
  } header2;
  // if(header0.has_acc6)

    // UINT32 peak NOENCODE
    // {
      //  0_15: peakValue;
      // 16_31: peakIndex;
    // }
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
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 sum : 24; // 0..23
        uint32 reserved : 4; // 24..27
        uint32 has_pileup : 1; // 28
        uint32 has_repileup : 1; // 29
        uint32 has_underflow : 1; // 30
        uint32 has_overflow : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 has_overflow : 1; // 31
        uint32 has_underflow : 1; // 30
        uint32 has_repileup : 1; // 29
        uint32 has_pileup : 1; // 28
        uint32 reserved : 4; // 24..27
        uint32 sum : 24; // 0..23
#endif
      };
      uint32  u32;
    } gate_group_1;
    // list(1<=i<6)

      // UINT32 gate_group_2_6
      // {
        //  0_27: sum;
        // 28_31: 0;
        // ENCODE(gate[i],(value=sum));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 sum : 28; // 0..27
          uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 unnamed_28_31 : 4; // 28..31
          uint32 sum : 28; // 0..27
#endif
        };
        uint32  u32;
      } gate_group_2_6;
  // if(header0.has_acc2)

    // list(6<=i<8)

      // UINT32 gate_group_7_8
      // {
        //  0_27: sum;
        // 28_31: 0;
        // ENCODE(gate[i],(value=sum));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 sum : 28; // 0..27
          uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 unnamed_28_31 : 4; // 28..31
          uint32 sum : 28; // 0..27
#endif
        };
        uint32  u32;
      } gate_group_7_8;
  // if(header0.has_maw)

    // UINT32 maw1
    // {
      //  0_31: max;
      // ENCODE(maw[0],(value=max));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 max : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 max : 32; // 0..31
#endif
      };
      uint32  u32;
    } maw1;
    // UINT32 maw2
    // {
      //  0_31: after;
      // ENCODE(maw[1],(value=after));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 after : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 after : 32; // 0..31
#endif
      };
      uint32  u32;
    } maw2;
    // UINT32 maw3
    // {
      //  0_31: before;
      // ENCODE(maw[2],(value=before));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 before : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 before : 32; // 0..31
#endif
      };
      uint32  u32;
    } maw3;
  // if(header0.has_e)

    // UINT32 maxe1
    // {
      //  0_31: start;
      // ENCODE(maxe[0],(value=(start + 0x08000000)));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 start : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 start : 32; // 0..31
#endif
      };
      uint32  u32;
    } maxe1;
    // UINT32 maxe2
    // {
      //  0_31: max;
      // ENCODE(maxe[1],(value=(max + 0x08000000)));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 max : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 max : 32; // 0..31
#endif
      };
      uint32  u32;
    } maxe2;
  // UINT32 header3
  // {
    //  0_25: sampleLength;
    //    26: pileup;
    //    27: mawFlag;
    // 28_31: 14;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 sampleLength : 26; // 0..25
      uint32 pileup : 1; // 26
      uint32 mawFlag : 1; // 27
      uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_28_31 : 4; // 28..31
      uint32 mawFlag : 1; // 27
      uint32 pileup : 1; // 26
      uint32 sampleLength : 26; // 0..25
#endif
    };
    uint32  u32;
  } header3;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id,uint32 ch);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id,uint32 ch);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id,uint32 ch);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_STRUCK_SIS3316_CHANNEL_DATA);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_STRUCK_SIS3316_CHANNEL.
 *
 * Do not edit - automatically generated.
 */

// VME_STRUCK_SIS3316_CHANNEL(id,ch)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_STRUCK_SIS3316_CHANNEL
class VME_STRUCK_SIS3316_CHANNEL
#else//PACKER_CODE
# define DECLARED_PACKER_VME_STRUCK_SIS3316_CHANNEL
class PACKER_VME_STRUCK_SIS3316_CHANNEL
#endif//PACKER_CODE

{
public:
  // UINT32 channel_header NOENCODE
  // {
    //  0_07: id = MATCH(id);
    //  8_11: ch = MATCH(ch);
    // 12_15: padding_words;
    // 16_31: module = MATCH(0x3316);
  // }
  // list(0<=n<channel_header.padding_words)

    // UINT32 padding NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: ch = MATCH(ch);
      // 16_31: module = MATCH(0x3316);
    // }
  // select several

    // multi data = VME_STRUCK_SIS3316_CHANNEL_DATA(id=id,ch=ch);
  MULTI(VME_STRUCK_SIS3316_CHANNEL_DATA,data);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id,uint32 ch);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id,uint32 ch);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id,uint32 ch);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_STRUCK_SIS3316_CHANNEL);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_STRUCK_SIS3316.
 *
 * Do not edit - automatically generated.
 */

// VME_STRUCK_SIS3316(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_STRUCK_SIS3316
class VME_STRUCK_SIS3316
#else//PACKER_CODE
# define DECLARED_PACKER_VME_STRUCK_SIS3316
class PACKER_VME_STRUCK_SIS3316
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA8 n_ch);
  DATA8 n_ch;
  // UINT32 header NOENCODE
  // {
    //  0_07: id = MATCH(id);
    //  8_15: nofCH;
    // 16_31: module = MATCH(0x3316);
    // ENCODE(n_ch,(value=nofCH));
  // }
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
  SINGLE(VME_STRUCK_SIS3316_CHANNEL,channel[16]);

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

  STRUCT_FCNS_DECL(VME_STRUCK_SIS3316);
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
 * Event unpacker associated structures for SCALERS.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(SCALERS)
#if !PACKER_CODE
# define DECLARED_UNPACK_SCALERS
class SCALERS
#else//PACKER_CODE
# define DECLARED_PACKER_SCALERS
class PACKER_SCALERS
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // trlo = TRLO_TRIG_SCALER(id=18);
    // caen_scaler = VME_CAEN_V830(geom=31);
  SINGLE(TRLO_TRIG_SCALER,trlo);
  SINGLE(VME_CAEN_V830,caen_scaler);

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

  STRUCT_FCNS_DECL(SCALERS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TS.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TS)
#if !PACKER_CODE
# define DECLARED_UNPACK_TS
class TS
#else//PACKER_CODE
# define DECLARED_PACKER_TS
class PACKER_TS
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // trlo = TRLO(id=2,multi_events=29);
  SINGLE(TRLO,trlo);

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

  STRUCT_FCNS_DECL(TS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(VME)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME
class VME
#else//PACKER_CODE
# define DECLARED_PACKER_VME
class PACKER_VME
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // header = LAND_STD_VME();
  // select several

    // sis3316[0] = VME_STRUCK_SIS3316(id=3);
    // sis3316[1] = VME_STRUCK_SIS3316(id=4);
    // sis3316[2] = VME_STRUCK_SIS3316(id=5);
    // multi tdc = CAEN_V775(geom=31,crate=0);
    // mesy_padding = VME_MESY_MADC32_PADDING();
    // multi adc = VME_MESY_MADC32(geom=6);
  MULTI(CAEN_V775,tdc);
  SINGLE(VME_STRUCK_SIS3316,sis3316[3]);
  SINGLE(VME_MESY_MADC32_PADDING,mesy_padding);
  MULTI(VME_MESY_MADC32,adc);
  SINGLE(LAND_STD_VME,header);

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

  STRUCT_FCNS_DECL(VME);
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
  // ts = TS(type=10,subtype=1,control=5,subcrate=1);
  // vme = VME(type=88,subtype=0x2260,control=5,subcrate=1);
  // scalers = SCALERS(type=12,subtype=0xd80,control=5,subcrate=1);
  // ignore_unknown_subevent;
SINGLE(TS,ts);
SINGLE(SCALERS,scalers);
SINGLE(VME,vme);
public:
#ifndef __PSDC__
  bitsone<4> __visited;
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
