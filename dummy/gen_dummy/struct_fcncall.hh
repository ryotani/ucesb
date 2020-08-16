/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_DUMMY
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(DUMMY)::FCNCALL_NAME(DUMMY)
{
  FCNCALL_INIT;
  // DATA32 time_lo;
  {
  FCNCALL_SUBNAME("time_lo");
  { FCNCALL_CALL_CTRL_WRAP(time_lo,time_lo.FCNCALL_CALL(time_lo)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 time_hi;
  {
  FCNCALL_SUBNAME("time_hi");
  { FCNCALL_CALL_CTRL_WRAP(time_hi,time_hi.FCNCALL_CALL(time_hi)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,32> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_DUMMY

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

#ifndef USER_DEF_empty_subevent
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(empty_subevent)::FCNCALL_NAME(empty_subevent)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  FCNCALL_RET;
}
#endif//USER_DEF_empty_subevent

#ifndef USER_DEF_land_header_only
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(land_header_only)::FCNCALL_NAME(land_header_only)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // LAND_STD_VME header;
  {
  FCNCALL_SUBNAME("header");
  { FCNCALL_CALL_CTRL_WRAP(header,header.FCNCALL_CALL(header)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_land_header_only

#ifndef USER_DEF_vme_subevent
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(vme_subevent)::FCNCALL_NAME(vme_subevent)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // __MULTI__ DUMMY dummy[1];
  {
  FCNCALL_SUBNAME("dummy");
  FCNCALL_FOR(__i0,1)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(dummy__i0,,__i0,FCNCALL_MULTI_MEMBER(dummy[__i0]).FCNCALL_CALL(FCNCALL_MULTI_ARG(dummy[__i0]))); }
    FCNCALL_SUBINDEX_END(__i0);
  }
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
#endif//USER_DEF_vme_subevent

#ifndef USER_DEF_wr_ts_100
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(wr_ts_100)::FCNCALL_NAME(wr_ts_100)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TIMESTAMP_WHITERABBIT ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_wr_ts_100

#ifndef USER_DEF_unpack_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(unpack_event)::FCNCALL_NAME(unpack_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_event_base,FCNCALL_CLASS_NAME(unpack_event_base)::FCNCALL_CALL_BASE());
  // wr_ts_100 ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  // empty_subevent vme_drasi;
  {
  FCNCALL_SUBNAME("vme_drasi");
  { FCNCALL_CALL_CTRL_WRAP(vme_drasi,vme_drasi.FCNCALL_CALL(vme_drasi)); }
  FCNCALL_SUBNAME_END;
  }
  // vme_subevent vme;
  {
  FCNCALL_SUBNAME("vme");
  { FCNCALL_CALL_CTRL_WRAP(vme,vme.FCNCALL_CALL(vme)); }
  FCNCALL_SUBNAME_END;
  }
  // empty_subevent vme_drasi_unknown;
  {
  FCNCALL_SUBNAME("vme_drasi_unknown");
  { FCNCALL_CALL_CTRL_WRAP(vme_drasi_unknown,vme_drasi_unknown.FCNCALL_CALL(vme_drasi_unknown)); }
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
