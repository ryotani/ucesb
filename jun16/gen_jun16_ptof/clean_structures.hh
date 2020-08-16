class BARRIER
{
  union
  {
    struct
    {
      uint32 unnamed_0_31 : 32;
    };
    uint32 u32;
  } barrier;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(BARRIER);
};
class FEBEX_BAD_EVENTHEADER
{
  union
  {
    struct
    {
      uint32 unnamed_0_31 : 32;
    };
    uint32 u32;
  } badbad;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FEBEX_BAD_EVENTHEADER);
};
class FEBEX_GOOD_EVENTHEADER
{
  union
  {
    struct
    {
      uint32 n_febex_sfp0 : 8;
      uint32 n_febex_sfp1 : 8;
      uint32 n_febex_sfp2 : 8;
      uint32 n_febex_sfp3 : 8;
    };
    uint32 u32;
  } febexcards;
  union
  {
    struct
    {
      uint32 trace_length : 16;
      uint32 trigger_delay : 16;
    };
    uint32 u32;
  } trig_length;
  union
  {
    struct
    {
      uint32 sum_b : 11;
      uint32 gap : 10;
      uint32 sum_a : 11;
    };
    uint32 u32;
  } energy_filter;
  union
  {
    struct
    {
      uint32 pola : 32;
    };
    uint32 u32;
  } polarity1;
  union
  {
    struct
    {
      uint32 pola : 32;
    };
    uint32 u32;
  } polarity2;
  union
  {
    struct
    {
      uint32 pola : 32;
    };
    uint32 u32;
  } polarity3;
  union
  {
    struct
    {
      uint32 pola : 32;
    };
    uint32 u32;
  } polarity4;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FEBEX_GOOD_EVENTHEADER);
};
class FEBEX_EVENTHEADER
{
  SINGLE(FEBEX_GOOD_EVENTHEADER,good);
  SINGLE(FEBEX_BAD_EVENTHEADER,bad);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FEBEX_EVENTHEADER);
};
class FEBEX_NOTRACE
{
  raw_array<DATA8,DATA8,16> n_hit;
  raw_array_multi_zero_suppress<DATA12,DATA12,16,32> t;
  raw_array_multi_zero_suppress<DATA32,DATA32,16,32> e;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  STRUCT_FCNS_DECL(FEBEX_NOTRACE);
};
class FEBEX_PADDING
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FEBEX_PADDING);
};
class FEBEX_TRACE
{
  raw_array_zero_suppress<DATA32,DATA32,16> trace_length;
  raw_array_zero_suppress<DATA16,DATA16,1000> trace[16];
  raw_array_zero_suppress<DATA32,DATA32,1000> filter[16];
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  STRUCT_FCNS_DECL(FEBEX_TRACE);
};
class LAND_STD_VME
{
  union
  {
    struct
    {
      uint32 fail_general : 1;
      uint32 fail_data_corrupt : 1;
      uint32 fail_data_missing : 1;
      uint32 fail_data_too_much : 1;
      uint32 fail_event_counter_mismatch : 1;
      uint32 fail_readout_error_driver : 1;
      uint32 fail_unexpected_trigger : 1;
      uint32 fail_firmware_mismatch : 1;
      uint32 dummy_8_21 : 14;
      uint32 has_multi_trlo_ii_counter0 : 1;
      uint32 has_clock_counter_stamp : 1;
      uint32 has_continous_event_counter : 1;
      uint32 has_update_qdc_iped_value : 1;
      uint32 spurious_start_before_tcal : 1;
      uint32 has_no_zero_suppression : 1;
      uint32 has_multi_adctdc_counter0 : 1;
      uint32 has_multi_scaler_counter0 : 1;
      uint32 has_multi_event : 1;
      uint32 has_time_stamp : 1;
    };
    uint32 u32;
  } failure;
    uint32 continous_event_counter;
    uint32 time_stamp;
    uint32 clock_counter_stamp;
    uint32 iped;
    uint32 multi_events;
    uint32 multi_trlo_ii_counter0;
    uint32 multi_scaler_counter0;
    uint32 multi_adctdc_counter0;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(LAND_STD_VME);
};
class SCALER
{
  uint32 scaler;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(SCALER);
};
class TAMEX3_HEADER
{
  union
  {
    struct
    {
      uint32 post_trig_ns : 16;
      uint32 pre_trig_ns : 16;
    };
    uint32 u32;
  } trigger_window;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TAMEX3_HEADER);
};
class TAMEX3_PADDING
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TAMEX3_PADDING);
};
class TAMEX3_SFP
{
  raw_array_multi_zero_suppress<DATA16,DATA16,34,200> time_coarse;
  raw_array_multi_zero_suppress<DATA12,DATA12,34,200> time_fine;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  STRUCT_FCNS_DECL(TAMEX3_SFP);
};
class TIMESTAMP_WHITERABBIT
{
  DATA12 subsystem_id;
  DATA16 t1;
  DATA16 t2;
  DATA16 t3;
  DATA16 t4;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(TIMESTAMP_WHITERABBIT);
};
class TRLOII_LMU_SCALERS
{
  raw_array_zero_suppress<DATA32,DATA32,63> before_lmu;
  raw_array_zero_suppress<DATA32,DATA32,31> before_lmu_mux;
  raw_array_zero_suppress<DATA32,DATA32,31> before_lmu_aux;
  raw_array_zero_suppress<DATA32,DATA32,127> before_dt;
  raw_array_zero_suppress<DATA32,DATA32,127> after_dt;
  raw_array_zero_suppress<DATA32,DATA32,127> after_reduction;
  union
  {
    struct
    {
      uint32 before_lmu : 6;
      uint32 before_lmu_mux : 5;
      uint32 before_lmu_aux : 5;
      uint32 after_lmu : 8;
      uint32 id : 8;
    };
    uint32 u32;
  } header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(TRLOII_LMU_SCALERS);
};
class TRLOII_SAMPLER
{
  raw_array_zero_suppress<DATA32,DATA32,512> sampler;
  union
  {
    struct
    {
      uint32 word_num : 10;
      uint32 overflow : 1;
      uint32 dummy_11_15 : 5;
      uint32 mark : 16;
    };
    uint32 u32;
  } header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 mark);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 mark);
  STRUCT_FCNS_DECL(TRLOII_SAMPLER);
};
class TRLOII_SAMPLER_TWO
{
  raw_array_zero_suppress<DATA32,DATA32,512> sampler_hi;
  raw_array_zero_suppress<DATA32,DATA32,512> sampler_lo;
  union
  {
    struct
    {
      uint32 word_num : 10;
      uint32 overflow : 1;
      uint32 dummy_11_15 : 5;
      uint32 mark : 16;
    };
    uint32 u32;
  } header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 mark);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 mark);
  STRUCT_FCNS_DECL(TRLOII_SAMPLER_TWO);
};
class TRLOII_TPAT
{
  DATA32 n;
  raw_list_ii_zero_suppress<DATA16,DATA16,170> tpat;
  raw_list_ii_zero_suppress<DATA8,DATA8,170> trig;
  raw_list_ii_zero_suppress<DATA32,DATA32,170> ts_lo;
  raw_list_ii_zero_suppress<DATA32,DATA32,170> ts_hi;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(TRLOII_TPAT);
};
class VFTX2_STATUS
{
  uint32 status;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(VFTX2_STATUS);
};
class VME_GSI_VFTX2
{
  raw_array_multi_zero_suppress<DATA12,DATA12,32,100> time_fine;
  raw_array_multi_zero_suppress<DATA16,DATA16,32,100> time_coarse;
  DATA16 time_trigger;
  union
  {
    struct
    {
      uint32 id : 5;
      uint32 internal_status : 4;
      uint32 count : 9;
      uint32 dummy_18_23 : 6;
      uint32 unnamed_24_31 : 8;
    };
    uint32 u32;
  } custom_header;
    union
    {
      struct
      {
        uint32 unnamed_0_7 : 8;
        uint32 dummy_8_10 : 3;
        uint32 trigger_timestamp : 13;
        uint32 dummy_24_28 : 5;
        uint32 unnamed_29_30 : 2;
        uint32 unnamed_31_31 : 1;
      };
      uint32 u32;
    } event_header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(VME_GSI_VFTX2);
};
class VME_GSI_VFTX2_7PS
{
  raw_array_multi_zero_suppress<DATA12,DATA12,32,100> time_fine;
  raw_array_multi_zero_suppress<DATA16,DATA16,32,100> time_coarse;
  DATA16 time_trigger;
  union
  {
    struct
    {
      uint32 id : 5;
      uint32 internal_status : 4;
      uint32 count : 9;
      uint32 dummy_18_23 : 6;
      uint32 unnamed_24_31 : 8;
    };
    uint32 u32;
  } custom_header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(VME_GSI_VFTX2_7PS);
};
class VME_GSI_VFTX2_LT
{
  raw_array_multi_zero_suppress<DATA12,DATA12,64,100> time_fine;
  raw_array_multi_zero_suppress<DATA16,DATA16,64,100> time_coarse;
  DATA16 time_trigger;
  union
  {
    struct
    {
      uint32 id : 5;
      uint32 internal_status : 4;
      uint32 count : 9;
      uint32 dummy_18_23 : 6;
      uint32 unnamed_24_31 : 8;
    };
    uint32 u32;
  } custom_header;
    union
    {
      struct
      {
        uint32 unnamed_0_7 : 8;
        uint32 dummy_8_10 : 3;
        uint32 trigger_timestamp : 13;
        uint32 dummy_24_28 : 5;
        uint32 unnamed_29_30 : 2;
        uint32 unnamed_31_31 : 1;
      };
      uint32 u32;
    } event_header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(VME_GSI_VFTX2_LT);
};
class VME_GSI_VFTX2_STRAW
{
  raw_array_multi_zero_suppress<DATA12,DATA12,32,32> time_fine;
  raw_array_multi_zero_suppress<DATA16,DATA16,32,32> time_coarse;
  DATA16 time_trigger;
  union
  {
    struct
    {
      uint32 internal : 4;
      uint32 count : 9;
      uint32 dummy_13_31 : 19;
    };
    uint32 u32;
  } status;
  union
  {
    struct
    {
      uint32 count : 16;
      uint32 id : 8;
      uint32 unnamed_24_31 : 8;
    };
    uint32 u32;
  } custom_header;
  union
  {
    struct
    {
      uint32 unnamed_0_7 : 8;
      uint32 dummy_8_10 : 3;
      uint32 trigger_timestamp : 13;
      uint32 dummy_24_28 : 5;
      uint32 unnamed_29_30 : 2;
      uint32 unnamed_31_31 : 1;
    };
    uint32 u32;
  } event_header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(VME_GSI_VFTX2_STRAW);
};
class VME_MESYTEC_MADC32
{
  raw_array_zero_suppress<DATA14_OVERFLOW,DATA14_OVERFLOW,32> data;
  union
  {
    struct
    {
      uint32 counter : 30;
      uint32 unnamed_30_31 : 2;
    };
    uint32 u32;
  } end_of_event;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(VME_MESYTEC_MADC32);
};
class WR_MULTI
{
  DATA32 time_hi;
  DATA32 time_lo;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(WR_MULTI);
};
class empty_subev
 : public unpack_subevent_base
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(empty_subev);
};
class fitest_febex_subev
 : public unpack_subevent_base
{
  SINGLE(FEBEX_PADDING,padding);
  SINGLE(FEBEX_NOTRACE,febex[8]);
  SINGLE(FEBEX_TRACE,febextrace[8]);
  SINGLE(FEBEX_EVENTHEADER,header);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(fitest_febex_subev);
};
class lmu_scalers_subev
 : public unpack_subevent_base
{
  SINGLE(TRLOII_LMU_SCALERS,scalers);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(lmu_scalers_subev);
};
class los_sampler_subev
 : public unpack_subevent_base
{
  SINGLE(TRLOII_SAMPLER,sampler);
  SINGLE(LAND_STD_VME,land_vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(los_sampler_subev);
};
class los_scalers_subev
 : public unpack_subevent_base
{
  SINGLE(SCALER,scaler);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(los_scalers_subev);
};
class los_subev
 : public unpack_subevent_base
{
  SINGLE(VME_GSI_VFTX2_7PS,vftx2);
  SINGLE(LAND_STD_VME,land_vme);
  SINGLE(BARRIER,barrier2);
  SINGLE(BARRIER,barrier1);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(los_subev);
};
class master_subev
 : public unpack_subevent_base
{
  SINGLE(BARRIER,barrier);
  SINGLE(LAND_STD_VME,land_vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(master_subev);
};
class straw_vme_subev
 : public unpack_subevent_base
{
  SINGLE(VME_GSI_VFTX2_STRAW,vftx2);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(straw_vme_subev);
};
class tbm_subev
 : public unpack_subevent_base
{
  SINGLE(VME_GSI_VFTX2_LT,vftx2);
  SINGLE(VME_MESYTEC_MADC32,madc32);
  SINGLE(BARRIER,barrier);
  SINGLE(LAND_STD_VME,land_vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(tbm_subev);
};
class tofd_tamex_subev
 : public unpack_subevent_base
{
  SINGLE(TAMEX3_PADDING,padding1);
  SINGLE(TAMEX3_SFP,tamex_1);
  SINGLE(TAMEX3_SFP,tamex_2);
  SINGLE(TAMEX3_PADDING,padding2);
  SINGLE(TAMEX3_SFP,tamex_3);
  SINGLE(TAMEX3_SFP,tamex_4);
  SINGLE(TAMEX3_HEADER,header);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(tofd_tamex_subev);
};
class tofd_vme_subev
 : public unpack_subevent_base
{
  SINGLE(VME_GSI_VFTX2_7PS,vftx2_1);
  SINGLE(VME_GSI_VFTX2_7PS,vftx2_3);
  SINGLE(VME_GSI_VFTX2_7PS,vftx2_2);
  SINGLE(BARRIER,barrier);
  SINGLE(LAND_STD_VME,land_vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(tofd_vme_subev);
};
class tpat_subev
 : public unpack_subevent_base
{
  SINGLE(TRLOII_TPAT,tpat);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(tpat_subev);
};
class tracking_febex_subev
 : public unpack_subevent_base
{
  SINGLE(FEBEX_PADDING,padding);
  SINGLE(FEBEX_NOTRACE,febex_0[18]);
  SINGLE(FEBEX_TRACE,febextrace_0[18]);
  SINGLE(FEBEX_EVENTHEADER,header);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(tracking_febex_subev);
};
class wr_100
 : public unpack_subevent_base
{
  SINGLE(TIMESTAMP_WHITERABBIT,ts100);
  SINGLE(WR_MULTI,multi_);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(wr_100);
};
class wr_200
 : public unpack_subevent_base
{
  SINGLE(WR_MULTI,multi_);
  SINGLE(TIMESTAMP_WHITERABBIT,ts200);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(wr_200);
};
class wr_400
 : public unpack_subevent_base
{
  SINGLE(TIMESTAMP_WHITERABBIT,ts400);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(wr_400);
};
class unpack_event : public unpack_event_base
{
SINGLE(wr_100,master_ts);
SINGLE(lmu_scalers_subev,master_lmu_scalers);
SINGLE(tpat_subev,master_tpat);
SINGLE(master_subev,master_vme);
SINGLE(los_subev,los);
SINGLE(los_scalers_subev,los_scalers);
SINGLE(los_sampler_subev,los_sampler);
SINGLE(tofd_vme_subev,tofd_vme);
SINGLE(wr_200,tbm_ts);
SINGLE(tpat_subev,tbm_tpat);
SINGLE(tbm_subev,tbm_vme);
SINGLE(tofd_tamex_subev,tofd_tamex);
SINGLE(tracking_febex_subev,tracking_febex);
SINGLE(fitest_febex_subev,fitest_febex);
SINGLE(wr_400,straw_ts);
SINGLE(straw_vme_subev,straw);
SINGLE(empty_subev,los_empty);
SINGLE(empty_subev,tofd_empty);
  bitsone<18> __visited;
  void __clear_visited() { __visited.clear(); }
  bool ignore_unknown_subevent() { return false; }
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  STRUCT_FCNS_DECL(unpack_event);
};
class unpack_sticky_event : public unpack_sticky_event_base
{
  void __clear_visited() { }
  bool ignore_unknown_subevent() { return false; }
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  STRUCT_FCNS_DECL(unpack_sticky_event);
};
