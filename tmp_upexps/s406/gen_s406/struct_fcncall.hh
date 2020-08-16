/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_CAMAC_LECROY_2277_1CH_HACK
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CAMAC_LECROY_2277_1CH_HACK)::FCNCALL_NAME(CAMAC_LECROY_2277_1CH_HACK)
{
  FCNCALL_INIT;
  // raw_list_ii_zero_suppress<DATA16,DATA16,16> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_CAMAC_LECROY_2277_1CH_HACK

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

#ifndef USER_DEF_CROS3_REWRITE
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CROS3_REWRITE)::FCNCALL_NAME(CROS3_REWRITE)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<WIRE_START_END,WIRE_START_END,32768> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 data_size : 16;
      // uint32 threshold_curve : 1;
      // uint32 leading_edge : 1;
      // uint32 data : 1;
      // uint32 dummy_19 : 1;
      // uint32 trigger_time : 4;
      // uint32 ccb_id : 4;
      // uint32 event_counter : 4;
    // } ;
    // uint32 u32;
  // } h1;
  {
  FCNCALL_SUBNAME("h1");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 data_size : 16;
    // uint32 threshold_curve : 1;
    // uint32 leading_edge : 1;
    // uint32 data : 1;
    // uint32 dummy_19 : 1;
    // uint32 trigger_time : 4;
    // uint32 ccb_id : 4;
    // uint32 event_counter : 4;
  // } ;
  // uint32 data_size : 16;
  {
  FCNCALL_SUBNAME("data_size");
  { FCNCALL_CALL_CTRL_WRAP(h1.data_size,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h1.data_size)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 threshold_curve : 1;
  {
  FCNCALL_SUBNAME("threshold_curve");
  { FCNCALL_CALL_CTRL_WRAP(h1.threshold_curve,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h1.threshold_curve)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 leading_edge : 1;
  {
  FCNCALL_SUBNAME("leading_edge");
  { FCNCALL_CALL_CTRL_WRAP(h1.leading_edge,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h1.leading_edge)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 data : 1;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(h1.data,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h1.data)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_19 : 1;
  {
  FCNCALL_SUBNAME("dummy_19");
  { FCNCALL_CALL_CTRL_WRAP(h1.dummy_19,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h1.dummy_19)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_time : 4;
  {
  FCNCALL_SUBNAME("trigger_time");
  { FCNCALL_CALL_CTRL_WRAP(h1.trigger_time,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h1.trigger_time)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 ccb_id : 4;
  {
  FCNCALL_SUBNAME("ccb_id");
  { FCNCALL_CALL_CTRL_WRAP(h1.ccb_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h1.ccb_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 event_counter : 4;
  {
  FCNCALL_SUBNAME("event_counter");
  { FCNCALL_CALL_CTRL_WRAP(h1.event_counter,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h1.event_counter)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(h1.u32,FCNCALL_CALL_TYPE(uint32,h1.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 read_out_mode : 2;
      // uint32 dummy_2_3 : 2;
      // uint32 pulser_enabled : 1;
      // uint32 dummy_5_7 : 3;
      // uint32 statistics : 3;
      // uint32 both_edges : 1;
      // uint32 slices : 8;
      // uint32 scale : 2;
      // uint32 dummy_22_30 : 9;
      // uint32 odd_length16 : 1;
    // } ;
    // uint32 u32;
  // } h2;
  {
  FCNCALL_SUBNAME("h2");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 read_out_mode : 2;
    // uint32 dummy_2_3 : 2;
    // uint32 pulser_enabled : 1;
    // uint32 dummy_5_7 : 3;
    // uint32 statistics : 3;
    // uint32 both_edges : 1;
    // uint32 slices : 8;
    // uint32 scale : 2;
    // uint32 dummy_22_30 : 9;
    // uint32 odd_length16 : 1;
  // } ;
  // uint32 read_out_mode : 2;
  {
  FCNCALL_SUBNAME("read_out_mode");
  { FCNCALL_CALL_CTRL_WRAP(h2.read_out_mode,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h2.read_out_mode)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_2_3 : 2;
  {
  FCNCALL_SUBNAME("dummy_2_3");
  { FCNCALL_CALL_CTRL_WRAP(h2.dummy_2_3,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h2.dummy_2_3)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 pulser_enabled : 1;
  {
  FCNCALL_SUBNAME("pulser_enabled");
  { FCNCALL_CALL_CTRL_WRAP(h2.pulser_enabled,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h2.pulser_enabled)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_5_7 : 3;
  {
  FCNCALL_SUBNAME("dummy_5_7");
  { FCNCALL_CALL_CTRL_WRAP(h2.dummy_5_7,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h2.dummy_5_7)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 statistics : 3;
  {
  FCNCALL_SUBNAME("statistics");
  { FCNCALL_CALL_CTRL_WRAP(h2.statistics,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h2.statistics)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 both_edges : 1;
  {
  FCNCALL_SUBNAME("both_edges");
  { FCNCALL_CALL_CTRL_WRAP(h2.both_edges,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h2.both_edges)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 slices : 8;
  {
  FCNCALL_SUBNAME("slices");
  { FCNCALL_CALL_CTRL_WRAP(h2.slices,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h2.slices)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 scale : 2;
  {
  FCNCALL_SUBNAME("scale");
  { FCNCALL_CALL_CTRL_WRAP(h2.scale,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h2.scale)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_22_30 : 9;
  {
  FCNCALL_SUBNAME("dummy_22_30");
  { FCNCALL_CALL_CTRL_WRAP(h2.dummy_22_30,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h2.dummy_22_30)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 odd_length16 : 1;
  {
  FCNCALL_SUBNAME("odd_length16");
  { FCNCALL_CALL_CTRL_WRAP(h2.odd_length16,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,h2.odd_length16)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(h2.u32,FCNCALL_CALL_TYPE(uint32,h2.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 read_out_mode : 2;
      // uint32 dummy_2_3 : 2;
      // uint32 pulser_enabled : 1;
      // uint32 dummy_5_7 : 3;
      // uint32 statistics : 3;
      // uint32 both_edges : 1;
      // uint32 threshold_start : 8;
      // uint32 threshold_step : 4;
      // uint32 boards : 5;
      // uint32 dummy_29_31 : 3;
    // } ;
    // uint32 u32;
  // } trc_h2;
  {
  FCNCALL_SUBNAME("trc_h2");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 read_out_mode : 2;
    // uint32 dummy_2_3 : 2;
    // uint32 pulser_enabled : 1;
    // uint32 dummy_5_7 : 3;
    // uint32 statistics : 3;
    // uint32 both_edges : 1;
    // uint32 threshold_start : 8;
    // uint32 threshold_step : 4;
    // uint32 boards : 5;
    // uint32 dummy_29_31 : 3;
  // } ;
  // uint32 read_out_mode : 2;
  {
  FCNCALL_SUBNAME("read_out_mode");
  { FCNCALL_CALL_CTRL_WRAP(trc_h2.read_out_mode,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trc_h2.read_out_mode)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_2_3 : 2;
  {
  FCNCALL_SUBNAME("dummy_2_3");
  { FCNCALL_CALL_CTRL_WRAP(trc_h2.dummy_2_3,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trc_h2.dummy_2_3)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 pulser_enabled : 1;
  {
  FCNCALL_SUBNAME("pulser_enabled");
  { FCNCALL_CALL_CTRL_WRAP(trc_h2.pulser_enabled,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trc_h2.pulser_enabled)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_5_7 : 3;
  {
  FCNCALL_SUBNAME("dummy_5_7");
  { FCNCALL_CALL_CTRL_WRAP(trc_h2.dummy_5_7,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trc_h2.dummy_5_7)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 statistics : 3;
  {
  FCNCALL_SUBNAME("statistics");
  { FCNCALL_CALL_CTRL_WRAP(trc_h2.statistics,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trc_h2.statistics)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 both_edges : 1;
  {
  FCNCALL_SUBNAME("both_edges");
  { FCNCALL_CALL_CTRL_WRAP(trc_h2.both_edges,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trc_h2.both_edges)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 threshold_start : 8;
  {
  FCNCALL_SUBNAME("threshold_start");
  { FCNCALL_CALL_CTRL_WRAP(trc_h2.threshold_start,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trc_h2.threshold_start)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 threshold_step : 4;
  {
  FCNCALL_SUBNAME("threshold_step");
  { FCNCALL_CALL_CTRL_WRAP(trc_h2.threshold_step,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trc_h2.threshold_step)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 boards : 5;
  {
  FCNCALL_SUBNAME("boards");
  { FCNCALL_CALL_CTRL_WRAP(trc_h2.boards,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trc_h2.boards)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_29_31 : 3;
  {
  FCNCALL_SUBNAME("dummy_29_31");
  { FCNCALL_CALL_CTRL_WRAP(trc_h2.dummy_29_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trc_h2.dummy_29_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trc_h2.u32,FCNCALL_CALL_TYPE(uint32,trc_h2.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_CROS3_REWRITE

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

#ifndef USER_DEF_SIDEREM_BLOCK
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(SIDEREM_BLOCK)::FCNCALL_NAME(SIDEREM_BLOCK)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA12,DATA12,512> data[4];
  {
  FCNCALL_SUBNAME("data");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(data__i0,,__i0,data[__i0].FCNCALL_CALL(data[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 count : 12;
      // uint32 local_event_counter : 4;
      // uint32 local_trigger : 4;
      // uint32 siderem : 4;
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
    // uint32 count : 12;
    // uint32 local_event_counter : 4;
    // uint32 local_trigger : 4;
    // uint32 siderem : 4;
    // uint32 gtb : 4;
    // uint32 sam : 4;
  // } ;
  // uint32 count : 12;
  {
  FCNCALL_SUBNAME("count");
  { FCNCALL_CALL_CTRL_WRAP(header.count,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.count)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 local_event_counter : 4;
  {
  FCNCALL_SUBNAME("local_event_counter");
  { FCNCALL_CALL_CTRL_WRAP(header.local_event_counter,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.local_event_counter)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 local_trigger : 4;
  {
  FCNCALL_SUBNAME("local_trigger");
  { FCNCALL_CALL_CTRL_WRAP(header.local_trigger,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.local_trigger)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 siderem : 4;
  {
  FCNCALL_SUBNAME("siderem");
  { FCNCALL_CALL_CTRL_WRAP(header.siderem,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.siderem)); }
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
#endif//USER_DEF_SIDEREM_BLOCK

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

#ifndef USER_DEF_VME_VUPROM_V35
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_VUPROM_V35)::FCNCALL_NAME(VME_VUPROM_V35)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA12,DATA12,192> data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_VUPROM_V35

#ifndef USER_DEF_CB_VME_LEFT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CB_VME_LEFT)::FCNCALL_NAME(CB_VME_LEFT)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // VME_VUPROM_V35 tdc;
  {
  FCNCALL_SUBNAME("tdc");
  { FCNCALL_CALL_CTRL_WRAP(tdc,tdc.FCNCALL_CALL(tdc)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_MESYTEC_MADC32 adc[4];
  {
  FCNCALL_SUBNAME("adc");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(adc__i0,,__i0,adc[__i0].FCNCALL_CALL(adc[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // VME_MESYTEC_MADC32 madc0_psp;
  {
  FCNCALL_SUBNAME("madc0_psp");
  { FCNCALL_CALL_CTRL_WRAP(madc0_psp,madc0_psp.FCNCALL_CALL(madc0_psp)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_STD_VME vme;
  {
  FCNCALL_SUBNAME("vme");
  { FCNCALL_CALL_CTRL_WRAP(vme,vme.FCNCALL_CALL(vme)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_CB_VME_LEFT

#ifndef USER_DEF_CB_VME_RIGHT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CB_VME_RIGHT)::FCNCALL_NAME(CB_VME_RIGHT)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // VME_VUPROM_V35 tdc;
  {
  FCNCALL_SUBNAME("tdc");
  { FCNCALL_CALL_CTRL_WRAP(tdc,tdc.FCNCALL_CALL(tdc)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_MESYTEC_MADC32 adc[4];
  {
  FCNCALL_SUBNAME("adc");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(adc__i0,,__i0,adc[__i0].FCNCALL_CALL(adc[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // LAND_STD_VME vme;
  {
  FCNCALL_SUBNAME("vme");
  { FCNCALL_CALL_CTRL_WRAP(vme,vme.FCNCALL_CALL(vme)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_CB_VME_RIGHT

#ifndef USER_DEF_CROS3_REWRITE_SUBEVENT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CROS3_REWRITE_SUBEVENT)::FCNCALL_NAME(CROS3_REWRITE_SUBEVENT)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // CROS3_REWRITE ccb[2];
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
#endif//USER_DEF_CROS3_REWRITE_SUBEVENT

#ifndef USER_DEF_CROS3_SUBEVENT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CROS3_SUBEVENT)::FCNCALL_NAME(CROS3_SUBEVENT)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // EXT_CROS3 ccb[2];
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
#endif//USER_DEF_CROS3_SUBEVENT

#ifndef USER_DEF_DUMMY
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(DUMMY)::FCNCALL_NAME(DUMMY)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // DUMMY_WORD d;
  {
  FCNCALL_SUBNAME("d");
  { FCNCALL_CALL_CTRL_WRAP(d,d.FCNCALL_CALL(d)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_DUMMY

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

#ifndef USER_DEF_LAND_CAMAC_PILEUP
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(LAND_CAMAC_PILEUP)::FCNCALL_NAME(LAND_CAMAC_PILEUP)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // CAMAC_LECROY_2277_1CH_HACK tdc;
  {
  FCNCALL_SUBNAME("tdc");
  { FCNCALL_CALL_CTRL_WRAP(tdc,tdc.FCNCALL_CALL(tdc)); }
  FCNCALL_SUBNAME_END;
  }
  // CAMAC_LECROY_2277_1CH_HACK tcal;
  {
  FCNCALL_SUBNAME("tcal");
  { FCNCALL_CALL_CTRL_WRAP(tcal,tcal.FCNCALL_CALL(tcal)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_LAND_CAMAC_PILEUP

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

#ifndef USER_DEF_MASTER_VME
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(MASTER_VME)::FCNCALL_NAME(MASTER_VME)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TRLO_SAMPLER sampler_pos;
  {
  FCNCALL_SUBNAME("sampler_pos");
  { FCNCALL_CALL_CTRL_WRAP(sampler_pos,sampler_pos.FCNCALL_CALL(sampler_pos)); }
  FCNCALL_SUBNAME_END;
  }
  // TRLO_SAMPLER sampler_cb_sum;
  {
  FCNCALL_SUBNAME("sampler_cb_sum");
  { FCNCALL_CALL_CTRL_WRAP(sampler_cb_sum,sampler_cb_sum.FCNCALL_CALL(sampler_cb_sum)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_STD_VME vme;
  {
  FCNCALL_SUBNAME("vme");
  { FCNCALL_CALL_CTRL_WRAP(vme,vme.FCNCALL_CALL(vme)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_MASTER_VME

#ifndef USER_DEF_SIDEREM01_VME
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(SIDEREM01_VME)::FCNCALL_NAME(SIDEREM01_VME)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // EXT_SST sst[8];
  {
  FCNCALL_SUBNAME("sst");
  FCNCALL_FOR(__i0,8)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(sst__i0,,__i0,sst[__i0].FCNCALL_CALL(sst[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_31 : 32;
    // } ;
    // uint32 u32;
  // } error_marker;
  {
  FCNCALL_SUBNAME("error_marker");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_31 : 32;
  // } ;
  // uint32 unnamed_0_31 : 32;
  {
  FCNCALL_SUBNAME("unnamed_0_31");
  { FCNCALL_CALL_CTRL_WRAP(error_marker.unnamed_0_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_marker.unnamed_0_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(error_marker.u32,FCNCALL_CALL_TYPE(uint32,error_marker.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_31 : 32;
    // } ;
    // uint32 u32;
  // } error_marker2;
  {
  FCNCALL_SUBNAME("error_marker2");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_31 : 32;
  // } ;
  // uint32 unnamed_0_31 : 32;
  {
  FCNCALL_SUBNAME("unnamed_0_31");
  { FCNCALL_CALL_CTRL_WRAP(error_marker2.unnamed_0_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,error_marker2.unnamed_0_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(error_marker2.u32,FCNCALL_CALL_TYPE(uint32,error_marker2.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_SIDEREM01_VME

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

#ifndef USER_DEF_TACQUILA_NEULAND_SUBEVENT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TACQUILA_NEULAND_SUBEVENT)::FCNCALL_NAME(TACQUILA_NEULAND_SUBEVENT)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TACQUILA_DATA data_sam7_gtb0;
  {
  FCNCALL_SUBNAME("data_sam7_gtb0");
  { FCNCALL_CALL_CTRL_WRAP(data_sam7_gtb0,data_sam7_gtb0.FCNCALL_CALL(data_sam7_gtb0)); }
  FCNCALL_SUBNAME_END;
  }
  // TACQUILA_DATA data_sam7_gtb1;
  {
  FCNCALL_SUBNAME("data_sam7_gtb1");
  { FCNCALL_CALL_CTRL_WRAP(data_sam7_gtb1,data_sam7_gtb1.FCNCALL_CALL(data_sam7_gtb1)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TACQUILA_NEULAND_SUBEVENT

#ifndef USER_DEF_VME_CRATE1
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CRATE1)::FCNCALL_NAME(VME_CRATE1)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // VME_CAEN_V775 qdc792POS_ROLU;
  {
  FCNCALL_SUBNAME("qdc792POS_ROLU");
  { FCNCALL_CALL_CTRL_WRAP(qdc792POS_ROLU,qdc792POS_ROLU.FCNCALL_CALL(qdc792POS_ROLU)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775 qdc792PIXEL;
  {
  FCNCALL_SUBNAME("qdc792PIXEL");
  { FCNCALL_CALL_CTRL_WRAP(qdc792PIXEL,qdc792PIXEL.FCNCALL_CALL(qdc792PIXEL)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775 tdc775POS_ROLU;
  {
  FCNCALL_SUBNAME("tdc775POS_ROLU");
  { FCNCALL_CALL_CTRL_WRAP(tdc775POS_ROLU,tdc775POS_ROLU.FCNCALL_CALL(tdc775POS_ROLU)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V830 scaler;
  {
  FCNCALL_SUBNAME("scaler");
  { FCNCALL_CALL_CTRL_WRAP(scaler,scaler.FCNCALL_CALL(scaler)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_STD_VME vme;
  {
  FCNCALL_SUBNAME("vme");
  { FCNCALL_CALL_CTRL_WRAP(vme,vme.FCNCALL_CALL(vme)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CRATE1

#ifndef USER_DEF_VME_CRATE2
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_CRATE2)::FCNCALL_NAME(VME_CRATE2)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // VME_CAEN_V830 scaler;
  {
  FCNCALL_SUBNAME("scaler");
  { FCNCALL_CALL_CTRL_WRAP(scaler,scaler.FCNCALL_CALL(scaler)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775 qdc792TFW1;
  {
  FCNCALL_SUBNAME("qdc792TFW1");
  { FCNCALL_CALL_CTRL_WRAP(qdc792TFW1,qdc792TFW1.FCNCALL_CALL(qdc792TFW1)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775 tdc775TFW1;
  {
  FCNCALL_SUBNAME("tdc775TFW1");
  { FCNCALL_CALL_CTRL_WRAP(tdc775TFW1,tdc775TFW1.FCNCALL_CALL(tdc775TFW1)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775 qdc792TFW2;
  {
  FCNCALL_SUBNAME("qdc792TFW2");
  { FCNCALL_CALL_CTRL_WRAP(qdc792TFW2,qdc792TFW2.FCNCALL_CALL(qdc792TFW2)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775 tdc775TFW2;
  {
  FCNCALL_SUBNAME("tdc775TFW2");
  { FCNCALL_CALL_CTRL_WRAP(tdc775TFW2,tdc775TFW2.FCNCALL_CALL(tdc775TFW2)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775 tdc775NTF;
  {
  FCNCALL_SUBNAME("tdc775NTF");
  { FCNCALL_CALL_CTRL_WRAP(tdc775NTF,tdc775NTF.FCNCALL_CALL(tdc775NTF)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775 qdc792NTF;
  {
  FCNCALL_SUBNAME("qdc792NTF");
  { FCNCALL_CALL_CTRL_WRAP(qdc792NTF,qdc792NTF.FCNCALL_CALL(qdc792NTF)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775 qdc792GFI1;
  {
  FCNCALL_SUBNAME("qdc792GFI1");
  { FCNCALL_CALL_CTRL_WRAP(qdc792GFI1,qdc792GFI1.FCNCALL_CALL(qdc792GFI1)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775 qdc792GFI2;
  {
  FCNCALL_SUBNAME("qdc792GFI2");
  { FCNCALL_CALL_CTRL_WRAP(qdc792GFI2,qdc792GFI2.FCNCALL_CALL(qdc792GFI2)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775 qdc792GFI3;
  {
  FCNCALL_SUBNAME("qdc792GFI3");
  { FCNCALL_CALL_CTRL_WRAP(qdc792GFI3,qdc792GFI3.FCNCALL_CALL(qdc792GFI3)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CAEN_V775 qdc792MFITEST;
  {
  FCNCALL_SUBNAME("qdc792MFITEST");
  { FCNCALL_CALL_CTRL_WRAP(qdc792MFITEST,qdc792MFITEST.FCNCALL_CALL(qdc792MFITEST)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_STD_VME vme;
  {
  FCNCALL_SUBNAME("vme");
  { FCNCALL_CALL_CTRL_WRAP(vme,vme.FCNCALL_CALL(vme)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_VME_CRATE2

#ifndef USER_DEF_unpack_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(unpack_event)::FCNCALL_NAME(unpack_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_event_base,FCNCALL_CLASS_NAME(unpack_event_base)::FCNCALL_CALL_BASE());
  // LAND_CAMAC_PILEUP pileup;
  {
  FCNCALL_SUBNAME("pileup");
  { FCNCALL_CALL_CTRL_WRAP(pileup,pileup.FCNCALL_CALL(pileup)); }
  FCNCALL_SUBNAME_END;
  }
  // SIDEREM01_VME sst;
  {
  FCNCALL_SUBNAME("sst");
  { FCNCALL_CALL_CTRL_WRAP(sst,sst.FCNCALL_CALL(sst)); }
  FCNCALL_SUBNAME_END;
  }
  // CROS3_SUBEVENT cros3;
  {
  FCNCALL_SUBNAME("cros3");
  { FCNCALL_CALL_CTRL_WRAP(cros3,cros3.FCNCALL_CALL(cros3)); }
  FCNCALL_SUBNAME_END;
  }
  // CROS3_REWRITE_SUBEVENT cros3_rewrite;
  {
  FCNCALL_SUBNAME("cros3_rewrite");
  { FCNCALL_CALL_CTRL_WRAP(cros3_rewrite,cros3_rewrite.FCNCALL_CALL(cros3_rewrite)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_CAMAC_CONVERTER camac;
  {
  FCNCALL_SUBNAME("camac");
  { FCNCALL_CALL_CTRL_WRAP(camac,camac.FCNCALL_CALL(camac)); }
  FCNCALL_SUBNAME_END;
  }
  // DUMMY acq;
  {
  FCNCALL_SUBNAME("acq");
  { FCNCALL_CALL_CTRL_WRAP(acq,acq.FCNCALL_CALL(acq)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CRATE1 vme1;
  {
  FCNCALL_SUBNAME("vme1");
  { FCNCALL_CALL_CTRL_WRAP(vme1,vme1.FCNCALL_CALL(vme1)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_CRATE2 vme2;
  {
  FCNCALL_SUBNAME("vme2");
  { FCNCALL_CALL_CTRL_WRAP(vme2,vme2.FCNCALL_CALL(vme2)); }
  FCNCALL_SUBNAME_END;
  }
  // CB_VME_RIGHT vme_cbr;
  {
  FCNCALL_SUBNAME("vme_cbr");
  { FCNCALL_CALL_CTRL_WRAP(vme_cbr,vme_cbr.FCNCALL_CALL(vme_cbr)); }
  FCNCALL_SUBNAME_END;
  }
  // CB_VME_LEFT vme_cbl;
  {
  FCNCALL_SUBNAME("vme_cbl");
  { FCNCALL_CALL_CTRL_WRAP(vme_cbl,vme_cbl.FCNCALL_CALL(vme_cbl)); }
  FCNCALL_SUBNAME_END;
  }
  // MASTER_VME vme_master;
  {
  FCNCALL_SUBNAME("vme_master");
  { FCNCALL_CALL_CTRL_WRAP(vme_master,vme_master.FCNCALL_CALL(vme_master)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_CAMAC_TCAL_INFO camac_tcal_info;
  {
  FCNCALL_SUBNAME("camac_tcal_info");
  { FCNCALL_CALL_CTRL_WRAP(camac_tcal_info,camac_tcal_info.FCNCALL_CALL(camac_tcal_info)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_CAMAC_SCALER camac_scalers;
  {
  FCNCALL_SUBNAME("camac_scalers");
  { FCNCALL_CALL_CTRL_WRAP(camac_scalers,camac_scalers.FCNCALL_CALL(camac_scalers)); }
  FCNCALL_SUBNAME_END;
  }
  // TACQUILA_LAND_SUBEVENT tacquila;
  {
  FCNCALL_SUBNAME("tacquila");
  { FCNCALL_CALL_CTRL_WRAP(tacquila,tacquila.FCNCALL_CALL(tacquila)); }
  FCNCALL_SUBNAME_END;
  }
  // TACQUILA_NEULAND_SUBEVENT neuland;
  {
  FCNCALL_SUBNAME("neuland");
  { FCNCALL_CALL_CTRL_WRAP(neuland,neuland.FCNCALL_CALL(neuland)); }
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
