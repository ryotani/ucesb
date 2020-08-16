/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_FZD_data_SUBITEM
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FZD_data_SUBITEM)::FCNCALL_NAME(FZD_data_SUBITEM)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_FZD_data_SUBITEM

#ifndef USER_DEF_FZD_Modul
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FZD_Modul)::FCNCALL_NAME(FZD_Modul)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA32,DATA32,32> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_23 : 24;
      // uint32 geom : 5;
      // uint32 unnamed_29_29 : 1;
      // uint32 unnamed_30_30 : 1;
      // uint32 unnamed_31_31 : 1;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_23 : 24;
    // uint32 geom : 5;
    // uint32 unnamed_29_29 : 1;
    // uint32 unnamed_30_30 : 1;
    // uint32 unnamed_31_31 : 1;
  // } ;
  // uint32 unnamed_0_23 : 24;
  {
  FCNCALL_SUBNAME("unnamed_0_23");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_0_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_0_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(header.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_29_29 : 1;
  {
  FCNCALL_SUBNAME("unnamed_29_29");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_29_29,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_29_29)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_30_30 : 1;
  {
  FCNCALL_SUBNAME("unnamed_30_30");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_30_30,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_30_30)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_31_31 : 1;
  {
  FCNCALL_SUBNAME("unnamed_31_31");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_31_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_31_31)); }
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
  // FZD_data_SUBITEM dummy;
  {
  FCNCALL_SUBNAME("dummy");
  { FCNCALL_CALL_CTRL_WRAP(dummy,dummy.FCNCALL_CALL(dummy)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_23 : 24;
      // uint32 geom : 5;
      // uint32 unnamed_29_29 : 1;
      // uint32 unnamed_30_30 : 1;
      // uint32 unnamed_31_31 : 1;
    // } ;
    // uint32 u32;
  // } EOB;
  {
  FCNCALL_SUBNAME("EOB");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_23 : 24;
    // uint32 geom : 5;
    // uint32 unnamed_29_29 : 1;
    // uint32 unnamed_30_30 : 1;
    // uint32 unnamed_31_31 : 1;
  // } ;
  // uint32 unnamed_0_23 : 24;
  {
  FCNCALL_SUBNAME("unnamed_0_23");
  { FCNCALL_CALL_CTRL_WRAP(EOB.unnamed_0_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,EOB.unnamed_0_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(EOB.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,EOB.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_29_29 : 1;
  {
  FCNCALL_SUBNAME("unnamed_29_29");
  { FCNCALL_CALL_CTRL_WRAP(EOB.unnamed_29_29,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,EOB.unnamed_29_29)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_30_30 : 1;
  {
  FCNCALL_SUBNAME("unnamed_30_30");
  { FCNCALL_CALL_CTRL_WRAP(EOB.unnamed_30_30,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,EOB.unnamed_30_30)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_31_31 : 1;
  {
  FCNCALL_SUBNAME("unnamed_31_31");
  { FCNCALL_CALL_CTRL_WRAP(EOB.unnamed_31_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,EOB.unnamed_31_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(EOB.u32,FCNCALL_CALL_TYPE(uint32,EOB.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_FZD_Modul

#ifndef USER_DEF_FZD_V1495_MP
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FZD_V1495_MP)::FCNCALL_NAME(FZD_V1495_MP)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA32,DATA32,3> MP_FLAG;
  {
  FCNCALL_SUBNAME("MP_FLAG");
  { FCNCALL_CALL_CTRL_WRAP(MP_FLAG,MP_FLAG.FCNCALL_CALL(MP_FLAG)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,3> Cy_FLAG;
  {
  FCNCALL_SUBNAME("Cy_FLAG");
  { FCNCALL_CALL_CTRL_WRAP(Cy_FLAG,Cy_FLAG.FCNCALL_CALL(Cy_FLAG)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,3> ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_23 : 24;
      // uint32 geom : 5;
      // uint32 unnamed_29_29 : 1;
      // uint32 unnamed_30_30 : 1;
      // uint32 unnamed_31_31 : 1;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_23 : 24;
    // uint32 geom : 5;
    // uint32 unnamed_29_29 : 1;
    // uint32 unnamed_30_30 : 1;
    // uint32 unnamed_31_31 : 1;
  // } ;
  // uint32 unnamed_0_23 : 24;
  {
  FCNCALL_SUBNAME("unnamed_0_23");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_0_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_0_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(header.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_29_29 : 1;
  {
  FCNCALL_SUBNAME("unnamed_29_29");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_29_29,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_29_29)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_30_30 : 1;
  {
  FCNCALL_SUBNAME("unnamed_30_30");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_30_30,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_30_30)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_31_31 : 1;
  {
  FCNCALL_SUBNAME("unnamed_31_31");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_31_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_31_31)); }
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
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_23 : 24;
      // uint32 geom : 5;
      // uint32 unnamed_29_29 : 1;
      // uint32 unnamed_30_30 : 1;
      // uint32 unnamed_31_31 : 1;
    // } ;
    // uint32 u32;
  // } EOB;
  {
  FCNCALL_SUBNAME("EOB");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_23 : 24;
    // uint32 geom : 5;
    // uint32 unnamed_29_29 : 1;
    // uint32 unnamed_30_30 : 1;
    // uint32 unnamed_31_31 : 1;
  // } ;
  // uint32 unnamed_0_23 : 24;
  {
  FCNCALL_SUBNAME("unnamed_0_23");
  { FCNCALL_CALL_CTRL_WRAP(EOB.unnamed_0_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,EOB.unnamed_0_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(EOB.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,EOB.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_29_29 : 1;
  {
  FCNCALL_SUBNAME("unnamed_29_29");
  { FCNCALL_CALL_CTRL_WRAP(EOB.unnamed_29_29,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,EOB.unnamed_29_29)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_30_30 : 1;
  {
  FCNCALL_SUBNAME("unnamed_30_30");
  { FCNCALL_CALL_CTRL_WRAP(EOB.unnamed_30_30,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,EOB.unnamed_30_30)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_31_31 : 1;
  {
  FCNCALL_SUBNAME("unnamed_31_31");
  { FCNCALL_CALL_CTRL_WRAP(EOB.unnamed_31_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,EOB.unnamed_31_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(EOB.u32,FCNCALL_CALL_TYPE(uint32,EOB.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_FZD_V1495_MP

#ifndef USER_DEF_CRATE
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CRATE)::FCNCALL_NAME(CRATE)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // FZD_V1495_MP MP;
  {
  FCNCALL_SUBNAME("MP");
  { FCNCALL_CALL_CTRL_WRAP(MP,MP.FCNCALL_CALL(MP)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul QDC2;
  {
  FCNCALL_SUBNAME("QDC2");
  { FCNCALL_CALL_CTRL_WRAP(QDC2,QDC2.FCNCALL_CALL(QDC2)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul QDC1;
  {
  FCNCALL_SUBNAME("QDC1");
  { FCNCALL_CALL_CTRL_WRAP(QDC1,QDC1.FCNCALL_CALL(QDC1)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul QDC3;
  {
  FCNCALL_SUBNAME("QDC3");
  { FCNCALL_CALL_CTRL_WRAP(QDC3,QDC3.FCNCALL_CALL(QDC3)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul QDC4;
  {
  FCNCALL_SUBNAME("QDC4");
  { FCNCALL_CALL_CTRL_WRAP(QDC4,QDC4.FCNCALL_CALL(QDC4)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul TDC1;
  {
  FCNCALL_SUBNAME("TDC1");
  { FCNCALL_CALL_CTRL_WRAP(TDC1,TDC1.FCNCALL_CALL(TDC1)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul TDC2;
  {
  FCNCALL_SUBNAME("TDC2");
  { FCNCALL_CALL_CTRL_WRAP(TDC2,TDC2.FCNCALL_CALL(TDC2)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul TDC3;
  {
  FCNCALL_SUBNAME("TDC3");
  { FCNCALL_CALL_CTRL_WRAP(TDC3,TDC3.FCNCALL_CALL(TDC3)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul Sca1;
  {
  FCNCALL_SUBNAME("Sca1");
  { FCNCALL_CALL_CTRL_WRAP(Sca1,Sca1.FCNCALL_CALL(Sca1)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul Sca2;
  {
  FCNCALL_SUBNAME("Sca2");
  { FCNCALL_CALL_CTRL_WRAP(Sca2,Sca2.FCNCALL_CALL(Sca2)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul Sca3;
  {
  FCNCALL_SUBNAME("Sca3");
  { FCNCALL_CALL_CTRL_WRAP(Sca3,Sca3.FCNCALL_CALL(Sca3)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul Sca4;
  {
  FCNCALL_SUBNAME("Sca4");
  { FCNCALL_CALL_CTRL_WRAP(Sca4,Sca4.FCNCALL_CALL(Sca4)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul Sca5;
  {
  FCNCALL_SUBNAME("Sca5");
  { FCNCALL_CALL_CTRL_WRAP(Sca5,Sca5.FCNCALL_CALL(Sca5)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul Sca6;
  {
  FCNCALL_SUBNAME("Sca6");
  { FCNCALL_CALL_CTRL_WRAP(Sca6,Sca6.FCNCALL_CALL(Sca6)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul Sca7;
  {
  FCNCALL_SUBNAME("Sca7");
  { FCNCALL_CALL_CTRL_WRAP(Sca7,Sca7.FCNCALL_CALL(Sca7)); }
  FCNCALL_SUBNAME_END;
  }
  // FZD_Modul time;
  {
  FCNCALL_SUBNAME("time");
  { FCNCALL_CALL_CTRL_WRAP(time,time.FCNCALL_CALL(time)); }
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
