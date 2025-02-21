/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_raw_event_LOS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_LOS)::FCNCALL_NAME(raw_event_LOS)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,4,32> TF;
  {
  FCNCALL_SUBNAME("TF");
  { FCNCALL_CALL_CTRL_WRAP(TF,TF.FCNCALL_CALL(TF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,4,32> TC;
  {
  FCNCALL_SUBNAME("TC");
  { FCNCALL_CALL_CTRL_WRAP(TC,TC.FCNCALL_CALL(TC)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_LOS

#ifndef USER_DEF_raw_event_TOFD_VFTX
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TOFD_VFTX)::FCNCALL_NAME(raw_event_TOFD_VFTX)
{
  FCNCALL_INIT;
  // DATA16 T[3];
  {
  FCNCALL_SUBNAME("T");
  FCNCALL_FOR(__i0,3)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(T__i0,,__i0,T[__i0].FCNCALL_CALL(T[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TOFD_VFTX

#ifndef USER_DEF_raw_event_TOFD_P_T
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TOFD_P_T)::FCNCALL_NAME(raw_event_TOFD_P_T)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,6,32> TFL;
  {
  FCNCALL_SUBNAME("TFL");
  { FCNCALL_CALL_CTRL_WRAP(TFL,TFL.FCNCALL_CALL(TFL)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,6,32> TFT;
  {
  FCNCALL_SUBNAME("TFT");
  { FCNCALL_CALL_CTRL_WRAP(TFT,TFT.FCNCALL_CALL(TFT)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,6,32> TCL;
  {
  FCNCALL_SUBNAME("TCL");
  { FCNCALL_CALL_CTRL_WRAP(TCL,TCL.FCNCALL_CALL(TCL)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,6,32> TCT;
  {
  FCNCALL_SUBNAME("TCT");
  { FCNCALL_CALL_CTRL_WRAP(TCT,TCT.FCNCALL_CALL(TCT)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TOFD_P_T

#ifndef USER_DEF_raw_event_TOFD_P
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TOFD_P)::FCNCALL_NAME(raw_event_TOFD_P)
{
  FCNCALL_INIT;
  // raw_event_TOFD_P_T T[2];
  {
  FCNCALL_SUBNAME("T");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(T__i0,,__i0,T[__i0].FCNCALL_CALL(T[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TOFD_P

#ifndef USER_DEF_raw_event_TOFD
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TOFD)::FCNCALL_NAME(raw_event_TOFD)
{
  FCNCALL_INIT;
  // raw_event_TOFD_VFTX VFTX[2];
  {
  FCNCALL_SUBNAME("VFTX");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(VFTX__i0,,__i0,VFTX[__i0].FCNCALL_CALL(VFTX[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_TOFD_P P[6];
  {
  FCNCALL_SUBNAME("P");
  FCNCALL_FOR(__i0,6)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(P__i0,,__i0,P[__i0].FCNCALL_CALL(P[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TOFD

#ifndef USER_DEF_raw_event_TIMESTAMP_MASTER_WR
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TIMESTAMP_MASTER_WR)::FCNCALL_NAME(raw_event_TIMESTAMP_MASTER_WR)
{
  FCNCALL_INIT;
  // DATA16 T[4];
  {
  FCNCALL_SUBNAME("T");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(T__i0,,__i0,T[__i0].FCNCALL_CALL(T[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TIMESTAMP_MASTER_WR

#ifndef USER_DEF_raw_event_TIMESTAMP_MASTER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TIMESTAMP_MASTER)::FCNCALL_NAME(raw_event_TIMESTAMP_MASTER)
{
  FCNCALL_INIT;
  // DATA12 ID;
  {
  FCNCALL_SUBNAME("ID");
  { FCNCALL_CALL_CTRL_WRAP(ID,ID.FCNCALL_CALL(ID)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_TIMESTAMP_MASTER_WR WR;
  {
  FCNCALL_SUBNAME("WR");
  { FCNCALL_CALL_CTRL_WRAP(WR,WR.FCNCALL_CALL(WR)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TIMESTAMP_MASTER

#ifndef USER_DEF_raw_event_TIMESTAMP
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TIMESTAMP)::FCNCALL_NAME(raw_event_TIMESTAMP)
{
  FCNCALL_INIT;
  // raw_event_TIMESTAMP_MASTER MASTER;
  {
  FCNCALL_SUBNAME("MASTER");
  { FCNCALL_CALL_CTRL_WRAP(MASTER,MASTER.FCNCALL_CALL(MASTER)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TIMESTAMP

#ifndef USER_DEF_raw_event_TRLO_SAMPLER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TRLO_SAMPLER)::FCNCALL_NAME(raw_event_TRLO_SAMPLER)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA32,DATA32,512> S;
  {
  FCNCALL_SUBNAME("S");
  { FCNCALL_CALL_CTRL_WRAP(S,S.FCNCALL_CALL(S)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TRLO_SAMPLER

#ifndef USER_DEF_raw_event_TRLO
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TRLO)::FCNCALL_NAME(raw_event_TRLO)
{
  FCNCALL_INIT;
  // raw_event_TRLO_SAMPLER SAMPLER;
  {
  FCNCALL_SUBNAME("SAMPLER");
  { FCNCALL_CALL_CTRL_WRAP(SAMPLER,SAMPLER.FCNCALL_CALL(SAMPLER)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TRLO

#ifndef USER_DEF_raw_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event)::FCNCALL_NAME(raw_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(raw_event_base,FCNCALL_CLASS_NAME(raw_event_base)::FCNCALL_CALL_BASE());
  // raw_event_LOS LOS[1];
  {
  FCNCALL_SUBNAME("LOS");
  FCNCALL_FOR(__i0,1)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(LOS__i0,,__i0,LOS[__i0].FCNCALL_CALL(LOS[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_TOFD TOFD;
  {
  FCNCALL_SUBNAME("TOFD");
  { FCNCALL_CALL_CTRL_WRAP(TOFD,TOFD.FCNCALL_CALL(TOFD)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_TIMESTAMP TIMESTAMP;
  {
  FCNCALL_SUBNAME("TIMESTAMP");
  { FCNCALL_CALL_CTRL_WRAP(TIMESTAMP,TIMESTAMP.FCNCALL_CALL(TIMESTAMP)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_TRLO TRLO;
  {
  FCNCALL_SUBNAME("TRLO");
  { FCNCALL_CALL_CTRL_WRAP(TRLO,TRLO.FCNCALL_CALL(TRLO)); }
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
