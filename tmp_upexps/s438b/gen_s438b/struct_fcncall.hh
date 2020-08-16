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

#ifndef USER_DEF_DAQ_STATUS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(DAQ_STATUS)::FCNCALL_NAME(DAQ_STATUS)
{
  FCNCALL_INIT;
  // uint32 spill_nr;
  {
  FCNCALL_SUBNAME("spill_nr");
  { FCNCALL_CALL_CTRL_WRAP(spill_nr,FCNCALL_CALL_TYPE(uint32,spill_nr)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger;
  {
  FCNCALL_SUBNAME("trigger");
  { FCNCALL_CALL_CTRL_WRAP(trigger,FCNCALL_CALL_TYPE(uint32,trigger)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 time;
  {
  FCNCALL_SUBNAME("time");
  { FCNCALL_CALL_CTRL_WRAP(time,FCNCALL_CALL_TYPE(uint32,time)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,48> scaler;
  {
  FCNCALL_SUBNAME("scaler");
  { FCNCALL_CALL_CTRL_WRAP(scaler,scaler.FCNCALL_CALL(scaler)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,16> trig_count;
  {
  FCNCALL_SUBNAME("trig_count");
  { FCNCALL_CALL_CTRL_WRAP(trig_count,trig_count.FCNCALL_CALL(trig_count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 events;
  {
  FCNCALL_SUBNAME("events");
  { FCNCALL_CALL_CTRL_WRAP(events,FCNCALL_CALL_TYPE(uint32,events)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 errors;
  {
  FCNCALL_SUBNAME("errors");
  { FCNCALL_CALL_CTRL_WRAP(errors,FCNCALL_CALL_TYPE(uint32,errors)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 errors_data_corrupt;
  {
  FCNCALL_SUBNAME("errors_data_corrupt");
  { FCNCALL_CALL_CTRL_WRAP(errors_data_corrupt,FCNCALL_CALL_TYPE(uint32,errors_data_corrupt)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 errors_data_missing;
  {
  FCNCALL_SUBNAME("errors_data_missing");
  { FCNCALL_CALL_CTRL_WRAP(errors_data_missing,FCNCALL_CALL_TYPE(uint32,errors_data_missing)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 errors_data_too_much;
  {
  FCNCALL_SUBNAME("errors_data_too_much");
  { FCNCALL_CALL_CTRL_WRAP(errors_data_too_much,FCNCALL_CALL_TYPE(uint32,errors_data_too_much)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 errors_event_counter_mismatch;
  {
  FCNCALL_SUBNAME("errors_event_counter_mismatch");
  { FCNCALL_CALL_CTRL_WRAP(errors_event_counter_mismatch,FCNCALL_CALL_TYPE(uint32,errors_event_counter_mismatch)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 errors_event_counter_incr_mismatch;
  {
  FCNCALL_SUBNAME("errors_event_counter_incr_mismatch");
  { FCNCALL_CALL_CTRL_WRAP(errors_event_counter_incr_mismatch,FCNCALL_CALL_TYPE(uint32,errors_event_counter_incr_mismatch)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 errors_trigger_mismatch;
  {
  FCNCALL_SUBNAME("errors_trigger_mismatch");
  { FCNCALL_CALL_CTRL_WRAP(errors_trigger_mismatch,FCNCALL_CALL_TYPE(uint32,errors_trigger_mismatch)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 ticks_count;
  {
  FCNCALL_SUBNAME("ticks_count");
  { FCNCALL_CALL_CTRL_WRAP(ticks_count,FCNCALL_CALL_TYPE(uint32,ticks_count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 ticks_deadtime;
  {
  FCNCALL_SUBNAME("ticks_deadtime");
  { FCNCALL_CALL_CTRL_WRAP(ticks_deadtime,FCNCALL_CALL_TYPE(uint32,ticks_deadtime)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,16> ticks_dt_trig;
  {
  FCNCALL_SUBNAME("ticks_dt_trig");
  { FCNCALL_CALL_CTRL_WRAP(ticks_dt_trig,ticks_dt_trig.FCNCALL_CALL(ticks_dt_trig)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_DAQ_STATUS

#ifndef USER_DEF_DUMMY_WORD
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(DUMMY_WORD)::FCNCALL_NAME(DUMMY_WORD)
{
  FCNCALL_INIT;
  // uint32 dummy_word;
  {
  FCNCALL_SUBNAME("dummy_word");
  { FCNCALL_CALL_CTRL_WRAP(dummy_word,FCNCALL_CALL_TYPE(uint32,dummy_word)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_DUMMY_WORD

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

#ifndef USER_DEF_FEBEX_EVENTHEADER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FEBEX_EVENTHEADER)::FCNCALL_NAME(FEBEX_EVENTHEADER)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 N_febex1 : 8;
      // uint32 N_febex2 : 8;
      // uint32 N_febex3 : 8;
      // uint32 N_febex4 : 8;
    // } ;
    // uint32 u32;
  // } febexcards;
  {
  FCNCALL_SUBNAME("febexcards");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 N_febex1 : 8;
    // uint32 N_febex2 : 8;
    // uint32 N_febex3 : 8;
    // uint32 N_febex4 : 8;
  // } ;
  // uint32 N_febex1 : 8;
  {
  FCNCALL_SUBNAME("N_febex1");
  { FCNCALL_CALL_CTRL_WRAP(febexcards.N_febex1,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,febexcards.N_febex1)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 N_febex2 : 8;
  {
  FCNCALL_SUBNAME("N_febex2");
  { FCNCALL_CALL_CTRL_WRAP(febexcards.N_febex2,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,febexcards.N_febex2)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 N_febex3 : 8;
  {
  FCNCALL_SUBNAME("N_febex3");
  { FCNCALL_CALL_CTRL_WRAP(febexcards.N_febex3,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,febexcards.N_febex3)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 N_febex4 : 8;
  {
  FCNCALL_SUBNAME("N_febex4");
  { FCNCALL_CALL_CTRL_WRAP(febexcards.N_febex4,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,febexcards.N_febex4)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(febexcards.u32,FCNCALL_CALL_TYPE(uint32,febexcards.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_FEBEX_EVENTHEADER

#ifndef USER_DEF_FEBEX_NOTRACE
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FEBEX_NOTRACE)::FCNCALL_NAME(FEBEX_NOTRACE)
{
  FCNCALL_INIT;
  // raw_array<DATA8,DATA8,16> Nhit;
  {
  FCNCALL_SUBNAME("Nhit");
  { FCNCALL_CALL_CTRL_WRAP(Nhit,Nhit.FCNCALL_CALL(Nhit)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,16,10> t;
  {
  FCNCALL_SUBNAME("t");
  { FCNCALL_CALL_CTRL_WRAP(t,t.FCNCALL_CALL(t)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA32,DATA32,16,10> E;
  {
  FCNCALL_SUBNAME("E");
  { FCNCALL_CALL_CTRL_WRAP(E,E.FCNCALL_CALL(E)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_FEBEX_NOTRACE

#ifndef USER_DEF_FEBEX_PADDING
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FEBEX_PADDING)::FCNCALL_NAME(FEBEX_PADDING)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_FEBEX_PADDING

#ifndef USER_DEF_LAND_STD_VME
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(LAND_STD_VME)::FCNCALL_NAME(LAND_STD_VME)
{
  FCNCALL_INIT;
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
      // uint32 fail_firmware_mismatch : 1;
      // uint32 dummy_8_21 : 14;
      // uint32 has_multi_trlo_ii_counter0 : 1;
      // uint32 has_clock_counter_stamp : 1;
      // uint32 has_continous_event_counter : 1;
      // uint32 has_update_qdc_iped_value : 1;
      // uint32 spurious_start_before_tcal : 1;
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
    // uint32 fail_firmware_mismatch : 1;
    // uint32 dummy_8_21 : 14;
    // uint32 has_multi_trlo_ii_counter0 : 1;
    // uint32 has_clock_counter_stamp : 1;
    // uint32 has_continous_event_counter : 1;
    // uint32 has_update_qdc_iped_value : 1;
    // uint32 spurious_start_before_tcal : 1;
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
  // uint32 fail_firmware_mismatch : 1;
  {
  FCNCALL_SUBNAME("fail_firmware_mismatch");
  { FCNCALL_CALL_CTRL_WRAP(failure.fail_firmware_mismatch,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.fail_firmware_mismatch)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_8_21 : 14;
  {
  FCNCALL_SUBNAME("dummy_8_21");
  { FCNCALL_CALL_CTRL_WRAP(failure.dummy_8_21,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.dummy_8_21)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_multi_trlo_ii_counter0 : 1;
  {
  FCNCALL_SUBNAME("has_multi_trlo_ii_counter0");
  { FCNCALL_CALL_CTRL_WRAP(failure.has_multi_trlo_ii_counter0,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.has_multi_trlo_ii_counter0)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_clock_counter_stamp : 1;
  {
  FCNCALL_SUBNAME("has_clock_counter_stamp");
  { FCNCALL_CALL_CTRL_WRAP(failure.has_clock_counter_stamp,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.has_clock_counter_stamp)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_continous_event_counter : 1;
  {
  FCNCALL_SUBNAME("has_continous_event_counter");
  { FCNCALL_CALL_CTRL_WRAP(failure.has_continous_event_counter,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.has_continous_event_counter)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 has_update_qdc_iped_value : 1;
  {
  FCNCALL_SUBNAME("has_update_qdc_iped_value");
  { FCNCALL_CALL_CTRL_WRAP(failure.has_update_qdc_iped_value,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.has_update_qdc_iped_value)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 spurious_start_before_tcal : 1;
  {
  FCNCALL_SUBNAME("spurious_start_before_tcal");
  { FCNCALL_CALL_CTRL_WRAP(failure.spurious_start_before_tcal,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,failure.spurious_start_before_tcal)); }
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
  // uint32 continous_event_counter;
  {
  FCNCALL_SUBNAME("continous_event_counter");
  { FCNCALL_CALL_CTRL_WRAP(continous_event_counter,FCNCALL_CALL_TYPE(uint32,continous_event_counter)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 time_stamp;
  {
  FCNCALL_SUBNAME("time_stamp");
  { FCNCALL_CALL_CTRL_WRAP(time_stamp,FCNCALL_CALL_TYPE(uint32,time_stamp)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 clock_counter_stamp;
  {
  FCNCALL_SUBNAME("clock_counter_stamp");
  { FCNCALL_CALL_CTRL_WRAP(clock_counter_stamp,FCNCALL_CALL_TYPE(uint32,clock_counter_stamp)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 iped;
  {
  FCNCALL_SUBNAME("iped");
  { FCNCALL_CALL_CTRL_WRAP(iped,FCNCALL_CALL_TYPE(uint32,iped)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 multi_events;
  {
  FCNCALL_SUBNAME("multi_events");
  { FCNCALL_CALL_CTRL_WRAP(multi_events,FCNCALL_CALL_TYPE(uint32,multi_events)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 multi_trlo_ii_counter0;
  {
  FCNCALL_SUBNAME("multi_trlo_ii_counter0");
  { FCNCALL_CALL_CTRL_WRAP(multi_trlo_ii_counter0,FCNCALL_CALL_TYPE(uint32,multi_trlo_ii_counter0)); }
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

#ifndef USER_DEF_NXYTER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(NXYTER)::FCNCALL_NAME(NXYTER)
{
  FCNCALL_INIT;
  // DATA8 gemex;
  {
  FCNCALL_SUBNAME("gemex");
  { FCNCALL_CALL_CTRL_WRAP(gemex,gemex.FCNCALL_CALL(gemex)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA8 nxyter;
  {
  FCNCALL_SUBNAME("nxyter");
  { FCNCALL_CALL_CTRL_WRAP(nxyter,nxyter.FCNCALL_CALL(nxyter)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA8 err;
  {
  FCNCALL_SUBNAME("err");
  { FCNCALL_CALL_CTRL_WRAP(err,err.FCNCALL_CALL(err)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 trigger_counter_head;
  {
  FCNCALL_SUBNAME("trigger_counter_head");
  { FCNCALL_CALL_CTRL_WRAP(trigger_counter_head,trigger_counter_head.FCNCALL_CALL(trigger_counter_head)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 trigger_counter_foot;
  {
  FCNCALL_SUBNAME("trigger_counter_foot");
  { FCNCALL_CALL_CTRL_WRAP(trigger_counter_foot,trigger_counter_foot.FCNCALL_CALL(trigger_counter_foot)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 ts_epoch_trigger;
  {
  FCNCALL_SUBNAME("ts_epoch_trigger");
  { FCNCALL_CALL_CTRL_WRAP(ts_epoch_trigger,ts_epoch_trigger.FCNCALL_CALL(ts_epoch_trigger)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_list_ii_zero_suppress<DATA12,DATA12,10000> channel;
  {
  FCNCALL_SUBNAME("channel");
  { FCNCALL_CALL_CTRL_WRAP(channel,channel.FCNCALL_CALL(channel)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_list_ii_zero_suppress<DATA12,DATA12,10000> adc;
  {
  FCNCALL_SUBNAME("adc");
  { FCNCALL_CALL_CTRL_WRAP(adc,adc.FCNCALL_CALL(adc)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_list_ii_zero_suppress<DATA16,DATA16,10000> ts_epoch_hit;
  {
  FCNCALL_SUBNAME("ts_epoch_hit");
  { FCNCALL_CALL_CTRL_WRAP(ts_epoch_hit,ts_epoch_hit.FCNCALL_CALL(ts_epoch_hit)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_list_ii_zero_suppress<DATA16,DATA16,10000> ts_nxy;
  {
  FCNCALL_SUBNAME("ts_nxy");
  { FCNCALL_CALL_CTRL_WRAP(ts_nxy,ts_nxy.FCNCALL_CALL(ts_nxy)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_NXYTER

#ifndef USER_DEF_NXYTER_PADDING
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(NXYTER_PADDING)::FCNCALL_NAME(NXYTER_PADDING)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_NXYTER_PADDING

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

#ifndef USER_DEF_SIS3316_ACTAR_S438
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(SIS3316_ACTAR_S438)::FCNCALL_NAME(SIS3316_ACTAR_S438)
{
  FCNCALL_INIT;
  // raw_array<DATA32,DATA32,128> channel_header;
  {
  FCNCALL_SUBNAME("channel_header");
  { FCNCALL_CALL_CTRL_WRAP(channel_header,channel_header.FCNCALL_CALL(channel_header)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA16,DATA16,40000> trace;
  {
  FCNCALL_SUBNAME("trace");
  { FCNCALL_CALL_CTRL_WRAP(trace,trace.FCNCALL_CALL(trace)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 id : 8;
      // uint32 channel_num : 8;
      // uint32 unnamed_16_31 : 16;
    // } ;
    // uint32 u32;
  // } custom_header;
  {
  FCNCALL_SUBNAME("custom_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 id : 8;
    // uint32 channel_num : 8;
    // uint32 unnamed_16_31 : 16;
  // } ;
  // uint32 id : 8;
  {
  FCNCALL_SUBNAME("id");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 channel_num : 8;
  {
  FCNCALL_SUBNAME("channel_num");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.channel_num,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.channel_num)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_16_31 : 16;
  {
  FCNCALL_SUBNAME("unnamed_16_31");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.unnamed_16_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.unnamed_16_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.u32,FCNCALL_CALL_TYPE(uint32,custom_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 sampleLength : 26;
      // uint32 unnamed_26_26 : 1;
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
    // uint32 unnamed_26_26 : 1;
    // uint32 mawFlag : 1;
    // uint32 unnamed_28_31 : 4;
  // } ;
  // uint32 sampleLength : 26;
  {
  FCNCALL_SUBNAME("sampleLength");
  { FCNCALL_CALL_CTRL_WRAP(header3.sampleLength,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header3.sampleLength)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_26_26 : 1;
  {
  FCNCALL_SUBNAME("unnamed_26_26");
  { FCNCALL_CALL_CTRL_WRAP(header3.unnamed_26_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header3.unnamed_26_26)); }
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
#endif//USER_DEF_SIS3316_ACTAR_S438

#ifndef USER_DEF_SIS3316_PSP_S438
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(SIS3316_PSP_S438)::FCNCALL_NAME(SIS3316_PSP_S438)
{
  FCNCALL_INIT;
  // raw_array<DATA32,DATA32,128> channel_header;
  {
  FCNCALL_SUBNAME("channel_header");
  { FCNCALL_CALL_CTRL_WRAP(channel_header,channel_header.FCNCALL_CALL(channel_header)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA16,DATA16,16000> trace;
  {
  FCNCALL_SUBNAME("trace");
  { FCNCALL_CALL_CTRL_WRAP(trace,trace.FCNCALL_CALL(trace)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 id : 8;
      // uint32 channel_num : 8;
      // uint32 unnamed_16_31 : 16;
    // } ;
    // uint32 u32;
  // } custom_header;
  {
  FCNCALL_SUBNAME("custom_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 id : 8;
    // uint32 channel_num : 8;
    // uint32 unnamed_16_31 : 16;
  // } ;
  // uint32 id : 8;
  {
  FCNCALL_SUBNAME("id");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 channel_num : 8;
  {
  FCNCALL_SUBNAME("channel_num");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.channel_num,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.channel_num)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_16_31 : 16;
  {
  FCNCALL_SUBNAME("unnamed_16_31");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.unnamed_16_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.unnamed_16_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.u32,FCNCALL_CALL_TYPE(uint32,custom_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 sampleLength : 26;
      // uint32 unnamed_26_26 : 1;
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
    // uint32 unnamed_26_26 : 1;
    // uint32 mawFlag : 1;
    // uint32 unnamed_28_31 : 4;
  // } ;
  // uint32 sampleLength : 26;
  {
  FCNCALL_SUBNAME("sampleLength");
  { FCNCALL_CALL_CTRL_WRAP(header3.sampleLength,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header3.sampleLength)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_26_26 : 1;
  {
  FCNCALL_SUBNAME("unnamed_26_26");
  { FCNCALL_CALL_CTRL_WRAP(header3.unnamed_26_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header3.unnamed_26_26)); }
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
#endif//USER_DEF_SIS3316_PSP_S438

#ifndef USER_DEF_SIS3316_S2_S438
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(SIS3316_S2_S438)::FCNCALL_NAME(SIS3316_S2_S438)
{
  FCNCALL_INIT;
  // raw_array<DATA32,DATA32,128> channel_header;
  {
  FCNCALL_SUBNAME("channel_header");
  { FCNCALL_CALL_CTRL_WRAP(channel_header,channel_header.FCNCALL_CALL(channel_header)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA16,DATA16,800> trace;
  {
  FCNCALL_SUBNAME("trace");
  { FCNCALL_CALL_CTRL_WRAP(trace,trace.FCNCALL_CALL(trace)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 id : 8;
      // uint32 channel_num : 8;
      // uint32 unnamed_16_31 : 16;
    // } ;
    // uint32 u32;
  // } custom_header;
  {
  FCNCALL_SUBNAME("custom_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 id : 8;
    // uint32 channel_num : 8;
    // uint32 unnamed_16_31 : 16;
  // } ;
  // uint32 id : 8;
  {
  FCNCALL_SUBNAME("id");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 channel_num : 8;
  {
  FCNCALL_SUBNAME("channel_num");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.channel_num,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.channel_num)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_16_31 : 16;
  {
  FCNCALL_SUBNAME("unnamed_16_31");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.unnamed_16_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.unnamed_16_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.u32,FCNCALL_CALL_TYPE(uint32,custom_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 sampleLength : 26;
      // uint32 unnamed_26_26 : 1;
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
    // uint32 unnamed_26_26 : 1;
    // uint32 mawFlag : 1;
    // uint32 unnamed_28_31 : 4;
  // } ;
  // uint32 sampleLength : 26;
  {
  FCNCALL_SUBNAME("sampleLength");
  { FCNCALL_CALL_CTRL_WRAP(header3.sampleLength,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header3.sampleLength)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_26_26 : 1;
  {
  FCNCALL_SUBNAME("unnamed_26_26");
  { FCNCALL_CALL_CTRL_WRAP(header3.unnamed_26_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header3.unnamed_26_26)); }
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
#endif//USER_DEF_SIS3316_S2_S438

#ifndef USER_DEF_SIS3316_S2_SCALERS_S438
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(SIS3316_S2_SCALERS_S438)::FCNCALL_NAME(SIS3316_S2_SCALERS_S438)
{
  FCNCALL_INIT;
  // raw_array<DATA32,DATA32,192> scalers;
  {
  FCNCALL_SUBNAME("scalers");
  { FCNCALL_CALL_CTRL_WRAP(scalers,scalers.FCNCALL_CALL(scalers)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_31 : 32;
    // } ;
    // uint32 u32;
  // } custom_header;
  {
  FCNCALL_SUBNAME("custom_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_31 : 32;
  // } ;
  // uint32 unnamed_0_31 : 32;
  {
  FCNCALL_SUBNAME("unnamed_0_31");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.unnamed_0_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.unnamed_0_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.u32,FCNCALL_CALL_TYPE(uint32,custom_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_SIS3316_S2_SCALERS_S438

#ifndef USER_DEF_SIS3316_SCALERS_S438
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(SIS3316_SCALERS_S438)::FCNCALL_NAME(SIS3316_SCALERS_S438)
{
  FCNCALL_INIT;
  // raw_array<DATA32,DATA32,480> scalers;
  {
  FCNCALL_SUBNAME("scalers");
  { FCNCALL_CALL_CTRL_WRAP(scalers,scalers.FCNCALL_CALL(scalers)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_31 : 32;
    // } ;
    // uint32 u32;
  // } custom_header;
  {
  FCNCALL_SUBNAME("custom_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_31 : 32;
  // } ;
  // uint32 unnamed_0_31 : 32;
  {
  FCNCALL_SUBNAME("unnamed_0_31");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.unnamed_0_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.unnamed_0_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.u32,FCNCALL_CALL_TYPE(uint32,custom_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_SIS3316_SCALERS_S438

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

#ifndef USER_DEF_TACQUILA_DATA
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TACQUILA_DATA)::FCNCALL_NAME(TACQUILA_DATA)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA12,DATA12,17> tac[30];
  {
  FCNCALL_SUBNAME("tac");
  FCNCALL_FOR(__i0,30)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(tac__i0,,__i0,tac[__i0].FCNCALL_CALL(tac[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA12,DATA12,17> adc[30];
  {
  FCNCALL_SUBNAME("adc");
  FCNCALL_FOR(__i0,30)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(adc__i0,,__i0,adc[__i0].FCNCALL_CALL(adc[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA12,DATA12,17> clk[30];
  {
  FCNCALL_SUBNAME("clk");
  FCNCALL_FOR(__i0,30)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(clk__i0,,__i0,clk[__i0].FCNCALL_CALL(clk[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 count : 9;
      // uint32 dummy1 : 3;
      // uint32 trigger_tac : 4;
      // uint32 trigger_sam : 4;
      // uint32 lec : 4;
      // uint32 gtb : 4;
      // uint32 sam : 4;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 count : 9;
    // uint32 dummy1 : 3;
    // uint32 trigger_tac : 4;
    // uint32 trigger_sam : 4;
    // uint32 lec : 4;
    // uint32 gtb : 4;
    // uint32 sam : 4;
  // } ;
  // uint32 count : 9;
  {
  FCNCALL_SUBNAME("count");
  { FCNCALL_CALL_CTRL_WRAP(header.count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy1 : 3;
  {
  FCNCALL_SUBNAME("dummy1");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy1,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy1)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_tac : 4;
  {
  FCNCALL_SUBNAME("trigger_tac");
  { FCNCALL_CALL_CTRL_WRAP(header.trigger_tac,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.trigger_tac)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_sam : 4;
  {
  FCNCALL_SUBNAME("trigger_sam");
  { FCNCALL_CALL_CTRL_WRAP(header.trigger_sam,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.trigger_sam)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 lec : 4;
  {
  FCNCALL_SUBNAME("lec");
  { FCNCALL_CALL_CTRL_WRAP(header.lec,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.lec)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 gtb : 4;
  {
  FCNCALL_SUBNAME("gtb");
  { FCNCALL_CALL_CTRL_WRAP(header.gtb,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.gtb)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sam : 4;
  {
  FCNCALL_SUBNAME("sam");
  { FCNCALL_CALL_CTRL_WRAP(header.sam,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.sam)); }
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
#endif//USER_DEF_TACQUILA_DATA

#ifndef USER_DEF_TACQUILA_DATA_S438B
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TACQUILA_DATA_S438B)::FCNCALL_NAME(TACQUILA_DATA_S438B)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA12,DATA12,32> tac[30];
  {
  FCNCALL_SUBNAME("tac");
  FCNCALL_FOR(__i0,30)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(tac__i0,,__i0,tac[__i0].FCNCALL_CALL(tac[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA12,DATA12,17> adc[30];
  {
  FCNCALL_SUBNAME("adc");
  FCNCALL_FOR(__i0,30)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(adc__i0,,__i0,adc[__i0].FCNCALL_CALL(adc[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA12,DATA12,17> clk[30];
  {
  FCNCALL_SUBNAME("clk");
  FCNCALL_FOR(__i0,30)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(clk__i0,,__i0,clk[__i0].FCNCALL_CALL(clk[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 count : 9;
      // uint32 dummy1 : 3;
      // uint32 trigger_tac : 4;
      // uint32 trigger_sam : 4;
      // uint32 lec : 4;
      // uint32 gtb : 4;
      // uint32 sam : 4;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 count : 9;
    // uint32 dummy1 : 3;
    // uint32 trigger_tac : 4;
    // uint32 trigger_sam : 4;
    // uint32 lec : 4;
    // uint32 gtb : 4;
    // uint32 sam : 4;
  // } ;
  // uint32 count : 9;
  {
  FCNCALL_SUBNAME("count");
  { FCNCALL_CALL_CTRL_WRAP(header.count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy1 : 3;
  {
  FCNCALL_SUBNAME("dummy1");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy1,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy1)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_tac : 4;
  {
  FCNCALL_SUBNAME("trigger_tac");
  { FCNCALL_CALL_CTRL_WRAP(header.trigger_tac,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.trigger_tac)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_sam : 4;
  {
  FCNCALL_SUBNAME("trigger_sam");
  { FCNCALL_CALL_CTRL_WRAP(header.trigger_sam,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.trigger_sam)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 lec : 4;
  {
  FCNCALL_SUBNAME("lec");
  { FCNCALL_CALL_CTRL_WRAP(header.lec,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.lec)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 gtb : 4;
  {
  FCNCALL_SUBNAME("gtb");
  { FCNCALL_CALL_CTRL_WRAP(header.gtb,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.gtb)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sam : 4;
  {
  FCNCALL_SUBNAME("sam");
  { FCNCALL_CALL_CTRL_WRAP(header.sam,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.sam)); }
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
#endif//USER_DEF_TACQUILA_DATA_S438B

#ifndef USER_DEF_TAMEX_CHANNEL
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TAMEX_CHANNEL)::FCNCALL_NAME(TAMEX_CHANNEL)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA32,DATA32,128> type;
  {
  FCNCALL_SUBNAME("type");
  { FCNCALL_CALL_CTRL_WRAP(type,type.FCNCALL_CALL(type)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,128> tdc;
  {
  FCNCALL_SUBNAME("tdc");
  { FCNCALL_CALL_CTRL_WRAP(tdc,tdc.FCNCALL_CALL(tdc)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_7 : 8;
      // uint32 trigger_type : 4;
      // uint32 sfp_index : 4;
      // uint32 card_index : 8;
      // uint32 channel_index : 8;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_7 : 8;
    // uint32 trigger_type : 4;
    // uint32 sfp_index : 4;
    // uint32 card_index : 8;
    // uint32 channel_index : 8;
  // } ;
  // uint32 unnamed_0_7 : 8;
  {
  FCNCALL_SUBNAME("unnamed_0_7");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_0_7,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_0_7)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_type : 4;
  {
  FCNCALL_SUBNAME("trigger_type");
  { FCNCALL_CALL_CTRL_WRAP(header.trigger_type,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.trigger_type)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sfp_index : 4;
  {
  FCNCALL_SUBNAME("sfp_index");
  { FCNCALL_CALL_CTRL_WRAP(header.sfp_index,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.sfp_index)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 card_index : 8;
  {
  FCNCALL_SUBNAME("card_index");
  { FCNCALL_CALL_CTRL_WRAP(header.card_index,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.card_index)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 channel_index : 8;
  {
  FCNCALL_SUBNAME("channel_index");
  { FCNCALL_CALL_CTRL_WRAP(header.channel_index,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.channel_index)); }
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
  // uint32 data_size;
  {
  FCNCALL_SUBNAME("data_size");
  { FCNCALL_CALL_CTRL_WRAP(data_size,FCNCALL_CALL_TYPE(uint32,data_size)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 yanana_phone : 24;
      // uint32 unnamed_24_31 : 8;
    // } ;
    // uint32 u32;
  // } tdc_header;
  {
  FCNCALL_SUBNAME("tdc_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 yanana_phone : 24;
    // uint32 unnamed_24_31 : 8;
  // } ;
  // uint32 yanana_phone : 24;
  {
  FCNCALL_SUBNAME("yanana_phone");
  { FCNCALL_CALL_CTRL_WRAP(tdc_header.yanana_phone,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,tdc_header.yanana_phone)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_24_31 : 8;
  {
  FCNCALL_SUBNAME("unnamed_24_31");
  { FCNCALL_CALL_CTRL_WRAP(tdc_header.unnamed_24_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,tdc_header.unnamed_24_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(tdc_header.u32,FCNCALL_CALL_TYPE(uint32,tdc_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 wanana_phone : 24;
      // uint32 unnamed_24_31 : 8;
    // } ;
    // uint32 u32;
  // } tdc_trailer;
  {
  FCNCALL_SUBNAME("tdc_trailer");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 wanana_phone : 24;
    // uint32 unnamed_24_31 : 8;
  // } ;
  // uint32 wanana_phone : 24;
  {
  FCNCALL_SUBNAME("wanana_phone");
  { FCNCALL_CALL_CTRL_WRAP(tdc_trailer.wanana_phone,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,tdc_trailer.wanana_phone)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_24_31 : 8;
  {
  FCNCALL_SUBNAME("unnamed_24_31");
  { FCNCALL_CALL_CTRL_WRAP(tdc_trailer.unnamed_24_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,tdc_trailer.unnamed_24_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(tdc_trailer.u32,FCNCALL_CALL_TYPE(uint32,tdc_trailer.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TAMEX_CHANNEL

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

#ifndef USER_DEF_TRIDI
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TRIDI)::FCNCALL_NAME(TRIDI)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 tpat : 16;
      // uint32 unnamed_16_31 : 16;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 tpat : 16;
    // uint32 unnamed_16_31 : 16;
  // } ;
  // uint32 tpat : 16;
  {
  FCNCALL_SUBNAME("tpat");
  { FCNCALL_CALL_CTRL_WRAP(header.tpat,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.tpat)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_16_31 : 16;
  {
  FCNCALL_SUBNAME("unnamed_16_31");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_16_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_16_31)); }
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
  // uint32 ts_msb;
  {
  FCNCALL_SUBNAME("ts_msb");
  { FCNCALL_CALL_CTRL_WRAP(ts_msb,FCNCALL_CALL_TYPE(uint32,ts_msb)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 ts_lsb;
  {
  FCNCALL_SUBNAME("ts_lsb");
  { FCNCALL_CALL_CTRL_WRAP(ts_lsb,FCNCALL_CALL_TYPE(uint32,ts_lsb)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TRIDI

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
      // uint32 dummy_10_23 : 14;
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
    // uint32 dummy_10_23 : 14;
    // uint32 id : 8;
  // } ;
  // uint32 count : 10;
  {
  FCNCALL_SUBNAME("count");
  { FCNCALL_CALL_CTRL_WRAP(header.count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_10_23 : 14;
  {
  FCNCALL_SUBNAME("dummy_10_23");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy_10_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy_10_23)); }
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

#ifndef USER_DEF_TRLO_SCALER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TRLO_SCALER)::FCNCALL_NAME(TRLO_SCALER)
{
  FCNCALL_INIT;
  // raw_list_ii_zero_suppress<DATA32,DATA32,16> stamps;
  {
  FCNCALL_SUBNAME("stamps");
  { FCNCALL_CALL_CTRL_WRAP(stamps,stamps.FCNCALL_CALL(stamps)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 crate_id : 8;
      // uint32 unnamed_8_31 : 24;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 crate_id : 8;
    // uint32 unnamed_8_31 : 24;
  // } ;
  // uint32 crate_id : 8;
  {
  FCNCALL_SUBNAME("crate_id");
  { FCNCALL_CALL_CTRL_WRAP(header.crate_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.crate_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_8_31 : 24;
  {
  FCNCALL_SUBNAME("unnamed_8_31");
  { FCNCALL_CALL_CTRL_WRAP(header.unnamed_8_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.unnamed_8_31)); }
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
#endif//USER_DEF_TRLO_SCALER

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

#ifndef USER_DEF_VME_CAEN_V1190_S438_SUBTDC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1190_S438_SUBTDC)::FCNCALL_NAME(VME_CAEN_V1190_S438_SUBTDC)
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
#endif//USER_DEF_VME_CAEN_V1190_S438_SUBTDC

#ifndef USER_DEF_VME_CAEN_V1190_S438
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1190_S438)::FCNCALL_NAME(VME_CAEN_V1190_S438)
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
      // uint32 dummy_5_23 : 19;
      // uint32 unnamed_24_31 : 8;
    // } ;
    // uint32 u32;
  // } ucesb_separator;
  {
  FCNCALL_SUBNAME("ucesb_separator");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 geom : 5;
    // uint32 dummy_5_23 : 19;
    // uint32 unnamed_24_31 : 8;
  // } ;
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(ucesb_separator.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,ucesb_separator.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_5_23 : 19;
  {
  FCNCALL_SUBNAME("dummy_5_23");
  { FCNCALL_CALL_CTRL_WRAP(ucesb_separator.dummy_5_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,ucesb_separator.dummy_5_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_24_31 : 8;
  {
  FCNCALL_SUBNAME("unnamed_24_31");
  { FCNCALL_CALL_CTRL_WRAP(ucesb_separator.unnamed_24_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,ucesb_separator.unnamed_24_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(ucesb_separator.u32,FCNCALL_CALL_TYPE(uint32,ucesb_separator.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 dummy_0_4 : 5;
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
    // uint32 dummy_0_4 : 5;
    // uint32 event_number : 22;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 dummy_0_4 : 5;
  {
  FCNCALL_SUBNAME("dummy_0_4");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy_0_4,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy_0_4)); }
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
  // VME_CAEN_V1190_S438_SUBTDC tdc[4];
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
      // uint32 dummy_0_4 : 5;
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
    // uint32 dummy_0_4 : 5;
    // uint32 word_count : 15;
    // uint32 dummy_20_23 : 4;
    // uint32 tdc_error : 1;
    // uint32 buffer_overflow : 1;
    // uint32 trigger_lost : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 dummy_0_4 : 5;
  {
  FCNCALL_SUBNAME("dummy_0_4");
  { FCNCALL_CALL_CTRL_WRAP(trailer.dummy_0_4,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.dummy_0_4)); }
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
#endif//USER_DEF_VME_CAEN_V1190_S438

#ifndef USER_DEF_VME_CAEN_V1190_S438_SHORT_SUBTDC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1190_S438_SHORT_SUBTDC)::FCNCALL_NAME(VME_CAEN_V1190_S438_SHORT_SUBTDC)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V1190_S438_SHORT_SUBTDC

#ifndef USER_DEF_VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR)::FCNCALL_NAME(VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR)
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
#endif//USER_DEF_VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR

#ifndef USER_DEF_VME_CAEN_V1190_S438_SHORT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1190_S438_SHORT)::FCNCALL_NAME(VME_CAEN_V1190_S438_SHORT)
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
  // VME_CAEN_V1190_S438_SHORT_SUBTDC tdc[4];
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
  // VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR err[4];
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
#endif//USER_DEF_VME_CAEN_V1190_S438_SHORT

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

#ifndef USER_DEF_VME_CAEN_V1290_S438_SUBTDC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1290_S438_SUBTDC)::FCNCALL_NAME(VME_CAEN_V1290_S438_SUBTDC)
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
#endif//USER_DEF_VME_CAEN_V1290_S438_SUBTDC

#ifndef USER_DEF_VME_CAEN_V1290_S438
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1290_S438)::FCNCALL_NAME(VME_CAEN_V1290_S438)
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
      // uint32 dummy_5_23 : 19;
      // uint32 unnamed_24_31 : 8;
    // } ;
    // uint32 u32;
  // } ucesb_separator;
  {
  FCNCALL_SUBNAME("ucesb_separator");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 geom : 5;
    // uint32 dummy_5_23 : 19;
    // uint32 unnamed_24_31 : 8;
  // } ;
  // uint32 geom : 5;
  {
  FCNCALL_SUBNAME("geom");
  { FCNCALL_CALL_CTRL_WRAP(ucesb_separator.geom,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,ucesb_separator.geom)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_5_23 : 19;
  {
  FCNCALL_SUBNAME("dummy_5_23");
  { FCNCALL_CALL_CTRL_WRAP(ucesb_separator.dummy_5_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,ucesb_separator.dummy_5_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_24_31 : 8;
  {
  FCNCALL_SUBNAME("unnamed_24_31");
  { FCNCALL_CALL_CTRL_WRAP(ucesb_separator.unnamed_24_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,ucesb_separator.unnamed_24_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(ucesb_separator.u32,FCNCALL_CALL_TYPE(uint32,ucesb_separator.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 dummy_0_4 : 5;
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
    // uint32 dummy_0_4 : 5;
    // uint32 event_number : 22;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 dummy_0_4 : 5;
  {
  FCNCALL_SUBNAME("dummy_0_4");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy_0_4,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy_0_4)); }
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
  // VME_CAEN_V1290_S438_SUBTDC tdc[4];
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
      // uint32 dummy_0_4 : 5;
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
    // uint32 dummy_0_4 : 5;
    // uint32 word_count : 15;
    // uint32 dummy_20_23 : 4;
    // uint32 tdc_error : 1;
    // uint32 buffer_overflow : 1;
    // uint32 trigger_lost : 1;
    // uint32 unnamed_27_31 : 5;
  // } ;
  // uint32 dummy_0_4 : 5;
  {
  FCNCALL_SUBNAME("dummy_0_4");
  { FCNCALL_CALL_CTRL_WRAP(trailer.dummy_0_4,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trailer.dummy_0_4)); }
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
#endif//USER_DEF_VME_CAEN_V1290_S438

#ifndef USER_DEF_VME_CAEN_V1290_S438_SHORT_SUBTDC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1290_S438_SHORT_SUBTDC)::FCNCALL_NAME(VME_CAEN_V1290_S438_SHORT_SUBTDC)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CAEN_V1290_S438_SHORT_SUBTDC

#ifndef USER_DEF_VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR)::FCNCALL_NAME(VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR)
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
#endif//USER_DEF_VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR

#ifndef USER_DEF_VME_CAEN_V1290_S438_SHORT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CAEN_V1290_S438_SHORT)::FCNCALL_NAME(VME_CAEN_V1290_S438_SHORT)
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
  // VME_CAEN_V1290_S438_SHORT_SUBTDC tdc[4];
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
  // VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR err[4];
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
#endif//USER_DEF_VME_CAEN_V1290_S438_SHORT

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

#ifndef USER_DEF_VME_GSI_VFTX2
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_GSI_VFTX2)::FCNCALL_NAME(VME_GSI_VFTX2)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,32,100> time_fine;
  {
  FCNCALL_SUBNAME("time_fine");
  { FCNCALL_CALL_CTRL_WRAP(time_fine,time_fine.FCNCALL_CALL(time_fine)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,32,100> time_coarse;
  {
  FCNCALL_SUBNAME("time_coarse");
  { FCNCALL_CALL_CTRL_WRAP(time_coarse,time_coarse.FCNCALL_CALL(time_coarse)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 time_trigger;
  {
  FCNCALL_SUBNAME("time_trigger");
  { FCNCALL_CALL_CTRL_WRAP(time_trigger,time_trigger.FCNCALL_CALL(time_trigger)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 id : 5;
      // uint32 internal_status : 4;
      // uint32 count : 9;
      // uint32 dummy_18_23 : 6;
      // uint32 unnamed_24_31 : 8;
    // } ;
    // uint32 u32;
  // } custom_header;
  {
  FCNCALL_SUBNAME("custom_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 id : 5;
    // uint32 internal_status : 4;
    // uint32 count : 9;
    // uint32 dummy_18_23 : 6;
    // uint32 unnamed_24_31 : 8;
  // } ;
  // uint32 id : 5;
  {
  FCNCALL_SUBNAME("id");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 internal_status : 4;
  {
  FCNCALL_SUBNAME("internal_status");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.internal_status,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.internal_status)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 count : 9;
  {
  FCNCALL_SUBNAME("count");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_18_23 : 6;
  {
  FCNCALL_SUBNAME("dummy_18_23");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.dummy_18_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.dummy_18_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_24_31 : 8;
  {
  FCNCALL_SUBNAME("unnamed_24_31");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.unnamed_24_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.unnamed_24_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.u32,FCNCALL_CALL_TYPE(uint32,custom_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_7 : 8;
      // uint32 dummy_8_10 : 3;
      // uint32 trigger_timestamp : 13;
      // uint32 dummy_24_28 : 5;
      // uint32 unnamed_29_30 : 2;
      // uint32 unnamed_31_31 : 1;
    // } ;
    // uint32 u32;
  // } event_header;
  {
  FCNCALL_SUBNAME("event_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_7 : 8;
    // uint32 dummy_8_10 : 3;
    // uint32 trigger_timestamp : 13;
    // uint32 dummy_24_28 : 5;
    // uint32 unnamed_29_30 : 2;
    // uint32 unnamed_31_31 : 1;
  // } ;
  // uint32 unnamed_0_7 : 8;
  {
  FCNCALL_SUBNAME("unnamed_0_7");
  { FCNCALL_CALL_CTRL_WRAP(event_header.unnamed_0_7,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,event_header.unnamed_0_7)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_8_10 : 3;
  {
  FCNCALL_SUBNAME("dummy_8_10");
  { FCNCALL_CALL_CTRL_WRAP(event_header.dummy_8_10,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,event_header.dummy_8_10)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_timestamp : 13;
  {
  FCNCALL_SUBNAME("trigger_timestamp");
  { FCNCALL_CALL_CTRL_WRAP(event_header.trigger_timestamp,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,event_header.trigger_timestamp)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_24_28 : 5;
  {
  FCNCALL_SUBNAME("dummy_24_28");
  { FCNCALL_CALL_CTRL_WRAP(event_header.dummy_24_28,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,event_header.dummy_24_28)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_29_30 : 2;
  {
  FCNCALL_SUBNAME("unnamed_29_30");
  { FCNCALL_CALL_CTRL_WRAP(event_header.unnamed_29_30,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,event_header.unnamed_29_30)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_31_31 : 1;
  {
  FCNCALL_SUBNAME("unnamed_31_31");
  { FCNCALL_CALL_CTRL_WRAP(event_header.unnamed_31_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,event_header.unnamed_31_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(event_header.u32,FCNCALL_CALL_TYPE(uint32,event_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_GSI_VFTX2

#ifndef USER_DEF_VME_GSI_VFTX2_7PS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_GSI_VFTX2_7PS)::FCNCALL_NAME(VME_GSI_VFTX2_7PS)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,32,100> time_fine;
  {
  FCNCALL_SUBNAME("time_fine");
  { FCNCALL_CALL_CTRL_WRAP(time_fine,time_fine.FCNCALL_CALL(time_fine)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,32,100> time_coarse;
  {
  FCNCALL_SUBNAME("time_coarse");
  { FCNCALL_CALL_CTRL_WRAP(time_coarse,time_coarse.FCNCALL_CALL(time_coarse)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 time_trigger;
  {
  FCNCALL_SUBNAME("time_trigger");
  { FCNCALL_CALL_CTRL_WRAP(time_trigger,time_trigger.FCNCALL_CALL(time_trigger)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 id : 5;
      // uint32 internal_status : 4;
      // uint32 count : 9;
      // uint32 dummy_18_23 : 6;
      // uint32 unnamed_24_31 : 8;
    // } ;
    // uint32 u32;
  // } custom_header;
  {
  FCNCALL_SUBNAME("custom_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 id : 5;
    // uint32 internal_status : 4;
    // uint32 count : 9;
    // uint32 dummy_18_23 : 6;
    // uint32 unnamed_24_31 : 8;
  // } ;
  // uint32 id : 5;
  {
  FCNCALL_SUBNAME("id");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 internal_status : 4;
  {
  FCNCALL_SUBNAME("internal_status");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.internal_status,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.internal_status)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 count : 9;
  {
  FCNCALL_SUBNAME("count");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_18_23 : 6;
  {
  FCNCALL_SUBNAME("dummy_18_23");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.dummy_18_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.dummy_18_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_24_31 : 8;
  {
  FCNCALL_SUBNAME("unnamed_24_31");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.unnamed_24_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.unnamed_24_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.u32,FCNCALL_CALL_TYPE(uint32,custom_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_GSI_VFTX2_7PS

#ifndef USER_DEF_VME_GSI_VFTX2_LT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_GSI_VFTX2_LT)::FCNCALL_NAME(VME_GSI_VFTX2_LT)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,64,100> time_fine;
  {
  FCNCALL_SUBNAME("time_fine");
  { FCNCALL_CALL_CTRL_WRAP(time_fine,time_fine.FCNCALL_CALL(time_fine)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,64,100> time_coarse;
  {
  FCNCALL_SUBNAME("time_coarse");
  { FCNCALL_CALL_CTRL_WRAP(time_coarse,time_coarse.FCNCALL_CALL(time_coarse)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 time_trigger;
  {
  FCNCALL_SUBNAME("time_trigger");
  { FCNCALL_CALL_CTRL_WRAP(time_trigger,time_trigger.FCNCALL_CALL(time_trigger)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 id : 5;
      // uint32 internal_status : 4;
      // uint32 count : 9;
      // uint32 dummy_18_23 : 6;
      // uint32 unnamed_24_31 : 8;
    // } ;
    // uint32 u32;
  // } custom_header;
  {
  FCNCALL_SUBNAME("custom_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 id : 5;
    // uint32 internal_status : 4;
    // uint32 count : 9;
    // uint32 dummy_18_23 : 6;
    // uint32 unnamed_24_31 : 8;
  // } ;
  // uint32 id : 5;
  {
  FCNCALL_SUBNAME("id");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 internal_status : 4;
  {
  FCNCALL_SUBNAME("internal_status");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.internal_status,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.internal_status)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 count : 9;
  {
  FCNCALL_SUBNAME("count");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_18_23 : 6;
  {
  FCNCALL_SUBNAME("dummy_18_23");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.dummy_18_23,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.dummy_18_23)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_24_31 : 8;
  {
  FCNCALL_SUBNAME("unnamed_24_31");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.unnamed_24_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,custom_header.unnamed_24_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(custom_header.u32,FCNCALL_CALL_TYPE(uint32,custom_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_7 : 8;
      // uint32 dummy_8_10 : 3;
      // uint32 trigger_timestamp : 13;
      // uint32 dummy_24_28 : 5;
      // uint32 unnamed_29_30 : 2;
      // uint32 unnamed_31_31 : 1;
    // } ;
    // uint32 u32;
  // } event_header;
  {
  FCNCALL_SUBNAME("event_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_7 : 8;
    // uint32 dummy_8_10 : 3;
    // uint32 trigger_timestamp : 13;
    // uint32 dummy_24_28 : 5;
    // uint32 unnamed_29_30 : 2;
    // uint32 unnamed_31_31 : 1;
  // } ;
  // uint32 unnamed_0_7 : 8;
  {
  FCNCALL_SUBNAME("unnamed_0_7");
  { FCNCALL_CALL_CTRL_WRAP(event_header.unnamed_0_7,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,event_header.unnamed_0_7)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_8_10 : 3;
  {
  FCNCALL_SUBNAME("dummy_8_10");
  { FCNCALL_CALL_CTRL_WRAP(event_header.dummy_8_10,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,event_header.dummy_8_10)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_timestamp : 13;
  {
  FCNCALL_SUBNAME("trigger_timestamp");
  { FCNCALL_CALL_CTRL_WRAP(event_header.trigger_timestamp,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,event_header.trigger_timestamp)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_24_28 : 5;
  {
  FCNCALL_SUBNAME("dummy_24_28");
  { FCNCALL_CALL_CTRL_WRAP(event_header.dummy_24_28,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,event_header.dummy_24_28)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_29_30 : 2;
  {
  FCNCALL_SUBNAME("unnamed_29_30");
  { FCNCALL_CALL_CTRL_WRAP(event_header.unnamed_29_30,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,event_header.unnamed_29_30)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_31_31 : 1;
  {
  FCNCALL_SUBNAME("unnamed_31_31");
  { FCNCALL_CALL_CTRL_WRAP(event_header.unnamed_31_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,event_header.unnamed_31_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(event_header.u32,FCNCALL_CALL_TYPE(uint32,event_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_GSI_VFTX2_LT

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

#ifndef USER_DEF_VME_STRUCK_SIS3316
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_STRUCK_SIS3316)::FCNCALL_NAME(VME_STRUCK_SIS3316)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA16,DATA16,900> data[2];
  {
  FCNCALL_SUBNAME("data");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(data__i0,,__i0,data[__i0].FCNCALL_CALL(data[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,3> maw[2];
  {
  FCNCALL_SUBNAME("maw");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(maw__i0,,__i0,maw[__i0].FCNCALL_CALL(maw[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,2> timeStamp[2];
  {
  FCNCALL_SUBNAME("timeStamp");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(timeStamp__i0,,__i0,timeStamp[__i0].FCNCALL_CALL(timeStamp[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,2> gate[2];
  {
  FCNCALL_SUBNAME("gate");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(gate__i0,,__i0,gate[__i0].FCNCALL_CALL(gate[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 chanNo : 16;
      // uint32 unnamed_16_31 : 16;
    // } ;
    // uint32 u32;
  // } header0;
  {
  FCNCALL_SUBNAME("header0");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 chanNo : 16;
    // uint32 unnamed_16_31 : 16;
  // } ;
  // uint32 chanNo : 16;
  {
  FCNCALL_SUBNAME("chanNo");
  { FCNCALL_CALL_CTRL_WRAP(header0.chanNo,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header0.chanNo)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_16_31 : 16;
  {
  FCNCALL_SUBNAME("unnamed_16_31");
  { FCNCALL_CALL_CTRL_WRAP(header0.unnamed_16_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header0.unnamed_16_31)); }
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
      // uint32 format : 4;
      // uint32 channelID : 12;
      // uint32 timeS : 16;
    // } ;
    // uint32 u32;
  // } header1;
  {
  FCNCALL_SUBNAME("header1");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 format : 4;
    // uint32 channelID : 12;
    // uint32 timeS : 16;
  // } ;
  // uint32 format : 4;
  {
  FCNCALL_SUBNAME("format");
  { FCNCALL_CALL_CTRL_WRAP(header1.format,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header1.format)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 channelID : 12;
  {
  FCNCALL_SUBNAME("channelID");
  { FCNCALL_CALL_CTRL_WRAP(header1.channelID,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header1.channelID)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 timeS : 16;
  {
  FCNCALL_SUBNAME("timeS");
  { FCNCALL_CALL_CTRL_WRAP(header1.timeS,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header1.timeS)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(header1.u32,FCNCALL_CALL_TYPE(uint32,header1.u32)); }
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
      // uint32 sum : 28;
      // uint32 unnamed_28_31 : 4;
    // } ;
    // uint32 u32;
  // } gate7;
  {
  FCNCALL_SUBNAME("gate7");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 sum : 28;
    // uint32 unnamed_28_31 : 4;
  // } ;
  // uint32 sum : 28;
  {
  FCNCALL_SUBNAME("sum");
  { FCNCALL_CALL_CTRL_WRAP(gate7.sum,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate7.sum)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_28_31 : 4;
  {
  FCNCALL_SUBNAME("unnamed_28_31");
  { FCNCALL_CALL_CTRL_WRAP(gate7.unnamed_28_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate7.unnamed_28_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(gate7.u32,FCNCALL_CALL_TYPE(uint32,gate7.u32)); }
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
  // } gate8;
  {
  FCNCALL_SUBNAME("gate8");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 sum : 28;
    // uint32 unnamed_28_31 : 4;
  // } ;
  // uint32 sum : 28;
  {
  FCNCALL_SUBNAME("sum");
  { FCNCALL_CALL_CTRL_WRAP(gate8.sum,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate8.sum)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_28_31 : 4;
  {
  FCNCALL_SUBNAME("unnamed_28_31");
  { FCNCALL_CALL_CTRL_WRAP(gate8.unnamed_28_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,gate8.unnamed_28_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(gate8.u32,FCNCALL_CALL_TYPE(uint32,gate8.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 max : 28;
      // uint32 unnamed_28_31 : 4;
    // } ;
    // uint32 u32;
  // } maw1;
  {
  FCNCALL_SUBNAME("maw1");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 max : 28;
    // uint32 unnamed_28_31 : 4;
  // } ;
  // uint32 max : 28;
  {
  FCNCALL_SUBNAME("max");
  { FCNCALL_CALL_CTRL_WRAP(maw1.max,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,maw1.max)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_28_31 : 4;
  {
  FCNCALL_SUBNAME("unnamed_28_31");
  { FCNCALL_CALL_CTRL_WRAP(maw1.unnamed_28_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,maw1.unnamed_28_31)); }
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
      // uint32 after : 28;
      // uint32 unnamed_28_31 : 4;
    // } ;
    // uint32 u32;
  // } maw2;
  {
  FCNCALL_SUBNAME("maw2");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 after : 28;
    // uint32 unnamed_28_31 : 4;
  // } ;
  // uint32 after : 28;
  {
  FCNCALL_SUBNAME("after");
  { FCNCALL_CALL_CTRL_WRAP(maw2.after,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,maw2.after)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_28_31 : 4;
  {
  FCNCALL_SUBNAME("unnamed_28_31");
  { FCNCALL_CALL_CTRL_WRAP(maw2.unnamed_28_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,maw2.unnamed_28_31)); }
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
      // uint32 before : 28;
      // uint32 unnamed_28_31 : 4;
    // } ;
    // uint32 u32;
  // } maw3;
  {
  FCNCALL_SUBNAME("maw3");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 before : 28;
    // uint32 unnamed_28_31 : 4;
  // } ;
  // uint32 before : 28;
  {
  FCNCALL_SUBNAME("before");
  { FCNCALL_CALL_CTRL_WRAP(maw3.before,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,maw3.before)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_28_31 : 4;
  {
  FCNCALL_SUBNAME("unnamed_28_31");
  { FCNCALL_CALL_CTRL_WRAP(maw3.unnamed_28_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,maw3.unnamed_28_31)); }
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
      // uint32 sampleLength : 26;
      // uint32 unnamed_26_26 : 1;
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
    // uint32 unnamed_26_26 : 1;
    // uint32 mawFlag : 1;
    // uint32 unnamed_28_31 : 4;
  // } ;
  // uint32 sampleLength : 26;
  {
  FCNCALL_SUBNAME("sampleLength");
  { FCNCALL_CALL_CTRL_WRAP(header3.sampleLength,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header3.sampleLength)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 unnamed_26_26 : 1;
  {
  FCNCALL_SUBNAME("unnamed_26_26");
  { FCNCALL_CALL_CTRL_WRAP(header3.unnamed_26_26,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header3.unnamed_26_26)); }
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
  // SOFT_SCALER32 scaler3;
  {
  FCNCALL_SUBNAME("scaler3");
  { FCNCALL_CALL_CTRL_WRAP(scaler3,scaler3.FCNCALL_CALL(scaler3)); }
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

#ifndef USER_DEF_TACQUILA_LAND_SUBEVENT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TACQUILA_LAND_SUBEVENT)::FCNCALL_NAME(TACQUILA_LAND_SUBEVENT)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TACQUILA_DATA data_sam5_gtb0;
  {
  FCNCALL_SUBNAME("data_sam5_gtb0");
  { FCNCALL_CALL_CTRL_WRAP(data_sam5_gtb0,data_sam5_gtb0.FCNCALL_CALL(data_sam5_gtb0)); }
  FCNCALL_SUBNAME_END;
  }
  // TACQUILA_DATA data_sam6_gtb1;
  {
  FCNCALL_SUBNAME("data_sam6_gtb1");
  { FCNCALL_CALL_CTRL_WRAP(data_sam6_gtb1,data_sam6_gtb1.FCNCALL_CALL(data_sam6_gtb1)); }
  FCNCALL_SUBNAME_END;
  }
  // TACQUILA_DATA data_sam6_gtb0;
  {
  FCNCALL_SUBNAME("data_sam6_gtb0");
  { FCNCALL_CALL_CTRL_WRAP(data_sam6_gtb0,data_sam6_gtb0.FCNCALL_CALL(data_sam6_gtb0)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TACQUILA_LAND_SUBEVENT

#ifndef USER_DEF_califa_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(califa_subev)::FCNCALL_NAME(califa_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // DUMMY_WORD dummy;
  {
  FCNCALL_SUBNAME("dummy");
  { FCNCALL_CALL_CTRL_WRAP(dummy,dummy.FCNCALL_CALL(dummy)); }
  FCNCALL_SUBNAME_END;
  }
  // TIMESTAMP_WHITERABBIT ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_califa_subev

#ifndef USER_DEF_daq_status_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(daq_status_subev)::FCNCALL_NAME(daq_status_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // DAQ_STATUS status;
  {
  FCNCALL_SUBNAME("status");
  { FCNCALL_CALL_CTRL_WRAP(status,status.FCNCALL_CALL(status)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_daq_status_subev

#ifndef USER_DEF_empty_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(empty_subev)::FCNCALL_NAME(empty_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  FCNCALL_RET;
}
#endif//USER_DEF_empty_subev

#ifndef USER_DEF_fiber_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(fiber_subev)::FCNCALL_NAME(fiber_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // FEBEX_NOTRACE GFI0;
  {
  FCNCALL_SUBNAME("GFI0");
  { FCNCALL_CALL_CTRL_WRAP(GFI0,GFI0.FCNCALL_CALL(GFI0)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE GFI2;
  {
  FCNCALL_SUBNAME("GFI2");
  { FCNCALL_CALL_CTRL_WRAP(GFI2,GFI2.FCNCALL_CALL(GFI2)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE GFI1;
  {
  FCNCALL_SUBNAME("GFI1");
  { FCNCALL_CALL_CTRL_WRAP(GFI1,GFI1.FCNCALL_CALL(GFI1)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE GFI3;
  {
  FCNCALL_SUBNAME("GFI3");
  { FCNCALL_CALL_CTRL_WRAP(GFI3,GFI3.FCNCALL_CALL(GFI3)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE GFI4;
  {
  FCNCALL_SUBNAME("GFI4");
  { FCNCALL_CALL_CTRL_WRAP(GFI4,GFI4.FCNCALL_CALL(GFI4)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE fi4[4];
  {
  FCNCALL_SUBNAME("fi4");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(fi4__i0,,__i0,fi4[__i0].FCNCALL_CALL(fi4[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_EVENTHEADER evhe;
  {
  FCNCALL_SUBNAME("evhe");
  { FCNCALL_CALL_CTRL_WRAP(evhe,evhe.FCNCALL_CALL(evhe)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_fiber_subev

#ifndef USER_DEF_los_psp_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(los_psp_subev)::FCNCALL_NAME(los_psp_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // VME_GSI_VFTX2_7PS vftx2_1;
  {
  FCNCALL_SUBNAME("vftx2_1");
  { FCNCALL_CALL_CTRL_WRAP(vftx2_1,vftx2_1.FCNCALL_CALL(vftx2_1)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_MESYTEC_MADC32 madc32;
  {
  FCNCALL_SUBNAME("madc32");
  { FCNCALL_CALL_CTRL_WRAP(madc32,madc32.FCNCALL_CALL(madc32)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_GSI_VFTX2_7PS vftx2_2;
  {
  FCNCALL_SUBNAME("vftx2_2");
  { FCNCALL_CALL_CTRL_WRAP(vftx2_2,vftx2_2.FCNCALL_CALL(vftx2_2)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_STD_VME land_vme;
  {
  FCNCALL_SUBNAME("land_vme");
  { FCNCALL_CALL_CTRL_WRAP(land_vme,land_vme.FCNCALL_CALL(land_vme)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_los_psp_subev

#ifndef USER_DEF_los_scaler_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(los_scaler_subev)::FCNCALL_NAME(los_scaler_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TRLO_SCALER scaler;
  {
  FCNCALL_SUBNAME("scaler");
  { FCNCALL_CALL_CTRL_WRAP(scaler,scaler.FCNCALL_CALL(scaler)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_los_scaler_subev

#ifndef USER_DEF_mark_event_time
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(mark_event_time)::FCNCALL_NAME(mark_event_time)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TRLO_SAMPLER sampler_los;
  {
  FCNCALL_SUBNAME("sampler_los");
  { FCNCALL_CALL_CTRL_WRAP(sampler_los,sampler_los.FCNCALL_CALL(sampler_los)); }
  FCNCALL_SUBNAME_END;
  }
  // TRLO_SAMPLER sampler_cb_sum;
  {
  FCNCALL_SUBNAME("sampler_cb_sum");
  { FCNCALL_CALL_CTRL_WRAP(sampler_cb_sum,sampler_cb_sum.FCNCALL_CALL(sampler_cb_sum)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_STD_VME land_vme;
  {
  FCNCALL_SUBNAME("land_vme");
  { FCNCALL_CALL_CTRL_WRAP(land_vme,land_vme.FCNCALL_CALL(land_vme)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_mark_event_time

#ifndef USER_DEF_mfi_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(mfi_subev)::FCNCALL_NAME(mfi_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // NXYTER_PADDING pads;
  {
  FCNCALL_SUBNAME("pads");
  { FCNCALL_CALL_CTRL_WRAP(pads,pads.FCNCALL_CALL(pads)); }
  FCNCALL_SUBNAME_END;
  }
  // NXYTER data01;
  {
  FCNCALL_SUBNAME("data01");
  { FCNCALL_CALL_CTRL_WRAP(data01,data01.FCNCALL_CALL(data01)); }
  FCNCALL_SUBNAME_END;
  }
  // NXYTER data00;
  {
  FCNCALL_SUBNAME("data00");
  { FCNCALL_CALL_CTRL_WRAP(data00,data00.FCNCALL_CALL(data00)); }
  FCNCALL_SUBNAME_END;
  }
  // NXYTER data10;
  {
  FCNCALL_SUBNAME("data10");
  { FCNCALL_CALL_CTRL_WRAP(data10,data10.FCNCALL_CALL(data10)); }
  FCNCALL_SUBNAME_END;
  }
  // NXYTER data11;
  {
  FCNCALL_SUBNAME("data11");
  { FCNCALL_CALL_CTRL_WRAP(data11,data11.FCNCALL_CALL(data11)); }
  FCNCALL_SUBNAME_END;
  }
  // NXYTER data20;
  {
  FCNCALL_SUBNAME("data20");
  { FCNCALL_CALL_CTRL_WRAP(data20,data20.FCNCALL_CALL(data20)); }
  FCNCALL_SUBNAME_END;
  }
  // NXYTER data21;
  {
  FCNCALL_SUBNAME("data21");
  { FCNCALL_CALL_CTRL_WRAP(data21,data21.FCNCALL_CALL(data21)); }
  FCNCALL_SUBNAME_END;
  }
  // NXYTER data30;
  {
  FCNCALL_SUBNAME("data30");
  { FCNCALL_CALL_CTRL_WRAP(data30,data30.FCNCALL_CALL(data30)); }
  FCNCALL_SUBNAME_END;
  }
  // NXYTER data31;
  {
  FCNCALL_SUBNAME("data31");
  { FCNCALL_CALL_CTRL_WRAP(data31,data31.FCNCALL_CALL(data31)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_mfi_subev

#ifndef USER_DEF_neuland_subevent
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(neuland_subevent)::FCNCALL_NAME(neuland_subevent)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TACQUILA_DATA_S438B data_sam5_gtb0;
  {
  FCNCALL_SUBNAME("data_sam5_gtb0");
  { FCNCALL_CALL_CTRL_WRAP(data_sam5_gtb0,data_sam5_gtb0.FCNCALL_CALL(data_sam5_gtb0)); }
  FCNCALL_SUBNAME_END;
  }
  // TACQUILA_DATA_S438B data_sam6_gtb1;
  {
  FCNCALL_SUBNAME("data_sam6_gtb1");
  { FCNCALL_CALL_CTRL_WRAP(data_sam6_gtb1,data_sam6_gtb1.FCNCALL_CALL(data_sam6_gtb1)); }
  FCNCALL_SUBNAME_END;
  }
  // TACQUILA_DATA_S438B data_sam6_gtb0;
  {
  FCNCALL_SUBNAME("data_sam6_gtb0");
  { FCNCALL_CALL_CTRL_WRAP(data_sam6_gtb0,data_sam6_gtb0.FCNCALL_CALL(data_sam6_gtb0)); }
  FCNCALL_SUBNAME_END;
  }
  // TACQUILA_DATA_S438B data_sam5_gtb1;
  {
  FCNCALL_SUBNAME("data_sam5_gtb1");
  { FCNCALL_CALL_CTRL_WRAP(data_sam5_gtb1,data_sam5_gtb1.FCNCALL_CALL(data_sam5_gtb1)); }
  FCNCALL_SUBNAME_END;
  }
  // TACQUILA_DATA_S438B data_sam7_gtb0;
  {
  FCNCALL_SUBNAME("data_sam7_gtb0");
  { FCNCALL_CALL_CTRL_WRAP(data_sam7_gtb0,data_sam7_gtb0.FCNCALL_CALL(data_sam7_gtb0)); }
  FCNCALL_SUBNAME_END;
  }
  // TACQUILA_DATA_S438B data_sam7_gtb1;
  {
  FCNCALL_SUBNAME("data_sam7_gtb1");
  { FCNCALL_CALL_CTRL_WRAP(data_sam7_gtb1,data_sam7_gtb1.FCNCALL_CALL(data_sam7_gtb1)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_neuland_subevent

#ifndef USER_DEF_neuland_tamex_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(neuland_tamex_subev)::FCNCALL_NAME(neuland_tamex_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // union 
  // {
    // struct 
    // {
      // uint32 ns_after_trigger : 11;
      // uint32 dummy_11_15 : 5;
      // uint32 ns_before_trigger : 11;
      // uint32 dummy_27_31 : 5;
    // } ;
    // uint32 u32;
  // } trigger_window;
  {
  FCNCALL_SUBNAME("trigger_window");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 ns_after_trigger : 11;
    // uint32 dummy_11_15 : 5;
    // uint32 ns_before_trigger : 11;
    // uint32 dummy_27_31 : 5;
  // } ;
  // uint32 ns_after_trigger : 11;
  {
  FCNCALL_SUBNAME("ns_after_trigger");
  { FCNCALL_CALL_CTRL_WRAP(trigger_window.ns_after_trigger,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger_window.ns_after_trigger)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_11_15 : 5;
  {
  FCNCALL_SUBNAME("dummy_11_15");
  { FCNCALL_CALL_CTRL_WRAP(trigger_window.dummy_11_15,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger_window.dummy_11_15)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 ns_before_trigger : 11;
  {
  FCNCALL_SUBNAME("ns_before_trigger");
  { FCNCALL_CALL_CTRL_WRAP(trigger_window.ns_before_trigger,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger_window.ns_before_trigger)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_27_31 : 5;
  {
  FCNCALL_SUBNAME("dummy_27_31");
  { FCNCALL_CALL_CTRL_WRAP(trigger_window.dummy_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger_window.dummy_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trigger_window.u32,FCNCALL_CALL_TYPE(uint32,trigger_window.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // TAMEX_CHANNEL tamex[13];
  {
  FCNCALL_SUBNAME("tamex");
  FCNCALL_FOR(__i0,13)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(tamex__i0,,__i0,tamex[__i0].FCNCALL_CALL(tamex[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_neuland_tamex_subev

#ifndef USER_DEF_psp_febex_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(psp_febex_subev)::FCNCALL_NAME(psp_febex_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // FEBEX_NOTRACE febex1;
  {
  FCNCALL_SUBNAME("febex1");
  { FCNCALL_CALL_CTRL_WRAP(febex1,febex1.FCNCALL_CALL(febex1)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE febex3;
  {
  FCNCALL_SUBNAME("febex3");
  { FCNCALL_CALL_CTRL_WRAP(febex3,febex3.FCNCALL_CALL(febex3)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE febex2;
  {
  FCNCALL_SUBNAME("febex2");
  { FCNCALL_CALL_CTRL_WRAP(febex2,febex2.FCNCALL_CALL(febex2)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE febex4;
  {
  FCNCALL_SUBNAME("febex4");
  { FCNCALL_CALL_CTRL_WRAP(febex4,febex4.FCNCALL_CALL(febex4)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE febex5;
  {
  FCNCALL_SUBNAME("febex5");
  { FCNCALL_CALL_CTRL_WRAP(febex5,febex5.FCNCALL_CALL(febex5)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE febex6;
  {
  FCNCALL_SUBNAME("febex6");
  { FCNCALL_CALL_CTRL_WRAP(febex6,febex6.FCNCALL_CALL(febex6)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE febex7;
  {
  FCNCALL_SUBNAME("febex7");
  { FCNCALL_CALL_CTRL_WRAP(febex7,febex7.FCNCALL_CALL(febex7)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE febex8;
  {
  FCNCALL_SUBNAME("febex8");
  { FCNCALL_CALL_CTRL_WRAP(febex8,febex8.FCNCALL_CALL(febex8)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE febex9;
  {
  FCNCALL_SUBNAME("febex9");
  { FCNCALL_CALL_CTRL_WRAP(febex9,febex9.FCNCALL_CALL(febex9)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_NOTRACE febex10;
  {
  FCNCALL_SUBNAME("febex10");
  { FCNCALL_CALL_CTRL_WRAP(febex10,febex10.FCNCALL_CALL(febex10)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_EVENTHEADER eh;
  {
  FCNCALL_SUBNAME("eh");
  { FCNCALL_CALL_CTRL_WRAP(eh,eh.FCNCALL_CALL(eh)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_psp_febex_subev

#ifndef USER_DEF_psp_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(psp_subev)::FCNCALL_NAME(psp_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // SIS3316_ACTAR_S438 sis3316_3;
  {
  FCNCALL_SUBNAME("sis3316_3");
  { FCNCALL_CALL_CTRL_WRAP(sis3316_3,sis3316_3.FCNCALL_CALL(sis3316_3)); }
  FCNCALL_SUBNAME_END;
  }
  // SIS3316_ACTAR_S438 sis3316_5;
  {
  FCNCALL_SUBNAME("sis3316_5");
  { FCNCALL_CALL_CTRL_WRAP(sis3316_5,sis3316_5.FCNCALL_CALL(sis3316_5)); }
  FCNCALL_SUBNAME_END;
  }
  // SIS3316_ACTAR_S438 sis3316_4;
  {
  FCNCALL_SUBNAME("sis3316_4");
  { FCNCALL_CALL_CTRL_WRAP(sis3316_4,sis3316_4.FCNCALL_CALL(sis3316_4)); }
  FCNCALL_SUBNAME_END;
  }
  // SIS3316_ACTAR_S438 sis3316_6;
  {
  FCNCALL_SUBNAME("sis3316_6");
  { FCNCALL_CALL_CTRL_WRAP(sis3316_6,sis3316_6.FCNCALL_CALL(sis3316_6)); }
  FCNCALL_SUBNAME_END;
  }
  // SIS3316_ACTAR_S438 sis3316_7;
  {
  FCNCALL_SUBNAME("sis3316_7");
  { FCNCALL_CALL_CTRL_WRAP(sis3316_7,sis3316_7.FCNCALL_CALL(sis3316_7)); }
  FCNCALL_SUBNAME_END;
  }
  // SIS3316_ACTAR_S438 sis3316_8;
  {
  FCNCALL_SUBNAME("sis3316_8");
  { FCNCALL_CALL_CTRL_WRAP(sis3316_8,sis3316_8.FCNCALL_CALL(sis3316_8)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_STD_VME land_vme;
  {
  FCNCALL_SUBNAME("land_vme");
  { FCNCALL_CALL_CTRL_WRAP(land_vme,land_vme.FCNCALL_CALL(land_vme)); }
  FCNCALL_SUBNAME_END;
  }
  // TRIDI tridi_ts;
  {
  FCNCALL_SUBNAME("tridi_ts");
  { FCNCALL_CALL_CTRL_WRAP(tridi_ts,tridi_ts.FCNCALL_CALL(tridi_ts)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_psp_subev

#ifndef USER_DEF_sit_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(sit_subev)::FCNCALL_NAME(sit_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // DUMMY_WORD dummy;
  {
  FCNCALL_SUBNAME("dummy");
  { FCNCALL_CALL_CTRL_WRAP(dummy,dummy.FCNCALL_CALL(dummy)); }
  FCNCALL_SUBNAME_END;
  }
  // TIMESTAMP_WHITERABBIT ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_sit_subev

#ifndef USER_DEF_tof13_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(tof13_subev)::FCNCALL_NAME(tof13_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // VME_GSI_VFTX2 vftx2_1;
  {
  FCNCALL_SUBNAME("vftx2_1");
  { FCNCALL_CALL_CTRL_WRAP(vftx2_1,vftx2_1.FCNCALL_CALL(vftx2_1)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_GSI_VFTX2 vftx2_2;
  {
  FCNCALL_SUBNAME("vftx2_2");
  { FCNCALL_CALL_CTRL_WRAP(vftx2_2,vftx2_2.FCNCALL_CALL(vftx2_2)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_GSI_VFTX2 vftx2_3;
  {
  FCNCALL_SUBNAME("vftx2_3");
  { FCNCALL_CALL_CTRL_WRAP(vftx2_3,vftx2_3.FCNCALL_CALL(vftx2_3)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_GSI_VFTX2 vftx2_4;
  {
  FCNCALL_SUBNAME("vftx2_4");
  { FCNCALL_CALL_CTRL_WRAP(vftx2_4,vftx2_4.FCNCALL_CALL(vftx2_4)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V1290_S438 v1290_1;
  {
  FCNCALL_SUBNAME("v1290_1");
  { FCNCALL_CALL_CTRL_WRAP(v1290_1,v1290_1.FCNCALL_CALL(v1290_1)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_STD_VME land_vme;
  {
  FCNCALL_SUBNAME("land_vme");
  { FCNCALL_CALL_CTRL_WRAP(land_vme,land_vme.FCNCALL_CALL(land_vme)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_tof13_subev

#ifndef USER_DEF_tof13_tamex_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(tof13_tamex_subev)::FCNCALL_NAME(tof13_tamex_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // union 
  // {
    // struct 
    // {
      // uint32 ns_after_trigger : 11;
      // uint32 dummy_11_15 : 5;
      // uint32 ns_before_trigger : 11;
      // uint32 dummy_27_31 : 5;
    // } ;
    // uint32 u32;
  // } trigger_window;
  {
  FCNCALL_SUBNAME("trigger_window");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 ns_after_trigger : 11;
    // uint32 dummy_11_15 : 5;
    // uint32 ns_before_trigger : 11;
    // uint32 dummy_27_31 : 5;
  // } ;
  // uint32 ns_after_trigger : 11;
  {
  FCNCALL_SUBNAME("ns_after_trigger");
  { FCNCALL_CALL_CTRL_WRAP(trigger_window.ns_after_trigger,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger_window.ns_after_trigger)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_11_15 : 5;
  {
  FCNCALL_SUBNAME("dummy_11_15");
  { FCNCALL_CALL_CTRL_WRAP(trigger_window.dummy_11_15,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger_window.dummy_11_15)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 ns_before_trigger : 11;
  {
  FCNCALL_SUBNAME("ns_before_trigger");
  { FCNCALL_CALL_CTRL_WRAP(trigger_window.ns_before_trigger,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger_window.ns_before_trigger)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_27_31 : 5;
  {
  FCNCALL_SUBNAME("dummy_27_31");
  { FCNCALL_CALL_CTRL_WRAP(trigger_window.dummy_27_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger_window.dummy_27_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trigger_window.u32,FCNCALL_CALL_TYPE(uint32,trigger_window.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // TAMEX_CHANNEL tamex[2];
  {
  FCNCALL_SUBNAME("tamex");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(tamex__i0,,__i0,tamex[__i0].FCNCALL_CALL(tamex[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_tof13_tamex_subev

#ifndef USER_DEF_wr_100
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(wr_100)::FCNCALL_NAME(wr_100)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TIMESTAMP_WHITERABBIT ts100;
  {
  FCNCALL_SUBNAME("ts100");
  { FCNCALL_CALL_CTRL_WRAP(ts100,ts100.FCNCALL_CALL(ts100)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_wr_100

#ifndef USER_DEF_wr_300
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(wr_300)::FCNCALL_NAME(wr_300)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TIMESTAMP_WHITERABBIT ts300;
  {
  FCNCALL_SUBNAME("ts300");
  { FCNCALL_CALL_CTRL_WRAP(ts300,ts300.FCNCALL_CALL(ts300)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_wr_300

#ifndef USER_DEF_wr_500
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(wr_500)::FCNCALL_NAME(wr_500)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TIMESTAMP_WHITERABBIT ts500;
  {
  FCNCALL_SUBNAME("ts500");
  { FCNCALL_CALL_CTRL_WRAP(ts500,ts500.FCNCALL_CALL(ts500)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_wr_500

#ifndef USER_DEF_unpack_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(unpack_event)::FCNCALL_NAME(unpack_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_event_base,FCNCALL_CLASS_NAME(unpack_event_base)::FCNCALL_CALL_BASE());
  // LAND_CAMAC_SCALER scalers;
  {
  FCNCALL_SUBNAME("scalers");
  { FCNCALL_CALL_CTRL_WRAP(scalers,scalers.FCNCALL_CALL(scalers)); }
  FCNCALL_SUBNAME_END;
  }
  // wr_100 master_ts;
  {
  FCNCALL_SUBNAME("master_ts");
  { FCNCALL_CALL_CTRL_WRAP(master_ts,master_ts.FCNCALL_CALL(master_ts)); }
  FCNCALL_SUBNAME_END;
  }
  // daq_status_subev daq_status;
  {
  FCNCALL_SUBNAME("daq_status");
  { FCNCALL_CALL_CTRL_WRAP(daq_status,daq_status.FCNCALL_CALL(daq_status)); }
  FCNCALL_SUBNAME_END;
  }
  // mark_event_time event_time;
  {
  FCNCALL_SUBNAME("event_time");
  { FCNCALL_CALL_CTRL_WRAP(event_time,event_time.FCNCALL_CALL(event_time)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_CAMAC_CONVERTER tpat_and_co;
  {
  FCNCALL_SUBNAME("tpat_and_co");
  { FCNCALL_CALL_CTRL_WRAP(tpat_and_co,tpat_and_co.FCNCALL_CALL(tpat_and_co)); }
  FCNCALL_SUBNAME_END;
  }
  // neuland_subevent neuland_tacq;
  {
  FCNCALL_SUBNAME("neuland_tacq");
  { FCNCALL_CALL_CTRL_WRAP(neuland_tacq,neuland_tacq.FCNCALL_CALL(neuland_tacq)); }
  FCNCALL_SUBNAME_END;
  }
  // los_psp_subev los_psp;
  {
  FCNCALL_SUBNAME("los_psp");
  { FCNCALL_CALL_CTRL_WRAP(los_psp,los_psp.FCNCALL_CALL(los_psp)); }
  FCNCALL_SUBNAME_END;
  }
  // los_scaler_subev los_scaler;
  {
  FCNCALL_SUBNAME("los_scaler");
  { FCNCALL_CALL_CTRL_WRAP(los_scaler,los_scaler.FCNCALL_CALL(los_scaler)); }
  FCNCALL_SUBNAME_END;
  }
  // tof13_subev tof13;
  {
  FCNCALL_SUBNAME("tof13");
  { FCNCALL_CALL_CTRL_WRAP(tof13,tof13.FCNCALL_CALL(tof13)); }
  FCNCALL_SUBNAME_END;
  }
  // wr_500 psp_ts;
  {
  FCNCALL_SUBNAME("psp_ts");
  { FCNCALL_CALL_CTRL_WRAP(psp_ts,psp_ts.FCNCALL_CALL(psp_ts)); }
  FCNCALL_SUBNAME_END;
  }
  // sit_subev sit;
  {
  FCNCALL_SUBNAME("sit");
  { FCNCALL_CALL_CTRL_WRAP(sit,sit.FCNCALL_CALL(sit)); }
  FCNCALL_SUBNAME_END;
  }
  // wr_300 tbm_ts;
  {
  FCNCALL_SUBNAME("tbm_ts");
  { FCNCALL_CALL_CTRL_WRAP(tbm_ts,tbm_ts.FCNCALL_CALL(tbm_ts)); }
  FCNCALL_SUBNAME_END;
  }
  // fiber_subev fiber;
  {
  FCNCALL_SUBNAME("fiber");
  { FCNCALL_CALL_CTRL_WRAP(fiber,fiber.FCNCALL_CALL(fiber)); }
  FCNCALL_SUBNAME_END;
  }
  // psp_febex_subev psp_febex;
  {
  FCNCALL_SUBNAME("psp_febex");
  { FCNCALL_CALL_CTRL_WRAP(psp_febex,psp_febex.FCNCALL_CALL(psp_febex)); }
  FCNCALL_SUBNAME_END;
  }
  // neuland_tamex_subev neuland_tamex;
  {
  FCNCALL_SUBNAME("neuland_tamex");
  { FCNCALL_CALL_CTRL_WRAP(neuland_tamex,neuland_tamex.FCNCALL_CALL(neuland_tamex)); }
  FCNCALL_SUBNAME_END;
  }
  // tof13_tamex_subev tof13_tamex;
  {
  FCNCALL_SUBNAME("tof13_tamex");
  { FCNCALL_CALL_CTRL_WRAP(tof13_tamex,tof13_tamex.FCNCALL_CALL(tof13_tamex)); }
  FCNCALL_SUBNAME_END;
  }
  // mfi_subev mfi;
  {
  FCNCALL_SUBNAME("mfi");
  { FCNCALL_CALL_CTRL_WRAP(mfi,mfi.FCNCALL_CALL(mfi)); }
  FCNCALL_SUBNAME_END;
  }
  // califa_subev califa;
  {
  FCNCALL_SUBNAME("califa");
  { FCNCALL_CALL_CTRL_WRAP(califa,califa.FCNCALL_CALL(califa)); }
  FCNCALL_SUBNAME_END;
  }
  // psp_subev psp_struck;
  {
  FCNCALL_SUBNAME("psp_struck");
  { FCNCALL_CALL_CTRL_WRAP(psp_struck,psp_struck.FCNCALL_CALL(psp_struck)); }
  FCNCALL_SUBNAME_END;
  }
  // empty_subev empty_1;
  {
  FCNCALL_SUBNAME("empty_1");
  { FCNCALL_CALL_CTRL_WRAP(empty_1,empty_1.FCNCALL_CALL(empty_1)); }
  FCNCALL_SUBNAME_END;
  }
  // empty_subev empty_2;
  {
  FCNCALL_SUBNAME("empty_2");
  { FCNCALL_CALL_CTRL_WRAP(empty_2,empty_2.FCNCALL_CALL(empty_2)); }
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
