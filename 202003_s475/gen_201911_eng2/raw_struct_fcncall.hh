/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_raw_event_TPC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TPC)::FCNCALL_NAME(raw_event_TPC)
{
  FCNCALL_INIT;
  // DATA12 DT[4];
  {
  FCNCALL_SUBNAME("DT");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(DT__i0,,__i0,DT[__i0].FCNCALL_CALL(DT[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // DATA12 LT[2];
  {
  FCNCALL_SUBNAME("LT");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(LT__i0,,__i0,LT[__i0].FCNCALL_CALL(LT[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // DATA12 RT[2];
  {
  FCNCALL_SUBNAME("RT");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(RT__i0,,__i0,RT[__i0].FCNCALL_CALL(RT[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // DATA12 A[4];
  {
  FCNCALL_SUBNAME("A");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(A__i0,,__i0,A[__i0].FCNCALL_CALL(A[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // DATA12 AL[2];
  {
  FCNCALL_SUBNAME("AL");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(AL__i0,,__i0,AL[__i0].FCNCALL_CALL(AL[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // DATA12 AR[2];
  {
  FCNCALL_SUBNAME("AR");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(AR__i0,,__i0,AR[__i0].FCNCALL_CALL(AR[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TPC

#ifndef USER_DEF_raw_event_MUS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_MUS)::FCNCALL_NAME(raw_event_MUS)
{
  FCNCALL_INIT;
  // DATA12 A[8];
  {
  FCNCALL_SUBNAME("A");
  FCNCALL_FOR(__i0,8)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(A__i0,,__i0,A[__i0].FCNCALL_CALL(A[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_MUS

#ifndef USER_DEF_raw_event_SST
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_SST)::FCNCALL_NAME(raw_event_SST)
{
  FCNCALL_INIT;
  // DATA12 E;
  {
  FCNCALL_SUBNAME("E");
  { FCNCALL_CALL_CTRL_WRAP(E,E.FCNCALL_CALL(E)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_SST

#ifndef USER_DEF_raw_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event)::FCNCALL_NAME(raw_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(raw_event_base,FCNCALL_CLASS_NAME(raw_event_base)::FCNCALL_CALL_BASE());
  // raw_event_TPC TPC[6];
  {
  FCNCALL_SUBNAME("TPC");
  FCNCALL_FOR(__i0,6)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(TPC__i0,,__i0,TPC[__i0].FCNCALL_CALL(TPC[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_MUS MUS[3];
  {
  FCNCALL_SUBNAME("MUS");
  FCNCALL_FOR(__i0,3)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(MUS__i0,,__i0,MUS[__i0].FCNCALL_CALL(MUS[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<raw_event_SST,raw_event_SST,1024> SST[3];
  {
  FCNCALL_SUBNAME("SST");
  FCNCALL_FOR(__i0,3)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(SST__i0,,__i0,SST[__i0].FCNCALL_CALL(SST[__i0])); }
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
