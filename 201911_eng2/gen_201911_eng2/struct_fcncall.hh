/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_BARRIER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(BARRIER)::FCNCALL_NAME(BARRIER)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_31 : 32;
    // } ;
    // uint32 u32;
  // } barrier;
  {
  FCNCALL_SUBNAME("barrier");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_31 : 32;
  // } ;
  // uint32 unnamed_0_31 : 32;
  {
  FCNCALL_SUBNAME("unnamed_0_31");
  { FCNCALL_CALL_CTRL_WRAP(barrier.unnamed_0_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,barrier.unnamed_0_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(barrier.u32,FCNCALL_CALL_TYPE(uint32,barrier.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_BARRIER

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

#ifndef USER_DEF_FEBEX3_CALIFA_BASE
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FEBEX3_CALIFA_BASE)::FCNCALL_NAME(FEBEX3_CALIFA_BASE)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA16,DATA16,2048> energy;
  {
  FCNCALL_SUBNAME("energy");
  { FCNCALL_CALL_CTRL_WRAP(energy,energy.FCNCALL_CALL(energy)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,2048> ts_lsb;
  {
  FCNCALL_SUBNAME("ts_lsb");
  { FCNCALL_CALL_CTRL_WRAP(ts_lsb,ts_lsb.FCNCALL_CALL(ts_lsb)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,2048> ts_msb;
  {
  FCNCALL_SUBNAME("ts_msb");
  { FCNCALL_CALL_CTRL_WRAP(ts_msb,ts_msb.FCNCALL_CALL(ts_msb)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA16,DATA16,2048> n_f;
  {
  FCNCALL_SUBNAME("n_f");
  { FCNCALL_CALL_CTRL_WRAP(n_f,n_f.FCNCALL_CALL(n_f)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA16,DATA16,2048> n_s;
  {
  FCNCALL_SUBNAME("n_s");
  { FCNCALL_CALL_CTRL_WRAP(n_s,n_s.FCNCALL_CALL(n_s)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_FEBEX3_CALIFA_BASE

#ifndef USER_DEF_FEBEX_BAD_EVENTHEADER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FEBEX_BAD_EVENTHEADER)::FCNCALL_NAME(FEBEX_BAD_EVENTHEADER)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 unnamed_0_31 : 32;
    // } ;
    // uint32 u32;
  // } badbad;
  {
  FCNCALL_SUBNAME("badbad");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 unnamed_0_31 : 32;
  // } ;
  // uint32 unnamed_0_31 : 32;
  {
  FCNCALL_SUBNAME("unnamed_0_31");
  { FCNCALL_CALL_CTRL_WRAP(badbad.unnamed_0_31,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,badbad.unnamed_0_31)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(badbad.u32,FCNCALL_CALL_TYPE(uint32,badbad.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_FEBEX_BAD_EVENTHEADER

#ifndef USER_DEF_FEBEX_GOOD_EVENTHEADER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FEBEX_GOOD_EVENTHEADER)::FCNCALL_NAME(FEBEX_GOOD_EVENTHEADER)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 n_febex_sfp0 : 8;
      // uint32 n_febex_sfp1 : 8;
      // uint32 n_febex_sfp2 : 8;
      // uint32 n_febex_sfp3 : 8;
    // } ;
    // uint32 u32;
  // } febexcards;
  {
  FCNCALL_SUBNAME("febexcards");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 n_febex_sfp0 : 8;
    // uint32 n_febex_sfp1 : 8;
    // uint32 n_febex_sfp2 : 8;
    // uint32 n_febex_sfp3 : 8;
  // } ;
  // uint32 n_febex_sfp0 : 8;
  {
  FCNCALL_SUBNAME("n_febex_sfp0");
  { FCNCALL_CALL_CTRL_WRAP(febexcards.n_febex_sfp0,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,febexcards.n_febex_sfp0)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 n_febex_sfp1 : 8;
  {
  FCNCALL_SUBNAME("n_febex_sfp1");
  { FCNCALL_CALL_CTRL_WRAP(febexcards.n_febex_sfp1,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,febexcards.n_febex_sfp1)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 n_febex_sfp2 : 8;
  {
  FCNCALL_SUBNAME("n_febex_sfp2");
  { FCNCALL_CALL_CTRL_WRAP(febexcards.n_febex_sfp2,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,febexcards.n_febex_sfp2)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 n_febex_sfp3 : 8;
  {
  FCNCALL_SUBNAME("n_febex_sfp3");
  { FCNCALL_CALL_CTRL_WRAP(febexcards.n_febex_sfp3,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,febexcards.n_febex_sfp3)); }
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
  // union 
  // {
    // struct 
    // {
      // uint32 trace_length : 16;
      // uint32 trigger_delay : 16;
    // } ;
    // uint32 u32;
  // } trig_length;
  {
  FCNCALL_SUBNAME("trig_length");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 trace_length : 16;
    // uint32 trigger_delay : 16;
  // } ;
  // uint32 trace_length : 16;
  {
  FCNCALL_SUBNAME("trace_length");
  { FCNCALL_CALL_CTRL_WRAP(trig_length.trace_length,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trig_length.trace_length)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_delay : 16;
  {
  FCNCALL_SUBNAME("trigger_delay");
  { FCNCALL_CALL_CTRL_WRAP(trig_length.trigger_delay,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trig_length.trigger_delay)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(trig_length.u32,FCNCALL_CALL_TYPE(uint32,trig_length.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 sum_b : 11;
      // uint32 gap : 10;
      // uint32 sum_a : 11;
    // } ;
    // uint32 u32;
  // } energy_filter;
  {
  FCNCALL_SUBNAME("energy_filter");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 sum_b : 11;
    // uint32 gap : 10;
    // uint32 sum_a : 11;
  // } ;
  // uint32 sum_b : 11;
  {
  FCNCALL_SUBNAME("sum_b");
  { FCNCALL_CALL_CTRL_WRAP(energy_filter.sum_b,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,energy_filter.sum_b)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 gap : 10;
  {
  FCNCALL_SUBNAME("gap");
  { FCNCALL_CALL_CTRL_WRAP(energy_filter.gap,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,energy_filter.gap)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sum_a : 11;
  {
  FCNCALL_SUBNAME("sum_a");
  { FCNCALL_CALL_CTRL_WRAP(energy_filter.sum_a,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,energy_filter.sum_a)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(energy_filter.u32,FCNCALL_CALL_TYPE(uint32,energy_filter.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 pola : 32;
    // } ;
    // uint32 u32;
  // } polarity1;
  {
  FCNCALL_SUBNAME("polarity1");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 pola : 32;
  // } ;
  // uint32 pola : 32;
  {
  FCNCALL_SUBNAME("pola");
  { FCNCALL_CALL_CTRL_WRAP(polarity1.pola,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,polarity1.pola)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(polarity1.u32,FCNCALL_CALL_TYPE(uint32,polarity1.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 pola : 32;
    // } ;
    // uint32 u32;
  // } polarity2;
  {
  FCNCALL_SUBNAME("polarity2");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 pola : 32;
  // } ;
  // uint32 pola : 32;
  {
  FCNCALL_SUBNAME("pola");
  { FCNCALL_CALL_CTRL_WRAP(polarity2.pola,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,polarity2.pola)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(polarity2.u32,FCNCALL_CALL_TYPE(uint32,polarity2.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 pola : 32;
    // } ;
    // uint32 u32;
  // } polarity3;
  {
  FCNCALL_SUBNAME("polarity3");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 pola : 32;
  // } ;
  // uint32 pola : 32;
  {
  FCNCALL_SUBNAME("pola");
  { FCNCALL_CALL_CTRL_WRAP(polarity3.pola,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,polarity3.pola)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(polarity3.u32,FCNCALL_CALL_TYPE(uint32,polarity3.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 pola : 32;
    // } ;
    // uint32 u32;
  // } polarity4;
  {
  FCNCALL_SUBNAME("polarity4");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 pola : 32;
  // } ;
  // uint32 pola : 32;
  {
  FCNCALL_SUBNAME("pola");
  { FCNCALL_CALL_CTRL_WRAP(polarity4.pola,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,polarity4.pola)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(polarity4.u32,FCNCALL_CALL_TYPE(uint32,polarity4.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_FEBEX_GOOD_EVENTHEADER

#ifndef USER_DEF_FEBEX_EVENTHEADER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FEBEX_EVENTHEADER)::FCNCALL_NAME(FEBEX_EVENTHEADER)
{
  FCNCALL_INIT;
  // FEBEX_GOOD_EVENTHEADER good;
  {
  FCNCALL_SUBNAME("good");
  { FCNCALL_CALL_CTRL_WRAP(good,good.FCNCALL_CALL(good)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_BAD_EVENTHEADER bad;
  {
  FCNCALL_SUBNAME("bad");
  { FCNCALL_CALL_CTRL_WRAP(bad,bad.FCNCALL_CALL(bad)); }
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
  // raw_array<DATA8,DATA8,16> n_hit;
  {
  FCNCALL_SUBNAME("n_hit");
  { FCNCALL_CALL_CTRL_WRAP(n_hit,n_hit.FCNCALL_CALL(n_hit)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,16,32> t;
  {
  FCNCALL_SUBNAME("t");
  { FCNCALL_CALL_CTRL_WRAP(t,t.FCNCALL_CALL(t)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA32,DATA32,16,32> e;
  {
  FCNCALL_SUBNAME("e");
  { FCNCALL_CALL_CTRL_WRAP(e,e.FCNCALL_CALL(e)); }
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

#ifndef USER_DEF_FEBEX_TRACE
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FEBEX_TRACE)::FCNCALL_NAME(FEBEX_TRACE)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA32,DATA32,16> trace_length;
  {
  FCNCALL_SUBNAME("trace_length");
  { FCNCALL_CALL_CTRL_WRAP(trace_length,trace_length.FCNCALL_CALL(trace_length)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA16,DATA16,1000> trace[16];
  {
  FCNCALL_SUBNAME("trace");
  FCNCALL_FOR(__i0,16)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(trace__i0,,__i0,trace[__i0].FCNCALL_CALL(trace[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,1000> filter[16];
  {
  FCNCALL_SUBNAME("filter");
  FCNCALL_FOR(__i0,16)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(filter__i0,,__i0,filter[__i0].FCNCALL_CALL(filter[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_FEBEX_TRACE

#ifndef USER_DEF_GSI_CLOCKTDC_16PH_ITEM
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(GSI_CLOCKTDC_16PH_ITEM)::FCNCALL_NAME(GSI_CLOCKTDC_16PH_ITEM)
{
  FCNCALL_INIT;
  // DATA32 event_counter_lo32;
  {
  FCNCALL_SUBNAME("event_counter_lo32");
  { FCNCALL_CALL_CTRL_WRAP(event_counter_lo32,event_counter_lo32.FCNCALL_CALL(event_counter_lo32)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 event_counter_hi16;
  {
  FCNCALL_SUBNAME("event_counter_hi16");
  { FCNCALL_CALL_CTRL_WRAP(event_counter_hi16,event_counter_hi16.FCNCALL_CALL(event_counter_hi16)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 trigger_coarse_lo22;
  {
  FCNCALL_SUBNAME("trigger_coarse_lo22");
  { FCNCALL_CALL_CTRL_WRAP(trigger_coarse_lo22,trigger_coarse_lo22.FCNCALL_CALL(trigger_coarse_lo22)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 trigger_coarse_hi24;
  {
  FCNCALL_SUBNAME("trigger_coarse_hi24");
  { FCNCALL_CALL_CTRL_WRAP(trigger_coarse_hi24,trigger_coarse_hi24.FCNCALL_CALL(trigger_coarse_hi24)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,258,80> time_coarse;
  {
  FCNCALL_SUBNAME("time_coarse");
  { FCNCALL_CALL_CTRL_WRAP(time_coarse,time_coarse.FCNCALL_CALL(time_coarse)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,258,80> time_fine;
  {
  FCNCALL_SUBNAME("time_fine");
  { FCNCALL_CALL_CTRL_WRAP(time_fine,time_fine.FCNCALL_CALL(time_fine)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 _0x34 : 8;
      // uint32 trigger_type : 4;
      // uint32 sfp_id : 4;
      // uint32 tdc_id : 8;
      // uint32 channel_id : 8;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 _0x34 : 8;
    // uint32 trigger_type : 4;
    // uint32 sfp_id : 4;
    // uint32 tdc_id : 8;
    // uint32 channel_id : 8;
  // } ;
  // uint32 _0x34 : 8;
  {
  FCNCALL_SUBNAME("_0x34");
  { FCNCALL_CALL_CTRL_WRAP(header._0x34,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header._0x34)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_type : 4;
  {
  FCNCALL_SUBNAME("trigger_type");
  { FCNCALL_CALL_CTRL_WRAP(header.trigger_type,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.trigger_type)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sfp_id : 4;
  {
  FCNCALL_SUBNAME("sfp_id");
  { FCNCALL_CALL_CTRL_WRAP(header.sfp_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.sfp_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc_id : 8;
  {
  FCNCALL_SUBNAME("tdc_id");
  { FCNCALL_CALL_CTRL_WRAP(header.tdc_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.tdc_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 channel_id : 8;
  {
  FCNCALL_SUBNAME("channel_id");
  { FCNCALL_CALL_CTRL_WRAP(header.channel_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.channel_id)); }
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
  // uint32 channel_num;
  {
  FCNCALL_SUBNAME("channel_num");
  { FCNCALL_CALL_CTRL_WRAP(channel_num,FCNCALL_CALL_TYPE(uint32,channel_num)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 _0x34 : 8;
      // uint32 trigger_type : 4;
      // uint32 sfp_id : 4;
      // uint32 tdc_id : 8;
      // uint32 channel_id : 8;
    // } ;
    // uint32 u32;
  // } channel_header;
  {
  FCNCALL_SUBNAME("channel_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 _0x34 : 8;
    // uint32 trigger_type : 4;
    // uint32 sfp_id : 4;
    // uint32 tdc_id : 8;
    // uint32 channel_id : 8;
  // } ;
  // uint32 _0x34 : 8;
  {
  FCNCALL_SUBNAME("_0x34");
  { FCNCALL_CALL_CTRL_WRAP(channel_header._0x34,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,channel_header._0x34)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_type : 4;
  {
  FCNCALL_SUBNAME("trigger_type");
  { FCNCALL_CALL_CTRL_WRAP(channel_header.trigger_type,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,channel_header.trigger_type)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sfp_id : 4;
  {
  FCNCALL_SUBNAME("sfp_id");
  { FCNCALL_CALL_CTRL_WRAP(channel_header.sfp_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,channel_header.sfp_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc_id : 8;
  {
  FCNCALL_SUBNAME("tdc_id");
  { FCNCALL_CALL_CTRL_WRAP(channel_header.tdc_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,channel_header.tdc_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 channel_id : 8;
  {
  FCNCALL_SUBNAME("channel_id");
  { FCNCALL_CALL_CTRL_WRAP(channel_header.channel_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,channel_header.channel_id)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(channel_header.u32,FCNCALL_CALL_TYPE(uint32,channel_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // uint32 data_byte_num;
  {
  FCNCALL_SUBNAME("data_byte_num");
  { FCNCALL_CALL_CTRL_WRAP(data_byte_num,FCNCALL_CALL_TYPE(uint32,data_byte_num)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 time_fine : 5;
      // uint32 time_coarse : 12;
      // uint32 time_coarse_ext : 1;
      // uint32 edge : 1;
      // uint32 ws : 1;
      // uint32 time_coarse_overflow : 1;
      // uint32 rb_overflow : 1;
      // uint32 dummy : 1;
      // uint32 is_data : 1;
      // uint32 channel : 8;
    // } ;
    // uint32 u32;
  // } data;
  {
  FCNCALL_SUBNAME("data");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 time_fine : 5;
    // uint32 time_coarse : 12;
    // uint32 time_coarse_ext : 1;
    // uint32 edge : 1;
    // uint32 ws : 1;
    // uint32 time_coarse_overflow : 1;
    // uint32 rb_overflow : 1;
    // uint32 dummy : 1;
    // uint32 is_data : 1;
    // uint32 channel : 8;
  // } ;
  // uint32 time_fine : 5;
  {
  FCNCALL_SUBNAME("time_fine");
  { FCNCALL_CALL_CTRL_WRAP(data.time_fine,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.time_fine)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 time_coarse : 12;
  {
  FCNCALL_SUBNAME("time_coarse");
  { FCNCALL_CALL_CTRL_WRAP(data.time_coarse,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.time_coarse)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 time_coarse_ext : 1;
  {
  FCNCALL_SUBNAME("time_coarse_ext");
  { FCNCALL_CALL_CTRL_WRAP(data.time_coarse_ext,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.time_coarse_ext)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 edge : 1;
  {
  FCNCALL_SUBNAME("edge");
  { FCNCALL_CALL_CTRL_WRAP(data.edge,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.edge)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 ws : 1;
  {
  FCNCALL_SUBNAME("ws");
  { FCNCALL_CALL_CTRL_WRAP(data.ws,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.ws)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 time_coarse_overflow : 1;
  {
  FCNCALL_SUBNAME("time_coarse_overflow");
  { FCNCALL_CALL_CTRL_WRAP(data.time_coarse_overflow,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.time_coarse_overflow)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 rb_overflow : 1;
  {
  FCNCALL_SUBNAME("rb_overflow");
  { FCNCALL_CALL_CTRL_WRAP(data.rb_overflow,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.rb_overflow)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy : 1;
  {
  FCNCALL_SUBNAME("dummy");
  { FCNCALL_CALL_CTRL_WRAP(data.dummy,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.dummy)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 is_data : 1;
  {
  FCNCALL_SUBNAME("is_data");
  { FCNCALL_CALL_CTRL_WRAP(data.is_data,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.is_data)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 channel : 8;
  {
  FCNCALL_SUBNAME("channel");
  { FCNCALL_CALL_CTRL_WRAP(data.channel,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.channel)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(data.u32,FCNCALL_CALL_TYPE(uint32,data.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_GSI_CLOCKTDC_16PH_ITEM

#ifndef USER_DEF_GSI_CLOCKTDC_BAD00BAD
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(GSI_CLOCKTDC_BAD00BAD)::FCNCALL_NAME(GSI_CLOCKTDC_BAD00BAD)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_GSI_CLOCKTDC_BAD00BAD

#ifndef USER_DEF_GSI_CLOCKTDC_FUSER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(GSI_CLOCKTDC_FUSER)::FCNCALL_NAME(GSI_CLOCKTDC_FUSER)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 sfp0_num : 8;
      // uint32 sfp1_num : 8;
      // uint32 sfp2_num : 8;
      // uint32 sfp3_num : 8;
    // } ;
    // uint32 u32;
  // } slave_num;
  {
  FCNCALL_SUBNAME("slave_num");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 sfp0_num : 8;
    // uint32 sfp1_num : 8;
    // uint32 sfp2_num : 8;
    // uint32 sfp3_num : 8;
  // } ;
  // uint32 sfp0_num : 8;
  {
  FCNCALL_SUBNAME("sfp0_num");
  { FCNCALL_CALL_CTRL_WRAP(slave_num.sfp0_num,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,slave_num.sfp0_num)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sfp1_num : 8;
  {
  FCNCALL_SUBNAME("sfp1_num");
  { FCNCALL_CALL_CTRL_WRAP(slave_num.sfp1_num,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,slave_num.sfp1_num)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sfp2_num : 8;
  {
  FCNCALL_SUBNAME("sfp2_num");
  { FCNCALL_CALL_CTRL_WRAP(slave_num.sfp2_num,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,slave_num.sfp2_num)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sfp3_num : 8;
  {
  FCNCALL_SUBNAME("sfp3_num");
  { FCNCALL_CALL_CTRL_WRAP(slave_num.sfp3_num,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,slave_num.sfp3_num)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(slave_num.u32,FCNCALL_CALL_TYPE(uint32,slave_num.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trig_window;
  {
  FCNCALL_SUBNAME("trig_window");
  { FCNCALL_CALL_CTRL_WRAP(trig_window,FCNCALL_CALL_TYPE(uint32,trig_window)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 num : 32;
    // } ;
    // uint32 u32;
  // } channel_num;
  {
  FCNCALL_SUBNAME("channel_num");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 num : 32;
  // } ;
  // uint32 num : 32;
  {
  FCNCALL_SUBNAME("num");
  { FCNCALL_CALL_CTRL_WRAP(channel_num.num,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,channel_num.num)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(channel_num.u32,FCNCALL_CALL_TYPE(uint32,channel_num.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_GSI_CLOCKTDC_FUSER

#ifndef USER_DEF_GSI_CLOCKTDC_ITEM
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(GSI_CLOCKTDC_ITEM)::FCNCALL_NAME(GSI_CLOCKTDC_ITEM)
{
  FCNCALL_INIT;
  // DATA32 event_counter_lo32;
  {
  FCNCALL_SUBNAME("event_counter_lo32");
  { FCNCALL_CALL_CTRL_WRAP(event_counter_lo32,event_counter_lo32.FCNCALL_CALL(event_counter_lo32)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 event_counter_hi16;
  {
  FCNCALL_SUBNAME("event_counter_hi16");
  { FCNCALL_CALL_CTRL_WRAP(event_counter_hi16,event_counter_hi16.FCNCALL_CALL(event_counter_hi16)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 trigger_coarse_lo22;
  {
  FCNCALL_SUBNAME("trigger_coarse_lo22");
  { FCNCALL_CALL_CTRL_WRAP(trigger_coarse_lo22,trigger_coarse_lo22.FCNCALL_CALL(trigger_coarse_lo22)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 trigger_coarse_hi24;
  {
  FCNCALL_SUBNAME("trigger_coarse_hi24");
  { FCNCALL_CALL_CTRL_WRAP(trigger_coarse_hi24,trigger_coarse_hi24.FCNCALL_CALL(trigger_coarse_hi24)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,258,80> time_coarse;
  {
  FCNCALL_SUBNAME("time_coarse");
  { FCNCALL_CALL_CTRL_WRAP(time_coarse,time_coarse.FCNCALL_CALL(time_coarse)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,258,80> time_fine;
  {
  FCNCALL_SUBNAME("time_fine");
  { FCNCALL_CALL_CTRL_WRAP(time_fine,time_fine.FCNCALL_CALL(time_fine)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 _0x34 : 8;
      // uint32 trigger_type : 4;
      // uint32 sfp_id : 4;
      // uint32 tdc_id : 8;
      // uint32 channel_id : 8;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 _0x34 : 8;
    // uint32 trigger_type : 4;
    // uint32 sfp_id : 4;
    // uint32 tdc_id : 8;
    // uint32 channel_id : 8;
  // } ;
  // uint32 _0x34 : 8;
  {
  FCNCALL_SUBNAME("_0x34");
  { FCNCALL_CALL_CTRL_WRAP(header._0x34,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header._0x34)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_type : 4;
  {
  FCNCALL_SUBNAME("trigger_type");
  { FCNCALL_CALL_CTRL_WRAP(header.trigger_type,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.trigger_type)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sfp_id : 4;
  {
  FCNCALL_SUBNAME("sfp_id");
  { FCNCALL_CALL_CTRL_WRAP(header.sfp_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.sfp_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc_id : 8;
  {
  FCNCALL_SUBNAME("tdc_id");
  { FCNCALL_CALL_CTRL_WRAP(header.tdc_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.tdc_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 channel_id : 8;
  {
  FCNCALL_SUBNAME("channel_id");
  { FCNCALL_CALL_CTRL_WRAP(header.channel_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.channel_id)); }
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
  // uint32 channel_num;
  {
  FCNCALL_SUBNAME("channel_num");
  { FCNCALL_CALL_CTRL_WRAP(channel_num,FCNCALL_CALL_TYPE(uint32,channel_num)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 _0x34 : 8;
      // uint32 trigger_type : 4;
      // uint32 sfp_id : 4;
      // uint32 tdc_id : 8;
      // uint32 channel_id : 8;
    // } ;
    // uint32 u32;
  // } channel_header;
  {
  FCNCALL_SUBNAME("channel_header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 _0x34 : 8;
    // uint32 trigger_type : 4;
    // uint32 sfp_id : 4;
    // uint32 tdc_id : 8;
    // uint32 channel_id : 8;
  // } ;
  // uint32 _0x34 : 8;
  {
  FCNCALL_SUBNAME("_0x34");
  { FCNCALL_CALL_CTRL_WRAP(channel_header._0x34,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,channel_header._0x34)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 trigger_type : 4;
  {
  FCNCALL_SUBNAME("trigger_type");
  { FCNCALL_CALL_CTRL_WRAP(channel_header.trigger_type,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,channel_header.trigger_type)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 sfp_id : 4;
  {
  FCNCALL_SUBNAME("sfp_id");
  { FCNCALL_CALL_CTRL_WRAP(channel_header.sfp_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,channel_header.sfp_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 tdc_id : 8;
  {
  FCNCALL_SUBNAME("tdc_id");
  { FCNCALL_CALL_CTRL_WRAP(channel_header.tdc_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,channel_header.tdc_id)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 channel_id : 8;
  {
  FCNCALL_SUBNAME("channel_id");
  { FCNCALL_CALL_CTRL_WRAP(channel_header.channel_id,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,channel_header.channel_id)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(channel_header.u32,FCNCALL_CALL_TYPE(uint32,channel_header.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  // uint32 data_byte_num;
  {
  FCNCALL_SUBNAME("data_byte_num");
  { FCNCALL_CALL_CTRL_WRAP(data_byte_num,FCNCALL_CALL_TYPE(uint32,data_byte_num)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 time_fine : 4;
      // uint32 time_coarse : 12;
      // uint32 time_coarse_ext : 1;
      // uint32 edge : 1;
      // uint32 ws : 1;
      // uint32 time_coarse_overflow : 1;
      // uint32 rb_overflow : 1;
      // uint32 status : 3;
      // uint32 channel : 8;
    // } ;
    // uint32 u32;
  // } data;
  {
  FCNCALL_SUBNAME("data");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 time_fine : 4;
    // uint32 time_coarse : 12;
    // uint32 time_coarse_ext : 1;
    // uint32 edge : 1;
    // uint32 ws : 1;
    // uint32 time_coarse_overflow : 1;
    // uint32 rb_overflow : 1;
    // uint32 status : 3;
    // uint32 channel : 8;
  // } ;
  // uint32 time_fine : 4;
  {
  FCNCALL_SUBNAME("time_fine");
  { FCNCALL_CALL_CTRL_WRAP(data.time_fine,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.time_fine)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 time_coarse : 12;
  {
  FCNCALL_SUBNAME("time_coarse");
  { FCNCALL_CALL_CTRL_WRAP(data.time_coarse,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.time_coarse)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 time_coarse_ext : 1;
  {
  FCNCALL_SUBNAME("time_coarse_ext");
  { FCNCALL_CALL_CTRL_WRAP(data.time_coarse_ext,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.time_coarse_ext)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 edge : 1;
  {
  FCNCALL_SUBNAME("edge");
  { FCNCALL_CALL_CTRL_WRAP(data.edge,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.edge)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 ws : 1;
  {
  FCNCALL_SUBNAME("ws");
  { FCNCALL_CALL_CTRL_WRAP(data.ws,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.ws)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 time_coarse_overflow : 1;
  {
  FCNCALL_SUBNAME("time_coarse_overflow");
  { FCNCALL_CALL_CTRL_WRAP(data.time_coarse_overflow,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.time_coarse_overflow)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 rb_overflow : 1;
  {
  FCNCALL_SUBNAME("rb_overflow");
  { FCNCALL_CALL_CTRL_WRAP(data.rb_overflow,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.rb_overflow)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 status : 3;
  {
  FCNCALL_SUBNAME("status");
  { FCNCALL_CALL_CTRL_WRAP(data.status,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.status)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 channel : 8;
  {
  FCNCALL_SUBNAME("channel");
  { FCNCALL_CALL_CTRL_WRAP(data.channel,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,data.channel)); }
  FCNCALL_SUBNAME_END;
  }
#endif// !STRUCT_ONLY_LAST_UNION_MEMBER
  // uint32 u32;
  {
  FCNCALL_SUBNAME("u32");
  { FCNCALL_CALL_CTRL_WRAP(data.u32,FCNCALL_CALL_TYPE(uint32,data.u32)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_GSI_CLOCKTDC_ITEM

#ifndef USER_DEF_GSI_CLOCKTDC_PADDING
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(GSI_CLOCKTDC_PADDING)::FCNCALL_NAME(GSI_CLOCKTDC_PADDING)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_GSI_CLOCKTDC_PADDING

#ifndef USER_DEF_GSI_SAM_PADDING
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(GSI_SAM_PADDING)::FCNCALL_NAME(GSI_SAM_PADDING)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_GSI_SAM_PADDING

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

#ifndef USER_DEF_MEGA_PULSER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(MEGA_PULSER)::FCNCALL_NAME(MEGA_PULSER)
{
  FCNCALL_INIT;
  // uint32 mega;
  {
  FCNCALL_SUBNAME("mega");
  { FCNCALL_CALL_CTRL_WRAP(mega,FCNCALL_CALL_TYPE(uint32,mega)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_MEGA_PULSER

#ifndef USER_DEF_TAMEX3_FH_DATA
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TAMEX3_FH_DATA)::FCNCALL_NAME(TAMEX3_FH_DATA)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,34,256> time_coarse;
  {
  FCNCALL_SUBNAME("time_coarse");
  { FCNCALL_CALL_CTRL_WRAP(time_coarse,time_coarse.FCNCALL_CALL(time_coarse)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,34,256> time_fine;
  {
  FCNCALL_SUBNAME("time_fine");
  { FCNCALL_CALL_CTRL_WRAP(time_fine,time_fine.FCNCALL_CALL(time_fine)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TAMEX3_FH_DATA

#ifndef USER_DEF_TAMEX3_FH_SFP
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TAMEX3_FH_SFP)::FCNCALL_NAME(TAMEX3_FH_SFP)
{
  FCNCALL_INIT;
  // TAMEX3_FH_DATA data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TAMEX3_FH_SFP

#ifndef USER_DEF_TAMEX3_PADDING
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TAMEX3_PADDING)::FCNCALL_NAME(TAMEX3_PADDING)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_TAMEX3_PADDING

#ifndef USER_DEF_TAMEX3_SFP
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TAMEX3_SFP)::FCNCALL_NAME(TAMEX3_SFP)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,34,256> time_coarse;
  {
  FCNCALL_SUBNAME("time_coarse");
  { FCNCALL_CALL_CTRL_WRAP(time_coarse,time_coarse.FCNCALL_CALL(time_coarse)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,34,256> time_fine;
  {
  FCNCALL_SUBNAME("time_fine");
  { FCNCALL_CALL_CTRL_WRAP(time_fine,time_fine.FCNCALL_CALL(time_fine)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TAMEX3_SFP

#ifndef USER_DEF_TAMEX3_WINDOW
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TAMEX3_WINDOW)::FCNCALL_NAME(TAMEX3_WINDOW)
{
  FCNCALL_INIT;
  // union 
  // {
    // struct 
    // {
      // uint32 post_trig_ns : 16;
      // uint32 pre_trig_ns : 16;
    // } ;
    // uint32 u32;
  // } trigger_window;
  {
  FCNCALL_SUBNAME("trigger_window");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 post_trig_ns : 16;
    // uint32 pre_trig_ns : 16;
  // } ;
  // uint32 post_trig_ns : 16;
  {
  FCNCALL_SUBNAME("post_trig_ns");
  { FCNCALL_CALL_CTRL_WRAP(trigger_window.post_trig_ns,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger_window.post_trig_ns)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 pre_trig_ns : 16;
  {
  FCNCALL_SUBNAME("pre_trig_ns");
  { FCNCALL_CALL_CTRL_WRAP(trigger_window.pre_trig_ns,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,trigger_window.pre_trig_ns)); }
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
  FCNCALL_RET;
}
#endif//USER_DEF_TAMEX3_WINDOW

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

#ifndef USER_DEF_TRLOII_LMU_SCALERS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TRLOII_LMU_SCALERS)::FCNCALL_NAME(TRLOII_LMU_SCALERS)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA32,DATA32,63> before_lmu;
  {
  FCNCALL_SUBNAME("before_lmu");
  { FCNCALL_CALL_CTRL_WRAP(before_lmu,before_lmu.FCNCALL_CALL(before_lmu)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,31> before_lmu_mux;
  {
  FCNCALL_SUBNAME("before_lmu_mux");
  { FCNCALL_CALL_CTRL_WRAP(before_lmu_mux,before_lmu_mux.FCNCALL_CALL(before_lmu_mux)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,31> before_lmu_aux;
  {
  FCNCALL_SUBNAME("before_lmu_aux");
  { FCNCALL_CALL_CTRL_WRAP(before_lmu_aux,before_lmu_aux.FCNCALL_CALL(before_lmu_aux)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,127> before_dt;
  {
  FCNCALL_SUBNAME("before_dt");
  { FCNCALL_CALL_CTRL_WRAP(before_dt,before_dt.FCNCALL_CALL(before_dt)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,127> after_dt;
  {
  FCNCALL_SUBNAME("after_dt");
  { FCNCALL_CALL_CTRL_WRAP(after_dt,after_dt.FCNCALL_CALL(after_dt)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,127> after_reduction;
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
      // uint32 after_lmu : 8;
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
    // uint32 after_lmu : 8;
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
  // uint32 after_lmu : 8;
  {
  FCNCALL_SUBNAME("after_lmu");
  { FCNCALL_CALL_CTRL_WRAP(header.after_lmu,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.after_lmu)); }
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
#endif//USER_DEF_TRLOII_LMU_SCALERS

#ifndef USER_DEF_TRLOII_SAMPLER
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TRLOII_SAMPLER)::FCNCALL_NAME(TRLOII_SAMPLER)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA32,DATA32,512> sampler;
  {
  FCNCALL_SUBNAME("sampler");
  { FCNCALL_CALL_CTRL_WRAP(sampler,sampler.FCNCALL_CALL(sampler)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 word_num : 10;
      // uint32 overflow : 1;
      // uint32 dummy_11_15 : 5;
      // uint32 mark : 16;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 word_num : 10;
    // uint32 overflow : 1;
    // uint32 dummy_11_15 : 5;
    // uint32 mark : 16;
  // } ;
  // uint32 word_num : 10;
  {
  FCNCALL_SUBNAME("word_num");
  { FCNCALL_CALL_CTRL_WRAP(header.word_num,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.word_num)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 overflow : 1;
  {
  FCNCALL_SUBNAME("overflow");
  { FCNCALL_CALL_CTRL_WRAP(header.overflow,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.overflow)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_11_15 : 5;
  {
  FCNCALL_SUBNAME("dummy_11_15");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy_11_15,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy_11_15)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 mark : 16;
  {
  FCNCALL_SUBNAME("mark");
  { FCNCALL_CALL_CTRL_WRAP(header.mark,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.mark)); }
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
#endif//USER_DEF_TRLOII_SAMPLER

#ifndef USER_DEF_TRLOII_SAMPLER_TWO
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TRLOII_SAMPLER_TWO)::FCNCALL_NAME(TRLOII_SAMPLER_TWO)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA32,DATA32,512> sampler_hi;
  {
  FCNCALL_SUBNAME("sampler_hi");
  { FCNCALL_CALL_CTRL_WRAP(sampler_hi,sampler_hi.FCNCALL_CALL(sampler_hi)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,512> sampler_lo;
  {
  FCNCALL_SUBNAME("sampler_lo");
  { FCNCALL_CALL_CTRL_WRAP(sampler_lo,sampler_lo.FCNCALL_CALL(sampler_lo)); }
  FCNCALL_SUBNAME_END;
  }
  // union 
  // {
    // struct 
    // {
      // uint32 word_num : 10;
      // uint32 overflow : 1;
      // uint32 dummy_11_15 : 5;
      // uint32 mark : 16;
    // } ;
    // uint32 u32;
  // } header;
  {
  FCNCALL_SUBNAME("header");
#if !STRUCT_ONLY_LAST_UNION_MEMBER
  // struct 
  // {
    // uint32 word_num : 10;
    // uint32 overflow : 1;
    // uint32 dummy_11_15 : 5;
    // uint32 mark : 16;
  // } ;
  // uint32 word_num : 10;
  {
  FCNCALL_SUBNAME("word_num");
  { FCNCALL_CALL_CTRL_WRAP(header.word_num,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.word_num)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 overflow : 1;
  {
  FCNCALL_SUBNAME("overflow");
  { FCNCALL_CALL_CTRL_WRAP(header.overflow,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.overflow)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 dummy_11_15 : 5;
  {
  FCNCALL_SUBNAME("dummy_11_15");
  { FCNCALL_CALL_CTRL_WRAP(header.dummy_11_15,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.dummy_11_15)); }
  FCNCALL_SUBNAME_END;
  }
  // uint32 mark : 16;
  {
  FCNCALL_SUBNAME("mark");
  { FCNCALL_CALL_CTRL_WRAP(header.mark,FCNCALL_CALL_TYPE/*_BITFIELD*/(uint32,header.mark)); }
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
#endif//USER_DEF_TRLOII_SAMPLER_TWO

#ifndef USER_DEF_TRLOII_TPAT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TRLOII_TPAT)::FCNCALL_NAME(TRLOII_TPAT)
{
  FCNCALL_INIT;
  // DATA32 n;
  {
  FCNCALL_SUBNAME("n");
  { FCNCALL_CALL_CTRL_WRAP(n,n.FCNCALL_CALL(n)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_list_ii_zero_suppress<DATA16,DATA16,170> tpat;
  {
  FCNCALL_SUBNAME("tpat");
  { FCNCALL_CALL_CTRL_WRAP(tpat,tpat.FCNCALL_CALL(tpat)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_list_ii_zero_suppress<DATA8,DATA8,170> trig;
  {
  FCNCALL_SUBNAME("trig");
  { FCNCALL_CALL_CTRL_WRAP(trig,trig.FCNCALL_CALL(trig)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_list_ii_zero_suppress<DATA32,DATA32,170> ts_lo;
  {
  FCNCALL_SUBNAME("ts_lo");
  { FCNCALL_CALL_CTRL_WRAP(ts_lo,ts_lo.FCNCALL_CALL(ts_lo)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_list_ii_zero_suppress<DATA32,DATA32,170> ts_hi;
  {
  FCNCALL_SUBNAME("ts_hi");
  { FCNCALL_CALL_CTRL_WRAP(ts_hi,ts_hi.FCNCALL_CALL(ts_hi)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TRLOII_TPAT

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

#ifndef USER_DEF_VME_GSI_VFTX2
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_GSI_VFTX2)::FCNCALL_NAME(VME_GSI_VFTX2)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,32,32> time_fine;
  {
  FCNCALL_SUBNAME("time_fine");
  { FCNCALL_CALL_CTRL_WRAP(time_fine,time_fine.FCNCALL_CALL(time_fine)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,32,32> time_coarse;
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
  // raw_array_multi_zero_suppress<DATA12,DATA12,32,32> time_fine;
  {
  FCNCALL_SUBNAME("time_fine");
  { FCNCALL_CALL_CTRL_WRAP(time_fine,time_fine.FCNCALL_CALL(time_fine)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,32,32> time_coarse;
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
  // raw_array_multi_zero_suppress<DATA12,DATA12,64,32> time_fine;
  {
  FCNCALL_SUBNAME("time_fine");
  { FCNCALL_CALL_CTRL_WRAP(time_fine,time_fine.FCNCALL_CALL(time_fine)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,64,32> time_coarse;
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

#ifndef USER_DEF_VME_MESYTEC_MQDC32
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_MESYTEC_MQDC32)::FCNCALL_NAME(VME_MESYTEC_MQDC32)
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
#endif//USER_DEF_VME_MESYTEC_MQDC32

#ifndef USER_DEF_VME_MESYTEC_MTDC32
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_MESYTEC_MTDC32)::FCNCALL_NAME(VME_MESYTEC_MTDC32)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA16,DATA16,34> data;
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
#endif//USER_DEF_VME_MESYTEC_MTDC32

#ifndef USER_DEF_VME_MESYTEC_VMMR8
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(VME_MESYTEC_VMMR8)::FCNCALL_NAME(VME_MESYTEC_VMMR8)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,512,20> data;
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
#endif//USER_DEF_VME_MESYTEC_VMMR8

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

#ifndef USER_DEF_fib1a_data
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(fib1a_data)::FCNCALL_NAME(fib1a_data)
{
  FCNCALL_INIT;
  // GSI_CLOCKTDC_16PH_ITEM ctdc[4];
  {
  FCNCALL_SUBNAME("ctdc");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(ctdc__i0,,__i0,ctdc[__i0].FCNCALL_CALL(ctdc[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // TAMEX3_SFP tamex[2];
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
  // BARRIER barrier;
  {
  FCNCALL_SUBNAME("barrier");
  { FCNCALL_CALL_CTRL_WRAP(barrier,barrier.FCNCALL_CALL(barrier)); }
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
#endif//USER_DEF_fib1a_data

#ifndef USER_DEF_fibsipm_data
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(fibsipm_data)::FCNCALL_NAME(fibsipm_data)
{
  FCNCALL_INIT;
  // GSI_CLOCKTDC_ITEM ctdc[4];
  {
  FCNCALL_SUBNAME("ctdc");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(ctdc__i0,,__i0,ctdc[__i0].FCNCALL_CALL(ctdc[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
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
#endif//USER_DEF_fibsipm_data

#ifndef USER_DEF_los_tamex_data
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(los_tamex_data)::FCNCALL_NAME(los_tamex_data)
{
  FCNCALL_INIT;
  // TAMEX3_PADDING padding;
  {
  FCNCALL_SUBNAME("padding");
  { FCNCALL_CALL_CTRL_WRAP(padding,padding.FCNCALL_CALL(padding)); }
  FCNCALL_SUBNAME_END;
  }
  // TAMEX3_SFP tamex;
  {
  FCNCALL_SUBNAME("tamex");
  { FCNCALL_CALL_CTRL_WRAP(tamex,tamex.FCNCALL_CALL(tamex)); }
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
#endif//USER_DEF_los_tamex_data

#ifndef USER_DEF_los_vme_subev_data
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(los_vme_subev_data)::FCNCALL_NAME(los_vme_subev_data)
{
  FCNCALL_INIT;
  // VME_GSI_VFTX2_7PS vftx21;
  {
  FCNCALL_SUBNAME("vftx21");
  { FCNCALL_CALL_CTRL_WRAP(vftx21,vftx21.FCNCALL_CALL(vftx21)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_MESYTEC_MTDC32 mtdc32;
  {
  FCNCALL_SUBNAME("mtdc32");
  { FCNCALL_CALL_CTRL_WRAP(mtdc32,mtdc32.FCNCALL_CALL(mtdc32)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_GSI_VFTX2_7PS vftx22;
  {
  FCNCALL_SUBNAME("vftx22");
  { FCNCALL_CALL_CTRL_WRAP(vftx22,vftx22.FCNCALL_CALL(vftx22)); }
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
#endif//USER_DEF_los_vme_subev_data

#ifndef USER_DEF_neuland_sfp
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(neuland_sfp)::FCNCALL_NAME(neuland_sfp)
{
  FCNCALL_INIT;
  // TAMEX3_FH_SFP card[35];
  {
  FCNCALL_SUBNAME("card");
  FCNCALL_FOR(__i0,35)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(card__i0,,__i0,card[__i0].FCNCALL_CALL(card[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_neuland_sfp

#ifndef USER_DEF_neuland_tamex_subev_data
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(neuland_tamex_subev_data)::FCNCALL_NAME(neuland_tamex_subev_data)
{
  FCNCALL_INIT;
  // TAMEX3_PADDING padding0;
  {
  FCNCALL_SUBNAME("padding0");
  { FCNCALL_CALL_CTRL_WRAP(padding0,padding0.FCNCALL_CALL(padding0)); }
  FCNCALL_SUBNAME_END;
  }
  // neuland_sfp sfp[1];
  {
  FCNCALL_SUBNAME("sfp");
  FCNCALL_FOR(__i0,1)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(sfp__i0,,__i0,sfp[__i0].FCNCALL_CALL(sfp[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
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
#endif//USER_DEF_neuland_tamex_subev_data

#ifndef USER_DEF_s2_vme_subev_data
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(s2_vme_subev_data)::FCNCALL_NAME(s2_vme_subev_data)
{
  FCNCALL_INIT;
  // WR_MULTI ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  // LAND_STD_VME land_vme;
  {
  FCNCALL_SUBNAME("land_vme");
  { FCNCALL_CALL_CTRL_WRAP(land_vme,land_vme.FCNCALL_CALL(land_vme)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_GSI_VFTX2_7PS vftx21;
  {
  FCNCALL_SUBNAME("vftx21");
  { FCNCALL_CALL_CTRL_WRAP(vftx21,vftx21.FCNCALL_CALL(vftx21)); }
  FCNCALL_SUBNAME_END;
  }
  // BARRIER b1;
  {
  FCNCALL_SUBNAME("b1");
  { FCNCALL_CALL_CTRL_WRAP(b1,b1.FCNCALL_CALL(b1)); }
  FCNCALL_SUBNAME_END;
  }
  // BARRIER b2;
  {
  FCNCALL_SUBNAME("b2");
  { FCNCALL_CALL_CTRL_WRAP(b2,b2.FCNCALL_CALL(b2)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_MESYTEC_MQDC32 mqdc;
  {
  FCNCALL_SUBNAME("mqdc");
  { FCNCALL_CALL_CTRL_WRAP(mqdc,mqdc.FCNCALL_CALL(mqdc)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_s2_vme_subev_data

#ifndef USER_DEF_s8_vme_subev_data
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(s8_vme_subev_data)::FCNCALL_NAME(s8_vme_subev_data)
{
  FCNCALL_INIT;
  // VME_GSI_VFTX2_7PS vftx21;
  {
  FCNCALL_SUBNAME("vftx21");
  { FCNCALL_CALL_CTRL_WRAP(vftx21,vftx21.FCNCALL_CALL(vftx21)); }
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
#endif//USER_DEF_s8_vme_subev_data

#ifndef USER_DEF_sofia_mwpc_subev_data
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(sofia_mwpc_subev_data)::FCNCALL_NAME(sofia_mwpc_subev_data)
{
  FCNCALL_INIT;
  // VME_MESYTEC_VMMR8 vmmr8;
  {
  FCNCALL_SUBNAME("vmmr8");
  { FCNCALL_CALL_CTRL_WRAP(vmmr8,vmmr8.FCNCALL_CALL(vmmr8)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_MESYTEC_MADC32 madc32[2];
  {
  FCNCALL_SUBNAME("madc32");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(madc32__i0,,__i0,madc32[__i0].FCNCALL_CALL(madc32[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
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
#endif//USER_DEF_sofia_mwpc_subev_data

#ifndef USER_DEF_sofia_tof_subev_data
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(sofia_tof_subev_data)::FCNCALL_NAME(sofia_tof_subev_data)
{
  FCNCALL_INIT;
  // VME_GSI_VFTX2_7PS vftx2[4];
  {
  FCNCALL_SUBNAME("vftx2");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(vftx2__i0,,__i0,vftx2[__i0].FCNCALL_CALL(vftx2[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
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
#endif//USER_DEF_sofia_tof_subev_data

#ifndef USER_DEF_sofia_trim_subev_data
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(sofia_trim_subev_data)::FCNCALL_NAME(sofia_trim_subev_data)
{
  FCNCALL_INIT;
  // VME_MESYTEC_VMMR8 vmmr8;
  {
  FCNCALL_SUBNAME("vmmr8");
  { FCNCALL_CALL_CTRL_WRAP(vmmr8,vmmr8.FCNCALL_CALL(vmmr8)); }
  FCNCALL_SUBNAME_END;
  }
  // VME_MESYTEC_MDPP16 mdpp;
  {
  FCNCALL_SUBNAME("mdpp");
  { FCNCALL_CALL_CTRL_WRAP(mdpp,mdpp.FCNCALL_CALL(mdpp)); }
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
#endif//USER_DEF_sofia_trim_subev_data

#ifndef USER_DEF_sofia_twim_subev_data
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(sofia_twim_subev_data)::FCNCALL_NAME(sofia_twim_subev_data)
{
  FCNCALL_INIT;
  // VME_MESYTEC_MDPP16 mdpp16[2];
  {
  FCNCALL_SUBNAME("mdpp16");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(mdpp16__i0,,__i0,mdpp16[__i0].FCNCALL_CALL(mdpp16[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
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
#endif//USER_DEF_sofia_twim_subev_data

#ifndef USER_DEF_CALIFA
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(CALIFA)::FCNCALL_NAME(CALIFA)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // FEBEX3_CALIFA_BASE febex3;
  {
  FCNCALL_SUBNAME("febex3");
  { FCNCALL_CALL_CTRL_WRAP(febex3,febex3.FCNCALL_CALL(febex3)); }
  FCNCALL_SUBNAME_END;
  }
  // TIMESTAMP_WHITERABBIT ts400;
  {
  FCNCALL_SUBNAME("ts400");
  { FCNCALL_CALL_CTRL_WRAP(ts400,ts400.FCNCALL_CALL(ts400)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_CALIFA

#ifndef USER_DEF_ams_siderem1_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(ams_siderem1_subev)::FCNCALL_NAME(ams_siderem1_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // GSI_SAM_PADDING padd;
  {
  FCNCALL_SUBNAME("padd");
  { FCNCALL_CALL_CTRL_WRAP(padd,padd.FCNCALL_CALL(padd)); }
  FCNCALL_SUBNAME_END;
  }
  // EXT_SST sst[3];
  {
  FCNCALL_SUBNAME("sst");
  FCNCALL_FOR(__i0,3)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(sst__i0,,__i0,sst[__i0].FCNCALL_CALL(sst[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
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
#endif//USER_DEF_ams_siderem1_subev

#ifndef USER_DEF_ams_siderem2_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(ams_siderem2_subev)::FCNCALL_NAME(ams_siderem2_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // GSI_SAM_PADDING padd;
  {
  FCNCALL_SUBNAME("padd");
  { FCNCALL_CALL_CTRL_WRAP(padd,padd.FCNCALL_CALL(padd)); }
  FCNCALL_SUBNAME_END;
  }
  // EXT_SST sst[3];
  {
  FCNCALL_SUBNAME("sst");
  FCNCALL_FOR(__i0,3)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(sst__i0,,__i0,sst[__i0].FCNCALL_CALL(sst[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
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
#endif//USER_DEF_ams_siderem2_subev

#ifndef USER_DEF_ams_wr
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(ams_wr)::FCNCALL_NAME(ams_wr)
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
#endif//USER_DEF_ams_wr

#ifndef USER_DEF_fib1ab_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(fib1ab_subev)::FCNCALL_NAME(fib1ab_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // fib1a_data data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_fib1ab_subev

#ifndef USER_DEF_fibsipm_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(fibsipm_subev)::FCNCALL_NAME(fibsipm_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // fibsipm_data data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_fibsipm_subev

#ifndef USER_DEF_lmu_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(lmu_subev)::FCNCALL_NAME(lmu_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TRLOII_LMU_SCALERS scalers;
  {
  FCNCALL_SUBNAME("scalers");
  { FCNCALL_CALL_CTRL_WRAP(scalers,scalers.FCNCALL_CALL(scalers)); }
  FCNCALL_SUBNAME_END;
  }
  // MEGA_PULSER pulser;
  {
  FCNCALL_SUBNAME("pulser");
  { FCNCALL_CALL_CTRL_WRAP(pulser,pulser.FCNCALL_CALL(pulser)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_lmu_subev

#ifndef USER_DEF_los_sampler_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(los_sampler_subev)::FCNCALL_NAME(los_sampler_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TRLOII_SAMPLER los;
  {
  FCNCALL_SUBNAME("los");
  { FCNCALL_CALL_CTRL_WRAP(los,los.FCNCALL_CALL(los)); }
  FCNCALL_SUBNAME_END;
  }
  // TRLOII_SAMPLER ms;
  {
  FCNCALL_SUBNAME("ms");
  { FCNCALL_CALL_CTRL_WRAP(ms,ms.FCNCALL_CALL(ms)); }
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
#endif//USER_DEF_los_sampler_subev

#ifndef USER_DEF_los_tamex_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(los_tamex_subev)::FCNCALL_NAME(los_tamex_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // los_tamex_data data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_los_tamex_subev

#ifndef USER_DEF_los_vme_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(los_vme_subev)::FCNCALL_NAME(los_vme_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // los_vme_subev_data data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_los_vme_subev

#ifndef USER_DEF_los_wr
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(los_wr)::FCNCALL_NAME(los_wr)
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
#endif//USER_DEF_los_wr

#ifndef USER_DEF_neuland_tamex_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(neuland_tamex_subev)::FCNCALL_NAME(neuland_tamex_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // neuland_tamex_subev_data data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_neuland_tamex_subev

#ifndef USER_DEF_s2_vme_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(s2_vme_subev)::FCNCALL_NAME(s2_vme_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // s2_vme_subev_data data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_s2_vme_subev

#ifndef USER_DEF_s8_tpat_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(s8_tpat_subev)::FCNCALL_NAME(s8_tpat_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TRLOII_TPAT tpat;
  {
  FCNCALL_SUBNAME("tpat");
  { FCNCALL_CALL_CTRL_WRAP(tpat,tpat.FCNCALL_CALL(tpat)); }
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
#endif//USER_DEF_s8_tpat_subev

#ifndef USER_DEF_s8_vme_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(s8_vme_subev)::FCNCALL_NAME(s8_vme_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // s8_vme_subev_data data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_s8_vme_subev

#ifndef USER_DEF_s8_wr
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(s8_wr)::FCNCALL_NAME(s8_wr)
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
#endif//USER_DEF_s8_wr

#ifndef USER_DEF_sofia_mwpc_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(sofia_mwpc_subev)::FCNCALL_NAME(sofia_mwpc_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // sofia_mwpc_subev_data data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_sofia_mwpc_subev

#ifndef USER_DEF_sofia_tof_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(sofia_tof_subev)::FCNCALL_NAME(sofia_tof_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // sofia_tof_subev_data data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_sofia_tof_subev

#ifndef USER_DEF_sofia_trim_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(sofia_trim_subev)::FCNCALL_NAME(sofia_trim_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // sofia_trim_subev_data data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_sofia_trim_subev

#ifndef USER_DEF_sofia_twim_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(sofia_twim_subev)::FCNCALL_NAME(sofia_twim_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // sofia_twim_subev_data data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_sofia_twim_subev

#ifndef USER_DEF_wr_neuland
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(wr_neuland)::FCNCALL_NAME(wr_neuland)
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
#endif//USER_DEF_wr_neuland

#ifndef USER_DEF_wr_s2
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(wr_s2)::FCNCALL_NAME(wr_s2)
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
#endif//USER_DEF_wr_s2

#ifndef USER_DEF_wr_sofia
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(wr_sofia)::FCNCALL_NAME(wr_sofia)
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
#endif//USER_DEF_wr_sofia

#ifndef USER_DEF_unpack_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(unpack_event)::FCNCALL_NAME(unpack_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_event_base,FCNCALL_CLASS_NAME(unpack_event_base)::FCNCALL_CALL_BASE());
  // los_wr los_ts;
  {
  FCNCALL_SUBNAME("los_ts");
  { FCNCALL_CALL_CTRL_WRAP(los_ts,los_ts.FCNCALL_CALL(los_ts)); }
  FCNCALL_SUBNAME_END;
  }
  // los_vme_subev los_vme;
  {
  FCNCALL_SUBNAME("los_vme");
  { FCNCALL_CALL_CTRL_WRAP(los_vme,los_vme.FCNCALL_CALL(los_vme)); }
  FCNCALL_SUBNAME_END;
  }
  // lmu_subev los_lmu;
  {
  FCNCALL_SUBNAME("los_lmu");
  { FCNCALL_CALL_CTRL_WRAP(los_lmu,los_lmu.FCNCALL_CALL(los_lmu)); }
  FCNCALL_SUBNAME_END;
  }
  // los_tamex_subev los_tamex;
  {
  FCNCALL_SUBNAME("los_tamex");
  { FCNCALL_CALL_CTRL_WRAP(los_tamex,los_tamex.FCNCALL_CALL(los_tamex)); }
  FCNCALL_SUBNAME_END;
  }
  // los_sampler_subev los_sampler;
  {
  FCNCALL_SUBNAME("los_sampler");
  { FCNCALL_CALL_CTRL_WRAP(los_sampler,los_sampler.FCNCALL_CALL(los_sampler)); }
  FCNCALL_SUBNAME_END;
  }
  // fib1ab_subev fib1ab;
  {
  FCNCALL_SUBNAME("fib1ab");
  { FCNCALL_CALL_CTRL_WRAP(fib1ab,fib1ab.FCNCALL_CALL(fib1ab)); }
  FCNCALL_SUBNAME_END;
  }
  // wr_neuland neuland_ts;
  {
  FCNCALL_SUBNAME("neuland_ts");
  { FCNCALL_CALL_CTRL_WRAP(neuland_ts,neuland_ts.FCNCALL_CALL(neuland_ts)); }
  FCNCALL_SUBNAME_END;
  }
  // neuland_tamex_subev neuland_tamex_1;
  {
  FCNCALL_SUBNAME("neuland_tamex_1");
  { FCNCALL_CALL_CTRL_WRAP(neuland_tamex_1,neuland_tamex_1.FCNCALL_CALL(neuland_tamex_1)); }
  FCNCALL_SUBNAME_END;
  }
  // neuland_tamex_subev neuland_tamex_2;
  {
  FCNCALL_SUBNAME("neuland_tamex_2");
  { FCNCALL_CALL_CTRL_WRAP(neuland_tamex_2,neuland_tamex_2.FCNCALL_CALL(neuland_tamex_2)); }
  FCNCALL_SUBNAME_END;
  }
  // neuland_tamex_subev neuland_tamex_3;
  {
  FCNCALL_SUBNAME("neuland_tamex_3");
  { FCNCALL_CALL_CTRL_WRAP(neuland_tamex_3,neuland_tamex_3.FCNCALL_CALL(neuland_tamex_3)); }
  FCNCALL_SUBNAME_END;
  }
  // neuland_tamex_subev neuland_tamex_4;
  {
  FCNCALL_SUBNAME("neuland_tamex_4");
  { FCNCALL_CALL_CTRL_WRAP(neuland_tamex_4,neuland_tamex_4.FCNCALL_CALL(neuland_tamex_4)); }
  FCNCALL_SUBNAME_END;
  }
  // CALIFA califa;
  {
  FCNCALL_SUBNAME("califa");
  { FCNCALL_CALL_CTRL_WRAP(califa,califa.FCNCALL_CALL(califa)); }
  FCNCALL_SUBNAME_END;
  }
  // ams_wr ams_ts;
  {
  FCNCALL_SUBNAME("ams_ts");
  { FCNCALL_CALL_CTRL_WRAP(ams_ts,ams_ts.FCNCALL_CALL(ams_ts)); }
  FCNCALL_SUBNAME_END;
  }
  // ams_siderem1_subev ams_siderem_1;
  {
  FCNCALL_SUBNAME("ams_siderem_1");
  { FCNCALL_CALL_CTRL_WRAP(ams_siderem_1,ams_siderem_1.FCNCALL_CALL(ams_siderem_1)); }
  FCNCALL_SUBNAME_END;
  }
  // ams_siderem2_subev ams_siderem_2;
  {
  FCNCALL_SUBNAME("ams_siderem_2");
  { FCNCALL_CALL_CTRL_WRAP(ams_siderem_2,ams_siderem_2.FCNCALL_CALL(ams_siderem_2)); }
  FCNCALL_SUBNAME_END;
  }
  // sofia_tof_subev sofia_tof;
  {
  FCNCALL_SUBNAME("sofia_tof");
  { FCNCALL_CALL_CTRL_WRAP(sofia_tof,sofia_tof.FCNCALL_CALL(sofia_tof)); }
  FCNCALL_SUBNAME_END;
  }
  // sofia_mwpc_subev sofia_mwpc;
  {
  FCNCALL_SUBNAME("sofia_mwpc");
  { FCNCALL_CALL_CTRL_WRAP(sofia_mwpc,sofia_mwpc.FCNCALL_CALL(sofia_mwpc)); }
  FCNCALL_SUBNAME_END;
  }
  // sofia_twim_subev sofia_twim;
  {
  FCNCALL_SUBNAME("sofia_twim");
  { FCNCALL_CALL_CTRL_WRAP(sofia_twim,sofia_twim.FCNCALL_CALL(sofia_twim)); }
  FCNCALL_SUBNAME_END;
  }
  // sofia_trim_subev sofia_trim;
  {
  FCNCALL_SUBNAME("sofia_trim");
  { FCNCALL_CALL_CTRL_WRAP(sofia_trim,sofia_trim.FCNCALL_CALL(sofia_trim)); }
  FCNCALL_SUBNAME_END;
  }
  // fibsipm_subev fibsipm;
  {
  FCNCALL_SUBNAME("fibsipm");
  { FCNCALL_CALL_CTRL_WRAP(fibsipm,fibsipm.FCNCALL_CALL(fibsipm)); }
  FCNCALL_SUBNAME_END;
  }
  // wr_s2 s2_ts;
  {
  FCNCALL_SUBNAME("s2_ts");
  { FCNCALL_CALL_CTRL_WRAP(s2_ts,s2_ts.FCNCALL_CALL(s2_ts)); }
  FCNCALL_SUBNAME_END;
  }
  // s2_vme_subev s2_vme;
  {
  FCNCALL_SUBNAME("s2_vme");
  { FCNCALL_CALL_CTRL_WRAP(s2_vme,s2_vme.FCNCALL_CALL(s2_vme)); }
  FCNCALL_SUBNAME_END;
  }
  // s8_wr s8_ts;
  {
  FCNCALL_SUBNAME("s8_ts");
  { FCNCALL_CALL_CTRL_WRAP(s8_ts,s8_ts.FCNCALL_CALL(s8_ts)); }
  FCNCALL_SUBNAME_END;
  }
  // s8_tpat_subev s8_tpat;
  {
  FCNCALL_SUBNAME("s8_tpat");
  { FCNCALL_CALL_CTRL_WRAP(s8_tpat,s8_tpat.FCNCALL_CALL(s8_tpat)); }
  FCNCALL_SUBNAME_END;
  }
  // s8_vme_subev s8_vme;
  {
  FCNCALL_SUBNAME("s8_vme");
  { FCNCALL_CALL_CTRL_WRAP(s8_vme,s8_vme.FCNCALL_CALL(s8_vme)); }
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
