/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TACQUILA_GTB.
 *
 * Do not edit - automatically generated.
 */

// TACQUILA_GTB(sam,gtb)
#if !PACKER_CODE
# define DECLARED_UNPACK_TACQUILA_GTB
class TACQUILA_GTB
#else//PACKER_CODE
# define DECLARED_PACKER_TACQUILA_GTB
class PACKER_TACQUILA_GTB
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 tac[2][16] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12,DATA12,16> tac[2];
  // MEMBER(DATA12 adc[2][16] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA12,DATA12,16> adc[2];
  // UINT32 header
  // {
    //  0_08: count;
    // 12_15: trigger_tacquila = RANGE(0,0);
    // 16_19: trigger_sam = RANGE(1,1);
    // 20_23: local_event_counter;
    // 24_27: gtb = MATCH(gtb);
    // 28_31: sam = MATCH(sam);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 9; // 0..8
      uint32 dummy_9_11 : 3;
      uint32 trigger_tacquila : 4; // 12..15
      uint32 trigger_sam : 4; // 16..19
      uint32 local_event_counter : 4; // 20..23
      uint32 gtb : 4; // 24..27
      uint32 sam : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 sam : 4; // 28..31
      uint32 gtb : 4; // 24..27
      uint32 local_event_counter : 4; // 20..23
      uint32 trigger_sam : 4; // 16..19
      uint32 trigger_tacquila : 4; // 12..15
      uint32 dummy_9_11 : 3;
      uint32 count : 9; // 0..8
#endif
    };
    uint32  u32;
  } header;
  // list(0<=index<header.count)

    // if(( ! (index & 1)))

    // else

      // UINT32 ch_data NOENCODE
      // {
        //  0_11: tac_value;
        // 12_17: clock_cycle;
        //    20: trigger = RANGE(0,0);
        //    21: 0;
        // 22_26: channel = RANGE(0,15);
        // 27_31: module = RANGE(1,2);
        // ENCODE(tac[(module - 1)][channel],(value=tac_value));
      // }
      // UINT32 ch_data2 NOENCODE
      // {
        //  0_11: adc_value;
        //    20: trigger = RANGE(0,0);
        //    21: 1;
        // 22_26: channel = RANGE(0,15);
        // 27_31: module = RANGE(1,2);
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

  STRUCT_FCNS_DECL(TACQUILA_GTB);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TACQUILA_RPC.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TACQUILA_RPC)
#if !PACKER_CODE
# define DECLARED_UNPACK_TACQUILA_RPC
class TACQUILA_RPC
#else//PACKER_CODE
# define DECLARED_PACKER_TACQUILA_RPC
class PACKER_TACQUILA_RPC
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // tacq = TACQUILA_GTB(sam=6,gtb=0);
  SINGLE(TACQUILA_GTB,tacq);

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

  STRUCT_FCNS_DECL(TACQUILA_RPC);
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
  // rpc = TACQUILA_RPC(type=10,subtype=1);
  // ignore_unknown_subevent;
SINGLE(TACQUILA_RPC,rpc);
public:
#ifndef __PSDC__
  bitsone<2> __visited;
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
