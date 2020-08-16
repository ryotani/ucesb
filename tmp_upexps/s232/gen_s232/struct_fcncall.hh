/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_CAMAC_LECROY_4434
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CAMAC_LECROY_4434)::FCNCALL_NAME(CAMAC_LECROY_4434)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA24,DATA24,32> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_CAMAC_LECROY_4434

#ifndef USER_DEF_CAMAC_PHILLIPS_7164
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CAMAC_PHILLIPS_7164)::FCNCALL_NAME(CAMAC_PHILLIPS_7164)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA12,DATA12,16> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_CAMAC_PHILLIPS_7164

#ifndef USER_DEF_CAMAC_SILENA_4418
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CAMAC_SILENA_4418)::FCNCALL_NAME(CAMAC_SILENA_4418)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA12_OVERFLOW,DATA12_OVERFLOW,8> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_CAMAC_SILENA_4418

#ifndef USER_DEF_FASTBUS_LECROY_1875
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FASTBUS_LECROY_1875)::FCNCALL_NAME(FASTBUS_LECROY_1875)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA12_RANGE,DATA12_RANGE,64> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_FASTBUS_LECROY_1875

#ifndef USER_DEF_FASTBUS_LECROY_1885
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FASTBUS_LECROY_1885)::FCNCALL_NAME(FASTBUS_LECROY_1885)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA12_RANGE,DATA12_RANGE,96> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_FASTBUS_LECROY_1885

#ifndef USER_DEF_NTP64_TIME
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(NTP64_TIME)::FCNCALL_NAME(NTP64_TIME)
{
  FCNCALL_INIT;
  // uint32 sec;
  {
  FCNCALL_SUBNAME("sec");
  { FCNCALL_CALL_CTRL_WRAP(sec,FCNCALL_CALL_TYPE(uint32,sec)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 frac;
  {
  FCNCALL_SUBNAME("frac");
  { FCNCALL_CALL_CTRL_WRAP(frac,FCNCALL_CALL_TYPE(uint32,frac)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_NTP64_TIME

#ifndef USER_DEF_NTP_MESSAGE
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(NTP_MESSAGE)::FCNCALL_NAME(NTP_MESSAGE)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 word_count : 16;
      // uint32 quick_burst : 1;
      // uint32 dummy_17_23 : 7;
      // uint32 id : 8;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 word_count : 16;
    // uint32 quick_burst : 1;
    // uint32 dummy_17_23 : 7;
    // uint32 id : 8;
  // } ;
  // uint32 word_count : 16;
  {
  FCNCALL_SUBNAME("word_count");
  { FCNCALL_CALL_CTRL_WRAP(header.word_count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.word_count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 quick_burst : 1;
  {
  FCNCALL_SUBNAME("quick_burst");
  { FCNCALL_CALL_CTRL_WRAP(header.quick_burst,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.quick_burst)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_17_23 : 7;
  {
  FCNCALL_SUBNAME("dummy_17_23");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy_17_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy_17_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 id : 8;
  {
  FCNCALL_SUBNAME("id");
  { FCNCALL_CALL_CTRL_WRAP(header.id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.id)); }
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
  // uint32 server_id;
  {
  FCNCALL_SUBNAME("server_id");
  { FCNCALL_CALL_CTRL_WRAP(server_id,FCNCALL_CALL_TYPE(uint32,server_id)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 precision : 8;
      // uint32 poll : 8;
      // uint32 stratum : 4;
      // uint32 dummy_20_23 : 4;
      // uint32 mode : 3;
      // uint32 version : 3;
      // uint32 leap : 2;
    // } ;
    // uint32 u32;
  // } sspp;
  {
  FCNCALL_SUBNAME("sspp");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 precision : 8;
    // uint32 poll : 8;
    // uint32 stratum : 4;
    // uint32 dummy_20_23 : 4;
    // uint32 mode : 3;
    // uint32 version : 3;
    // uint32 leap : 2;
  // } ;
  // uint32 precision : 8;
  {
  FCNCALL_SUBNAME("precision");
  { FCNCALL_CALL_CTRL_WRAP(sspp.precision,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,sspp.precision)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 poll : 8;
  {
  FCNCALL_SUBNAME("poll");
  { FCNCALL_CALL_CTRL_WRAP(sspp.poll,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,sspp.poll)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 stratum : 4;
  {
  FCNCALL_SUBNAME("stratum");
  { FCNCALL_CALL_CTRL_WRAP(sspp.stratum,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,sspp.stratum)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_20_23 : 4;
  {
  FCNCALL_SUBNAME("dummy_20_23");
  { FCNCALL_CALL_CTRL_WRAP(sspp.dummy_20_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,sspp.dummy_20_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 mode : 3;
  {
  FCNCALL_SUBNAME("mode");
  { FCNCALL_CALL_CTRL_WRAP(sspp.mode,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,sspp.mode)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 version : 3;
  {
  FCNCALL_SUBNAME("version");
  { FCNCALL_CALL_CTRL_WRAP(sspp.version,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,sspp.version)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 leap : 2;
  {
  FCNCALL_SUBNAME("leap");
  { FCNCALL_CALL_CTRL_WRAP(sspp.leap,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,sspp.leap)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(sspp.u32,FCNCALL_CALL_TYPE(uint32,sspp.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 frac : 16;
      // uint32 sec : 16;
    // } ;
    // uint32 u32;
  // } root_dly;
  {
  FCNCALL_SUBNAME("root_dly");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 frac : 16;
    // uint32 sec : 16;
  // } ;
  // uint32 frac : 16;
  {
  FCNCALL_SUBNAME("frac");
  { FCNCALL_CALL_CTRL_WRAP(root_dly.frac,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,root_dly.frac)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sec : 16;
  {
  FCNCALL_SUBNAME("sec");
  { FCNCALL_CALL_CTRL_WRAP(root_dly.sec,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,root_dly.sec)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(root_dly.u32,FCNCALL_CALL_TYPE(uint32,root_dly.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 frac : 16;
      // uint32 sec : 16;
    // } ;
    // uint32 u32;
  // } root_disp;
  {
  FCNCALL_SUBNAME("root_disp");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 frac : 16;
    // uint32 sec : 16;
  // } ;
  // uint32 frac : 16;
  {
  FCNCALL_SUBNAME("frac");
  { FCNCALL_CALL_CTRL_WRAP(root_disp.frac,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,root_disp.frac)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sec : 16;
  {
  FCNCALL_SUBNAME("sec");
  { FCNCALL_CALL_CTRL_WRAP(root_disp.sec,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,root_disp.sec)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(root_disp.u32,FCNCALL_CALL_TYPE(uint32,root_disp.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // uint32 refid;
  {
  FCNCALL_SUBNAME("refid");
  { FCNCALL_CALL_CTRL_WRAP(refid,FCNCALL_CALL_TYPE(uint32,refid)); }
  FCNCALL_SUBNAME_END;
  }
  // NTP64_TIME orig2time;
  {
  FCNCALL_SUBNAME("orig2time");
  { FCNCALL_CALL_CTRL_WRAP(orig2time,orig2time.FCNCALL_CALL(orig2time)); }
  FCNCALL_SUBNAME_END;
  }
  // NTP64_TIME tmit2time;
  {
  FCNCALL_SUBNAME("tmit2time");
  { FCNCALL_CALL_CTRL_WRAP(tmit2time,tmit2time.FCNCALL_CALL(tmit2time)); }
  FCNCALL_SUBNAME_END;
  }
  // NTP64_TIME rec2time;
  {
  FCNCALL_SUBNAME("rec2time");
  { FCNCALL_CALL_CTRL_WRAP(rec2time,rec2time.FCNCALL_CALL(rec2time)); }
  FCNCALL_SUBNAME_END;
  }
  // NTP64_TIME rx2time;
  {
  FCNCALL_SUBNAME("rx2time");
  { FCNCALL_CALL_CTRL_WRAP(rx2time,rx2time.FCNCALL_CALL(rx2time)); }
  FCNCALL_SUBNAME_END;
  }
  // NTP64_TIME reftime;
  {
  FCNCALL_SUBNAME("reftime");
  { FCNCALL_CALL_CTRL_WRAP(reftime,reftime.FCNCALL_CALL(reftime)); }
  FCNCALL_SUBNAME_END;
  }
  // NTP64_TIME origtime;
  {
  FCNCALL_SUBNAME("origtime");
  { FCNCALL_CALL_CTRL_WRAP(origtime,origtime.FCNCALL_CALL(origtime)); }
  FCNCALL_SUBNAME_END;
  }
  // NTP64_TIME rectime;
  {
  FCNCALL_SUBNAME("rectime");
  { FCNCALL_CALL_CTRL_WRAP(rectime,rectime.FCNCALL_CALL(rectime)); }
  FCNCALL_SUBNAME_END;
  }
  // NTP64_TIME tmittime;
  {
  FCNCALL_SUBNAME("tmittime");
  { FCNCALL_CALL_CTRL_WRAP(tmittime,tmittime.FCNCALL_CALL(tmittime)); }
  FCNCALL_SUBNAME_END;
  }
  // NTP64_TIME rxtime;
  {
  FCNCALL_SUBNAME("rxtime");
  { FCNCALL_CALL_CTRL_WRAP(rxtime,rxtime.FCNCALL_CALL(rxtime)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_NTP_MESSAGE

#ifndef USER_DEF_RANDOM_TCAL_TSTAMP_CLOCK
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(RANDOM_TCAL_TSTAMP_CLOCK)::FCNCALL_NAME(RANDOM_TCAL_TSTAMP_CLOCK)
{
  FCNCALL_INIT;
  // uint32 soft_latches;
  {
  FCNCALL_SUBNAME("soft_latches");
  { FCNCALL_CALL_CTRL_WRAP(soft_latches,FCNCALL_CALL_TYPE(uint32,soft_latches)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 hard_latches;
  {
  FCNCALL_SUBNAME("hard_latches");
  { FCNCALL_CALL_CTRL_WRAP(hard_latches,FCNCALL_CALL_TYPE(uint32,hard_latches)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 clock_ticks;
  {
  FCNCALL_SUBNAME("clock_ticks");
  { FCNCALL_CALL_CTRL_WRAP(clock_ticks,FCNCALL_CALL_TYPE(uint32,clock_ticks)); }
  FCNCALL_SUBNAME_END;
  }
  // NTP64_TIME before;
  {
  FCNCALL_SUBNAME("before");
  { FCNCALL_CALL_CTRL_WRAP(before,before.FCNCALL_CALL(before)); }
  FCNCALL_SUBNAME_END;
  }
  // NTP64_TIME after;
  {
  FCNCALL_SUBNAME("after");
  { FCNCALL_CALL_CTRL_WRAP(after,after.FCNCALL_CALL(after)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_RANDOM_TCAL_TSTAMP_CLOCK

#ifndef USER_DEF_RANDOM_TCAL
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(RANDOM_TCAL)::FCNCALL_NAME(RANDOM_TCAL)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 word_count : 8;
      // uint32 pulses : 4;
      // uint32 clock_bits : 6;
      // uint32 has_tstamp1 : 1;
      // uint32 has_tstamp2 : 1;
      // uint32 dummy_20_23 : 4;
      // uint32 id : 8;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 word_count : 8;
    // uint32 pulses : 4;
    // uint32 clock_bits : 6;
    // uint32 has_tstamp1 : 1;
    // uint32 has_tstamp2 : 1;
    // uint32 dummy_20_23 : 4;
    // uint32 id : 8;
  // } ;
  // uint32 word_count : 8;
  {
  FCNCALL_SUBNAME("word_count");
  { FCNCALL_CALL_CTRL_WRAP(header.word_count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.word_count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 pulses : 4;
  {
  FCNCALL_SUBNAME("pulses");
  { FCNCALL_CALL_CTRL_WRAP(header.pulses,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.pulses)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 clock_bits : 6;
  {
  FCNCALL_SUBNAME("clock_bits");
  { FCNCALL_CALL_CTRL_WRAP(header.clock_bits,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.clock_bits)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_tstamp1 : 1;
  {
  FCNCALL_SUBNAME("has_tstamp1");
  { FCNCALL_CALL_CTRL_WRAP(header.has_tstamp1,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.has_tstamp1)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_tstamp2 : 1;
  {
  FCNCALL_SUBNAME("has_tstamp2");
  { FCNCALL_CALL_CTRL_WRAP(header.has_tstamp2,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.has_tstamp2)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_20_23 : 4;
  {
  FCNCALL_SUBNAME("dummy_20_23");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy_20_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy_20_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 id : 8;
  {
  FCNCALL_SUBNAME("id");
  { FCNCALL_CALL_CTRL_WRAP(header.id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.id)); }
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
  // RANDOM_TCAL_TSTAMP_CLOCK tstamp1;
  {
  FCNCALL_SUBNAME("tstamp1");
  { FCNCALL_CALL_CTRL_WRAP(tstamp1,tstamp1.FCNCALL_CALL(tstamp1)); }
  FCNCALL_SUBNAME_END;
  }
  // RANDOM_TCAL_TSTAMP_CLOCK tstamp2;
  {
  FCNCALL_SUBNAME("tstamp2");
  { FCNCALL_CALL_CTRL_WRAP(tstamp2,tstamp2.FCNCALL_CALL(tstamp2)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_RANDOM_TCAL

#ifndef USER_DEF_SOFT_SCALER32
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(SOFT_SCALER32)::FCNCALL_NAME(SOFT_SCALER32)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA32,DATA32,32> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_SOFT_SCALER32

#ifndef USER_DEF_VME_CAEN_V1190_SUBTDC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1190_SUBTDC)::FCNCALL_NAME(VME_CAEN_V1190_SUBTDC)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 bunch_id : 12;
      // uint32 event_id : 12;
      // uint32 tdc : 2;
      // uint32 dummy_26 : 1;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 bunch_id : 12;
    // uint32 event_id : 12;
    // uint32 tdc : 2;
    // uint32 dummy_26 : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 bunch_id : 12;
  {
  FCNCALL_SUBNAME("bunch_id");
  { FCNCALL_CALL_CTRL_WRAP(header.bunch_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.bunch_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 event_id : 12;
  {
  FCNCALL_SUBNAME("event_id");
  { FCNCALL_CALL_CTRL_WRAP(header.event_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.event_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc : 2;
  {
  FCNCALL_SUBNAME("tdc");
  { FCNCALL_CALL_CTRL_WRAP(header.tdc,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.tdc)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_26 : 1;
  {
  FCNCALL_SUBNAME("dummy_26");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy_26)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_27_31)); }
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
      // uint32 flags : 15;
      // uint32 dummy_15_23 : 9;
      // uint32 tdc : 2;
      // uint32 dummy_26 : 1;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } error_flags;
  {
  FCNCALL_SUBNAME("error_flags");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 flags : 15;
    // uint32 dummy_15_23 : 9;
    // uint32 tdc : 2;
    // uint32 dummy_26 : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 flags : 15;
  {
  FCNCALL_SUBNAME("flags");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.flags,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.flags)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_15_23 : 9;
  {
  FCNCALL_SUBNAME("dummy_15_23");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.dummy_15_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.dummy_15_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc : 2;
  {
  FCNCALL_SUBNAME("tdc");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.tdc,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.tdc)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_26 : 1;
  {
  FCNCALL_SUBNAME("dummy_26");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.dummy_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.dummy_26)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.u32,FCNCALL_CALL_TYPE(uint32,error_flags.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 word_count : 12;
      // uint32 event_id : 12;
      // uint32 tdc : 2;
      // uint32 dummy_26 : 1;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } trailer;
  {
  FCNCALL_SUBNAME("trailer");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 word_count : 12;
    // uint32 event_id : 12;
    // uint32 tdc : 2;
    // uint32 dummy_26 : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 word_count : 12;
  {
  FCNCALL_SUBNAME("word_count");
  { FCNCALL_CALL_CTRL_WRAP(trailer.word_count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.word_count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 event_id : 12;
  {
  FCNCALL_SUBNAME("event_id");
  { FCNCALL_CALL_CTRL_WRAP(trailer.event_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.event_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc : 2;
  {
  FCNCALL_SUBNAME("tdc");
  { FCNCALL_CALL_CTRL_WRAP(trailer.tdc,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.tdc)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_26 : 1;
  {
  FCNCALL_SUBNAME("dummy_26");
  { FCNCALL_CALL_CTRL_WRAP(trailer.dummy_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.dummy_26)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(trailer.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trailer.u32,FCNCALL_CALL_TYPE(uint32,trailer.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V1190_SUBTDC

#ifndef USER_DEF_VME_CAEN_V1190
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1190)::FCNCALL_NAME(VME_CAEN_V1190)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 geom : 5;
      // uint32 event_number : 22;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 geom : 5;
    // uint32 event_number : 22;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(header.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 event_number : 22;
  {
  FCNCALL_SUBNAME("event_number");
  { FCNCALL_CALL_CTRL_WRAP(header.event_number,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.event_number)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_27_31)); }
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
  // VME_CAEN_V1190_SUBTDC tdc[4];
  {
  FCNCALL_SUBNAME("tdc");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(tdc__i0,,__i0,tdc[__i0].FCNCALL_CALL(tdc[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 time_tag : 27;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } trigger;
  {
  FCNCALL_SUBNAME("trigger");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 time_tag : 27;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 time_tag : 27;
  {
  FCNCALL_SUBNAME("time_tag");
  { FCNCALL_CALL_CTRL_WRAP(trigger.time_tag,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger.time_tag)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(trigger.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trigger.u32,FCNCALL_CALL_TYPE(uint32,trigger.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 geom : 5;
      // uint32 word_count : 15;
      // uint32 dummy_20_23 : 4;
      // uint32 tdc_error : 1;
      // uint32 buffer_overflow : 1;
      // uint32 trigger_lost : 1;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } trailer;
  {
  FCNCALL_SUBNAME("trailer");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 geom : 5;
    // uint32 word_count : 15;
    // uint32 dummy_20_23 : 4;
    // uint32 tdc_error : 1;
    // uint32 buffer_overflow : 1;
    // uint32 trigger_lost : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(trailer.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 word_count : 15;
  {
  FCNCALL_SUBNAME("word_count");
  { FCNCALL_CALL_CTRL_WRAP(trailer.word_count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.word_count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_20_23 : 4;
  {
  FCNCALL_SUBNAME("dummy_20_23");
  { FCNCALL_CALL_CTRL_WRAP(trailer.dummy_20_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.dummy_20_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc_error : 1;
  {
  FCNCALL_SUBNAME("tdc_error");
  { FCNCALL_CALL_CTRL_WRAP(trailer.tdc_error,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.tdc_error)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 buffer_overflow : 1;
  {
  FCNCALL_SUBNAME("buffer_overflow");
  { FCNCALL_CALL_CTRL_WRAP(trailer.buffer_overflow,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.buffer_overflow)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_lost : 1;
  {
  FCNCALL_SUBNAME("trigger_lost");
  { FCNCALL_CALL_CTRL_WRAP(trailer.trigger_lost,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.trigger_lost)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(trailer.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trailer.u32,FCNCALL_CALL_TYPE(uint32,trailer.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V1190

#ifndef USER_DEF_VME_CAEN_V1190_SHORT_SUBTDC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1190_SHORT_SUBTDC)::FCNCALL_NAME(VME_CAEN_V1190_SHORT_SUBTDC)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V1190_SHORT_SUBTDC

#ifndef USER_DEF_VME_CAEN_V1190_SHORT_SUBTDC_ERROR
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1190_SHORT_SUBTDC_ERROR)::FCNCALL_NAME(VME_CAEN_V1190_SHORT_SUBTDC_ERROR)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 flags : 15;
      // uint32 dummy_15_23 : 9;
      // uint32 tdc : 2;
      // uint32 dummy_26 : 1;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } error_flags;
  {
  FCNCALL_SUBNAME("error_flags");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 flags : 15;
    // uint32 dummy_15_23 : 9;
    // uint32 tdc : 2;
    // uint32 dummy_26 : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 flags : 15;
  {
  FCNCALL_SUBNAME("flags");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.flags,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.flags)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_15_23 : 9;
  {
  FCNCALL_SUBNAME("dummy_15_23");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.dummy_15_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.dummy_15_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc : 2;
  {
  FCNCALL_SUBNAME("tdc");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.tdc,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.tdc)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_26 : 1;
  {
  FCNCALL_SUBNAME("dummy_26");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.dummy_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.dummy_26)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.u32,FCNCALL_CALL_TYPE(uint32,error_flags.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V1190_SHORT_SUBTDC_ERROR

#ifndef USER_DEF_VME_CAEN_V1190_SHORT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1190_SHORT)::FCNCALL_NAME(VME_CAEN_V1190_SHORT)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 geom : 5;
      // uint32 event_number : 22;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 geom : 5;
    // uint32 event_number : 22;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(header.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 event_number : 22;
  {
  FCNCALL_SUBNAME("event_number");
  { FCNCALL_CALL_CTRL_WRAP(header.event_number,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.event_number)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_27_31)); }
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
  // VME_CAEN_V1190_SHORT_SUBTDC tdc[4];
  {
  FCNCALL_SUBNAME("tdc");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(tdc__i0,,__i0,tdc[__i0].FCNCALL_CALL(tdc[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V1190_SHORT_SUBTDC_ERROR err[4];
  {
  FCNCALL_SUBNAME("err");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(err__i0,,__i0,err[__i0].FCNCALL_CALL(err[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 time_tag : 27;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } trigger;
  {
  FCNCALL_SUBNAME("trigger");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 time_tag : 27;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 time_tag : 27;
  {
  FCNCALL_SUBNAME("time_tag");
  { FCNCALL_CALL_CTRL_WRAP(trigger.time_tag,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger.time_tag)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(trigger.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trigger.u32,FCNCALL_CALL_TYPE(uint32,trigger.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 geom : 5;
      // uint32 word_count : 15;
      // uint32 dummy_20_23 : 4;
      // uint32 tdc_error : 1;
      // uint32 buffer_overflow : 1;
      // uint32 trigger_lost : 1;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } trailer;
  {
  FCNCALL_SUBNAME("trailer");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 geom : 5;
    // uint32 word_count : 15;
    // uint32 dummy_20_23 : 4;
    // uint32 tdc_error : 1;
    // uint32 buffer_overflow : 1;
    // uint32 trigger_lost : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(trailer.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 word_count : 15;
  {
  FCNCALL_SUBNAME("word_count");
  { FCNCALL_CALL_CTRL_WRAP(trailer.word_count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.word_count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_20_23 : 4;
  {
  FCNCALL_SUBNAME("dummy_20_23");
  { FCNCALL_CALL_CTRL_WRAP(trailer.dummy_20_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.dummy_20_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc_error : 1;
  {
  FCNCALL_SUBNAME("tdc_error");
  { FCNCALL_CALL_CTRL_WRAP(trailer.tdc_error,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.tdc_error)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 buffer_overflow : 1;
  {
  FCNCALL_SUBNAME("buffer_overflow");
  { FCNCALL_CALL_CTRL_WRAP(trailer.buffer_overflow,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.buffer_overflow)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_lost : 1;
  {
  FCNCALL_SUBNAME("trigger_lost");
  { FCNCALL_CALL_CTRL_WRAP(trailer.trigger_lost,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.trigger_lost)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(trailer.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trailer.u32,FCNCALL_CALL_TYPE(uint32,trailer.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V1190_SHORT

#ifndef USER_DEF_VME_CAEN_V1290_SUBTDC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1290_SUBTDC)::FCNCALL_NAME(VME_CAEN_V1290_SUBTDC)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 bunch_id : 12;
      // uint32 event_id : 12;
      // uint32 tdc : 2;
      // uint32 dummy_26 : 1;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 bunch_id : 12;
    // uint32 event_id : 12;
    // uint32 tdc : 2;
    // uint32 dummy_26 : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 bunch_id : 12;
  {
  FCNCALL_SUBNAME("bunch_id");
  { FCNCALL_CALL_CTRL_WRAP(header.bunch_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.bunch_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 event_id : 12;
  {
  FCNCALL_SUBNAME("event_id");
  { FCNCALL_CALL_CTRL_WRAP(header.event_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.event_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc : 2;
  {
  FCNCALL_SUBNAME("tdc");
  { FCNCALL_CALL_CTRL_WRAP(header.tdc,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.tdc)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_26 : 1;
  {
  FCNCALL_SUBNAME("dummy_26");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy_26)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_27_31)); }
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
      // uint32 flags : 15;
      // uint32 dummy_15_23 : 9;
      // uint32 tdc : 2;
      // uint32 dummy_26 : 1;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } error_flags;
  {
  FCNCALL_SUBNAME("error_flags");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 flags : 15;
    // uint32 dummy_15_23 : 9;
    // uint32 tdc : 2;
    // uint32 dummy_26 : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 flags : 15;
  {
  FCNCALL_SUBNAME("flags");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.flags,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.flags)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_15_23 : 9;
  {
  FCNCALL_SUBNAME("dummy_15_23");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.dummy_15_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.dummy_15_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc : 2;
  {
  FCNCALL_SUBNAME("tdc");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.tdc,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.tdc)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_26 : 1;
  {
  FCNCALL_SUBNAME("dummy_26");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.dummy_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.dummy_26)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.u32,FCNCALL_CALL_TYPE(uint32,error_flags.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 word_count : 12;
      // uint32 event_id : 12;
      // uint32 tdc : 2;
      // uint32 dummy_26 : 1;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } trailer;
  {
  FCNCALL_SUBNAME("trailer");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 word_count : 12;
    // uint32 event_id : 12;
    // uint32 tdc : 2;
    // uint32 dummy_26 : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 word_count : 12;
  {
  FCNCALL_SUBNAME("word_count");
  { FCNCALL_CALL_CTRL_WRAP(trailer.word_count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.word_count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 event_id : 12;
  {
  FCNCALL_SUBNAME("event_id");
  { FCNCALL_CALL_CTRL_WRAP(trailer.event_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.event_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc : 2;
  {
  FCNCALL_SUBNAME("tdc");
  { FCNCALL_CALL_CTRL_WRAP(trailer.tdc,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.tdc)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_26 : 1;
  {
  FCNCALL_SUBNAME("dummy_26");
  { FCNCALL_CALL_CTRL_WRAP(trailer.dummy_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.dummy_26)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(trailer.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trailer.u32,FCNCALL_CALL_TYPE(uint32,trailer.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V1290_SUBTDC

#ifndef USER_DEF_VME_CAEN_V1290
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1290)::FCNCALL_NAME(VME_CAEN_V1290)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 geom : 5;
      // uint32 event_number : 22;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 geom : 5;
    // uint32 event_number : 22;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(header.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 event_number : 22;
  {
  FCNCALL_SUBNAME("event_number");
  { FCNCALL_CALL_CTRL_WRAP(header.event_number,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.event_number)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_27_31)); }
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
  // VME_CAEN_V1290_SUBTDC tdc[4];
  {
  FCNCALL_SUBNAME("tdc");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(tdc__i0,,__i0,tdc[__i0].FCNCALL_CALL(tdc[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 time_tag : 27;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } trigger;
  {
  FCNCALL_SUBNAME("trigger");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 time_tag : 27;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 time_tag : 27;
  {
  FCNCALL_SUBNAME("time_tag");
  { FCNCALL_CALL_CTRL_WRAP(trigger.time_tag,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger.time_tag)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(trigger.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trigger.u32,FCNCALL_CALL_TYPE(uint32,trigger.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 geom : 5;
      // uint32 word_count : 15;
      // uint32 dummy_20_23 : 4;
      // uint32 tdc_error : 1;
      // uint32 buffer_overflow : 1;
      // uint32 trigger_lost : 1;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } trailer;
  {
  FCNCALL_SUBNAME("trailer");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 geom : 5;
    // uint32 word_count : 15;
    // uint32 dummy_20_23 : 4;
    // uint32 tdc_error : 1;
    // uint32 buffer_overflow : 1;
    // uint32 trigger_lost : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(trailer.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 word_count : 15;
  {
  FCNCALL_SUBNAME("word_count");
  { FCNCALL_CALL_CTRL_WRAP(trailer.word_count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.word_count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_20_23 : 4;
  {
  FCNCALL_SUBNAME("dummy_20_23");
  { FCNCALL_CALL_CTRL_WRAP(trailer.dummy_20_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.dummy_20_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc_error : 1;
  {
  FCNCALL_SUBNAME("tdc_error");
  { FCNCALL_CALL_CTRL_WRAP(trailer.tdc_error,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.tdc_error)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 buffer_overflow : 1;
  {
  FCNCALL_SUBNAME("buffer_overflow");
  { FCNCALL_CALL_CTRL_WRAP(trailer.buffer_overflow,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.buffer_overflow)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_lost : 1;
  {
  FCNCALL_SUBNAME("trigger_lost");
  { FCNCALL_CALL_CTRL_WRAP(trailer.trigger_lost,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.trigger_lost)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(trailer.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trailer.u32,FCNCALL_CALL_TYPE(uint32,trailer.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V1290

#ifndef USER_DEF_VME_CAEN_V1290_SHORT_SUBTDC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1290_SHORT_SUBTDC)::FCNCALL_NAME(VME_CAEN_V1290_SHORT_SUBTDC)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V1290_SHORT_SUBTDC

#ifndef USER_DEF_VME_CAEN_V1290_SHORT_SUBTDC_ERROR
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1290_SHORT_SUBTDC_ERROR)::FCNCALL_NAME(VME_CAEN_V1290_SHORT_SUBTDC_ERROR)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 flags : 15;
      // uint32 dummy_15_23 : 9;
      // uint32 tdc : 2;
      // uint32 dummy_26 : 1;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } error_flags;
  {
  FCNCALL_SUBNAME("error_flags");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 flags : 15;
    // uint32 dummy_15_23 : 9;
    // uint32 tdc : 2;
    // uint32 dummy_26 : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 flags : 15;
  {
  FCNCALL_SUBNAME("flags");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.flags,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.flags)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_15_23 : 9;
  {
  FCNCALL_SUBNAME("dummy_15_23");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.dummy_15_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.dummy_15_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc : 2;
  {
  FCNCALL_SUBNAME("tdc");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.tdc,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.tdc)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_26 : 1;
  {
  FCNCALL_SUBNAME("dummy_26");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.dummy_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.dummy_26)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_flags.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(error_flags.u32,FCNCALL_CALL_TYPE(uint32,error_flags.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V1290_SHORT_SUBTDC_ERROR

#ifndef USER_DEF_VME_CAEN_V1290_SHORT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1290_SHORT)::FCNCALL_NAME(VME_CAEN_V1290_SHORT)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 geom : 5;
      // uint32 event_number : 22;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 geom : 5;
    // uint32 event_number : 22;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(header.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 event_number : 22;
  {
  FCNCALL_SUBNAME("event_number");
  { FCNCALL_CALL_CTRL_WRAP(header.event_number,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.event_number)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_27_31)); }
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
  // VME_CAEN_V1290_SHORT_SUBTDC tdc[4];
  {
  FCNCALL_SUBNAME("tdc");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(tdc__i0,,__i0,tdc[__i0].FCNCALL_CALL(tdc[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V1290_SHORT_SUBTDC_ERROR err[4];
  {
  FCNCALL_SUBNAME("err");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(err__i0,,__i0,err[__i0].FCNCALL_CALL(err[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 time_tag : 27;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } trigger;
  {
  FCNCALL_SUBNAME("trigger");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 time_tag : 27;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 time_tag : 27;
  {
  FCNCALL_SUBNAME("time_tag");
  { FCNCALL_CALL_CTRL_WRAP(trigger.time_tag,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger.time_tag)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(trigger.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trigger.u32,FCNCALL_CALL_TYPE(uint32,trigger.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 geom : 5;
      // uint32 word_count : 15;
      // uint32 dummy_20_23 : 4;
      // uint32 tdc_error : 1;
      // uint32 buffer_overflow : 1;
      // uint32 trigger_lost : 1;
      // uint32 unnamed_27_31 : 5;
    // } ;
    // uint32 u32;
  // } trailer;
  {
  FCNCALL_SUBNAME("trailer");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 geom : 5;
    // uint32 word_count : 15;
    // uint32 dummy_20_23 : 4;
    // uint32 tdc_error : 1;
    // uint32 buffer_overflow : 1;
    // uint32 trigger_lost : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(trailer.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 word_count : 15;
  {
  FCNCALL_SUBNAME("word_count");
  { FCNCALL_CALL_CTRL_WRAP(trailer.word_count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.word_count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_20_23 : 4;
  {
  FCNCALL_SUBNAME("dummy_20_23");
  { FCNCALL_CALL_CTRL_WRAP(trailer.dummy_20_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.dummy_20_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc_error : 1;
  {
  FCNCALL_SUBNAME("tdc_error");
  { FCNCALL_CALL_CTRL_WRAP(trailer.tdc_error,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.tdc_error)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 buffer_overflow : 1;
  {
  FCNCALL_SUBNAME("buffer_overflow");
  { FCNCALL_CALL_CTRL_WRAP(trailer.buffer_overflow,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.buffer_overflow)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_lost : 1;
  {
  FCNCALL_SUBNAME("trigger_lost");
  { FCNCALL_CALL_CTRL_WRAP(trailer.trigger_lost,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.trigger_lost)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_27_31 : 5;
  {
  FCNCALL_SUBNAME("unnamed_27_31");
  { FCNCALL_CALL_CTRL_WRAP(trailer.unnamed_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.unnamed_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trailer.u32,FCNCALL_CALL_TYPE(uint32,trailer.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V1290_SHORT

#ifndef USER_DEF_VME_CAEN_V775
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V775)::FCNCALL_NAME(VME_CAEN_V775)
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
#endif//USER_DEF_VME_CAEN_V775

#ifndef USER_DEF_VME_CAEN_V830
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V830)::FCNCALL_NAME(VME_CAEN_V830)
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
      // uint32 event_number : 16;
      // uint32 ts : 2;
      // uint32 count : 6;
      // uint32 dummy_24_25 : 2;
      // uint32 unnamed_26_26 : 1;
      // uint32 geom : 5;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 event_number : 16;
    // uint32 ts : 2;
    // uint32 count : 6;
    // uint32 dummy_24_25 : 2;
    // uint32 unnamed_26_26 : 1;
    // uint32 geom : 5;
  // } ;
  // uint32 event_number : 16;
  {
  FCNCALL_SUBNAME("event_number");
  { FCNCALL_CALL_CTRL_WRAP(header.event_number,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.event_number)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 ts : 2;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(header.ts,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.ts)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 count : 6;
  {
  FCNCALL_SUBNAME("count");
  { FCNCALL_CALL_CTRL_WRAP(header.count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_24_25 : 2;
  {
  FCNCALL_SUBNAME("dummy_24_25");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy_24_25,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy_24_25)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_26_26 : 1;
  {
  FCNCALL_SUBNAME("unnamed_26_26");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_26_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_26_26)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(header.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.geom)); }
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
#endif//USER_DEF_VME_CAEN_V830

#ifndef USER_DEF_VME_MESYTEC_MADC32
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_MESYTEC_MADC32)::FCNCALL_NAME(VME_MESYTEC_MADC32)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA14_OVERFLOW,DATA14_OVERFLOW,32> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 counter : 30;
      // uint32 unnamed_30_31 : 2;
    // } ;
    // uint32 u32;
  // } end_of_event;
  {
  FCNCALL_SUBNAME("end_of_event");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 counter : 30;
    // uint32 unnamed_30_31 : 2;
  // } ;
  // uint32 counter : 30;
  {
  FCNCALL_SUBNAME("counter");
  { FCNCALL_CALL_CTRL_WRAP(end_of_event.counter,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,end_of_event.counter)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_30_31 : 2;
  {
  FCNCALL_SUBNAME("unnamed_30_31");
  { FCNCALL_CALL_CTRL_WRAP(end_of_event.unnamed_30_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,end_of_event.unnamed_30_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(end_of_event.u32,FCNCALL_CALL_TYPE(uint32,end_of_event.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_MESYTEC_MADC32

#ifndef USER_DEF_VME_MESYTEC_MDPP16
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_MESYTEC_MDPP16)::FCNCALL_NAME(VME_MESYTEC_MDPP16)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,34,100> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 counter : 30;
      // uint32 unnamed_30_31 : 2;
    // } ;
    // uint32 u32;
  // } end_of_event;
  {
  FCNCALL_SUBNAME("end_of_event");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 counter : 30;
    // uint32 unnamed_30_31 : 2;
  // } ;
  // uint32 counter : 30;
  {
  FCNCALL_SUBNAME("counter");
  { FCNCALL_CALL_CTRL_WRAP(end_of_event.counter,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,end_of_event.counter)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_30_31 : 2;
  {
  FCNCALL_SUBNAME("unnamed_30_31");
  { FCNCALL_CALL_CTRL_WRAP(end_of_event.unnamed_30_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,end_of_event.unnamed_30_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(end_of_event.u32,FCNCALL_CALL_TYPE(uint32,end_of_event.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_MESYTEC_MDPP16

#ifndef USER_DEF_LAND_CAMAC_CONVERTER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(LAND_CAMAC_CONVERTER)::FCNCALL_NAME(LAND_CAMAC_CONVERTER)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // uint16 tpat;
  {
  FCNCALL_SUBNAME("tpat");
  { FCNCALL_CALL_CTRL_WRAP(tpat,FCNCALL_CALL_TYPE(uint16,tpat)); }
  FCNCALL_SUBNAME_END;
  }
  // uint16 tprev;
  {
  FCNCALL_SUBNAME("tprev");
  { FCNCALL_CALL_CTRL_WRAP(tprev,FCNCALL_CALL_TYPE(uint16,tprev)); }
  FCNCALL_SUBNAME_END;
  }
  // uint16 tnext;
  {
  FCNCALL_SUBNAME("tnext");
  { FCNCALL_CALL_CTRL_WRAP(tnext,FCNCALL_CALL_TYPE(uint16,tnext)); }
  FCNCALL_SUBNAME_END;
  }
  // uint16 tprev2;
  {
  FCNCALL_SUBNAME("tprev2");
  { FCNCALL_CALL_CTRL_WRAP(tprev2,FCNCALL_CALL_TYPE(uint16,tprev2)); }
  FCNCALL_SUBNAME_END;
  }
  // CAMAC_PHILLIPS_7164 tPHI7079;
  {
  FCNCALL_SUBNAME("tPHI7079");
  { FCNCALL_CALL_CTRL_WRAP(tPHI7079,tPHI7079.FCNCALL_CALL(tPHI7079)); }
  FCNCALL_SUBNAME_END;
  }
  // CAMAC_PHILLIPS_7164 aPHI12160;
  {
  FCNCALL_SUBNAME("aPHI12160");
  { FCNCALL_CALL_CTRL_WRAP(aPHI12160,aPHI12160.FCNCALL_CALL(aPHI12160)); }
  FCNCALL_SUBNAME_END;
  }
  // CAMAC_SILENA_4418 qSIA0418;
  {
  FCNCALL_SUBNAME("qSIA0418");
  { FCNCALL_CALL_CTRL_WRAP(qSIA0418,qSIA0418.FCNCALL_CALL(qSIA0418)); }
  FCNCALL_SUBNAME_END;
  }
  // CAMAC_SILENA_4418 qSIA0415;
  {
  FCNCALL_SUBNAME("qSIA0415");
  { FCNCALL_CALL_CTRL_WRAP(qSIA0415,qSIA0415.FCNCALL_CALL(qSIA0415)); }
  FCNCALL_SUBNAME_END;
  }
  // CAMAC_SILENA_4418 qSIA0458;
  {
  FCNCALL_SUBNAME("qSIA0458");
  { FCNCALL_CALL_CTRL_WRAP(qSIA0458,qSIA0458.FCNCALL_CALL(qSIA0458)); }
  FCNCALL_SUBNAME_END;
  }
  // CAMAC_SILENA_4418 tSIA0400;
  {
  FCNCALL_SUBNAME("tSIA0400");
  { FCNCALL_CALL_CTRL_WRAP(tSIA0400,tSIA0400.FCNCALL_CALL(tSIA0400)); }
  FCNCALL_SUBNAME_END;
  }
  // CAMAC_SILENA_4418 tSIA0426;
  {
  FCNCALL_SUBNAME("tSIA0426");
  { FCNCALL_CALL_CTRL_WRAP(tSIA0426,tSIA0426.FCNCALL_CALL(tSIA0426)); }
  FCNCALL_SUBNAME_END;
  }
  // CAMAC_SILENA_4418 tSIA0401;
  {
  FCNCALL_SUBNAME("tSIA0401");
  { FCNCALL_CALL_CTRL_WRAP(tSIA0401,tSIA0401.FCNCALL_CALL(tSIA0401)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_LAND_CAMAC_CONVERTER

#ifndef USER_DEF_LAND_CAMAC_SCALER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(LAND_CAMAC_SCALER)::FCNCALL_NAME(LAND_CAMAC_SCALER)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // uint32 timestamp;
  {
  FCNCALL_SUBNAME("timestamp");
  { FCNCALL_CALL_CTRL_WRAP(timestamp,FCNCALL_CALL_TYPE(uint32,timestamp)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_31 : 32;
    // } ;
    // uint32 u32;
  // } endianess;
  {
  FCNCALL_SUBNAME("endianess");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_31 : 32;
  // } ;
  // uint32 unnamed_0_31 : 32;
  {
  FCNCALL_SUBNAME("unnamed_0_31");
  { FCNCALL_CALL_CTRL_WRAP(endianess.unnamed_0_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,endianess.unnamed_0_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(endianess.u32,FCNCALL_CALL_TYPE(uint32,endianess.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // CAMAC_LECROY_4434 scaler0;
  {
  FCNCALL_SUBNAME("scaler0");
  { FCNCALL_CALL_CTRL_WRAP(scaler0,scaler0.FCNCALL_CALL(scaler0)); }
  FCNCALL_SUBNAME_END;
  }
  // CAMAC_LECROY_4434 scaler2;
  {
  FCNCALL_SUBNAME("scaler2");
  { FCNCALL_CALL_CTRL_WRAP(scaler2,scaler2.FCNCALL_CALL(scaler2)); }
  FCNCALL_SUBNAME_END;
  }
  // CAMAC_LECROY_4434 scaler1;
  {
  FCNCALL_SUBNAME("scaler1");
  { FCNCALL_CALL_CTRL_WRAP(scaler1,scaler1.FCNCALL_CALL(scaler1)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_LAND_CAMAC_SCALER

#ifndef USER_DEF_LAND_CAMAC_START_STOP_STAMP
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(LAND_CAMAC_START_STOP_STAMP)::FCNCALL_NAME(LAND_CAMAC_START_STOP_STAMP)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // uint32 timestamp;
  {
  FCNCALL_SUBNAME("timestamp");
  { FCNCALL_CALL_CTRL_WRAP(timestamp,FCNCALL_CALL_TYPE(uint32,timestamp)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_31 : 32;
    // } ;
    // uint32 u32;
  // } endianess;
  {
  FCNCALL_SUBNAME("endianess");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_31 : 32;
  // } ;
  // uint32 unnamed_0_31 : 32;
  {
  FCNCALL_SUBNAME("unnamed_0_31");
  { FCNCALL_CALL_CTRL_WRAP(endianess.unnamed_0_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,endianess.unnamed_0_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(endianess.u32,FCNCALL_CALL_TYPE(uint32,endianess.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_LAND_CAMAC_START_STOP_STAMP

#ifndef USER_DEF_LAND_CAMAC_TCAL_INFO
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(LAND_CAMAC_TCAL_INFO)::FCNCALL_NAME(LAND_CAMAC_TCAL_INFO)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // uint32 info;
  {
  FCNCALL_SUBNAME("info");
  { FCNCALL_CALL_CTRL_WRAP(info,FCNCALL_CALL_TYPE(uint32,info)); }
  FCNCALL_SUBNAME_END;
  }
  // RANDOM_TCAL rtcal;
  {
  FCNCALL_SUBNAME("rtcal");
  { FCNCALL_CALL_CTRL_WRAP(rtcal,rtcal.FCNCALL_CALL(rtcal)); }
  FCNCALL_SUBNAME_END;
  }
  // NTP_MESSAGE ntp;
  {
  FCNCALL_SUBNAME("ntp");
  { FCNCALL_CALL_CTRL_WRAP(ntp,ntp.FCNCALL_CALL(ntp)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_LAND_CAMAC_TCAL_INFO

#ifndef USER_DEF_LAND_FASTBUS1
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(LAND_FASTBUS1)::FCNCALL_NAME(LAND_FASTBUS1)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // FASTBUS_LECROY_1875 T87044;
  {
  FCNCALL_SUBNAME("T87044");
  { FCNCALL_CALL_CTRL_WRAP(T87044,T87044.FCNCALL_CALL(T87044)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1875 T81800;
  {
  FCNCALL_SUBNAME("T81800");
  { FCNCALL_CALL_CTRL_WRAP(T81800,T81800.FCNCALL_CALL(T81800)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1875 T87024;
  {
  FCNCALL_SUBNAME("T87024");
  { FCNCALL_CALL_CTRL_WRAP(T87024,T87024.FCNCALL_CALL(T87024)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1885 Q47342;
  {
  FCNCALL_SUBNAME("Q47342");
  { FCNCALL_CALL_CTRL_WRAP(Q47342,Q47342.FCNCALL_CALL(Q47342)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1885 Q11111;
  {
  FCNCALL_SUBNAME("Q11111");
  { FCNCALL_CALL_CTRL_WRAP(Q11111,Q11111.FCNCALL_CALL(Q11111)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1885 Q47264;
  {
  FCNCALL_SUBNAME("Q47264");
  { FCNCALL_CALL_CTRL_WRAP(Q47264,Q47264.FCNCALL_CALL(Q47264)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1885 Q46848;
  {
  FCNCALL_SUBNAME("Q46848");
  { FCNCALL_CALL_CTRL_WRAP(Q46848,Q46848.FCNCALL_CALL(Q46848)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1875 T81855;
  {
  FCNCALL_SUBNAME("T81855");
  { FCNCALL_CALL_CTRL_WRAP(T81855,T81855.FCNCALL_CALL(T81855)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1885 Q17320;
  {
  FCNCALL_SUBNAME("Q17320");
  { FCNCALL_CALL_CTRL_WRAP(Q17320,Q17320.FCNCALL_CALL(Q17320)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1885 Q47315;
  {
  FCNCALL_SUBNAME("Q47315");
  { FCNCALL_CALL_CTRL_WRAP(Q47315,Q47315.FCNCALL_CALL(Q47315)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1885 Q15372;
  {
  FCNCALL_SUBNAME("Q15372");
  { FCNCALL_CALL_CTRL_WRAP(Q15372,Q15372.FCNCALL_CALL(Q15372)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1885 Q46962;
  {
  FCNCALL_SUBNAME("Q46962");
  { FCNCALL_CALL_CTRL_WRAP(Q46962,Q46962.FCNCALL_CALL(Q46962)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1885 Q15358;
  {
  FCNCALL_SUBNAME("Q15358");
  { FCNCALL_CALL_CTRL_WRAP(Q15358,Q15358.FCNCALL_CALL(Q15358)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1885 Q46993;
  {
  FCNCALL_SUBNAME("Q46993");
  { FCNCALL_CALL_CTRL_WRAP(Q46993,Q46993.FCNCALL_CALL(Q46993)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1875 T87047;
  {
  FCNCALL_SUBNAME("T87047");
  { FCNCALL_CALL_CTRL_WRAP(T87047,T87047.FCNCALL_CALL(T87047)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1875 T48854;
  {
  FCNCALL_SUBNAME("T48854");
  { FCNCALL_CALL_CTRL_WRAP(T48854,T48854.FCNCALL_CALL(T48854)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1875 T81808;
  {
  FCNCALL_SUBNAME("T81808");
  { FCNCALL_CALL_CTRL_WRAP(T81808,T81808.FCNCALL_CALL(T81808)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1875 T81859;
  {
  FCNCALL_SUBNAME("T81859");
  { FCNCALL_CALL_CTRL_WRAP(T81859,T81859.FCNCALL_CALL(T81859)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1875 T81795;
  {
  FCNCALL_SUBNAME("T81795");
  { FCNCALL_CALL_CTRL_WRAP(T81795,T81795.FCNCALL_CALL(T81795)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1875 T81806;
  {
  FCNCALL_SUBNAME("T81806");
  { FCNCALL_CALL_CTRL_WRAP(T81806,T81806.FCNCALL_CALL(T81806)); }
  FCNCALL_SUBNAME_END;
  }
  // FASTBUS_LECROY_1875 T48834;
  {
  FCNCALL_SUBNAME("T48834");
  { FCNCALL_CALL_CTRL_WRAP(T48834,T48834.FCNCALL_CALL(T48834)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_LAND_FASTBUS1

#ifndef USER_DEF_LAND_FASTBUS_ERROR
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(LAND_FASTBUS_ERROR)::FCNCALL_NAME(LAND_FASTBUS_ERROR)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // union 
  // {
    // struct 
    // {
      // uint32 timeout_waiting_smi : 1;
      // uint32 illegal_block_transfer : 1;
      // uint32 fifa_address_overflow : 1;
      // uint32 fifa_register_error : 1;
      // uint32 dummy_4_15 : 12;
      // uint32 init_error : 1;
      // uint32 dummy_17_31 : 15;
    // } ;
    // uint32 u32;
  // } error_code;
  {
  FCNCALL_SUBNAME("error_code");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 timeout_waiting_smi : 1;
    // uint32 illegal_block_transfer : 1;
    // uint32 fifa_address_overflow : 1;
    // uint32 fifa_register_error : 1;
    // uint32 dummy_4_15 : 12;
    // uint32 init_error : 1;
    // uint32 dummy_17_31 : 15;
  // } ;
  // uint32 timeout_waiting_smi : 1;
  {
  FCNCALL_SUBNAME("timeout_waiting_smi");
  { FCNCALL_CALL_CTRL_WRAP(error_code.timeout_waiting_smi,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.timeout_waiting_smi)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 illegal_block_transfer : 1;
  {
  FCNCALL_SUBNAME("illegal_block_transfer");
  { FCNCALL_CALL_CTRL_WRAP(error_code.illegal_block_transfer,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.illegal_block_transfer)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 fifa_address_overflow : 1;
  {
  FCNCALL_SUBNAME("fifa_address_overflow");
  { FCNCALL_CALL_CTRL_WRAP(error_code.fifa_address_overflow,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.fifa_address_overflow)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 fifa_register_error : 1;
  {
  FCNCALL_SUBNAME("fifa_register_error");
  { FCNCALL_CALL_CTRL_WRAP(error_code.fifa_register_error,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.fifa_register_error)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_4_15 : 12;
  {
  FCNCALL_SUBNAME("dummy_4_15");
  { FCNCALL_CALL_CTRL_WRAP(error_code.dummy_4_15,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.dummy_4_15)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 init_error : 1;
  {
  FCNCALL_SUBNAME("init_error");
  { FCNCALL_CALL_CTRL_WRAP(error_code.init_error,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.init_error)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_17_31 : 15;
  {
  FCNCALL_SUBNAME("dummy_17_31");
  { FCNCALL_CALL_CTRL_WRAP(error_code.dummy_17_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.dummy_17_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(error_code.u32,FCNCALL_CALL_TYPE(uint32,error_code.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // uint32 error_num;
  {
  FCNCALL_SUBNAME("error_num");
  { FCNCALL_CALL_CTRL_WRAP(error_num,FCNCALL_CALL_TYPE(uint32,error_num)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_LAND_FASTBUS_ERROR

#ifndef USER_DEF_LAND_FASTBUS_ERROR_NGF
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(LAND_FASTBUS_ERROR_NGF)::FCNCALL_NAME(LAND_FASTBUS_ERROR_NGF)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_31 : 32;
    // } ;
    // uint32 u32;
  // } magic;
  {
  FCNCALL_SUBNAME("magic");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_31 : 32;
  // } ;
  // uint32 unnamed_0_31 : 32;
  {
  FCNCALL_SUBNAME("unnamed_0_31");
  { FCNCALL_CALL_CTRL_WRAP(magic.unnamed_0_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,magic.unnamed_0_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(magic.u32,FCNCALL_CALL_TYPE(uint32,magic.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 error : 1;
      // uint32 uninitialized : 1;
      // uint32 ss1 : 1;
      // uint32 wc : 1;
      // uint32 mid : 1;
      // uint32 fifo_empty : 1;
      // uint32 fifo_not_empty : 1;
      // uint32 not_finished : 1;
      // uint32 bad_end_addr : 1;
      // uint32 word_lost : 1;
      // uint32 dummy_10_31 : 22;
    // } ;
    // uint32 u32;
  // } error_code;
  {
  FCNCALL_SUBNAME("error_code");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 error : 1;
    // uint32 uninitialized : 1;
    // uint32 ss1 : 1;
    // uint32 wc : 1;
    // uint32 mid : 1;
    // uint32 fifo_empty : 1;
    // uint32 fifo_not_empty : 1;
    // uint32 not_finished : 1;
    // uint32 bad_end_addr : 1;
    // uint32 word_lost : 1;
    // uint32 dummy_10_31 : 22;
  // } ;
  // uint32 error : 1;
  {
  FCNCALL_SUBNAME("error");
  { FCNCALL_CALL_CTRL_WRAP(error_code.error,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.error)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 uninitialized : 1;
  {
  FCNCALL_SUBNAME("uninitialized");
  { FCNCALL_CALL_CTRL_WRAP(error_code.uninitialized,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.uninitialized)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 ss1 : 1;
  {
  FCNCALL_SUBNAME("ss1");
  { FCNCALL_CALL_CTRL_WRAP(error_code.ss1,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.ss1)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 wc : 1;
  {
  FCNCALL_SUBNAME("wc");
  { FCNCALL_CALL_CTRL_WRAP(error_code.wc,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.wc)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 mid : 1;
  {
  FCNCALL_SUBNAME("mid");
  { FCNCALL_CALL_CTRL_WRAP(error_code.mid,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.mid)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 fifo_empty : 1;
  {
  FCNCALL_SUBNAME("fifo_empty");
  { FCNCALL_CALL_CTRL_WRAP(error_code.fifo_empty,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.fifo_empty)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 fifo_not_empty : 1;
  {
  FCNCALL_SUBNAME("fifo_not_empty");
  { FCNCALL_CALL_CTRL_WRAP(error_code.fifo_not_empty,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.fifo_not_empty)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 not_finished : 1;
  {
  FCNCALL_SUBNAME("not_finished");
  { FCNCALL_CALL_CTRL_WRAP(error_code.not_finished,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.not_finished)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 bad_end_addr : 1;
  {
  FCNCALL_SUBNAME("bad_end_addr");
  { FCNCALL_CALL_CTRL_WRAP(error_code.bad_end_addr,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.bad_end_addr)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 word_lost : 1;
  {
  FCNCALL_SUBNAME("word_lost");
  { FCNCALL_CALL_CTRL_WRAP(error_code.word_lost,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.word_lost)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_10_31 : 22;
  {
  FCNCALL_SUBNAME("dummy_10_31");
  { FCNCALL_CALL_CTRL_WRAP(error_code.dummy_10_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_code.dummy_10_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(error_code.u32,FCNCALL_CALL_TYPE(uint32,error_code.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_LAND_FASTBUS_ERROR_NGF

#ifndef USER_DEF_unpack_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(unpack_event)::FCNCALL_NAME(unpack_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_event_base,FCNCALL_CLASS_NAME(unpack_event_base)::FCNCALL_CALL_BASE());
  // LAND_CAMAC_CONVERTER camac;
  {
  FCNCALL_SUBNAME("camac");
  { FCNCALL_CALL_CTRL_WRAP(camac,camac.FCNCALL_CALL(camac)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_FASTBUS_ERROR fastbus_error;
  {
  FCNCALL_SUBNAME("fastbus_error");
  { FCNCALL_CALL_CTRL_WRAP(fastbus_error,fastbus_error.FCNCALL_CALL(fastbus_error)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_CAMAC_SCALER camac_scalers;
  {
  FCNCALL_SUBNAME("camac_scalers");
  { FCNCALL_CALL_CTRL_WRAP(camac_scalers,camac_scalers.FCNCALL_CALL(camac_scalers)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_FASTBUS1 fastbus1;
  {
  FCNCALL_SUBNAME("fastbus1");
  { FCNCALL_CALL_CTRL_WRAP(fastbus1,fastbus1.FCNCALL_CALL(fastbus1)); }
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
