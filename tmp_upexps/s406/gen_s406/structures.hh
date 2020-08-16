/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for CAMAC_LECROY_2277_1CH_HACK.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_LECROY_2277_1CH_HACK(channel,edge,high_byte)
#if !PACKER_CODE
# define DECLARED_UNPACK_CAMAC_LECROY_2277_1CH_HACK
class CAMAC_LECROY_2277_1CH_HACK
#else//PACKER_CODE
# define DECLARED_PACKER_CAMAC_LECROY_2277_1CH_HACK
class PACKER_CAMAC_LECROY_2277_1CH_HACK
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA16 data[16] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA16,DATA16,16> data;
  // UINT32 ch_data NOENCODE
  // {
    //  0_15: value;
    //    16: edge = CHECK(edge);
    // 17_21: channel = CHECK(channel);
    // 24_31: high = CHECK(high_byte);
    // ENCODE(data APPEND_LIST,(value=value));
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 channel,uint32 edge,uint32 high_byte);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 channel,uint32 edge,uint32 high_byte);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 channel,uint32 edge,uint32 high_byte);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(CAMAC_LECROY_2277_1CH_HACK);
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
 * Event unpacker associated structures for CROS3_REWRITE.
 *
 * Do not edit - automatically generated.
 */

// CROS3_REWRITE(ccb_id)
#if !PACKER_CODE
# define DECLARED_UNPACK_CROS3_REWRITE
class CROS3_REWRITE
#else//PACKER_CODE
# define DECLARED_PACKER_CROS3_REWRITE
class PACKER_CROS3_REWRITE
#endif//PACKER_CODE

{
public:
  // MEMBER(WIRE_START_END data[32768] ZERO_SUPPRESS);
  raw_array_zero_suppress<WIRE_START_END,WIRE_START_END,32768> data;
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 data_size : 16; // 0..15
      uint32 threshold_curve : 1; // 16
      uint32 leading_edge : 1; // 17
      uint32 data : 1; // 18
      uint32 dummy_19 : 1;
      uint32 trigger_time : 4; // 20..23
      uint32 ccb_id : 4; // 24..27
      uint32 event_counter : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 event_counter : 4; // 28..31
      uint32 ccb_id : 4; // 24..27
      uint32 trigger_time : 4; // 20..23
      uint32 dummy_19 : 1;
      uint32 data : 1; // 18
      uint32 leading_edge : 1; // 17
      uint32 threshold_curve : 1; // 16
      uint32 data_size : 16; // 0..15
#endif
    };
    uint32  u32;
  } h1;
  // if(h1.data)

  // else

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
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 read_out_mode : 2; // 0..1
        uint32 dummy_2_3 : 2;
        uint32 pulser_enabled : 1; // 4
        uint32 dummy_5_7 : 3;
        uint32 statistics : 3; // 8..10
        uint32 both_edges : 1; // 11
        uint32 slices : 8; // 12..19
        uint32 scale : 2; // 20..21
        uint32 dummy_22_30 : 9;
        uint32 odd_length16 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 odd_length16 : 1; // 31
        uint32 dummy_22_30 : 9;
        uint32 scale : 2; // 20..21
        uint32 slices : 8; // 12..19
        uint32 both_edges : 1; // 11
        uint32 statistics : 3; // 8..10
        uint32 dummy_5_7 : 3;
        uint32 pulser_enabled : 1; // 4
        uint32 dummy_2_3 : 2;
        uint32 read_out_mode : 2; // 0..1
#endif
      };
      uint32  u32;
    } h2;
    // if(h1.leading_edge)

    // else

      // list(0<=index<static_cast<uint32>((h1.data_size - h2.odd_length16)))

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
      // if(h2.odd_length16)

        // UINT32 ch_data_odd NOENCODE
        // {
          //  0_07: start_slice1;
          //  8_15: wire1;
          // 16_23: start_slice2 = CHECK(255);
          // 24_31: wire2 = CHECK(0);
          // ENCODE(data[((h1.data_size - 1) * 2)],(wire=wire1,start=start_slice1,
                                                 // stop=0));
        // }
      // list(0<=index<h1.data_size)

        // UINT32 ch_data NOENCODE
        // {
          //  0_07: start_slice;
          //  8_15: wire;
          // 16_23: end_slice;
          // ENCODE(data[index],(wire=wire,start=start_slice,stop=end_slice));
        // }
    // if(h1.threshold_curve)

    // else

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
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 read_out_mode : 2; // 0..1
          uint32 dummy_2_3 : 2;
          uint32 pulser_enabled : 1; // 4
          uint32 dummy_5_7 : 3;
          uint32 statistics : 3; // 8..10
          uint32 both_edges : 1; // 11
          uint32 threshold_start : 8; // 12..19
          uint32 threshold_step : 4; // 20..23
          uint32 boards : 5; // 24..28
          uint32 dummy_29_31 : 3;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 dummy_29_31 : 3;
          uint32 boards : 5; // 24..28
          uint32 threshold_step : 4; // 20..23
          uint32 threshold_start : 8; // 12..19
          uint32 both_edges : 1; // 11
          uint32 statistics : 3; // 8..10
          uint32 dummy_5_7 : 3;
          uint32 pulser_enabled : 1; // 4
          uint32 dummy_2_3 : 2;
          uint32 read_out_mode : 2; // 0..1
#endif
        };
        uint32  u32;
      } trc_h2;
      // list(0<=board<trc_h2.boards)

        // UINT32 trc_h3 NOENCODE
        // {
          //  0_07: test_pulser_even;
          //  8_15: test_pulser_odd;
          // 16_23: threshold_steps;
          // 28_31: ad_id;
        // }
        // list(0<=index_thr<trc_h3.threshold_steps)

          // list(0<=index_wire2<8)

            // UINT32 ch_counts NOENCODE
            // {
              //  0_11: counts1;
              // 12_15: wire1;
              // 16_27: counts2;
              // 28_31: wire2;
            // }
      // UINT32 dummy_h2 NOENCODE
      // {
        //  0_31: 0;
      // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 ccb_id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 ccb_id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 ccb_id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(CROS3_REWRITE);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for DUMMY_WORD.
 *
 * Do not edit - automatically generated.
 */

// DUMMY_WORD()
#if !PACKER_CODE
# define DECLARED_UNPACK_DUMMY_WORD
class DUMMY_WORD
#else//PACKER_CODE
# define DECLARED_PACKER_DUMMY_WORD
class PACKER_DUMMY_WORD
#endif//PACKER_CODE

{
public:
  // UINT32 dummy_word;
  uint32  dummy_word;

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

  STRUCT_FCNS_DECL(DUMMY_WORD);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EXT_CROS3.
 *
 * Do not edit - automatically generated.
 */


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
 * Event unpacker associated structures for NTP64_TIME.
 *
 * Do not edit - automatically generated.
 */

// NTP64_TIME()
#if !PACKER_CODE
# define DECLARED_UNPACK_NTP64_TIME
class NTP64_TIME
#else//PACKER_CODE
# define DECLARED_PACKER_NTP64_TIME
class PACKER_NTP64_TIME
#endif//PACKER_CODE

{
public:
  // UINT32 sec;
  uint32  sec;
  // UINT32 frac;
  uint32  frac;

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

  STRUCT_FCNS_DECL(NTP64_TIME);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for NTP_MESSAGE.
 *
 * Do not edit - automatically generated.
 */

// NTP_MESSAGE(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_NTP_MESSAGE
class NTP_MESSAGE
#else//PACKER_CODE
# define DECLARED_PACKER_NTP_MESSAGE
class PACKER_NTP_MESSAGE
#endif//PACKER_CODE

{
public:
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
  } header;
  // MARK_COUNT(start);
  // UINT32 server_id;
  uint32  server_id;
  // UINT32 sspp
  // {
    //  0_07: precision;
    //  8_15: poll;
    // 16_19: stratum;
    // 24_26: mode;
    // 27_29: version = CHECK(3);
    // 30_31: leap;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 precision : 8; // 0..7
      uint32 poll : 8; // 8..15
      uint32 stratum : 4; // 16..19
      uint32 dummy_20_23 : 4;
      uint32 mode : 3; // 24..26
      uint32 version : 3; // 27..29
      uint32 leap : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 leap : 2; // 30..31
      uint32 version : 3; // 27..29
      uint32 mode : 3; // 24..26
      uint32 dummy_20_23 : 4;
      uint32 stratum : 4; // 16..19
      uint32 poll : 8; // 8..15
      uint32 precision : 8; // 0..7
#endif
    };
    uint32  u32;
  } sspp;
  // UINT32 root_dly
  // {
    //  0_15: frac;
    // 16_31: sec;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 frac : 16; // 0..15
      uint32 sec : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 sec : 16; // 16..31
      uint32 frac : 16; // 0..15
#endif
    };
    uint32  u32;
  } root_dly;
  // UINT32 root_disp
  // {
    //  0_15: frac;
    // 16_31: sec;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 frac : 16; // 0..15
      uint32 sec : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 sec : 16; // 16..31
      uint32 frac : 16; // 0..15
#endif
    };
    uint32  u32;
  } root_disp;
  // UINT32 refid;
  uint32  refid;
  // reftime = NTP64_TIME();
  // origtime = NTP64_TIME();
  // rectime = NTP64_TIME();
  // tmittime = NTP64_TIME();
  // rxtime = NTP64_TIME();
  // if(header.quick_burst)

    // orig2time = NTP64_TIME();
    // rec2time = NTP64_TIME();
    // tmit2time = NTP64_TIME();
    // rx2time = NTP64_TIME();
    SINGLE(NTP64_TIME,orig2time);
    SINGLE(NTP64_TIME,tmit2time);
    SINGLE(NTP64_TIME,rec2time);
    SINGLE(NTP64_TIME,rx2time);
  // MARK_COUNT(end);
  // CHECK_COUNT(header.word_count,start,end,0,4)
  SINGLE(NTP64_TIME,reftime);
  SINGLE(NTP64_TIME,origtime);
  SINGLE(NTP64_TIME,rectime);
  SINGLE(NTP64_TIME,tmittime);
  SINGLE(NTP64_TIME,rxtime);

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

  STRUCT_FCNS_DECL(NTP_MESSAGE);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for RANDOM_TCAL_TSTAMP_CLOCK.
 *
 * Do not edit - automatically generated.
 */

// RANDOM_TCAL_TSTAMP_CLOCK()
#if !PACKER_CODE
# define DECLARED_UNPACK_RANDOM_TCAL_TSTAMP_CLOCK
class RANDOM_TCAL_TSTAMP_CLOCK
#else//PACKER_CODE
# define DECLARED_PACKER_RANDOM_TCAL_TSTAMP_CLOCK
class PACKER_RANDOM_TCAL_TSTAMP_CLOCK
#endif//PACKER_CODE

{
public:
  // UINT32 soft_latches;
  uint32  soft_latches;
  // UINT32 hard_latches;
  uint32  hard_latches;
  // UINT32 clock_ticks;
  uint32  clock_ticks;
  // before = NTP64_TIME();
  // after = NTP64_TIME();
  SINGLE(NTP64_TIME,before);
  SINGLE(NTP64_TIME,after);

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

  STRUCT_FCNS_DECL(RANDOM_TCAL_TSTAMP_CLOCK);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for RANDOM_TCAL.
 *
 * Do not edit - automatically generated.
 */

// RANDOM_TCAL(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_RANDOM_TCAL
class RANDOM_TCAL
#else//PACKER_CODE
# define DECLARED_PACKER_RANDOM_TCAL
class PACKER_RANDOM_TCAL
#endif//PACKER_CODE

{
public:
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
  } header;
  // MARK_COUNT(start);
  // if(header.has_tstamp1)

    // tstamp1 = RANDOM_TCAL_TSTAMP_CLOCK();
    SINGLE(RANDOM_TCAL_TSTAMP_CLOCK,tstamp1);
  // if(header.has_tstamp2)

    // tstamp2 = RANDOM_TCAL_TSTAMP_CLOCK();
    SINGLE(RANDOM_TCAL_TSTAMP_CLOCK,tstamp2);
  // MARK_COUNT(end);
  // CHECK_COUNT(header.word_count,start,end,0,4)

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

  STRUCT_FCNS_DECL(RANDOM_TCAL);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for SIDEREM_BLOCK.
 *
 * Do not edit - automatically generated.
 */

// SIDEREM_BLOCK(sam,gtb,siderem)
#if !PACKER_CODE
# define DECLARED_UNPACK_SIDEREM_BLOCK
class SIDEREM_BLOCK
#else//PACKER_CODE
# define DECLARED_PACKER_SIDEREM_BLOCK
class PACKER_SIDEREM_BLOCK
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 data[4][512] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12,DATA12,512> data[4];
  // UINT32 header
  // {
    //  0_11: count;
    // 12_15: local_event_counter;
    // 16_19: local_trigger;
    // 20_23: siderem = MATCH(siderem);
    // 24_27: gtb = MATCH(gtb);
    // 28_31: sam = MATCH(sam);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 12; // 0..11
      uint32 local_event_counter : 4; // 12..15
      uint32 local_trigger : 4; // 16..19
      uint32 siderem : 4; // 20..23
      uint32 gtb : 4; // 24..27
      uint32 sam : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 sam : 4; // 28..31
      uint32 gtb : 4; // 24..27
      uint32 siderem : 4; // 20..23
      uint32 local_trigger : 4; // 16..19
      uint32 local_event_counter : 4; // 12..15
      uint32 count : 12; // 0..11
#endif
    };
    uint32  u32;
  } header;
  // list(0<=index<header.count)

    // UINT32 ch_data NOENCODE
    // {
      //  0_11: value;
      // 12_13: adc_no;
      // 16_24: channel;
      // 28_31: 15;
      // ENCODE(data[adc_no][channel],(value=value));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sam,uint32 gtb,uint32 siderem);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sam,uint32 gtb,uint32 siderem);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sam,uint32 gtb,uint32 siderem);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(SIDEREM_BLOCK);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for SOFT_SCALER32.
 *
 * Do not edit - automatically generated.
 */

// SOFT_SCALER32(channels)
#if !PACKER_CODE
# define DECLARED_UNPACK_SOFT_SCALER32
class SOFT_SCALER32
#else//PACKER_CODE
# define DECLARED_PACKER_SOFT_SCALER32
class PACKER_SOFT_SCALER32
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,32> data;
  // list(0<=index<channels)

    // UINT32 ch_data NOENCODE
    // {
      //  0_31: value;
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

  STRUCT_FCNS_DECL(SOFT_SCALER32);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TACQUILA_DATA.
 *
 * Do not edit - automatically generated.
 */

// TACQUILA_DATA(sam,gtb)
#if !PACKER_CODE
# define DECLARED_UNPACK_TACQUILA_DATA
class TACQUILA_DATA
#else//PACKER_CODE
# define DECLARED_PACKER_TACQUILA_DATA
class PACKER_TACQUILA_DATA
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 tac[30][17] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12,DATA12,17> tac[30];
  // MEMBER(DATA12 adc[30][17] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12,DATA12,17> adc[30];
  // MEMBER(DATA12 clk[30][17] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12,DATA12,17> clk[30];
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
  } header;
  // list(0<=index<header.count)

    // if(( ! (index & 1)))

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

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sam,uint32 gtb);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sam,uint32 gtb);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sam,uint32 gtb);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TACQUILA_DATA);
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
 * Event unpacker associated structures for VME_VUPROM_V35.
 *
 * Do not edit - automatically generated.
 */

// VME_VUPROM_V35()
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_VUPROM_V35
class VME_VUPROM_V35
#else//PACKER_CODE
# define DECLARED_PACKER_VME_VUPROM_V35
class PACKER_VME_VUPROM_V35
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 data[192] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12,DATA12,192> data;
  // UINT32 header NOENCODE
  // {
    //  0_08: word_number;
    //     9: raw_marker;
    // 10_15: 0;
    // 16_23: geom;
    // 24_31: 254;
  // }
  // list(0<=index<header.word_number)

    // UINT32 ch_data NOENCODE
    // {
      //  0_09: value;
      // 10_15: 0;
      // 16_23: channel;
      // 24_31: geom;
      // ENCODE(data[channel],(value=value));
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

  STRUCT_FCNS_DECL(VME_VUPROM_V35);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for CB_VME_LEFT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CB_VME_LEFT)
#if !PACKER_CODE
# define DECLARED_UNPACK_CB_VME_LEFT
class CB_VME_LEFT
#else//PACKER_CODE
# define DECLARED_PACKER_CB_VME_LEFT
class PACKER_CB_VME_LEFT
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // vme = LAND_STD_VME();
  // select several

    // adc[0] = VME_MESYTEC_MADC32(geom=0);
    // adc[1] = VME_MESYTEC_MADC32(geom=1);
    // adc[2] = VME_MESYTEC_MADC32(geom=2);
    // adc[3] = VME_MESYTEC_MADC32(geom=3);
    // madc0_psp = VME_MESYTEC_MADC32(geom=4);
    // tdc = VME_VUPROM_V35();
  SINGLE(VME_VUPROM_V35,tdc);
  SINGLE(VME_MESYTEC_MADC32,adc[4]);
  SINGLE(VME_MESYTEC_MADC32,madc0_psp);
  SINGLE(LAND_STD_VME,vme);

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

  STRUCT_FCNS_DECL(CB_VME_LEFT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for CB_VME_RIGHT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CB_VME_RIGHT)
#if !PACKER_CODE
# define DECLARED_UNPACK_CB_VME_RIGHT
class CB_VME_RIGHT
#else//PACKER_CODE
# define DECLARED_PACKER_CB_VME_RIGHT
class PACKER_CB_VME_RIGHT
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // vme = LAND_STD_VME();
  // select several

    // adc[0] = VME_MESYTEC_MADC32(geom=0);
    // adc[1] = VME_MESYTEC_MADC32(geom=1);
    // adc[2] = VME_MESYTEC_MADC32(geom=2);
    // adc[3] = VME_MESYTEC_MADC32(geom=3);
    // tdc = VME_VUPROM_V35();
  SINGLE(VME_VUPROM_V35,tdc);
  SINGLE(VME_MESYTEC_MADC32,adc[4]);
  SINGLE(LAND_STD_VME,vme);

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

  STRUCT_FCNS_DECL(CB_VME_RIGHT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for CROS3_REWRITE_SUBEVENT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CROS3_REWRITE_SUBEVENT)
#if !PACKER_CODE
# define DECLARED_UNPACK_CROS3_REWRITE_SUBEVENT
class CROS3_REWRITE_SUBEVENT
#else//PACKER_CODE
# define DECLARED_PACKER_CROS3_REWRITE_SUBEVENT
class PACKER_CROS3_REWRITE_SUBEVENT
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // norevisit ccb[0] = CROS3_REWRITE(ccb_id=1);
    // norevisit ccb[1] = CROS3_REWRITE(ccb_id=2);
  SINGLE(CROS3_REWRITE,ccb[2]);

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

  STRUCT_FCNS_DECL(CROS3_REWRITE_SUBEVENT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for CROS3_SUBEVENT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CROS3_SUBEVENT)
#if !PACKER_CODE
# define DECLARED_UNPACK_CROS3_SUBEVENT
class CROS3_SUBEVENT
#else//PACKER_CODE
# define DECLARED_PACKER_CROS3_SUBEVENT
class PACKER_CROS3_SUBEVENT
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // external norevisit ccb[0] = EXT_CROS3(ccb_id=1);
    // external norevisit ccb[1] = EXT_CROS3(ccb_id=2);
  SINGLE(EXT_CROS3,ccb[2]);

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

  STRUCT_FCNS_DECL(CROS3_SUBEVENT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for DUMMY.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(DUMMY)
#if !PACKER_CODE
# define DECLARED_UNPACK_DUMMY
class DUMMY
#else//PACKER_CODE
# define DECLARED_PACKER_DUMMY
class PACKER_DUMMY
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // d = DUMMY_WORD();
  SINGLE(DUMMY_WORD,d);

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

  STRUCT_FCNS_DECL(DUMMY);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for LAND_CAMAC_CONVERTER.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_CONVERTER)
#if !PACKER_CODE
# define DECLARED_UNPACK_LAND_CAMAC_CONVERTER
class LAND_CAMAC_CONVERTER
#else//PACKER_CODE
# define DECLARED_PACKER_LAND_CAMAC_CONVERTER
class PACKER_LAND_CAMAC_CONVERTER
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // UINT16 tpat;
  uint16  tpat;
  // UINT16 tprev;
  uint16  tprev;
  // UINT16 tnext;
  uint16  tnext;
  // UINT16 tprev2;
  uint16  tprev2;
  // if(EXTERNAL has_data)

#ifndef __PSDC__
  uint32 has_data() const;
#endif//!__PSDC__

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

  STRUCT_FCNS_DECL(LAND_CAMAC_CONVERTER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for LAND_CAMAC_PILEUP.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_PILEUP)
#if !PACKER_CODE
# define DECLARED_UNPACK_LAND_CAMAC_PILEUP
class LAND_CAMAC_PILEUP
#else//PACKER_CODE
# define DECLARED_PACKER_LAND_CAMAC_PILEUP
class PACKER_LAND_CAMAC_PILEUP
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // tdc = CAMAC_LECROY_2277_1CH_HACK(channel=0,edge=1,high_byte=0);
    // tcal = CAMAC_LECROY_2277_1CH_HACK(channel=1,edge=1,high_byte=0);
  SINGLE(CAMAC_LECROY_2277_1CH_HACK,tdc);
  SINGLE(CAMAC_LECROY_2277_1CH_HACK,tcal);

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

  STRUCT_FCNS_DECL(LAND_CAMAC_PILEUP);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for LAND_CAMAC_SCALER.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_SCALER)
#if !PACKER_CODE
# define DECLARED_UNPACK_LAND_CAMAC_SCALER
class LAND_CAMAC_SCALER
#else//PACKER_CODE
# define DECLARED_PACKER_LAND_CAMAC_SCALER
class PACKER_LAND_CAMAC_SCALER
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // scaler0 = CAMAC_LECROY_4434(channels=32);
  // scaler1 = CAMAC_LECROY_4434(channels=32);
  // scaler2 = CAMAC_LECROY_4434(channels=32);
  // scaler3 = SOFT_SCALER32(channels=16);
  // if(EXTERNAL has_timestamp)

#ifndef __PSDC__
  uint32 has_timestamp() const;
#endif//!__PSDC__
    // UINT32 timestamp;
    uint32  timestamp;
    // UINT32 endianess
    // {
      //  0_31: 0x87654321;
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
    } endianess;
  SINGLE(CAMAC_LECROY_4434,scaler0);
  SINGLE(CAMAC_LECROY_4434,scaler2);
  SINGLE(CAMAC_LECROY_4434,scaler1);
  SINGLE(SOFT_SCALER32,scaler3);

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

  STRUCT_FCNS_DECL(LAND_CAMAC_SCALER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for LAND_CAMAC_START_STOP_STAMP.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_START_STOP_STAMP)
#if !PACKER_CODE
# define DECLARED_UNPACK_LAND_CAMAC_START_STOP_STAMP
class LAND_CAMAC_START_STOP_STAMP
#else//PACKER_CODE
# define DECLARED_PACKER_LAND_CAMAC_START_STOP_STAMP
class PACKER_LAND_CAMAC_START_STOP_STAMP
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // UINT32 timestamp;
  uint32  timestamp;
  // UINT32 endianess
  // {
    //  0_31: 0x87654321;
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
  } endianess;

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

  STRUCT_FCNS_DECL(LAND_CAMAC_START_STOP_STAMP);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for LAND_CAMAC_TCAL_INFO.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_TCAL_INFO)
#if !PACKER_CODE
# define DECLARED_UNPACK_LAND_CAMAC_TCAL_INFO
class LAND_CAMAC_TCAL_INFO
#else//PACKER_CODE
# define DECLARED_PACKER_LAND_CAMAC_TCAL_INFO
class PACKER_LAND_CAMAC_TCAL_INFO
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // UINT32 info;
  uint32  info;
  // select several

    // rtcal = RANDOM_TCAL(id=231);
    // ntp = NTP_MESSAGE(id=239);
  SINGLE(RANDOM_TCAL,rtcal);
  SINGLE(NTP_MESSAGE,ntp);

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

  STRUCT_FCNS_DECL(LAND_CAMAC_TCAL_INFO);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for MASTER_VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(MASTER_VME)
#if !PACKER_CODE
# define DECLARED_UNPACK_MASTER_VME
class MASTER_VME
#else//PACKER_CODE
# define DECLARED_PACKER_MASTER_VME
class PACKER_MASTER_VME
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // vme = LAND_STD_VME();
  // select several

    // sampler_pos = TRLO_SAMPLER(id=223);
    // sampler_cb_sum = TRLO_SAMPLER(id=215);
  SINGLE(TRLO_SAMPLER,sampler_pos);
  SINGLE(TRLO_SAMPLER,sampler_cb_sum);
  SINGLE(LAND_STD_VME,vme);

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

  STRUCT_FCNS_DECL(MASTER_VME);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for SIDEREM01_VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(SIDEREM01_VME)
#if !PACKER_CODE
# define DECLARED_UNPACK_SIDEREM01_VME
class SIDEREM01_VME
#else//PACKER_CODE
# define DECLARED_PACKER_SIDEREM01_VME
class PACKER_SIDEREM01_VME
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // external sst[0] = EXT_SST(siderem=1,gtb=0,sam=5,branch=1);
    // external sst[1] = EXT_SST(siderem=2,gtb=0,sam=5,branch=1);
    // external sst[2] = EXT_SST(siderem=1,gtb=1,sam=5,branch=1);
    // external sst[3] = EXT_SST(siderem=2,gtb=1,sam=5,branch=1);
    // external sst[4] = EXT_SST(siderem=1,gtb=0,sam=6,branch=1);
    // external sst[5] = EXT_SST(siderem=2,gtb=0,sam=6,branch=1);
    // external sst[6] = EXT_SST(siderem=1,gtb=1,sam=6,branch=1);
    // external sst[7] = EXT_SST(siderem=2,gtb=1,sam=6,branch=1);
  SINGLE(EXT_SST,sst[8]);
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
  } error_marker;
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
  } error_marker2;

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

  STRUCT_FCNS_DECL(SIDEREM01_VME);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TACQUILA_LAND_SUBEVENT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TACQUILA_LAND_SUBEVENT)
#if !PACKER_CODE
# define DECLARED_UNPACK_TACQUILA_LAND_SUBEVENT
class TACQUILA_LAND_SUBEVENT
#else//PACKER_CODE
# define DECLARED_PACKER_TACQUILA_LAND_SUBEVENT
class PACKER_TACQUILA_LAND_SUBEVENT
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // data_sam5_gtb0 = TACQUILA_DATA(sam=5,gtb=0);
    // data_sam6_gtb0 = TACQUILA_DATA(sam=6,gtb=0);
    // data_sam6_gtb1 = TACQUILA_DATA(sam=6,gtb=1);
  SINGLE(TACQUILA_DATA,data_sam5_gtb0);
  SINGLE(TACQUILA_DATA,data_sam6_gtb1);
  SINGLE(TACQUILA_DATA,data_sam6_gtb0);

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

  STRUCT_FCNS_DECL(TACQUILA_LAND_SUBEVENT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TACQUILA_NEULAND_SUBEVENT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TACQUILA_NEULAND_SUBEVENT)
#if !PACKER_CODE
# define DECLARED_UNPACK_TACQUILA_NEULAND_SUBEVENT
class TACQUILA_NEULAND_SUBEVENT
#else//PACKER_CODE
# define DECLARED_PACKER_TACQUILA_NEULAND_SUBEVENT
class PACKER_TACQUILA_NEULAND_SUBEVENT
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // data_sam7_gtb0 = TACQUILA_DATA(sam=7,gtb=0);
    // data_sam7_gtb1 = TACQUILA_DATA(sam=7,gtb=1);
  SINGLE(TACQUILA_DATA,data_sam7_gtb0);
  SINGLE(TACQUILA_DATA,data_sam7_gtb1);

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

  STRUCT_FCNS_DECL(TACQUILA_NEULAND_SUBEVENT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CRATE1.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(VME_CRATE1)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CRATE1
class VME_CRATE1
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CRATE1
class PACKER_VME_CRATE1
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // vme = LAND_STD_VME();
  // select several

    // qdc792POS_ROLU = VME_CAEN_V775(geom=31,crate=1);
    // tdc775POS_ROLU = VME_CAEN_V775(geom=31,crate=130);
    // qdc792PIXEL = VME_CAEN_V775(geom=31,crate=3);
    // scaler = VME_CAEN_V830(geom=0);
  SINGLE(VME_CAEN_V775,qdc792POS_ROLU);
  SINGLE(VME_CAEN_V775,qdc792PIXEL);
  SINGLE(VME_CAEN_V775,tdc775POS_ROLU);
  SINGLE(VME_CAEN_V830,scaler);
  SINGLE(LAND_STD_VME,vme);

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

  STRUCT_FCNS_DECL(VME_CRATE1);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CRATE2.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(VME_CRATE2)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CRATE2
class VME_CRATE2
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CRATE2
class PACKER_VME_CRATE2
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // vme = LAND_STD_VME();
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
  SINGLE(VME_CAEN_V830,scaler);
  SINGLE(VME_CAEN_V775,qdc792TFW1);
  SINGLE(VME_CAEN_V775,tdc775TFW1);
  SINGLE(VME_CAEN_V775,qdc792TFW2);
  SINGLE(VME_CAEN_V775,tdc775TFW2);
  SINGLE(VME_CAEN_V775,tdc775NTF);
  SINGLE(VME_CAEN_V775,qdc792NTF);
  SINGLE(VME_CAEN_V775,qdc792GFI1);
  SINGLE(VME_CAEN_V775,qdc792GFI2);
  SINGLE(VME_CAEN_V775,qdc792GFI3);
  SINGLE(VME_CAEN_V775,qdc792MFITEST);
  SINGLE(LAND_STD_VME,vme);

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

  STRUCT_FCNS_DECL(VME_CRATE2);
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
SINGLE(LAND_CAMAC_PILEUP,pileup);
SINGLE(SIDEREM01_VME,sst);
SINGLE(CROS3_SUBEVENT,cros3);
SINGLE(CROS3_REWRITE_SUBEVENT,cros3_rewrite);
SINGLE(LAND_CAMAC_CONVERTER,camac);
SINGLE(DUMMY,acq);
SINGLE(VME_CRATE1,vme1);
SINGLE(VME_CRATE2,vme2);
SINGLE(CB_VME_RIGHT,vme_cbr);
SINGLE(CB_VME_LEFT,vme_cbl);
SINGLE(MASTER_VME,vme_master);
SINGLE(LAND_CAMAC_TCAL_INFO,camac_tcal_info);
SINGLE(LAND_CAMAC_SCALER,camac_scalers);
SINGLE(TACQUILA_LAND_SUBEVENT,tacquila);
SINGLE(TACQUILA_NEULAND_SUBEVENT,neuland);
public:
#ifndef __PSDC__
  bitsone<16> __visited;
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
