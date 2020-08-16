/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_VME_FZR
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_FZR)::FCNCALL_NAME(VME_FZR)
{
  FCNCALL_INIT;
  // raw_array<DATA32,DATA32,32> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_FZR

#ifndef USER_DEF_CRATE
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CRATE)::FCNCALL_NAME(CRATE)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // VME_FZR block;
  {
  FCNCALL_SUBNAME("block");
  { FCNCALL_CALL_CTRL_WRAP(block,block.FCNCALL_CALL(block)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_CRATE

#ifndef USER_DEF_unpack_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(unpack_event)::FCNCALL_NAME(unpack_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_event_base,FCNCALL_CLASS_NAME(unpack_event_base)::FCNCALL_CALL_BASE());
  // CRATE vme0;
  {
  FCNCALL_SUBNAME("vme0");
  { FCNCALL_CALL_CTRL_WRAP(vme0,vme0.FCNCALL_CALL(vme0)); }
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
