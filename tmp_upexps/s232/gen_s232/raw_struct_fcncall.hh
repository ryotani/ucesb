/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_raw_event_CS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_CS)::FCNCALL_NAME(raw_event_CS)
{
  FCNCALL_INIT;
  // DATA12 E;
  {
  FCNCALL_SUBNAME("E");
  { FCNCALL_CALL_CTRL_WRAP(E,E.FCNCALL_CALL(E)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA12 T;
  {
  FCNCALL_SUBNAME("T");
  { FCNCALL_CALL_CTRL_WRAP(T,T.FCNCALL_CALL(T)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_CS

#ifndef USER_DEF_raw_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event)::FCNCALL_NAME(raw_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(raw_event_base,FCNCALL_CLASS_NAME(raw_event_base)::FCNCALL_CALL_BASE());
  // raw_array_zero_suppress<raw_event_CS,raw_event_CS,1> CS[155];
  {
  FCNCALL_SUBNAME("CS");
  FCNCALL_FOR(__i0,155)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(CS__i0,,__i0,CS[__i0].FCNCALL_CALL(CS[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event

#ifndef USER_DEF_raw_sticky
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_sticky)::FCNCALL_NAME(raw_sticky)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(raw_sticky_base,FCNCALL_CLASS_NAME(raw_sticky_base)::FCNCALL_CALL_BASE());
  FCNCALL_RET;
}
#endif//USER_DEF_raw_sticky

#include "gen/default_fcncall_undef.hh"


/** END_FUNCTION_CALL_PER_MEMBER **************************************/
