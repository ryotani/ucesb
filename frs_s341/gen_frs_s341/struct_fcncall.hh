/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_EMPTY_32BIT_WORD_V775_FRS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(EMPTY_32BIT_WORD_V775_FRS)::FCNCALL_NAME(EMPTY_32BIT_WORD_V775_FRS)
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
#endif//USER_DEF_EMPTY_32BIT_WORD_V775_FRS

#ifndef USER_DEF_EMPTY_32BIT_WORD_V830_FRS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(EMPTY_32BIT_WORD_V830_FRS)::FCNCALL_NAME(EMPTY_32BIT_WORD_V830_FRS)
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
#endif//USER_DEF_EMPTY_32BIT_WORD_V830_FRS

#ifndef USER_DEF_VME_CAEN_V259_FRS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V259_FRS)::FCNCALL_NAME(VME_CAEN_V259_FRS)
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
      // uint32 dummy_0_23 : 24;
      // uint32 unnamed_24_26 : 3;
      // uint32 geom : 5;
    // } ;
    // uint32 u32;
  // } eob;
  {
  FCNCALL_SUBNAME("eob");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 dummy_0_23 : 24;
    // uint32 unnamed_24_26 : 3;
    // uint32 geom : 5;
  // } ;
  // uint32 dummy_0_23 : 24;
  {
  FCNCALL_SUBNAME("dummy_0_23");
  { FCNCALL_CALL_CTRL_WRAP(eob.dummy_0_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,eob.dummy_0_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_24_26 : 3;
  {
  FCNCALL_SUBNAME("unnamed_24_26");
  { FCNCALL_CALL_CTRL_WRAP(eob.unnamed_24_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,eob.unnamed_24_26)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(eob.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,eob.geom)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(eob.u32,FCNCALL_CALL_TYPE(uint32,eob.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V259_FRS

#ifndef USER_DEF_VME_CAEN_V775_FRS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V775_FRS)::FCNCALL_NAME(VME_CAEN_V775_FRS)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA12_OVERFLOW,DATA12_OVERFLOW,32> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 event_number : 24;
      // uint32 unnamed_24_26 : 3;
      // uint32 geom : 5;
    // } ;
    // uint32 u32;
  // } eob;
  {
  FCNCALL_SUBNAME("eob");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 event_number : 24;
    // uint32 unnamed_24_26 : 3;
    // uint32 geom : 5;
  // } ;
  // uint32 event_number : 24;
  {
  FCNCALL_SUBNAME("event_number");
  { FCNCALL_CALL_CTRL_WRAP(eob.event_number,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,eob.event_number)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_24_26 : 3;
  {
  FCNCALL_SUBNAME("unnamed_24_26");
  { FCNCALL_CALL_CTRL_WRAP(eob.unnamed_24_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,eob.unnamed_24_26)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(eob.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,eob.geom)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(eob.u32,FCNCALL_CALL_TYPE(uint32,eob.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V775_FRS

#ifndef USER_DEF_VME_CAEN_V830_FRS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V830_FRS)::FCNCALL_NAME(VME_CAEN_V830_FRS)
{
  FCNCALL_INIT;
  // raw_array<DATA32,DATA32,32> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_26 : 27;
      // uint32 geom : 5;
    // } ;
    // uint32 u32;
  // } eob;
  {
  FCNCALL_SUBNAME("eob");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_26 : 27;
    // uint32 geom : 5;
  // } ;
  // uint32 unnamed_0_26 : 27;
  {
  FCNCALL_SUBNAME("unnamed_0_26");
  { FCNCALL_CALL_CTRL_WRAP(eob.unnamed_0_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,eob.unnamed_0_26)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(eob.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,eob.geom)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(eob.u32,FCNCALL_CALL_TYPE(uint32,eob.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V830_FRS

#ifndef USER_DEF_FRS_CRATE
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FRS_CRATE)::FCNCALL_NAME(FRS_CRATE)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // VME_CAEN_V830_FRS scaler0;
  {
  FCNCALL_SUBNAME("scaler0");
  { FCNCALL_CALL_CTRL_WRAP(scaler0,scaler0.FCNCALL_CALL(scaler0)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775_FRS tdc0;
  {
  FCNCALL_SUBNAME("tdc0");
  { FCNCALL_CALL_CTRL_WRAP(tdc0,tdc0.FCNCALL_CALL(tdc0)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V259_FRS pattern;
  {
  FCNCALL_SUBNAME("pattern");
  { FCNCALL_CALL_CTRL_WRAP(pattern,pattern.FCNCALL_CALL(pattern)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775_FRS tdc1;
  {
  FCNCALL_SUBNAME("tdc1");
  { FCNCALL_CALL_CTRL_WRAP(tdc1,tdc1.FCNCALL_CALL(tdc1)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775_FRS qdc0;
  {
  FCNCALL_SUBNAME("qdc0");
  { FCNCALL_CALL_CTRL_WRAP(qdc0,qdc0.FCNCALL_CALL(qdc0)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775_FRS adc0;
  {
  FCNCALL_SUBNAME("adc0");
  { FCNCALL_CALL_CTRL_WRAP(adc0,adc0.FCNCALL_CALL(adc0)); }
  FCNCALL_SUBNAME_END;
  }
  // EMPTY_32BIT_WORD_V830_FRS dummy0;
  {
  FCNCALL_SUBNAME("dummy0");
  { FCNCALL_CALL_CTRL_WRAP(dummy0,dummy0.FCNCALL_CALL(dummy0)); }
  FCNCALL_SUBNAME_END;
  }
  // EMPTY_32BIT_WORD_V775_FRS dummy1;
  {
  FCNCALL_SUBNAME("dummy1");
  { FCNCALL_CALL_CTRL_WRAP(dummy1,dummy1.FCNCALL_CALL(dummy1)); }
  FCNCALL_SUBNAME_END;
  }
  // EMPTY_32BIT_WORD_V775_FRS dummy2;
  {
  FCNCALL_SUBNAME("dummy2");
  { FCNCALL_CALL_CTRL_WRAP(dummy2,dummy2.FCNCALL_CALL(dummy2)); }
  FCNCALL_SUBNAME_END;
  }
  // EMPTY_32BIT_WORD_V775_FRS dummy3;
  {
  FCNCALL_SUBNAME("dummy3");
  { FCNCALL_CALL_CTRL_WRAP(dummy3,dummy3.FCNCALL_CALL(dummy3)); }
  FCNCALL_SUBNAME_END;
  }
  // EMPTY_32BIT_WORD_V775_FRS dummy4;
  {
  FCNCALL_SUBNAME("dummy4");
  { FCNCALL_CALL_CTRL_WRAP(dummy4,dummy4.FCNCALL_CALL(dummy4)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_FRS_CRATE

#ifndef USER_DEF_TPC_CRATE
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TPC_CRATE)::FCNCALL_NAME(TPC_CRATE)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // VME_CAEN_V830_FRS scaler0;
  {
  FCNCALL_SUBNAME("scaler0");
  { FCNCALL_CALL_CTRL_WRAP(scaler0,scaler0.FCNCALL_CALL(scaler0)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775_FRS tdc0;
  {
  FCNCALL_SUBNAME("tdc0");
  { FCNCALL_CALL_CTRL_WRAP(tdc0,tdc0.FCNCALL_CALL(tdc0)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775_FRS tdc1;
  {
  FCNCALL_SUBNAME("tdc1");
  { FCNCALL_CALL_CTRL_WRAP(tdc1,tdc1.FCNCALL_CALL(tdc1)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775_FRS adc0;
  {
  FCNCALL_SUBNAME("adc0");
  { FCNCALL_CALL_CTRL_WRAP(adc0,adc0.FCNCALL_CALL(adc0)); }
  FCNCALL_SUBNAME_END;
  }
  // EMPTY_32BIT_WORD_V830_FRS dummy0;
  {
  FCNCALL_SUBNAME("dummy0");
  { FCNCALL_CALL_CTRL_WRAP(dummy0,dummy0.FCNCALL_CALL(dummy0)); }
  FCNCALL_SUBNAME_END;
  }
  // EMPTY_32BIT_WORD_V775_FRS dummy1;
  {
  FCNCALL_SUBNAME("dummy1");
  { FCNCALL_CALL_CTRL_WRAP(dummy1,dummy1.FCNCALL_CALL(dummy1)); }
  FCNCALL_SUBNAME_END;
  }
  // EMPTY_32BIT_WORD_V775_FRS dummy2;
  {
  FCNCALL_SUBNAME("dummy2");
  { FCNCALL_CALL_CTRL_WRAP(dummy2,dummy2.FCNCALL_CALL(dummy2)); }
  FCNCALL_SUBNAME_END;
  }
  // EMPTY_32BIT_WORD_V775_FRS dummy3;
  {
  FCNCALL_SUBNAME("dummy3");
  { FCNCALL_CALL_CTRL_WRAP(dummy3,dummy3.FCNCALL_CALL(dummy3)); }
  FCNCALL_SUBNAME_END;
  }
  // EMPTY_32BIT_WORD_V775_FRS dummy4;
  {
  FCNCALL_SUBNAME("dummy4");
  { FCNCALL_CALL_CTRL_WRAP(dummy4,dummy4.FCNCALL_CALL(dummy4)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775_FRS adc1;
  {
  FCNCALL_SUBNAME("adc1");
  { FCNCALL_CALL_CTRL_WRAP(adc1,adc1.FCNCALL_CALL(adc1)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TPC_CRATE

#ifndef USER_DEF_unpack_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(unpack_event)::FCNCALL_NAME(unpack_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_event_base,FCNCALL_CLASS_NAME(unpack_event_base)::FCNCALL_CALL_BASE());
  // FRS_CRATE vme0;
  {
  FCNCALL_SUBNAME("vme0");
  { FCNCALL_CALL_CTRL_WRAP(vme0,vme0.FCNCALL_CALL(vme0)); }
  FCNCALL_SUBNAME_END;
  }
  // TPC_CRATE vme1;
  {
  FCNCALL_SUBNAME("vme1");
  { FCNCALL_CALL_CTRL_WRAP(vme1,vme1.FCNCALL_CALL(vme1)); }
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
