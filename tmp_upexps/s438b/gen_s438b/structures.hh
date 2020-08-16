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
 * Event unpacker associated structures for DAQ_STATUS.
 *
 * Do not edit - automatically generated.
 */

// DAQ_STATUS()
#if !PACKER_CODE
# define DECLARED_UNPACK_DAQ_STATUS
class DAQ_STATUS
#else//PACKER_CODE
# define DECLARED_PACKER_DAQ_STATUS
class PACKER_DAQ_STATUS
#endif//PACKER_CODE

{
public:
  // UINT32 spill_nr;
  uint32  spill_nr;
  // UINT32 trigger;
  uint32  trigger;
  // UINT32 time;
  uint32  time;
  // MEMBER(DATA32 scaler[48] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,48> scaler;
  // list(0<=i<48)

    // UINT32 count NOENCODE
    // {
      //  0_31: value;
      // ENCODE(scaler[i],(value=value));
    // }
  // MEMBER(DATA32 trig_count[16] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,16> trig_count;
  // list(0<=i<16)

    // UINT32 count NOENCODE
    // {
      //  0_31: value;
      // ENCODE(trig_count[i],(value=value));
    // }
  // UINT32 events;
  uint32  events;
  // UINT32 errors;
  uint32  errors;
  // UINT32 errors_data_corrupt;
  uint32  errors_data_corrupt;
  // UINT32 errors_data_missing;
  uint32  errors_data_missing;
  // UINT32 errors_data_too_much;
  uint32  errors_data_too_much;
  // UINT32 errors_event_counter_mismatch;
  uint32  errors_event_counter_mismatch;
  // UINT32 errors_event_counter_incr_mismatch;
  uint32  errors_event_counter_incr_mismatch;
  // UINT32 errors_trigger_mismatch;
  uint32  errors_trigger_mismatch;
  // UINT32 ticks_count;
  uint32  ticks_count;
  // UINT32 ticks_deadtime;
  uint32  ticks_deadtime;
  // MEMBER(DATA32 ticks_dt_trig[16] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,16> ticks_dt_trig;
  // list(0<=i<16)

    // UINT32 count NOENCODE
    // {
      //  0_31: value;
      // ENCODE(ticks_dt_trig[i],(value=value));
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

  STRUCT_FCNS_DECL(DAQ_STATUS);
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
  // UINT32 Identifier NOENCODE
  // {
    //  0_31: 0xfebe0000;
  // }
  // UINT32 febexcards
  // {
    //  0_07: N_febex1;
    //  8_15: N_febex2;
    // 16_23: N_febex3;
    // 24_31: N_febex4;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 N_febex1 : 8; // 0..7
      uint32 N_febex2 : 8; // 8..15
      uint32 N_febex3 : 8; // 16..23
      uint32 N_febex4 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 N_febex4 : 8; // 24..31
      uint32 N_febex3 : 8; // 16..23
      uint32 N_febex2 : 8; // 8..15
      uint32 N_febex1 : 8; // 0..7
#endif
    };
    uint32  u32;
  } febexcards;

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
  // MEMBER(DATA8 Nhit[16]);
  raw_array<DATA8,DATA8,16> Nhit;
  // MEMBER(DATA12 t[16] ZERO_SUPPRESS_MULTI(10));
  raw_array_multi_zero_suppress<DATA12,DATA12,16,10> t;
  // MEMBER(DATA32 E[16] ZERO_SUPPRESS_MULTI(10));
  raw_array_multi_zero_suppress<DATA32,DATA32,16,10> E;
  // UINT32 indicator NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: 255;
  // }
  // UINT32 ETsize NOENCODE
  // {
    //  0_31: channelsize;
  // }
  // UINT32 head NOENCODE
  // {
    //  0_23: notused;
    // 24_31: 175;
  // }
  // UINT32 triggertime NOENCODE
  // {
    //  0_31: triggertime;
  // }
  // UINT32 time NOENCODE
  // {
    //  0_31: time;
  // }
  // list(0<=i<((ETsize.channelsize - 16) >> 3))

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
    // UINT32 energy NOENCODE
    // {
      //  0_21: data;
      //    22: notused1;
      //    23: sign;
      // 24_27: notused2;
      // 28_31: channel_id;
      // ENCODE(E[channel_id],(value=(data | (sign << 23))));
    // }
  // UINT32 trail NOENCODE
  // {
    //  0_23: notused;
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
 * Event unpacker associated structures for NXYTER.
 *
 * Do not edit - automatically generated.
 */

// NXYTER(gem,nxy)
#if !PACKER_CODE
# define DECLARED_UNPACK_NXYTER
class NXYTER
#else//PACKER_CODE
# define DECLARED_PACKER_NXYTER
class PACKER_NXYTER
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA8 gemex);
  DATA8 gemex;
  // MEMBER(DATA8 nxyter);
  DATA8 nxyter;
  // MEMBER(DATA8 err);
  DATA8 err;
  // MEMBER(DATA16 trigger_counter_head);
  DATA16 trigger_counter_head;
  // MEMBER(DATA16 trigger_counter_foot);
  DATA16 trigger_counter_foot;
  // MEMBER(DATA16 ts_epoch_trigger);
  DATA16 ts_epoch_trigger;
  // MEMBER(DATA12 channel[10000] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA12,DATA12,10000> channel;
  // MEMBER(DATA12 adc[10000] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA12,DATA12,10000> adc;
  // MEMBER(DATA16 ts_epoch_hit[10000] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA16,DATA16,10000> ts_epoch_hit;
  // MEMBER(DATA16 ts_nxy[10000] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA16,DATA16,10000> ts_nxy;
  // UINT32 header1 NOENCODE
  // {
    //  0_07: 52;
    //  8_15: trigger_tp;
    // 16_23: id_gemex = MATCH(gem);
    // 24_31: id_nxyter = MATCH(nxy);
    // ENCODE(gemex,(value=id_gemex));
    // ENCODE(nxyter,(value=id_nxyter));
  // }
  // UINT32 header2 NOENCODE
  // {
    //  0_31: packet_data_size;
  // }
  // UINT32 header_data NOENCODE
  // {
    //  0_15: trigger_counter1;
    // 16_19: rob;
    // 20_23: empty_trt1;
    // 24_31: 170;
    // ENCODE(trigger_counter_head,(value=trigger_counter1));
  // }
  // UINT32 local_epoche_ts1 NOENCODE
  // {
    //  0_15: epoche_time_stamp_a;
    // 16_23: 0;
    // 24_31: 0;
  // }
  // UINT32 local_epoche_ts2 NOENCODE
  // {
    //  0_10: epoche_time_stamp_b;
    // 11_31: epoche_time_stamp_ab;
    // ENCODE(ts_epoch_trigger,(value=epoche_time_stamp_b));
  // }
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
  // UINT32 errors NOENCODE
  // {
    //  0_15: trigger_counter_not_processed;
    // 16_23: error_flags;
    // 24_31: 238;
    // ENCODE(err,(value=error_flags));
  // }
  // UINT32 data_folder NOENCODE
  // {
    //  0_15: trigger_counter2;
    // 16_19: rob;
    // 20_23: empty_trt2;
    // 24_31: 187;
    // ENCODE(trigger_counter_foot,(value=trigger_counter2));
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 gem,uint32 nxy);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 gem,uint32 nxy);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 gem,uint32 nxy);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(NXYTER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for NXYTER_PADDING.
 *
 * Do not edit - automatically generated.
 */

// NXYTER_PADDING()
#if !PACKER_CODE
# define DECLARED_UNPACK_NXYTER_PADDING
class NXYTER_PADDING
#else//PACKER_CODE
# define DECLARED_PACKER_NXYTER_PADDING
class PACKER_NXYTER_PADDING
#endif//PACKER_CODE

{
public:
  // UINT32 pads_data NOENCODE
  // {
    //  0_11: counter;
    // 12_19: 1;
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

  STRUCT_FCNS_DECL(NXYTER_PADDING);
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
 * Event unpacker associated structures for SIS3316_ACTAR_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_ACTAR_S438(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_SIS3316_ACTAR_S438
class SIS3316_ACTAR_S438
#else//PACKER_CODE
# define DECLARED_PACKER_SIS3316_ACTAR_S438
class PACKER_SIS3316_ACTAR_S438
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 channel_header[128]);
  raw_array<DATA32,DATA32,128> channel_header;
  // MEMBER(DATA16 trace[40000] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA16,DATA16,40000> trace;
  // UINT32 custom_header
  // {
    //  0_07: id = MATCH(id);
    //  8_15: channel_num;
    // 16_31: 0x3316;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 8; // 0..7
      uint32 channel_num : 8; // 8..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 channel_num : 8; // 8..15
      uint32 id : 8; // 0..7
#endif
    };
    uint32  u32;
  } custom_header;
  // list(0<=channel_index<custom_header.channel_num)

    // optional UINT32 padding0 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // optional UINT32 padding1 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // optional UINT32 padding2 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // list(0<=header_index<7)

      // UINT32 header_data NOENCODE
      // {
        //  0_31: data;
        // ENCODE(channel_header[((channel_index * 8) + header_index)],(value=data));
      // }
    // UINT32 header3
    // {
      //  0_25: sampleLength;
      //    26: 0;
      //    27: mawFlag;
      // 28_31: 14;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 sampleLength : 26; // 0..25
        uint32 unnamed_26_26 : 1; // 26
        uint32 mawFlag : 1; // 27
        uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_28_31 : 4; // 28..31
        uint32 mawFlag : 1; // 27
        uint32 unnamed_26_26 : 1; // 26
        uint32 sampleLength : 26; // 0..25
#endif
      };
      uint32  u32;
    } header3;
    // list(0<=sample_index<(header3.sampleLength * 2))

      // UINT16 sample NOENCODE
      // {
        //  0_15: data;
        // ENCODE(trace[((channel_index * header3.sampleLength) + sample_index)],(value=data));
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

  STRUCT_FCNS_DECL(SIS3316_ACTAR_S438);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for SIS3316_PSP_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_PSP_S438(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_SIS3316_PSP_S438
class SIS3316_PSP_S438
#else//PACKER_CODE
# define DECLARED_PACKER_SIS3316_PSP_S438
class PACKER_SIS3316_PSP_S438
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 channel_header[128]);
  raw_array<DATA32,DATA32,128> channel_header;
  // MEMBER(DATA16 trace[16000] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA16,DATA16,16000> trace;
  // UINT32 custom_header
  // {
    //  0_07: id = MATCH(id);
    //  8_15: channel_num;
    // 16_31: 0x3316;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 8; // 0..7
      uint32 channel_num : 8; // 8..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 channel_num : 8; // 8..15
      uint32 id : 8; // 0..7
#endif
    };
    uint32  u32;
  } custom_header;
  // list(0<=channel_index<custom_header.channel_num)

    // optional UINT32 padding0 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // optional UINT32 padding1 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // optional UINT32 padding2 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // list(0<=header_index<7)

      // UINT32 header_data NOENCODE
      // {
        //  0_31: data;
        // ENCODE(channel_header[((channel_index * 8) + header_index)],(value=data));
      // }
    // UINT32 header3
    // {
      //  0_25: sampleLength;
      //    26: 0;
      //    27: mawFlag;
      // 28_31: 14;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 sampleLength : 26; // 0..25
        uint32 unnamed_26_26 : 1; // 26
        uint32 mawFlag : 1; // 27
        uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_28_31 : 4; // 28..31
        uint32 mawFlag : 1; // 27
        uint32 unnamed_26_26 : 1; // 26
        uint32 sampleLength : 26; // 0..25
#endif
      };
      uint32  u32;
    } header3;
    // list(0<=sample_index<(header3.sampleLength * 2))

      // UINT16 sample NOENCODE
      // {
        //  0_15: data;
        // ENCODE(trace[((channel_index * header3.sampleLength) + sample_index)],(value=data));
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

  STRUCT_FCNS_DECL(SIS3316_PSP_S438);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for SIS3316_S2_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_S2_S438(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_SIS3316_S2_S438
class SIS3316_S2_S438
#else//PACKER_CODE
# define DECLARED_PACKER_SIS3316_S2_S438
class PACKER_SIS3316_S2_S438
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 channel_header[128]);
  raw_array<DATA32,DATA32,128> channel_header;
  // MEMBER(DATA16 trace[800] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA16,DATA16,800> trace;
  // UINT32 custom_header
  // {
    //  0_07: id = MATCH(id);
    //  8_15: channel_num;
    // 16_31: 0x3316;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 8; // 0..7
      uint32 channel_num : 8; // 8..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 channel_num : 8; // 8..15
      uint32 id : 8; // 0..7
#endif
    };
    uint32  u32;
  } custom_header;
  // list(0<=channel_index<custom_header.channel_num)

    // optional UINT32 padding0 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // optional UINT32 padding1 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // optional UINT32 padding2 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // list(0<=header_index<7)

      // UINT32 header_data NOENCODE
      // {
        //  0_31: data;
        // ENCODE(channel_header[((channel_index * 8) + header_index)],(value=data));
      // }
    // UINT32 header3
    // {
      //  0_25: sampleLength;
      //    26: 0;
      //    27: mawFlag;
      // 28_31: 14;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 sampleLength : 26; // 0..25
        uint32 unnamed_26_26 : 1; // 26
        uint32 mawFlag : 1; // 27
        uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_28_31 : 4; // 28..31
        uint32 mawFlag : 1; // 27
        uint32 unnamed_26_26 : 1; // 26
        uint32 sampleLength : 26; // 0..25
#endif
      };
      uint32  u32;
    } header3;
    // list(0<=sample_index<(header3.sampleLength * 2))

      // UINT16 sample NOENCODE
      // {
        //  0_15: data;
        // ENCODE(trace[((channel_index * header3.sampleLength) + sample_index)],(value=data));
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

  STRUCT_FCNS_DECL(SIS3316_S2_S438);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for SIS3316_S2_SCALERS_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_S2_SCALERS_S438()
#if !PACKER_CODE
# define DECLARED_UNPACK_SIS3316_S2_SCALERS_S438
class SIS3316_S2_SCALERS_S438
#else//PACKER_CODE
# define DECLARED_PACKER_SIS3316_S2_SCALERS_S438
class PACKER_SIS3316_S2_SCALERS_S438
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 scalers[192]);
  raw_array<DATA32,DATA32,192> scalers;
  // UINT32 custom_header
  // {
    //  0_31: 0x33161234;
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
  } custom_header;
  // list(0<=index<(((2 * 4) * 4) * 6))

    // UINT32 scaler NOENCODE
    // {
      //  0_31: data;
      // ENCODE(scalers[index],(value=data));
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

  STRUCT_FCNS_DECL(SIS3316_S2_SCALERS_S438);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for SIS3316_SCALERS_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_SCALERS_S438()
#if !PACKER_CODE
# define DECLARED_UNPACK_SIS3316_SCALERS_S438
class SIS3316_SCALERS_S438
#else//PACKER_CODE
# define DECLARED_PACKER_SIS3316_SCALERS_S438
class PACKER_SIS3316_SCALERS_S438
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 scalers[480]);
  raw_array<DATA32,DATA32,480> scalers;
  // UINT32 custom_header
  // {
    //  0_31: 0x33161234;
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
  } custom_header;
  // list(0<=index<(((5 * 4) * 4) * 6))

    // UINT32 scaler NOENCODE
    // {
      //  0_31: data;
      // ENCODE(scalers[index],(value=data));
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

  STRUCT_FCNS_DECL(SIS3316_SCALERS_S438);
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
 * Event unpacker associated structures for TACQUILA_DATA_S438B.
 *
 * Do not edit - automatically generated.
 */

// TACQUILA_DATA_S438B(sam,gtb)
#if !PACKER_CODE
# define DECLARED_UNPACK_TACQUILA_DATA_S438B
class TACQUILA_DATA_S438B
#else//PACKER_CODE
# define DECLARED_PACKER_TACQUILA_DATA_S438B
class PACKER_TACQUILA_DATA_S438B
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 tac[30][32] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12,DATA12,32> tac[30];
  // MEMBER(DATA12 adc[30][17] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12,DATA12,17> adc[30];
  // MEMBER(DATA12 clk[30][17] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12,DATA12,17> clk[30];
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
      // if((ch_data.channel == 16))

        // list(17<=chan<32)

          // ENCODE(tac[(ch_data.module - 1)][chan],(value=ch_data.tac_value));


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

  STRUCT_FCNS_DECL(TACQUILA_DATA_S438B);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX_CHANNEL.
 *
 * Do not edit - automatically generated.
 */

// TAMEX_CHANNEL(sfp,card)
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX_CHANNEL
class TAMEX_CHANNEL
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX_CHANNEL
class PACKER_TAMEX_CHANNEL
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 type[128] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,128> type;
  // MEMBER(DATA32 tdc[128] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,128> tdc;
  // UINT32 header
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp_index = MATCH(sfp);
    // 16_23: card_index = MATCH(card);
    // 24_31: channel_index = CHECK(0);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_7 : 8; // 0..7
      uint32 trigger_type : 4; // 8..11
      uint32 sfp_index : 4; // 12..15
      uint32 card_index : 8; // 16..23
      uint32 channel_index : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 channel_index : 8; // 24..31
      uint32 card_index : 8; // 16..23
      uint32 sfp_index : 4; // 12..15
      uint32 trigger_type : 4; // 8..11
      uint32 unnamed_0_7 : 8; // 0..7
#endif
    };
    uint32  u32;
  } header;
  // UINT32 data_size;
  uint32  data_size;
  // UINT32 tdc_header
  // {
    //  0_23: yanana_phone;
    // 24_31: 170;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 yanana_phone : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 yanana_phone : 24; // 0..23
#endif
    };
    uint32  u32;
  } tdc_header;
  // list(0<=index<((data_size / 4) - 2))

    // UINT32 tdc_data NOENCODE
    // {
      //  0_21: value;
      // 22_28: channel_i;
      // 29_31: type;
      // ENCODE(type[channel_i],(value=type));
      // ENCODE(tdc[channel_i],(value=value));
    // }
  // UINT32 tdc_trailer
  // {
    //  0_23: wanana_phone;
    // 24_31: 187;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 wanana_phone : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 wanana_phone : 24; // 0..23
#endif
    };
    uint32  u32;
  } tdc_trailer;

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

  STRUCT_FCNS_DECL(TAMEX_CHANNEL);
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
 * Event unpacker associated structures for TRIDI.
 *
 * Do not edit - automatically generated.
 */

// TRIDI()
#if !PACKER_CODE
# define DECLARED_UNPACK_TRIDI
class TRIDI
#else//PACKER_CODE
# define DECLARED_PACKER_TRIDI
class PACKER_TRIDI
#endif//PACKER_CODE

{
public:
  // UINT32 header
  // {
    //  0_15: tpat;
    // 16_31: 0x3d00;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 tpat : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 tpat : 16; // 0..15
#endif
    };
    uint32  u32;
  } header;
  // UINT32 ts_msb;
  uint32  ts_msb;
  // UINT32 ts_lsb;
  uint32  ts_lsb;

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

  STRUCT_FCNS_DECL(TRIDI);
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
 * Event unpacker associated structures for TRLO_SCALER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_SCALER(crate_id)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLO_SCALER
class TRLO_SCALER
#else//PACKER_CODE
# define DECLARED_PACKER_TRLO_SCALER
class PACKER_TRLO_SCALER
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 stamps[16] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA32,DATA32,16> stamps;
  // UINT32 header
  // {
    //  0_07: crate_id = MATCH(crate_id);
    //  8_31: 0x00721009;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 crate_id : 8; // 0..7
      uint32 unnamed_8_31 : 24; // 8..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_8_31 : 24; // 8..31
      uint32 crate_id : 8; // 0..7
#endif
    };
    uint32  u32;
  } header;
  // list(0<=index<16)

    // UINT32 data NOENCODE
    // {
      //  0_31: value;
      // ENCODE(stamps APPEND_LIST,(value=value));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 crate_id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 crate_id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 crate_id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TRLO_SCALER);
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
 * Event unpacker associated structures for VME_CAEN_V1190_S438_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SUBTDC(tdc,event_id,data)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1190_S438_SUBTDC
class VME_CAEN_V1190_S438_SUBTDC
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1190_S438_SUBTDC
class PACKER_VME_CAEN_V1190_S438_SUBTDC
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

  STRUCT_FCNS_DECL(VME_CAEN_V1190_S438_SUBTDC);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1190_S438.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1190_S438
class VME_CAEN_V1190_S438
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1190_S438
class PACKER_VME_CAEN_V1190_S438
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
  // UINT32 ucesb_separator
  // {
    //  0_04: geom = MATCH(geom);
    // 24_31: 76;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geom : 5; // 0..4
      uint32 dummy_5_23 : 19;
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 dummy_5_23 : 19;
      uint32 geom : 5; // 0..4
#endif
    };
    uint32  u32;
  } ucesb_separator;
  // MARK_COUNT(v1190_start);
  // UINT32 header
  // {
    //  5_26: event_number;
    // 27_31: 8;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 dummy_0_4 : 5;
      uint32 event_number : 22; // 5..26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 event_number : 22; // 5..26
      uint32 dummy_0_4 : 5;
#endif
    };
    uint32  u32;
  } header;
  // select several

    // tdc[0] = VME_CAEN_V1190_S438_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[1] = VME_CAEN_V1190_S438_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[2] = VME_CAEN_V1190_S438_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[3] = VME_CAEN_V1190_S438_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                        // data=data);
  SINGLE(VME_CAEN_V1190_S438_SUBTDC,tdc[4]);
  // MARK_COUNT(v1190_end);
  // UINT32 trailer
  // {
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
      uint32 dummy_0_4 : 5;
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
      uint32 dummy_0_4 : 5;
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

  STRUCT_FCNS_DECL(VME_CAEN_V1190_S438);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1190_S438_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SHORT_SUBTDC(tdc,event_id,data)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1190_S438_SHORT_SUBTDC
class VME_CAEN_V1190_S438_SHORT_SUBTDC
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1190_S438_SHORT_SUBTDC
class PACKER_VME_CAEN_V1190_S438_SHORT_SUBTDC
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

  STRUCT_FCNS_DECL(VME_CAEN_V1190_S438_SHORT_SUBTDC);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR(tdc)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR
class VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR
class PACKER_VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR
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

  STRUCT_FCNS_DECL(VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1190_S438_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SHORT(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1190_S438_SHORT
class VME_CAEN_V1190_S438_SHORT
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1190_S438_SHORT
class PACKER_VME_CAEN_V1190_S438_SHORT
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
  SINGLE(VME_CAEN_V1190_S438_SHORT_SUBTDC,tdc[4]);
  SINGLE(VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[4]);
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

  STRUCT_FCNS_DECL(VME_CAEN_V1190_S438_SHORT);
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
 * Event unpacker associated structures for VME_CAEN_V1290_S438_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SUBTDC(tdc,event_id,data)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1290_S438_SUBTDC
class VME_CAEN_V1290_S438_SUBTDC
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1290_S438_SUBTDC
class PACKER_VME_CAEN_V1290_S438_SUBTDC
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

  STRUCT_FCNS_DECL(VME_CAEN_V1290_S438_SUBTDC);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1290_S438.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1290_S438
class VME_CAEN_V1290_S438
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1290_S438
class PACKER_VME_CAEN_V1290_S438
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
  // UINT32 ucesb_separator
  // {
    //  0_04: geom = MATCH(geom);
    // 24_31: 76;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geom : 5; // 0..4
      uint32 dummy_5_23 : 19;
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 dummy_5_23 : 19;
      uint32 geom : 5; // 0..4
#endif
    };
    uint32  u32;
  } ucesb_separator;
  // MARK_COUNT(v1190_start);
  // UINT32 header
  // {
    //  5_26: event_number;
    // 27_31: 8;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 dummy_0_4 : 5;
      uint32 event_number : 22; // 5..26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 event_number : 22; // 5..26
      uint32 dummy_0_4 : 5;
#endif
    };
    uint32  u32;
  } header;
  // select several

    // tdc[0] = VME_CAEN_V1290_S438_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[1] = VME_CAEN_V1290_S438_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[2] = VME_CAEN_V1290_S438_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[3] = VME_CAEN_V1290_S438_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                        // data=data);
  SINGLE(VME_CAEN_V1290_S438_SUBTDC,tdc[4]);
  // MARK_COUNT(v1190_end);
  // UINT32 trailer
  // {
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
      uint32 dummy_0_4 : 5;
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
      uint32 dummy_0_4 : 5;
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

  STRUCT_FCNS_DECL(VME_CAEN_V1290_S438);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1290_S438_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SHORT_SUBTDC(tdc,event_id,data)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1290_S438_SHORT_SUBTDC
class VME_CAEN_V1290_S438_SHORT_SUBTDC
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1290_S438_SHORT_SUBTDC
class PACKER_VME_CAEN_V1290_S438_SHORT_SUBTDC
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

  STRUCT_FCNS_DECL(VME_CAEN_V1290_S438_SHORT_SUBTDC);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR(tdc)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR
class VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR
class PACKER_VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR
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

  STRUCT_FCNS_DECL(VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V1290_S438_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SHORT(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1290_S438_SHORT
class VME_CAEN_V1290_S438_SHORT
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1290_S438_SHORT
class PACKER_VME_CAEN_V1290_S438_SHORT
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
  SINGLE(VME_CAEN_V1290_S438_SHORT_SUBTDC,tdc[4]);
  SINGLE(VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[4]);
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

  STRUCT_FCNS_DECL(VME_CAEN_V1290_S438_SHORT);
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
  // MEMBER(DATA16 data[2][900] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA16,DATA16,900> data[2];
  // MEMBER(DATA32 maw[2][3] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,3> maw[2];
  // MEMBER(DATA32 timeStamp[2][2] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,2> timeStamp[2];
  // MEMBER(DATA32 gate[2][2] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,2> gate[2];
  // UINT32 header0
  // {
    //  0_15: chanNo;
    // 16_31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 chanNo : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 chanNo : 16; // 0..15
#endif
    };
    uint32  u32;
  } header0;
  // UINT32 header1
  // {
    //  0_03: format;
    //  4_15: channelID;
    // 16_31: timeS;
    // ENCODE(timeStamp[header0.chanNo][0],(value=timeS));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 format : 4; // 0..3
      uint32 channelID : 12; // 4..15
      uint32 timeS : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 timeS : 16; // 16..31
      uint32 channelID : 12; // 4..15
      uint32 format : 4; // 0..3
#endif
    };
    uint32  u32;
  } header1;
  // UINT32 header2
  // {
    //  0_31: timeS;
    // ENCODE(timeStamp[header0.chanNo][1],(value=timeS));
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
  // UINT32 gate7
  // {
    //  0_27: sum;
    // 28_31: 0;
    // ENCODE(gate[header0.chanNo][0],(value=sum));
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
  } gate7;
  // UINT32 gate8
  // {
    //  0_27: sum;
    // 28_31: 0;
    // ENCODE(gate[header0.chanNo][1],(value=sum));
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
  } gate8;
  // UINT32 maw1
  // {
    //  0_27: max;
    // 28_31: 0;
    // ENCODE(maw[header0.chanNo][0],(value=max));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 max : 28; // 0..27
      uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_28_31 : 4; // 28..31
      uint32 max : 28; // 0..27
#endif
    };
    uint32  u32;
  } maw1;
  // UINT32 maw2
  // {
    //  0_27: after;
    // 28_31: 0;
    // ENCODE(maw[header0.chanNo][1],(value=after));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 after : 28; // 0..27
      uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_28_31 : 4; // 28..31
      uint32 after : 28; // 0..27
#endif
    };
    uint32  u32;
  } maw2;
  // UINT32 maw3
  // {
    //  0_27: before;
    // 28_31: 0;
    // ENCODE(maw[header0.chanNo][2],(value=before));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 before : 28; // 0..27
      uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_28_31 : 4; // 28..31
      uint32 before : 28; // 0..27
#endif
    };
    uint32  u32;
  } maw3;
  // UINT32 header3
  // {
    //  0_25: sampleLength;
    //    26: 0;
    //    27: mawFlag;
    // 28_31: 14;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 sampleLength : 26; // 0..25
      uint32 unnamed_26_26 : 1; // 26
      uint32 mawFlag : 1; // 27
      uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_28_31 : 4; // 28..31
      uint32 mawFlag : 1; // 27
      uint32 unnamed_26_26 : 1; // 26
      uint32 sampleLength : 26; // 0..25
#endif
    };
    uint32  u32;
  } header3;
  // list(0<=index<header3.sampleLength)

    // UINT32 ch_data NOENCODE
    // {
      //  0_15: sample1;
      // 16_31: sample2;
      // ENCODE(data[header0.chanNo][(2 * index)],(value=sample1));
      // ENCODE(data[header0.chanNo][((2 * index) + 1)],(value=sample2));
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
 * Event unpacker associated structures for califa_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(califa_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_califa_subev
class califa_subev
#else//PACKER_CODE
# define DECLARED_PACKER_califa_subev
class PACKER_califa_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts = TIMESTAMP_WHITERABBIT(id=0x400);
  // select several

    // dummy = DUMMY_WORD();
  SINGLE(DUMMY_WORD,dummy);
  SINGLE(TIMESTAMP_WHITERABBIT,ts);

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

  STRUCT_FCNS_DECL(califa_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for daq_status_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(daq_status_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_daq_status_subev
class daq_status_subev
#else//PACKER_CODE
# define DECLARED_PACKER_daq_status_subev
class PACKER_daq_status_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // status = DAQ_STATUS();
  SINGLE(DAQ_STATUS,status);

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

  STRUCT_FCNS_DECL(daq_status_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for empty_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(empty_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_empty_subev
class empty_subev
#else//PACKER_CODE
# define DECLARED_PACKER_empty_subev
class PACKER_empty_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:

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

  STRUCT_FCNS_DECL(empty_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for fiber_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fiber_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_fiber_subev
class fiber_subev
#else//PACKER_CODE
# define DECLARED_PACKER_fiber_subev
class PACKER_fiber_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // evhe = FEBEX_EVENTHEADER();
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
  SINGLE(FEBEX_NOTRACE,GFI0);
  SINGLE(FEBEX_NOTRACE,GFI2);
  SINGLE(FEBEX_NOTRACE,GFI1);
  SINGLE(FEBEX_NOTRACE,GFI3);
  SINGLE(FEBEX_NOTRACE,GFI4);
  SINGLE(FEBEX_NOTRACE,fi4[4]);
  SINGLE(FEBEX_EVENTHEADER,evhe);

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

  STRUCT_FCNS_DECL(fiber_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for los_psp_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_psp_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_los_psp_subev
class los_psp_subev
#else//PACKER_CODE
# define DECLARED_PACKER_los_psp_subev
class PACKER_los_psp_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // land_vme = LAND_STD_VME();
  // select several

    // vftx2_1 = VME_GSI_VFTX2_7PS(id=0);
    // vftx2_2 = VME_GSI_VFTX2_7PS(id=1);
    // madc32 = VME_MESYTEC_MADC32(geom=2);
  SINGLE(VME_GSI_VFTX2_7PS,vftx2_1);
  SINGLE(VME_MESYTEC_MADC32,madc32);
  SINGLE(VME_GSI_VFTX2_7PS,vftx2_2);
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

  STRUCT_FCNS_DECL(los_psp_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for los_scaler_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_scaler_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_los_scaler_subev
class los_scaler_subev
#else//PACKER_CODE
# define DECLARED_PACKER_los_scaler_subev
class PACKER_los_scaler_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // scaler = TRLO_SCALER(crate_id=1);
  SINGLE(TRLO_SCALER,scaler);

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

  STRUCT_FCNS_DECL(los_scaler_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for mark_event_time.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(mark_event_time)
#if !PACKER_CODE
# define DECLARED_UNPACK_mark_event_time
class mark_event_time
#else//PACKER_CODE
# define DECLARED_PACKER_mark_event_time
class PACKER_mark_event_time
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // land_vme = LAND_STD_VME();
  // select several

    // sampler_los = TRLO_SAMPLER(id=223);
    // sampler_cb_sum = TRLO_SAMPLER(id=215);
  SINGLE(TRLO_SAMPLER,sampler_los);
  SINGLE(TRLO_SAMPLER,sampler_cb_sum);
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

  STRUCT_FCNS_DECL(mark_event_time);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for mfi_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(mfi_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_mfi_subev
class mfi_subev
#else//PACKER_CODE
# define DECLARED_PACKER_mfi_subev
class PACKER_mfi_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
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
  SINGLE(NXYTER_PADDING,pads);
  SINGLE(NXYTER,data01);
  SINGLE(NXYTER,data00);
  SINGLE(NXYTER,data10);
  SINGLE(NXYTER,data11);
  SINGLE(NXYTER,data20);
  SINGLE(NXYTER,data21);
  SINGLE(NXYTER,data30);
  SINGLE(NXYTER,data31);

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

  STRUCT_FCNS_DECL(mfi_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for neuland_subevent.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(neuland_subevent)
#if !PACKER_CODE
# define DECLARED_UNPACK_neuland_subevent
class neuland_subevent
#else//PACKER_CODE
# define DECLARED_PACKER_neuland_subevent
class PACKER_neuland_subevent
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // data_sam5_gtb0 = TACQUILA_DATA_S438B(sam=5,gtb=0);
    // data_sam5_gtb1 = TACQUILA_DATA_S438B(sam=5,gtb=1);
    // data_sam6_gtb0 = TACQUILA_DATA_S438B(sam=6,gtb=0);
    // data_sam6_gtb1 = TACQUILA_DATA_S438B(sam=6,gtb=1);
    // data_sam7_gtb0 = TACQUILA_DATA_S438B(sam=7,gtb=0);
    // data_sam7_gtb1 = TACQUILA_DATA_S438B(sam=7,gtb=1);
  SINGLE(TACQUILA_DATA_S438B,data_sam5_gtb0);
  SINGLE(TACQUILA_DATA_S438B,data_sam6_gtb1);
  SINGLE(TACQUILA_DATA_S438B,data_sam6_gtb0);
  SINGLE(TACQUILA_DATA_S438B,data_sam5_gtb1);
  SINGLE(TACQUILA_DATA_S438B,data_sam7_gtb0);
  SINGLE(TACQUILA_DATA_S438B,data_sam7_gtb1);

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

  STRUCT_FCNS_DECL(neuland_subevent);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for neuland_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(neuland_tamex_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_neuland_tamex_subev
class neuland_tamex_subev
#else//PACKER_CODE
# define DECLARED_PACKER_neuland_tamex_subev
class PACKER_neuland_tamex_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // UINT32 trigger_window
  // {
    //  0_10: ns_after_trigger;
    // 16_26: ns_before_trigger;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 ns_after_trigger : 11; // 0..10
      uint32 dummy_11_15 : 5;
      uint32 ns_before_trigger : 11; // 16..26
      uint32 dummy_27_31 : 5;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 dummy_27_31 : 5;
      uint32 ns_before_trigger : 11; // 16..26
      uint32 dummy_11_15 : 5;
      uint32 ns_after_trigger : 11; // 0..10
#endif
    };
    uint32  u32;
  } trigger_window;
  // tamex[0] = TAMEX_CHANNEL(sfp=0,card=0);
  // tamex[1] = TAMEX_CHANNEL(sfp=0,card=1);
  // tamex[2] = TAMEX_CHANNEL(sfp=0,card=2);
  // tamex[3] = TAMEX_CHANNEL(sfp=0,card=3);
  // tamex[4] = TAMEX_CHANNEL(sfp=0,card=4);
  // tamex[5] = TAMEX_CHANNEL(sfp=0,card=5);
  // tamex[6] = TAMEX_CHANNEL(sfp=0,card=6);
  // tamex[7] = TAMEX_CHANNEL(sfp=0,card=7);
  // tamex[8] = TAMEX_CHANNEL(sfp=0,card=8);
  // tamex[9] = TAMEX_CHANNEL(sfp=0,card=9);
  // tamex[10] = TAMEX_CHANNEL(sfp=0,card=10);
  // tamex[11] = TAMEX_CHANNEL(sfp=0,card=11);
  // tamex[12] = TAMEX_CHANNEL(sfp=0,card=12);
  SINGLE(TAMEX_CHANNEL,tamex[13]);

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

  STRUCT_FCNS_DECL(neuland_tamex_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for psp_febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(psp_febex_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_psp_febex_subev
class psp_febex_subev
#else//PACKER_CODE
# define DECLARED_PACKER_psp_febex_subev
class PACKER_psp_febex_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // eh = FEBEX_EVENTHEADER();
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
  SINGLE(FEBEX_NOTRACE,febex1);
  SINGLE(FEBEX_NOTRACE,febex3);
  SINGLE(FEBEX_NOTRACE,febex2);
  SINGLE(FEBEX_NOTRACE,febex4);
  SINGLE(FEBEX_NOTRACE,febex5);
  SINGLE(FEBEX_NOTRACE,febex6);
  SINGLE(FEBEX_NOTRACE,febex7);
  SINGLE(FEBEX_NOTRACE,febex8);
  SINGLE(FEBEX_NOTRACE,febex9);
  SINGLE(FEBEX_NOTRACE,febex10);
  SINGLE(FEBEX_EVENTHEADER,eh);

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

  STRUCT_FCNS_DECL(psp_febex_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for psp_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(psp_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_psp_subev
class psp_subev
#else//PACKER_CODE
# define DECLARED_PACKER_psp_subev
class PACKER_psp_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // land_vme = LAND_STD_VME();
  // tridi_ts = TRIDI();
  // select several

    // sis3316_3 = SIS3316_ACTAR_S438(id=3);
    // sis3316_4 = SIS3316_ACTAR_S438(id=4);
    // sis3316_5 = SIS3316_ACTAR_S438(id=5);
    // sis3316_6 = SIS3316_ACTAR_S438(id=6);
    // sis3316_7 = SIS3316_ACTAR_S438(id=7);
    // sis3316_8 = SIS3316_ACTAR_S438(id=8);
  SINGLE(SIS3316_ACTAR_S438,sis3316_3);
  SINGLE(SIS3316_ACTAR_S438,sis3316_5);
  SINGLE(SIS3316_ACTAR_S438,sis3316_4);
  SINGLE(SIS3316_ACTAR_S438,sis3316_6);
  SINGLE(SIS3316_ACTAR_S438,sis3316_7);
  SINGLE(SIS3316_ACTAR_S438,sis3316_8);
  SINGLE(LAND_STD_VME,land_vme);
  SINGLE(TRIDI,tridi_ts);

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

  STRUCT_FCNS_DECL(psp_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for sit_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sit_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_sit_subev
class sit_subev
#else//PACKER_CODE
# define DECLARED_PACKER_sit_subev
class PACKER_sit_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts = TIMESTAMP_WHITERABBIT(id=0x200);
  // select several

    // dummy = DUMMY_WORD();
  SINGLE(DUMMY_WORD,dummy);
  SINGLE(TIMESTAMP_WHITERABBIT,ts);

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

  STRUCT_FCNS_DECL(sit_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for tof13_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tof13_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_tof13_subev
class tof13_subev
#else//PACKER_CODE
# define DECLARED_PACKER_tof13_subev
class PACKER_tof13_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // land_vme = LAND_STD_VME();
  // select several

    // vftx2_1 = VME_GSI_VFTX2(id=0);
    // vftx2_2 = VME_GSI_VFTX2(id=1);
    // vftx2_3 = VME_GSI_VFTX2(id=2);
    // vftx2_4 = VME_GSI_VFTX2(id=3);
    // v1290_1 = VME_CAEN_V1290_S438(geom=4);
  SINGLE(VME_GSI_VFTX2,vftx2_1);
  SINGLE(VME_GSI_VFTX2,vftx2_2);
  SINGLE(VME_GSI_VFTX2,vftx2_3);
  SINGLE(VME_GSI_VFTX2,vftx2_4);
  SINGLE(VME_CAEN_V1290_S438,v1290_1);
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

  STRUCT_FCNS_DECL(tof13_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for tof13_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tof13_tamex_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_tof13_tamex_subev
class tof13_tamex_subev
#else//PACKER_CODE
# define DECLARED_PACKER_tof13_tamex_subev
class PACKER_tof13_tamex_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // UINT32 trigger_window
  // {
    //  0_10: ns_after_trigger;
    // 16_26: ns_before_trigger;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 ns_after_trigger : 11; // 0..10
      uint32 dummy_11_15 : 5;
      uint32 ns_before_trigger : 11; // 16..26
      uint32 dummy_27_31 : 5;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 dummy_27_31 : 5;
      uint32 ns_before_trigger : 11; // 16..26
      uint32 dummy_11_15 : 5;
      uint32 ns_after_trigger : 11; // 0..10
#endif
    };
    uint32  u32;
  } trigger_window;
  // tamex[0] = TAMEX_CHANNEL(sfp=0,card=0);
  // tamex[1] = TAMEX_CHANNEL(sfp=0,card=1);
  SINGLE(TAMEX_CHANNEL,tamex[2]);

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

  STRUCT_FCNS_DECL(tof13_tamex_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for wr_100.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_100)
#if !PACKER_CODE
# define DECLARED_UNPACK_wr_100
class wr_100
#else//PACKER_CODE
# define DECLARED_PACKER_wr_100
class PACKER_wr_100
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts100 = TIMESTAMP_WHITERABBIT(id=0x100);
  SINGLE(TIMESTAMP_WHITERABBIT,ts100);

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

  STRUCT_FCNS_DECL(wr_100);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for wr_300.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_300)
#if !PACKER_CODE
# define DECLARED_UNPACK_wr_300
class wr_300
#else//PACKER_CODE
# define DECLARED_PACKER_wr_300
class PACKER_wr_300
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts300 = TIMESTAMP_WHITERABBIT(id=0x300);
  SINGLE(TIMESTAMP_WHITERABBIT,ts300);

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

  STRUCT_FCNS_DECL(wr_300);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for wr_500.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_500)
#if !PACKER_CODE
# define DECLARED_UNPACK_wr_500
class wr_500
#else//PACKER_CODE
# define DECLARED_PACKER_wr_500
class PACKER_wr_500
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts500 = TIMESTAMP_WHITERABBIT(id=0x500);
  SINGLE(TIMESTAMP_WHITERABBIT,ts500);

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

  STRUCT_FCNS_DECL(wr_500);
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
SINGLE(LAND_CAMAC_SCALER,scalers);
SINGLE(wr_100,master_ts);
SINGLE(daq_status_subev,daq_status);
SINGLE(mark_event_time,event_time);
SINGLE(LAND_CAMAC_CONVERTER,tpat_and_co);
SINGLE(neuland_subevent,neuland_tacq);
SINGLE(los_psp_subev,los_psp);
SINGLE(los_scaler_subev,los_scaler);
SINGLE(tof13_subev,tof13);
SINGLE(wr_500,psp_ts);
SINGLE(sit_subev,sit);
SINGLE(wr_300,tbm_ts);
SINGLE(fiber_subev,fiber);
SINGLE(psp_febex_subev,psp_febex);
SINGLE(neuland_tamex_subev,neuland_tamex);
SINGLE(tof13_tamex_subev,tof13_tamex);
SINGLE(mfi_subev,mfi);
SINGLE(califa_subev,califa);
SINGLE(psp_subev,psp_struck);
SINGLE(empty_subev,empty_1);
SINGLE(empty_subev,empty_2);
public:
#ifndef __PSDC__
  bitsone<21> __visited;
  void __clear_visited() { __visited.clear(); }
  bool ignore_unknown_subevent() { return false; }
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
