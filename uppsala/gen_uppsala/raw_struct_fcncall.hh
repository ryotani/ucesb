/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_raw_event_U_QDC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_U_QDC)::FCNCALL_NAME(raw_event_U_QDC)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA32,DATA32,16> CH;
  {
  FCNCALL_SUBNAME("CH");
  { FCNCALL_CALL_CTRL_WRAP(CH,CH.FCNCALL_CALL(CH)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_U_QDC

#ifndef USER_DEF_raw_event_U_TDC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_U_TDC)::FCNCALL_NAME(raw_event_U_TDC)
{
  FCNCALL_INIT;
  // DATA32 CH[32];
  {
  FCNCALL_SUBNAME("CH");
  FCNCALL_FOR(__i0,32)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(CH__i0,,__i0,CH[__i0].FCNCALL_CALL(CH[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_U_TDC

#ifndef USER_DEF_raw_event_U_Sca
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_U_Sca)::FCNCALL_NAME(raw_event_U_Sca)
{
  FCNCALL_INIT;
  // DATA32 CH[32];
  {
  FCNCALL_SUBNAME("CH");
  FCNCALL_FOR(__i0,32)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(CH__i0,,__i0,CH[__i0].FCNCALL_CALL(CH[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_U_Sca

#ifndef USER_DEF_raw_event_U
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_U)::FCNCALL_NAME(raw_event_U)
{
  FCNCALL_INIT;
  // raw_event_U_QDC QDC[4];
  {
  FCNCALL_SUBNAME("QDC");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(QDC__i0,,__i0,QDC[__i0].FCNCALL_CALL(QDC[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_U_TDC TDC[3];
  {
  FCNCALL_SUBNAME("TDC");
  FCNCALL_FOR(__i0,3)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(TDC__i0,,__i0,TDC[__i0].FCNCALL_CALL(TDC[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_U_Sca Sca[7];
  {
  FCNCALL_SUBNAME("Sca");
  FCNCALL_FOR(__i0,7)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(Sca__i0,,__i0,Sca[__i0].FCNCALL_CALL(Sca[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 MPflag;
  {
  FCNCALL_SUBNAME("MPflag");
  { FCNCALL_CALL_CTRL_WRAP(MPflag,MPflag.FCNCALL_CALL(MPflag)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 Cyflag;
  {
  FCNCALL_SUBNAME("Cyflag");
  { FCNCALL_CALL_CTRL_WRAP(Cyflag,Cyflag.FCNCALL_CALL(Cyflag)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 ro;
  {
  FCNCALL_SUBNAME("ro");
  { FCNCALL_CALL_CTRL_WRAP(ro,ro.FCNCALL_CALL(ro)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 timeCH[9];
  {
  FCNCALL_SUBNAME("timeCH");
  FCNCALL_FOR(__i0,9)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(timeCH__i0,,__i0,timeCH[__i0].FCNCALL_CALL(timeCH[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_U

#ifndef USER_DEF_raw_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event)::FCNCALL_NAME(raw_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(raw_event_base,FCNCALL_CLASS_NAME(raw_event_base)::FCNCALL_CALL_BASE());
  // raw_event_U U;
  {
  FCNCALL_SUBNAME("U");
  { FCNCALL_CALL_CTRL_WRAP(U,U.FCNCALL_CALL(U)); }
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
