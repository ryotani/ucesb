/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EMPTY_32BIT_WORD_V775_FRS.
 *
 * Do not edit - automatically generated.
 */

// EMPTY_32BIT_WORD_V775_FRS(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_EMPTY_32BIT_WORD_V775_FRS
class EMPTY_32BIT_WORD_V775_FRS
#else//PACKER_CODE
# define DECLARED_PACKER_EMPTY_32BIT_WORD_V775_FRS
class PACKER_EMPTY_32BIT_WORD_V775_FRS
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 data[32]);
  raw_array<DATA32,DATA32,32> data;
  // UINT32 header NOENCODE
  // {
    //  0_23: 0;
    // 24_26: 6;
    // 27_31: geom = MATCH(geom);
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

  STRUCT_FCNS_DECL(EMPTY_32BIT_WORD_V775_FRS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EMPTY_32BIT_WORD_V830_FRS.
 *
 * Do not edit - automatically generated.
 */

// EMPTY_32BIT_WORD_V830_FRS(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_EMPTY_32BIT_WORD_V830_FRS
class EMPTY_32BIT_WORD_V830_FRS
#else//PACKER_CODE
# define DECLARED_PACKER_EMPTY_32BIT_WORD_V830_FRS
class PACKER_EMPTY_32BIT_WORD_V830_FRS
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 data[32]);
  raw_array<DATA32,DATA32,32> data;
  // UINT32 header NOENCODE
  // {
    //  0_26: 0x06000000;
    // 27_31: geom = MATCH(geom);
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

  STRUCT_FCNS_DECL(EMPTY_32BIT_WORD_V830_FRS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V259_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V259_FRS(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V259_FRS
class VME_CAEN_V259_FRS
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V259_FRS
class PACKER_VME_CAEN_V259_FRS
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,32> data;
  // UINT32 header NOENCODE
  // {
    //  0_05: count;
    // 24_26: 2;
    // 27_31: geom = MATCH(geom);
  // }
  // list(0<=index<2)

    // UINT32 ch_data_pattern NOENCODE
    // {
      //  0_26: value;
      // 27_31: geom = MATCH(geom);
      // ENCODE(data[index],(value=value));
    // }
  // UINT32 eob
  // {
    // 24_26: 4;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 dummy_0_23 : 24;
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 dummy_0_23 : 24;
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

  STRUCT_FCNS_DECL(VME_CAEN_V259_FRS);
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
  // MEMBER(DATA12_OVERFLOW data[32] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12_OVERFLOW,DATA12_OVERFLOW,32> data;
  // UINT32 header NOENCODE
  // {
    //  0_05: count;
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
      // ENCODE(data[channel],(value=value,overflow=overflow));
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
    //  0_04: count;
    //  5_26: 0x00100000;
    // 27_31: geom = MATCH(geom);
  // }
  // list(0<=index<header.count)

    // UINT32 ch_data NOENCODE
    // {
      //  0_31: value;
      // ENCODE(data[index],(value=value));
    // }
  // UINT32 eob
  // {
    //  0_26: 0x04000000;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_26 : 27; // 0..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_0_26 : 27; // 0..26
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

  STRUCT_FCNS_DECL(VME_CAEN_V830_FRS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FRS_CRATE.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(FRS_CRATE)
#if !PACKER_CODE
# define DECLARED_UNPACK_FRS_CRATE
class FRS_CRATE
#else//PACKER_CODE
# define DECLARED_PACKER_FRS_CRATE
class PACKER_FRS_CRATE
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // scaler0 = VME_CAEN_V830_FRS(geom=6);
    // pattern = VME_CAEN_V259_FRS(geom=5);
    // tdc0 = VME_CAEN_V775_FRS(geom=8);
    // tdc1 = VME_CAEN_V775_FRS(geom=9);
    // qdc0 = VME_CAEN_V775_FRS(geom=11);
    // adc0 = VME_CAEN_V775_FRS(geom=13);
    // dummy0 = EMPTY_32BIT_WORD_V830_FRS(geom=6);
    // dummy1 = EMPTY_32BIT_WORD_V775_FRS(geom=8);
    // dummy2 = EMPTY_32BIT_WORD_V775_FRS(geom=9);
    // dummy3 = EMPTY_32BIT_WORD_V775_FRS(geom=11);
    // dummy4 = EMPTY_32BIT_WORD_V775_FRS(geom=13);
  SINGLE(VME_CAEN_V830_FRS,scaler0);
  SINGLE(VME_CAEN_V775_FRS,tdc0);
  SINGLE(VME_CAEN_V259_FRS,pattern);
  SINGLE(VME_CAEN_V775_FRS,tdc1);
  SINGLE(VME_CAEN_V775_FRS,qdc0);
  SINGLE(VME_CAEN_V775_FRS,adc0);
  SINGLE(EMPTY_32BIT_WORD_V830_FRS,dummy0);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy1);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy2);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy3);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy4);

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

  STRUCT_FCNS_DECL(FRS_CRATE);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TPC_CRATE.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TPC_CRATE)
#if !PACKER_CODE
# define DECLARED_UNPACK_TPC_CRATE
class TPC_CRATE
#else//PACKER_CODE
# define DECLARED_PACKER_TPC_CRATE
class PACKER_TPC_CRATE
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // tdc0 = VME_CAEN_V775_FRS(geom=8);
    // tdc1 = VME_CAEN_V775_FRS(geom=9);
    // adc0 = VME_CAEN_V775_FRS(geom=16);
    // adc1 = VME_CAEN_V775_FRS(geom=17);
    // scaler0 = VME_CAEN_V830_FRS(geom=5);
    // dummy0 = EMPTY_32BIT_WORD_V830_FRS(geom=5);
    // dummy1 = EMPTY_32BIT_WORD_V775_FRS(geom=8);
    // dummy2 = EMPTY_32BIT_WORD_V775_FRS(geom=9);
    // dummy3 = EMPTY_32BIT_WORD_V775_FRS(geom=16);
    // dummy4 = EMPTY_32BIT_WORD_V775_FRS(geom=17);
  SINGLE(VME_CAEN_V830_FRS,scaler0);
  SINGLE(VME_CAEN_V775_FRS,tdc0);
  SINGLE(VME_CAEN_V775_FRS,tdc1);
  SINGLE(VME_CAEN_V775_FRS,adc0);
  SINGLE(EMPTY_32BIT_WORD_V830_FRS,dummy0);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy1);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy2);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy3);
  SINGLE(EMPTY_32BIT_WORD_V775_FRS,dummy4);
  SINGLE(VME_CAEN_V775_FRS,adc1);

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

  STRUCT_FCNS_DECL(TPC_CRATE);
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
  // vme0 = FRS_CRATE(type=10,subtype=1,procid=10);
  // vme1 = TPC_CRATE(type=10,subtype=1,procid=20);
SINGLE(FRS_CRATE,vme0);
SINGLE(TPC_CRATE,vme1);
public:
#ifndef __PSDC__
  bitsone<2> __visited;
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
