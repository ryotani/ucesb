/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_TACQUILA_GTB
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TACQUILA_GTB)::FCNCALL_NAME(TACQUILA_GTB)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA12,DATA12,16> tac[2];
  {
  FCNCALL_SUBNAME("tac");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(tac__i0,,__i0,tac[__i0].FCNCALL_CALL(tac[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA12,DATA12,16> adc[2];
  {
  FCNCALL_SUBNAME("adc");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(adc__i0,,__i0,adc[__i0].FCNCALL_CALL(adc[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 count : 9;
      // uint32 dummy_9_11 : 3;
      // uint32 trigger_tacquila : 4;
      // uint32 trigger_sam : 4;
      // uint32 local_event_counter : 4;
      // uint32 gtb : 4;
      // uint32 sam : 4;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 count : 9;
    // uint32 dummy_9_11 : 3;
    // uint32 trigger_tacquila : 4;
    // uint32 trigger_sam : 4;
    // uint32 local_event_counter : 4;
    // uint32 gtb : 4;
    // uint32 sam : 4;
  // } ;
  // uint32 count : 9;
  {
  FCNCALL_SUBNAME("count");
  { FCNCALL_CALL_CTRL_WRAP(header.count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_9_11 : 3;
  {
  FCNCALL_SUBNAME("dummy_9_11");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy_9_11,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy_9_11)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_tacquila : 4;
  {
  FCNCALL_SUBNAME("trigger_tacquila");
  { FCNCALL_CALL_CTRL_WRAP(header.trigger_tacquila,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.trigger_tacquila)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_sam : 4;
  {
  FCNCALL_SUBNAME("trigger_sam");
  { FCNCALL_CALL_CTRL_WRAP(header.trigger_sam,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.trigger_sam)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 local_event_counter : 4;
  {
  FCNCALL_SUBNAME("local_event_counter");
  { FCNCALL_CALL_CTRL_WRAP(header.local_event_counter,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.local_event_counter)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 gtb : 4;
  {
  FCNCALL_SUBNAME("gtb");
  { FCNCALL_CALL_CTRL_WRAP(header.gtb,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.gtb)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sam : 4;
  {
  FCNCALL_SUBNAME("sam");
  { FCNCALL_CALL_CTRL_WRAP(header.sam,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.sam)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(header.u32,FCNCALL_CALL_TYPE(uint32,header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TACQUILA_GTB

#ifndef USER_DEF_TACQUILA_RPC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TACQUILA_RPC)::FCNCALL_NAME(TACQUILA_RPC)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TACQUILA_GTB tacq;
  {
  FCNCALL_SUBNAME("tacq");
  { FCNCALL_CALL_CTRL_WRAP(tacq,tacq.FCNCALL_CALL(tacq)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TACQUILA_RPC

#ifndef USER_DEF_unpack_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(unpack_event)::FCNCALL_NAME(unpack_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_event_base,FCNCALL_CLASS_NAME(unpack_event_base)::FCNCALL_CALL_BASE());
  // TACQUILA_RPC rpc;
  {
  FCNCALL_SUBNAME("rpc");
  { FCNCALL_CALL_CTRL_WRAP(rpc,rpc.FCNCALL_CALL(rpc)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_unpack_event

#ifndef USER_DEF_unpack_sticky_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(unpack_sticky_event)::FCNCALL_NAME(unpack_sticky_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_sticky_event_base,FCNCALL_CLASS_NAME(unpack_sticky_event_base)::FCNCALL_CALL_BASE());
  FCNCALL_RET;
}
#endif//USER_DEF_unpack_sticky_event

#include "gen/default_fcncall_undef.hh"


/** END_FUNCTION_CALL_PER_MEMBER **************************************/
