/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FZD_data_SUBITEM.
 *
 * Do not edit - automatically generated.
 */

// FZD_data_SUBITEM(geo,data)
#if !PACKER_CODE
# define DECLARED_UNPACK_FZD_data_SUBITEM
class FZD_data_SUBITEM
#else//PACKER_CODE
# define DECLARED_PACKER_FZD_data_SUBITEM
class PACKER_FZD_data_SUBITEM
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS_MULTI(5));
  // UINT32 ch_data NOENCODE
  // {
    //  0_23: data;
    // 24_28: channel = RANGE(0,32);
    //    29: 0;
    //    30: 0;
    //    31: 0;
    // ENCODE(data[channel],(value=data));
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geo,raw_array_multi_zero_suppress<DATA32,DATA32,32,5> &data);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geo);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geo,raw_array_multi_zero_suppress<DATA32,DATA32,32,5> &data);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FZD_data_SUBITEM);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FZD_Modul.
 *
 * Do not edit - automatically generated.
 */

// FZD_Modul(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_FZD_Modul
class FZD_Modul
#else//PACKER_CODE
# define DECLARED_PACKER_FZD_Modul
class PACKER_FZD_Modul
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS_MULTI(5));
  raw_array_multi_zero_suppress<DATA32,DATA32,32,5> data;
  // UINT32 header
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 1;
    //    30: 0;
    //    31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_23 : 24; // 0..23
      uint32 geom : 5; // 24..28
      uint32 unnamed_29_29 : 1; // 29
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_31_31 : 1; // 31
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_29_29 : 1; // 29
      uint32 geom : 5; // 24..28
      uint32 unnamed_0_23 : 24; // 0..23
#endif
    };
    uint32  u32;
  } header;
  // select several

    // dummy = FZD_data_SUBITEM(geo=geom,data=data);
  SINGLE(FZD_data_SUBITEM,dummy);
  // UINT32 EOB
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 0;
    //    30: 1;
    //    31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_23 : 24; // 0..23
      uint32 geom : 5; // 24..28
      uint32 unnamed_29_29 : 1; // 29
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_31_31 : 1; // 31
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_29_29 : 1; // 29
      uint32 geom : 5; // 24..28
      uint32 unnamed_0_23 : 24; // 0..23
#endif
    };
    uint32  u32;
  } EOB;

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

  STRUCT_FCNS_DECL(FZD_Modul);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FZD_V1495.
 *
 * Do not edit - automatically generated.
 */

// FZD_V1495(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_FZD_V1495
class FZD_V1495
#else//PACKER_CODE
# define DECLARED_PACKER_FZD_V1495
class PACKER_FZD_V1495
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 ts[8] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,8> ts;
  // MEMBER(DATA32 RBWL[2] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,2> RBWL;
  // MEMBER(DATA32 MP);
  DATA32 MP;
  // UINT32 header
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 1;
    //    30: 0;
    //    31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_23 : 24; // 0..23
      uint32 geom : 5; // 24..28
      uint32 unnamed_29_29 : 1; // 29
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_31_31 : 1; // 31
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_29_29 : 1; // 29
      uint32 geom : 5; // 24..28
      uint32 unnamed_0_23 : 24; // 0..23
#endif
    };
    uint32  u32;
  } header;
  // list(0<=index<5)

    // UINT32 ch_data NOENCODE
    // {
      //  0_23: timestamp;
      // 24_28: channel = RANGE(0,4);
      //    29: 0;
      //    30: 0;
      //    31: 0;
      // ENCODE(ts[channel],(value=timestamp));
    // }
  // UINT32 ch_data NOENCODE
  // {
    //  0_07: timestamp;
    //     8: dummy = RANGE(0,1);
    //     9: MPF = RANGE(0,1);
    //    10: RBWF = RANGE(0,1);
    // 11_23: 0;
    // 24_28: channel = RANGE(5,5);
    //    29: 0;
    //    30: 0;
    //    31: 0;
    // ENCODE(MP,(value=MPF));
    // ENCODE(ts[channel],(value=timestamp));
  // }
  // list(0<=index<2)

    // UINT32 ch_data NOENCODE
    // {
      //  0_23: timestamp;
      // 24_28: channel = RANGE(6,7);
      //    29: 0;
      //    30: 0;
      //    31: 0;
      // ENCODE(ts[channel],(value=timestamp));
    // }
  // list(0<=index<2)

    // UINT32 ch_data NOENCODE
    // {
      //  0_23: length;
      // 24_28: channel = RANGE(8,9);
      //    29: 0;
      //    30: 0;
      //    31: 0;
      // ENCODE(RBWL[(channel - 8)],(value=length));
    // }
  // UINT32 EOB
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 0;
    //    30: 1;
    //    31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_23 : 24; // 0..23
      uint32 geom : 5; // 24..28
      uint32 unnamed_29_29 : 1; // 29
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_31_31 : 1; // 31
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_29_29 : 1; // 29
      uint32 geom : 5; // 24..28
      uint32 unnamed_0_23 : 24; // 0..23
#endif
    };
    uint32  u32;
  } EOB;

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

  STRUCT_FCNS_DECL(FZD_V1495);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for CRATE.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CRATE)
#if !PACKER_CODE
# define DECLARED_UNPACK_CRATE
class CRATE
#else//PACKER_CODE
# define DECLARED_PACKER_CRATE
class PACKER_CRATE
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // timestamp = FZD_V1495(geom=21);
    // QDC1 = FZD_Modul(geom=7);
    // QDC2 = FZD_Modul(geom=8);
    // TDC1 = FZD_Modul(geom=5);
    // Sca1 = FZD_Modul(geom=13);
    // Sca2 = FZD_Modul(geom=14);
    // Sca3 = FZD_Modul(geom=15);
    // Sca4 = FZD_Modul(geom=16);
  SINGLE(FZD_V1495,timestamp);
  SINGLE(FZD_Modul,QDC2);
  SINGLE(FZD_Modul,QDC1);
  SINGLE(FZD_Modul,TDC1);
  SINGLE(FZD_Modul,Sca1);
  SINGLE(FZD_Modul,Sca2);
  SINGLE(FZD_Modul,Sca3);
  SINGLE(FZD_Modul,Sca4);

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

  STRUCT_FCNS_DECL(CRATE);
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
  // vme0 = CRATE(type=10,subtype=1);
SINGLE(CRATE,vme0);
public:
#ifndef __PSDC__
  bitsone<1> __visited;
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
