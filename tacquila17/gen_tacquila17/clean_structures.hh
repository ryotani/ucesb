class TACQUILA_GTB
{
  raw_array_zero_suppress<DATA12,DATA12,16> tac[2];
  raw_array_zero_suppress<DATA12,DATA12,16> adc[2];
  union
  {
    struct
    {
      uint32 count : 9;
      uint32 dummy_9_11 : 3;
      uint32 trigger_tacquila : 4;
      uint32 trigger_sam : 4;
      uint32 local_event_counter : 4;
      uint32 gtb : 4;
      uint32 sam : 4;
    };
    uint32 u32;
  } header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sam,uint32 gtb);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sam,uint32 gtb);
  STRUCT_FCNS_DECL(TACQUILA_GTB);
};
class TACQUILA_RPC
 : public unpack_subevent_base
{
  SINGLE(TACQUILA_GTB,tacq);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TACQUILA_RPC);
};
class unpack_event : public unpack_event_base
{
SINGLE(TACQUILA_RPC,rpc);
  bitsone<2> __visited;
  void __clear_visited() { __visited.clear(); }
  bool ignore_unknown_subevent() { return true; }
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  STRUCT_FCNS_DECL(unpack_event);
};
class unpack_sticky_event : public unpack_sticky_event_base
{
  void __clear_visited() { }
  bool ignore_unknown_subevent() { return false; }
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  STRUCT_FCNS_DECL(unpack_sticky_event);
};
