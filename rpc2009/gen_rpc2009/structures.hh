/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_FZR.
 *
 * Do not edit - automatically generated.
 */

// VME_FZR()
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_FZR
class VME_FZR
#else//PACKER_CODE
# define DECLARED_PACKER_VME_FZR
class PACKER_VME_FZR
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 data[32]);
  raw_array<DATA32,DATA32,32> data;
  // list(0<=index<32)

    // UINT32 ch_data NOENCODE
    // {
      //  0_31: value;
      // ENCODE(data[index],(value=value));
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

  STRUCT_FCNS_DECL(VME_FZR);
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
  // block = VME_FZR();
  SINGLE(VME_FZR,block);

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
