/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_CAEN_V775
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CAEN_V775)::FCNCALL_NAME(CAEN_V775)
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
#endif//USER_DEF_CAEN_V775

#ifndef USER_DEF_CAEN_V830_SCALER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CAEN_V830_SCALER)::FCNCALL_NAME(CAEN_V830_SCALER)
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
      // uint32 count : 7;
      // uint32 dummy_7_23 : 17;
      // uint32 id : 8;
    // } ;
    // uint32 u32;
  // } sc_header;
  {
  FCNCALL_SUBNAME("sc_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 count : 7;
    // uint32 dummy_7_23 : 17;
    // uint32 id : 8;
  // } ;
  // uint32 count : 7;
  {
  FCNCALL_SUBNAME("count");
  { FCNCALL_CALL_CTRL_WRAP(sc_header.count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,sc_header.count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_7_23 : 17;
  {
  FCNCALL_SUBNAME("dummy_7_23");
  { FCNCALL_CALL_CTRL_WRAP(sc_header.dummy_7_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,sc_header.dummy_7_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 id : 8;
  {
  FCNCALL_SUBNAME("id");
  { FCNCALL_CALL_CTRL_WRAP(sc_header.id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,sc_header.id)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(sc_header.u32,FCNCALL_CALL_TYPE(uint32,sc_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 event_number : 16;
      // uint32 ts : 2;
      // uint32 count : 6;
      // uint32 undefined : 2;
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
    // uint32 undefined : 2;
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
  // uint32 undefined : 2;
  {
  FCNCALL_SUBNAME("undefined");
  { FCNCALL_CALL_CTRL_WRAP(header.undefined,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.undefined)); }
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
#endif//USER_DEF_CAEN_V830_SCALER

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

#ifndef USER_DEF_LAND_STD_VME
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(LAND_STD_VME)::FCNCALL_NAME(LAND_STD_VME)
{
  FCNCALL_INIT;
  // DATA32 timestamp;
  {
  FCNCALL_SUBNAME("timestamp");
  { FCNCALL_CALL_CTRL_WRAP(timestamp,timestamp.FCNCALL_CALL(timestamp)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 fail_general : 1;
      // uint32 fail_data_corrupt : 1;
      // uint32 fail_data_missing : 1;
      // uint32 fail_data_too_much : 1;
      // uint32 fail_event_counter_mismatch : 1;
      // uint32 fail_readout_error_driver : 1;
      // uint32 fail_unexpected_trigger : 1;
      // uint32 dummy_7_25 : 19;
      // uint32 has_scaler_data : 1;
      // uint32 has_no_zero_suppression : 1;
      // uint32 has_multi_adctdc_counter0 : 1;
      // uint32 has_multi_scaler_counter0 : 1;
      // uint32 has_multi_event : 1;
      // uint32 has_time_stamp : 1;
    // } ;
    // uint32 u32;
  // } failure;
  {
  FCNCALL_SUBNAME("failure");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 fail_general : 1;
    // uint32 fail_data_corrupt : 1;
    // uint32 fail_data_missing : 1;
    // uint32 fail_data_too_much : 1;
    // uint32 fail_event_counter_mismatch : 1;
    // uint32 fail_readout_error_driver : 1;
    // uint32 fail_unexpected_trigger : 1;
    // uint32 dummy_7_25 : 19;
    // uint32 has_scaler_data : 1;
    // uint32 has_no_zero_suppression : 1;
    // uint32 has_multi_adctdc_counter0 : 1;
    // uint32 has_multi_scaler_counter0 : 1;
    // uint32 has_multi_event : 1;
    // uint32 has_time_stamp : 1;
  // } ;
  // uint32 fail_general : 1;
  {
  FCNCALL_SUBNAME("fail_general");
  { FCNCALL_CALL_CTRL_WRAP(failure.fail_general,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.fail_general)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 fail_data_corrupt : 1;
  {
  FCNCALL_SUBNAME("fail_data_corrupt");
  { FCNCALL_CALL_CTRL_WRAP(failure.fail_data_corrupt,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.fail_data_corrupt)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 fail_data_missing : 1;
  {
  FCNCALL_SUBNAME("fail_data_missing");
  { FCNCALL_CALL_CTRL_WRAP(failure.fail_data_missing,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.fail_data_missing)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 fail_data_too_much : 1;
  {
  FCNCALL_SUBNAME("fail_data_too_much");
  { FCNCALL_CALL_CTRL_WRAP(failure.fail_data_too_much,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.fail_data_too_much)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 fail_event_counter_mismatch : 1;
  {
  FCNCALL_SUBNAME("fail_event_counter_mismatch");
  { FCNCALL_CALL_CTRL_WRAP(failure.fail_event_counter_mismatch,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.fail_event_counter_mismatch)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 fail_readout_error_driver : 1;
  {
  FCNCALL_SUBNAME("fail_readout_error_driver");
  { FCNCALL_CALL_CTRL_WRAP(failure.fail_readout_error_driver,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.fail_readout_error_driver)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 fail_unexpected_trigger : 1;
  {
  FCNCALL_SUBNAME("fail_unexpected_trigger");
  { FCNCALL_CALL_CTRL_WRAP(failure.fail_unexpected_trigger,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.fail_unexpected_trigger)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_7_25 : 19;
  {
  FCNCALL_SUBNAME("dummy_7_25");
  { FCNCALL_CALL_CTRL_WRAP(failure.dummy_7_25,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.dummy_7_25)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_scaler_data : 1;
  {
  FCNCALL_SUBNAME("has_scaler_data");
  { FCNCALL_CALL_CTRL_WRAP(failure.has_scaler_data,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.has_scaler_data)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_no_zero_suppression : 1;
  {
  FCNCALL_SUBNAME("has_no_zero_suppression");
  { FCNCALL_CALL_CTRL_WRAP(failure.has_no_zero_suppression,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.has_no_zero_suppression)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_multi_adctdc_counter0 : 1;
  {
  FCNCALL_SUBNAME("has_multi_adctdc_counter0");
  { FCNCALL_CALL_CTRL_WRAP(failure.has_multi_adctdc_counter0,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.has_multi_adctdc_counter0)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_multi_scaler_counter0 : 1;
  {
  FCNCALL_SUBNAME("has_multi_scaler_counter0");
  { FCNCALL_CALL_CTRL_WRAP(failure.has_multi_scaler_counter0,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.has_multi_scaler_counter0)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_multi_event : 1;
  {
  FCNCALL_SUBNAME("has_multi_event");
  { FCNCALL_CALL_CTRL_WRAP(failure.has_multi_event,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.has_multi_event)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_time_stamp : 1;
  {
  FCNCALL_SUBNAME("has_time_stamp");
  { FCNCALL_CALL_CTRL_WRAP(failure.has_time_stamp,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.has_time_stamp)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(failure.u32,FCNCALL_CALL_TYPE(uint32,failure.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 value : 32;
    // } ;
    // uint32 u32;
  // } time_stamp;
  {
  FCNCALL_SUBNAME("time_stamp");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 value : 32;
  // } ;
  // uint32 value : 32;
  {
  FCNCALL_SUBNAME("value");
  { FCNCALL_CALL_CTRL_WRAP(time_stamp.value,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,time_stamp.value)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(time_stamp.u32,FCNCALL_CALL_TYPE(uint32,time_stamp.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // uint32 multi_events;
  {
  FCNCALL_SUBNAME("multi_events");
  { FCNCALL_CALL_CTRL_WRAP(multi_events,FCNCALL_CALL_TYPE(uint32,multi_events)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 multi_scaler_counter0;
  {
  FCNCALL_SUBNAME("multi_scaler_counter0");
  { FCNCALL_CALL_CTRL_WRAP(multi_scaler_counter0,FCNCALL_CALL_TYPE(uint32,multi_scaler_counter0)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 multi_adctdc_counter0;
  {
  FCNCALL_SUBNAME("multi_adctdc_counter0");
  { FCNCALL_CALL_CTRL_WRAP(multi_adctdc_counter0,FCNCALL_CALL_TYPE(uint32,multi_adctdc_counter0)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_LAND_STD_VME

#ifndef USER_DEF_SERIAL_TS_EVENT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(SERIAL_TS_EVENT)::FCNCALL_NAME(SERIAL_TS_EVENT)
{
  FCNCALL_INIT;
  // DATA32 ts_hi;
  {
  FCNCALL_SUBNAME("ts_hi");
  { FCNCALL_CALL_CTRL_WRAP(ts_hi,ts_hi.FCNCALL_CALL(ts_hi)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 ts_lo;
  {
  FCNCALL_SUBNAME("ts_lo");
  { FCNCALL_CALL_CTRL_WRAP(ts_lo,ts_lo.FCNCALL_CALL(ts_lo)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_SERIAL_TS_EVENT

#ifndef USER_DEF_SERIAL_TS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(SERIAL_TS)::FCNCALL_NAME(SERIAL_TS)
{
  FCNCALL_INIT;
  // __MULTI__ SERIAL_TS_EVENT event;
  {
  FCNCALL_SUBNAME("event");
  { FCNCALL_CALL_CTRL_WRAP(event,FCNCALL_MULTI_MEMBER(event).FCNCALL_CALL(FCNCALL_MULTI_ARG(event))); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_SERIAL_TS

#ifndef USER_DEF_TIMESTAMP_WHITERABBIT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TIMESTAMP_WHITERABBIT)::FCNCALL_NAME(TIMESTAMP_WHITERABBIT)
{
  FCNCALL_INIT;
  // DATA12 subsystem_id;
  {
  FCNCALL_SUBNAME("subsystem_id");
  { FCNCALL_CALL_CTRL_WRAP(subsystem_id,subsystem_id.FCNCALL_CALL(subsystem_id)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 t1;
  {
  FCNCALL_SUBNAME("t1");
  { FCNCALL_CALL_CTRL_WRAP(t1,t1.FCNCALL_CALL(t1)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 t2;
  {
  FCNCALL_SUBNAME("t2");
  { FCNCALL_CALL_CTRL_WRAP(t2,t2.FCNCALL_CALL(t2)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 t3;
  {
  FCNCALL_SUBNAME("t3");
  { FCNCALL_CALL_CTRL_WRAP(t3,t3.FCNCALL_CALL(t3)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 t4;
  {
  FCNCALL_SUBNAME("t4");
  { FCNCALL_CALL_CTRL_WRAP(t4,t4.FCNCALL_CALL(t4)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TIMESTAMP_WHITERABBIT

#ifndef USER_DEF_TRIGBUF_ENTRY
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TRIGBUF_ENTRY)::FCNCALL_NAME(TRIGBUF_ENTRY)
{
  FCNCALL_INIT;
  // DATA32 ts_hi;
  {
  FCNCALL_SUBNAME("ts_hi");
  { FCNCALL_CALL_CTRL_WRAP(ts_hi,ts_hi.FCNCALL_CALL(ts_hi)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 ts_lo;
  {
  FCNCALL_SUBNAME("ts_lo");
  { FCNCALL_CALL_CTRL_WRAP(ts_lo,ts_lo.FCNCALL_CALL(ts_lo)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 tpat;
  {
  FCNCALL_SUBNAME("tpat");
  { FCNCALL_CALL_CTRL_WRAP(tpat,tpat.FCNCALL_CALL(tpat)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA8 trig;
  {
  FCNCALL_SUBNAME("trig");
  { FCNCALL_CALL_CTRL_WRAP(trig,trig.FCNCALL_CALL(trig)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TRIGBUF_ENTRY

#ifndef USER_DEF_TRIGBUF
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TRIGBUF)::FCNCALL_NAME(TRIGBUF)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 entries : 12;
      // uint32 multi_events : 20;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 entries : 12;
    // uint32 multi_events : 20;
  // } ;
  // uint32 entries : 12;
  {
  FCNCALL_SUBNAME("entries");
  { FCNCALL_CALL_CTRL_WRAP(header.entries,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.entries)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 multi_events : 20;
  {
  FCNCALL_SUBNAME("multi_events");
  { FCNCALL_CALL_CTRL_WRAP(header.multi_events,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.multi_events)); }
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
  // __MULTI__ TRIGBUF_ENTRY entry;
  {
  FCNCALL_SUBNAME("entry");
  { FCNCALL_CALL_CTRL_WRAP(entry,FCNCALL_MULTI_MEMBER(entry).FCNCALL_CALL(FCNCALL_MULTI_ARG(entry))); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TRIGBUF

#ifndef USER_DEF_TRLO
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TRLO)::FCNCALL_NAME(TRLO)
{
  FCNCALL_INIT;
  // TIMESTAMP_WHITERABBIT wr_ts;
  {
  FCNCALL_SUBNAME("wr_ts");
  { FCNCALL_CALL_CTRL_WRAP(wr_ts,wr_ts.FCNCALL_CALL(wr_ts)); }
  FCNCALL_SUBNAME_END;
  }
  // TRIGBUF trigbuf;
  {
  FCNCALL_SUBNAME("trigbuf");
  { FCNCALL_CALL_CTRL_WRAP(trigbuf,trigbuf.FCNCALL_CALL(trigbuf)); }
  FCNCALL_SUBNAME_END;
  }
  // SERIAL_TS serial_ts;
  {
  FCNCALL_SUBNAME("serial_ts");
  { FCNCALL_CALL_CTRL_WRAP(serial_ts,serial_ts.FCNCALL_CALL(serial_ts)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TRLO

#ifndef USER_DEF_TRLO_EVENT_TRIGGER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TRLO_EVENT_TRIGGER)::FCNCALL_NAME(TRLO_EVENT_TRIGGER)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 val : 32;
    // } ;
    // uint32 u32;
  // } time_lo;
  {
  FCNCALL_SUBNAME("time_lo");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 val : 32;
  // } ;
  // uint32 val : 32;
  {
  FCNCALL_SUBNAME("val");
  { FCNCALL_CALL_CTRL_WRAP(time_lo.val,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,time_lo.val)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(time_lo.u32,FCNCALL_CALL_TYPE(uint32,time_lo.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 val : 31;
      // uint32 missed_event : 1;
    // } ;
    // uint32 u32;
  // } time_hi;
  {
  FCNCALL_SUBNAME("time_hi");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 val : 31;
    // uint32 missed_event : 1;
  // } ;
  // uint32 val : 31;
  {
  FCNCALL_SUBNAME("val");
  { FCNCALL_CALL_CTRL_WRAP(time_hi.val,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,time_hi.val)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 missed_event : 1;
  {
  FCNCALL_SUBNAME("missed_event");
  { FCNCALL_CALL_CTRL_WRAP(time_hi.missed_event,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,time_hi.missed_event)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(time_hi.u32,FCNCALL_CALL_TYPE(uint32,time_hi.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 tpat : 24;
      // uint32 trig : 4;
      // uint32 count : 4;
    // } ;
    // uint32 u32;
  // } status;
  {
  FCNCALL_SUBNAME("status");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 tpat : 24;
    // uint32 trig : 4;
    // uint32 count : 4;
  // } ;
  // uint32 tpat : 24;
  {
  FCNCALL_SUBNAME("tpat");
  { FCNCALL_CALL_CTRL_WRAP(status.tpat,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,status.tpat)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trig : 4;
  {
  FCNCALL_SUBNAME("trig");
  { FCNCALL_CALL_CTRL_WRAP(status.trig,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,status.trig)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 count : 4;
  {
  FCNCALL_SUBNAME("count");
  { FCNCALL_CALL_CTRL_WRAP(status.count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,status.count)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(status.u32,FCNCALL_CALL_TYPE(uint32,status.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TRLO_EVENT_TRIGGER

#ifndef USER_DEF_TRLO_SAMPLER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TRLO_SAMPLER)::FCNCALL_NAME(TRLO_SAMPLER)
{
  FCNCALL_INIT;
  // raw_list_ii_zero_suppress<DATA32,DATA32,512> stamps;
  {
  FCNCALL_SUBNAME("stamps");
  { FCNCALL_CALL_CTRL_WRAP(stamps,stamps.FCNCALL_CALL(stamps)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 count : 10;
      // uint32 missing_at_end : 1;
      // uint32 dummy_11_23 : 13;
      // uint32 id : 8;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 count : 10;
    // uint32 missing_at_end : 1;
    // uint32 dummy_11_23 : 13;
    // uint32 id : 8;
  // } ;
  // uint32 count : 10;
  {
  FCNCALL_SUBNAME("count");
  { FCNCALL_CALL_CTRL_WRAP(header.count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 missing_at_end : 1;
  {
  FCNCALL_SUBNAME("missing_at_end");
  { FCNCALL_CALL_CTRL_WRAP(header.missing_at_end,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.missing_at_end)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_11_23 : 13;
  {
  FCNCALL_SUBNAME("dummy_11_23");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy_11_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy_11_23)); }
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
  FCNCALL_RET;
}
#endif//USER_DEF_TRLO_SAMPLER

#ifndef USER_DEF_TRLO_TRIG_SCALER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TRLO_TRIG_SCALER)::FCNCALL_NAME(TRLO_TRIG_SCALER)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA32,DATA32,16> before_lmu;
  {
  FCNCALL_SUBNAME("before_lmu");
  { FCNCALL_CALL_CTRL_WRAP(before_lmu,before_lmu.FCNCALL_CALL(before_lmu)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,1> before_lmu_mux;
  {
  FCNCALL_SUBNAME("before_lmu_mux");
  { FCNCALL_CALL_CTRL_WRAP(before_lmu_mux,before_lmu_mux.FCNCALL_CALL(before_lmu_mux)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,4> before_lmu_aux;
  {
  FCNCALL_SUBNAME("before_lmu_aux");
  { FCNCALL_CALL_CTRL_WRAP(before_lmu_aux,before_lmu_aux.FCNCALL_CALL(before_lmu_aux)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,16> before_deadtime;
  {
  FCNCALL_SUBNAME("before_deadtime");
  { FCNCALL_CALL_CTRL_WRAP(before_deadtime,before_deadtime.FCNCALL_CALL(before_deadtime)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,16> after_deadtime;
  {
  FCNCALL_SUBNAME("after_deadtime");
  { FCNCALL_CALL_CTRL_WRAP(after_deadtime,after_deadtime.FCNCALL_CALL(after_deadtime)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,16> after_reduction;
  {
  FCNCALL_SUBNAME("after_reduction");
  { FCNCALL_CALL_CTRL_WRAP(after_reduction,after_reduction.FCNCALL_CALL(after_reduction)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 before_lmu : 6;
      // uint32 before_lmu_mux : 5;
      // uint32 before_lmu_aux : 5;
      // uint32 after_lmu : 6;
      // uint32 dummy_22_23 : 2;
      // uint32 id : 8;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 before_lmu : 6;
    // uint32 before_lmu_mux : 5;
    // uint32 before_lmu_aux : 5;
    // uint32 after_lmu : 6;
    // uint32 dummy_22_23 : 2;
    // uint32 id : 8;
  // } ;
  // uint32 before_lmu : 6;
  {
  FCNCALL_SUBNAME("before_lmu");
  { FCNCALL_CALL_CTRL_WRAP(header.before_lmu,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.before_lmu)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 before_lmu_mux : 5;
  {
  FCNCALL_SUBNAME("before_lmu_mux");
  { FCNCALL_CALL_CTRL_WRAP(header.before_lmu_mux,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.before_lmu_mux)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 before_lmu_aux : 5;
  {
  FCNCALL_SUBNAME("before_lmu_aux");
  { FCNCALL_CALL_CTRL_WRAP(header.before_lmu_aux,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.before_lmu_aux)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 after_lmu : 6;
  {
  FCNCALL_SUBNAME("after_lmu");
  { FCNCALL_CALL_CTRL_WRAP(header.after_lmu,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.after_lmu)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_22_23 : 2;
  {
  FCNCALL_SUBNAME("dummy_22_23");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy_22_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy_22_23)); }
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
  // uint32 val;
  {
  FCNCALL_SUBNAME("val");
  { FCNCALL_CALL_CTRL_WRAP(val,FCNCALL_CALL_TYPE(uint32,val)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TRLO_TRIG_SCALER

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

#ifndef USER_DEF_VME_MESY_MADC32
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_MESY_MADC32)::FCNCALL_NAME(VME_MESY_MADC32)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA16,DATA16,32> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_MESY_MADC32

#ifndef USER_DEF_VME_MESY_MADC32_PADDING
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_MESY_MADC32_PADDING)::FCNCALL_NAME(VME_MESY_MADC32_PADDING)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_VME_MESY_MADC32_PADDING

#ifndef USER_DEF_VME_STRUCK_SIS3316_CHANNEL_DATA
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_STRUCK_SIS3316_CHANNEL_DATA)::FCNCALL_NAME(VME_STRUCK_SIS3316_CHANNEL_DATA)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA32,DATA32,2> ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,8> gate;
  {
  FCNCALL_SUBNAME("gate");
  { FCNCALL_CALL_CTRL_WRAP(gate,gate.FCNCALL_CALL(gate)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,3> maw;
  {
  FCNCALL_SUBNAME("maw");
  { FCNCALL_CALL_CTRL_WRAP(maw,maw.FCNCALL_CALL(maw)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,2> maxe;
  {
  FCNCALL_SUBNAME("maxe");
  { FCNCALL_CALL_CTRL_WRAP(maxe,maxe.FCNCALL_CALL(maxe)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 has_acc6 : 1;
      // uint32 has_acc2 : 1;
      // uint32 has_maw : 1;
      // uint32 has_e : 1;
      // uint32 chanNo : 4;
      // uint32 id : 8;
      // uint32 timeS : 16;
    // } ;
    // uint32 u32;
  // } header0;
  {
  FCNCALL_SUBNAME("header0");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 has_acc6 : 1;
    // uint32 has_acc2 : 1;
    // uint32 has_maw : 1;
    // uint32 has_e : 1;
    // uint32 chanNo : 4;
    // uint32 id : 8;
    // uint32 timeS : 16;
  // } ;
  // uint32 has_acc6 : 1;
  {
  FCNCALL_SUBNAME("has_acc6");
  { FCNCALL_CALL_CTRL_WRAP(header0.has_acc6,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header0.has_acc6)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_acc2 : 1;
  {
  FCNCALL_SUBNAME("has_acc2");
  { FCNCALL_CALL_CTRL_WRAP(header0.has_acc2,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header0.has_acc2)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_maw : 1;
  {
  FCNCALL_SUBNAME("has_maw");
  { FCNCALL_CALL_CTRL_WRAP(header0.has_maw,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header0.has_maw)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_e : 1;
  {
  FCNCALL_SUBNAME("has_e");
  { FCNCALL_CALL_CTRL_WRAP(header0.has_e,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header0.has_e)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 chanNo : 4;
  {
  FCNCALL_SUBNAME("chanNo");
  { FCNCALL_CALL_CTRL_WRAP(header0.chanNo,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header0.chanNo)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 id : 8;
  {
  FCNCALL_SUBNAME("id");
  { FCNCALL_CALL_CTRL_WRAP(header0.id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header0.id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 timeS : 16;
  {
  FCNCALL_SUBNAME("timeS");
  { FCNCALL_CALL_CTRL_WRAP(header0.timeS,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header0.timeS)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(header0.u32,FCNCALL_CALL_TYPE(uint32,header0.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 timeS : 32;
    // } ;
    // uint32 u32;
  // } header2;
  {
  FCNCALL_SUBNAME("header2");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 timeS : 32;
  // } ;
  // uint32 timeS : 32;
  {
  FCNCALL_SUBNAME("timeS");
  { FCNCALL_CALL_CTRL_WRAP(header2.timeS,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header2.timeS)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(header2.u32,FCNCALL_CALL_TYPE(uint32,header2.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 sum : 24;
      // uint32 reserved : 4;
      // uint32 has_pileup : 1;
      // uint32 has_repileup : 1;
      // uint32 has_underflow : 1;
      // uint32 has_overflow : 1;
    // } ;
    // uint32 u32;
  // } gate_group_1;
  {
  FCNCALL_SUBNAME("gate_group_1");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 sum : 24;
    // uint32 reserved : 4;
    // uint32 has_pileup : 1;
    // uint32 has_repileup : 1;
    // uint32 has_underflow : 1;
    // uint32 has_overflow : 1;
  // } ;
  // uint32 sum : 24;
  {
  FCNCALL_SUBNAME("sum");
  { FCNCALL_CALL_CTRL_WRAP(gate_group_1.sum,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate_group_1.sum)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 reserved : 4;
  {
  FCNCALL_SUBNAME("reserved");
  { FCNCALL_CALL_CTRL_WRAP(gate_group_1.reserved,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate_group_1.reserved)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_pileup : 1;
  {
  FCNCALL_SUBNAME("has_pileup");
  { FCNCALL_CALL_CTRL_WRAP(gate_group_1.has_pileup,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate_group_1.has_pileup)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_repileup : 1;
  {
  FCNCALL_SUBNAME("has_repileup");
  { FCNCALL_CALL_CTRL_WRAP(gate_group_1.has_repileup,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate_group_1.has_repileup)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_underflow : 1;
  {
  FCNCALL_SUBNAME("has_underflow");
  { FCNCALL_CALL_CTRL_WRAP(gate_group_1.has_underflow,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate_group_1.has_underflow)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_overflow : 1;
  {
  FCNCALL_SUBNAME("has_overflow");
  { FCNCALL_CALL_CTRL_WRAP(gate_group_1.has_overflow,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate_group_1.has_overflow)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(gate_group_1.u32,FCNCALL_CALL_TYPE(uint32,gate_group_1.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 sum : 28;
      // uint32 unnamed_28_31 : 4;
    // } ;
    // uint32 u32;
  // } gate_group_2_6;
  {
  FCNCALL_SUBNAME("gate_group_2_6");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 sum : 28;
    // uint32 unnamed_28_31 : 4;
  // } ;
  // uint32 sum : 28;
  {
  FCNCALL_SUBNAME("sum");
  { FCNCALL_CALL_CTRL_WRAP(gate_group_2_6.sum,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate_group_2_6.sum)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_28_31 : 4;
  {
  FCNCALL_SUBNAME("unnamed_28_31");
  { FCNCALL_CALL_CTRL_WRAP(gate_group_2_6.unnamed_28_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate_group_2_6.unnamed_28_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(gate_group_2_6.u32,FCNCALL_CALL_TYPE(uint32,gate_group_2_6.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 sum : 28;
      // uint32 unnamed_28_31 : 4;
    // } ;
    // uint32 u32;
  // } gate_group_7_8;
  {
  FCNCALL_SUBNAME("gate_group_7_8");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 sum : 28;
    // uint32 unnamed_28_31 : 4;
  // } ;
  // uint32 sum : 28;
  {
  FCNCALL_SUBNAME("sum");
  { FCNCALL_CALL_CTRL_WRAP(gate_group_7_8.sum,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate_group_7_8.sum)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_28_31 : 4;
  {
  FCNCALL_SUBNAME("unnamed_28_31");
  { FCNCALL_CALL_CTRL_WRAP(gate_group_7_8.unnamed_28_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate_group_7_8.unnamed_28_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(gate_group_7_8.u32,FCNCALL_CALL_TYPE(uint32,gate_group_7_8.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 max : 32;
    // } ;
    // uint32 u32;
  // } maw1;
  {
  FCNCALL_SUBNAME("maw1");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 max : 32;
  // } ;
  // uint32 max : 32;
  {
  FCNCALL_SUBNAME("max");
  { FCNCALL_CALL_CTRL_WRAP(maw1.max,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,maw1.max)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(maw1.u32,FCNCALL_CALL_TYPE(uint32,maw1.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 after : 32;
    // } ;
    // uint32 u32;
  // } maw2;
  {
  FCNCALL_SUBNAME("maw2");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 after : 32;
  // } ;
  // uint32 after : 32;
  {
  FCNCALL_SUBNAME("after");
  { FCNCALL_CALL_CTRL_WRAP(maw2.after,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,maw2.after)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(maw2.u32,FCNCALL_CALL_TYPE(uint32,maw2.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 before : 32;
    // } ;
    // uint32 u32;
  // } maw3;
  {
  FCNCALL_SUBNAME("maw3");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 before : 32;
  // } ;
  // uint32 before : 32;
  {
  FCNCALL_SUBNAME("before");
  { FCNCALL_CALL_CTRL_WRAP(maw3.before,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,maw3.before)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(maw3.u32,FCNCALL_CALL_TYPE(uint32,maw3.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 start : 32;
    // } ;
    // uint32 u32;
  // } maxe1;
  {
  FCNCALL_SUBNAME("maxe1");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 start : 32;
  // } ;
  // uint32 start : 32;
  {
  FCNCALL_SUBNAME("start");
  { FCNCALL_CALL_CTRL_WRAP(maxe1.start,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,maxe1.start)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(maxe1.u32,FCNCALL_CALL_TYPE(uint32,maxe1.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 max : 32;
    // } ;
    // uint32 u32;
  // } maxe2;
  {
  FCNCALL_SUBNAME("maxe2");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 max : 32;
  // } ;
  // uint32 max : 32;
  {
  FCNCALL_SUBNAME("max");
  { FCNCALL_CALL_CTRL_WRAP(maxe2.max,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,maxe2.max)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(maxe2.u32,FCNCALL_CALL_TYPE(uint32,maxe2.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 sampleLength : 26;
      // uint32 pileup : 1;
      // uint32 mawFlag : 1;
      // uint32 unnamed_28_31 : 4;
    // } ;
    // uint32 u32;
  // } header3;
  {
  FCNCALL_SUBNAME("header3");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 sampleLength : 26;
    // uint32 pileup : 1;
    // uint32 mawFlag : 1;
    // uint32 unnamed_28_31 : 4;
  // } ;
  // uint32 sampleLength : 26;
  {
  FCNCALL_SUBNAME("sampleLength");
  { FCNCALL_CALL_CTRL_WRAP(header3.sampleLength,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header3.sampleLength)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 pileup : 1;
  {
  FCNCALL_SUBNAME("pileup");
  { FCNCALL_CALL_CTRL_WRAP(header3.pileup,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header3.pileup)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 mawFlag : 1;
  {
  FCNCALL_SUBNAME("mawFlag");
  { FCNCALL_CALL_CTRL_WRAP(header3.mawFlag,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header3.mawFlag)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_28_31 : 4;
  {
  FCNCALL_SUBNAME("unnamed_28_31");
  { FCNCALL_CALL_CTRL_WRAP(header3.unnamed_28_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header3.unnamed_28_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(header3.u32,FCNCALL_CALL_TYPE(uint32,header3.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_STRUCK_SIS3316_CHANNEL_DATA

#ifndef USER_DEF_VME_STRUCK_SIS3316_CHANNEL
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_STRUCK_SIS3316_CHANNEL)::FCNCALL_NAME(VME_STRUCK_SIS3316_CHANNEL)
{
  FCNCALL_INIT;
  // __MULTI__ VME_STRUCK_SIS3316_CHANNEL_DATA data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,FCNCALL_MULTI_MEMBER(data).FCNCALL_CALL(FCNCALL_MULTI_ARG(data))); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_STRUCK_SIS3316_CHANNEL

#ifndef USER_DEF_VME_STRUCK_SIS3316
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_STRUCK_SIS3316)::FCNCALL_NAME(VME_STRUCK_SIS3316)
{
  FCNCALL_INIT;
  // DATA8 n_ch;
  {
  FCNCALL_SUBNAME("n_ch");
  { FCNCALL_CALL_CTRL_WRAP(n_ch,n_ch.FCNCALL_CALL(n_ch)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_STRUCK_SIS3316_CHANNEL channel[16];
  {
  FCNCALL_SUBNAME("channel");
  FCNCALL_FOR(__i0,16)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(channel__i0,,__i0,channel[__i0].FCNCALL_CALL(channel[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_STRUCK_SIS3316

#ifndef USER_DEF_WR_MULTI
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(WR_MULTI)::FCNCALL_NAME(WR_MULTI)
{
  FCNCALL_INIT;
  // DATA32 time_hi;
  {
  FCNCALL_SUBNAME("time_hi");
  { FCNCALL_CALL_CTRL_WRAP(time_hi,time_hi.FCNCALL_CALL(time_hi)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 time_lo;
  {
  FCNCALL_SUBNAME("time_lo");
  { FCNCALL_CALL_CTRL_WRAP(time_lo,time_lo.FCNCALL_CALL(time_lo)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_WR_MULTI

#ifndef USER_DEF_SCALERS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(SCALERS)::FCNCALL_NAME(SCALERS)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TRLO_TRIG_SCALER trlo;
  {
  FCNCALL_SUBNAME("trlo");
  { FCNCALL_CALL_CTRL_WRAP(trlo,trlo.FCNCALL_CALL(trlo)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V830 caen_scaler;
  {
  FCNCALL_SUBNAME("caen_scaler");
  { FCNCALL_CALL_CTRL_WRAP(caen_scaler,caen_scaler.FCNCALL_CALL(caen_scaler)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_SCALERS

#ifndef USER_DEF_TS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TS)::FCNCALL_NAME(TS)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TRLO trlo;
  {
  FCNCALL_SUBNAME("trlo");
  { FCNCALL_CALL_CTRL_WRAP(trlo,trlo.FCNCALL_CALL(trlo)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TS

#ifndef USER_DEF_VME
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME)::FCNCALL_NAME(VME)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // __MULTI__ CAEN_V775 tdc;
  {
  FCNCALL_SUBNAME("tdc");
  { FCNCALL_CALL_CTRL_WRAP(tdc,FCNCALL_MULTI_MEMBER(tdc).FCNCALL_CALL(FCNCALL_MULTI_ARG(tdc))); }
  FCNCALL_SUBNAME_END;
  }
  // VME_STRUCK_SIS3316 sis3316[3];
  {
  FCNCALL_SUBNAME("sis3316");
  FCNCALL_FOR(__i0,3)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(sis3316__i0,,__i0,sis3316[__i0].FCNCALL_CALL(sis3316[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // VME_MESY_MADC32_PADDING mesy_padding;
  {
  FCNCALL_SUBNAME("mesy_padding");
  { FCNCALL_CALL_CTRL_WRAP(mesy_padding,mesy_padding.FCNCALL_CALL(mesy_padding)); }
  FCNCALL_SUBNAME_END;
  }
  // __MULTI__ VME_MESY_MADC32 adc;
  {
  FCNCALL_SUBNAME("adc");
  { FCNCALL_CALL_CTRL_WRAP(adc,FCNCALL_MULTI_MEMBER(adc).FCNCALL_CALL(FCNCALL_MULTI_ARG(adc))); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_STD_VME header;
  {
  FCNCALL_SUBNAME("header");
  { FCNCALL_CALL_CTRL_WRAP(header,header.FCNCALL_CALL(header)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME

#ifndef USER_DEF_unpack_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(unpack_event)::FCNCALL_NAME(unpack_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_event_base,FCNCALL_CLASS_NAME(unpack_event_base)::FCNCALL_CALL_BASE());
  // TS ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  // SCALERS scalers;
  {
  FCNCALL_SUBNAME("scalers");
  { FCNCALL_CALL_CTRL_WRAP(scalers,scalers.FCNCALL_CALL(scalers)); }
  FCNCALL_SUBNAME_END;
  }
  // VME vme;
  {
  FCNCALL_SUBNAME("vme");
  { FCNCALL_CALL_CTRL_WRAP(vme,vme.FCNCALL_CALL(vme)); }
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
