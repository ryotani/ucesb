/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_PDC_wire_hit
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(PDC_wire_hit)::FCNCALL_NAME(PDC_wire_hit)
{
  FCNCALL_INIT;
  // uint8 wire;
  {
  FCNCALL_SUBNAME("wire");
  { FCNCALL_CALL_CTRL_WRAP(wire,FCNCALL_CALL_TYPE(uint8,wire)); }
  FCNCALL_SUBNAME_END;
  }
  // uint8 start;
  {
  FCNCALL_SUBNAME("start");
  { FCNCALL_CALL_CTRL_WRAP(start,FCNCALL_CALL_TYPE(uint8,start)); }
  FCNCALL_SUBNAME_END;
  }
  // uint8 stop;
  {
  FCNCALL_SUBNAME("stop");
  { FCNCALL_CALL_CTRL_WRAP(stop,FCNCALL_CALL_TYPE(uint8,stop)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_PDC_wire_hit

#ifndef USER_DEF_PDC_hits
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(PDC_hits)::FCNCALL_NAME(PDC_hits)
{
  FCNCALL_INIT;
  // raw_list_ii_zero_suppress<PDC_wire_hit,PDC_wire_hit,1024> hits;
  {
  FCNCALL_SUBNAME("hits");
  { FCNCALL_CALL_CTRL_WRAP(hits,hits.FCNCALL_CALL(hits)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_PDC_hits

#ifndef USER_DEF_s296_user_struct
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(s296_user_struct)::FCNCALL_NAME(s296_user_struct)
{
  FCNCALL_INIT;
  // PDC_hits ccb[2];
  {
  FCNCALL_SUBNAME("ccb");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(ccb__i0,,__i0,ccb[__i0].FCNCALL_CALL(ccb[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_s296_user_struct

#include "gen/default_fcncall_undef.hh"


/** END_FUNCTION_CALL_PER_MEMBER **************************************/
