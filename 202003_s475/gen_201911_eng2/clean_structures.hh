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
class CAMAC_LECROY_4434
{
  raw_array_zero_suppress<DATA24,DATA24,32> data;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 channels);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 channels);
  STRUCT_FCNS_DECL(CAMAC_LECROY_4434);
};
class CAMAC_PHILLIPS_7164
{
  raw_array_zero_suppress<DATA12,DATA12,16> data;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 channels,uint32 mark_channel_no);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 channels,uint32 mark_channel_no);
  STRUCT_FCNS_DECL(CAMAC_PHILLIPS_7164);
};
class CAMAC_SILENA_4418
{
  raw_array_zero_suppress<DATA12_OVERFLOW,DATA12_OVERFLOW,8> data;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 channels,uint32 mark_channel_no);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 channels,uint32 mark_channel_no);
  STRUCT_FCNS_DECL(CAMAC_SILENA_4418);
};
class FASTBUS_LECROY_1875
{
  raw_array_zero_suppress<DATA12_RANGE,DATA12_RANGE,64> data;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom,uint32 channels);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom,uint32 channels);
  STRUCT_FCNS_DECL(FASTBUS_LECROY_1875);
};
class FASTBUS_LECROY_1885
{
  raw_array_zero_suppress<DATA12_RANGE,DATA12_RANGE,96> data;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom,uint32 channels);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom,uint32 channels);
  STRUCT_FCNS_DECL(FASTBUS_LECROY_1885);
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
class GSI_CLOCKTDC_16PH_ITEM
{
  DATA32 event_counter_lo32;
  DATA32 event_counter_hi16;
  DATA32 trigger_coarse_lo22;
  DATA32 trigger_coarse_hi24;
  raw_array_multi_zero_suppress<DATA12,DATA12,258,80> time_coarse;
  raw_array_multi_zero_suppress<DATA12,DATA12,258,80> time_fine;
  union
  {
    struct
    {
      uint32 _0x34 : 8;
      uint32 trigger_type : 4;
      uint32 sfp_id : 4;
      uint32 tdc_id : 8;
      uint32 channel_id : 8;
    };
    uint32 u32;
  } header;
  uint32 channel_num;
  union
  {
    struct
    {
      uint32 _0x34 : 8;
      uint32 trigger_type : 4;
      uint32 sfp_id : 4;
      uint32 tdc_id : 8;
      uint32 channel_id : 8;
    };
    uint32 u32;
  } channel_header;
  uint32 data_byte_num;
    union
    {
      struct
      {
        uint32 time_fine : 5;
        uint32 time_coarse : 12;
        uint32 time_coarse_ext : 1;
        uint32 edge : 1;
        uint32 ws : 1;
        uint32 time_coarse_overflow : 1;
        uint32 rb_overflow : 1;
        uint32 dummy : 1;
        uint32 is_data : 1;
        uint32 channel : 8;
      };
      uint32 u32;
    } data;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 tdc);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 tdc);
  STRUCT_FCNS_DECL(GSI_CLOCKTDC_16PH_ITEM);
};
class GSI_CLOCKTDC_BAD00BAD
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(GSI_CLOCKTDC_BAD00BAD);
};
class GSI_CLOCKTDC_FUSER
{
  union
  {
    struct
    {
      uint32 sfp0_num : 8;
      uint32 sfp1_num : 8;
      uint32 sfp2_num : 8;
      uint32 sfp3_num : 8;
    };
    uint32 u32;
  } slave_num;
  uint32 trig_window;
  union
  {
    struct
    {
      uint32 num : 32;
    };
    uint32 u32;
  } channel_num;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 a_sfp0_num,uint32 a_sfp1_num
                                      ,uint32 a_sfp2_num,uint32 a_sfp3_num
                                      ,uint32 ch_per_ctdc);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 a_sfp0_num,uint32 a_sfp1_num
                                            ,uint32 a_sfp2_num,uint32 a_sfp3_num
                                            ,uint32 ch_per_ctdc);
  STRUCT_FCNS_DECL(GSI_CLOCKTDC_FUSER);
};
class GSI_CLOCKTDC_ITEM
{
  DATA32 event_counter_lo32;
  DATA32 event_counter_hi16;
  DATA32 trigger_coarse_lo22;
  DATA32 trigger_coarse_hi24;
  raw_array_multi_zero_suppress<DATA12,DATA12,258,80> time_coarse;
  raw_array_multi_zero_suppress<DATA12,DATA12,258,80> time_fine;
  union
  {
    struct
    {
      uint32 _0x34 : 8;
      uint32 trigger_type : 4;
      uint32 sfp_id : 4;
      uint32 tdc_id : 8;
      uint32 channel_id : 8;
    };
    uint32 u32;
  } header;
  uint32 channel_num;
  union
  {
    struct
    {
      uint32 _0x34 : 8;
      uint32 trigger_type : 4;
      uint32 sfp_id : 4;
      uint32 tdc_id : 8;
      uint32 channel_id : 8;
    };
    uint32 u32;
  } channel_header;
  uint32 data_byte_num;
    union
    {
      struct
      {
        uint32 time_fine : 4;
        uint32 time_coarse : 12;
        uint32 time_coarse_ext : 1;
        uint32 edge : 1;
        uint32 ws : 1;
        uint32 time_coarse_overflow : 1;
        uint32 rb_overflow : 1;
        uint32 status : 3;
        uint32 channel : 8;
      };
      uint32 u32;
    } data;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 tdc);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 tdc);
  STRUCT_FCNS_DECL(GSI_CLOCKTDC_ITEM);
};
class GSI_CLOCKTDC_PADDING
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(GSI_CLOCKTDC_PADDING);
};
class GSI_SAM_PADDING
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(GSI_SAM_PADDING);
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
class TAMEX3_FH_DATA
{
  raw_array_multi_zero_suppress<DATA12,DATA12,34,256> time_coarse;
  raw_array_multi_zero_suppress<DATA12,DATA12,34,256> time_fine;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TAMEX3_FH_DATA);
};
class TAMEX3_FH_SFP
{
  SINGLE(TAMEX3_FH_DATA,data);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  STRUCT_FCNS_DECL(TAMEX3_FH_SFP);
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
  raw_array_multi_zero_suppress<DATA12,DATA12,34,256> time_coarse;
  raw_array_multi_zero_suppress<DATA12,DATA12,34,256> time_fine;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  STRUCT_FCNS_DECL(TAMEX3_SFP);
};
class TAMEX3_WINDOW
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
  STRUCT_FCNS_DECL(TAMEX3_WINDOW);
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
class VME_CAEN_V1190_SUBTDC
{
  union
  {
    struct
    {
      uint32 bunch_id : 12;
      uint32 event_id : 12;
      uint32 tdc : 2;
      uint32 dummy_26 : 1;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } header;
  union
  {
    struct
    {
      uint32 flags : 15;
      uint32 dummy_15_23 : 9;
      uint32 tdc : 2;
      uint32 dummy_26 : 1;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } error_flags;
  union
  {
    struct
    {
      uint32 word_count : 12;
      uint32 event_id : 12;
      uint32 tdc : 2;
      uint32 dummy_26 : 1;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } trailer;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc,uint32 event_id);
  STRUCT_FCNS_DECL(VME_CAEN_V1190_SUBTDC);
};
class VME_CAEN_V1190
{
  raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
  union
  {
    struct
    {
      uint32 geom : 5;
      uint32 event_number : 22;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } header;
  SINGLE(VME_CAEN_V1190_SUBTDC,tdc[4]);
  union
  {
    struct
    {
      uint32 time_tag : 27;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } trigger;
  union
  {
    struct
    {
      uint32 geom : 5;
      uint32 word_count : 15;
      uint32 dummy_20_23 : 4;
      uint32 tdc_error : 1;
      uint32 buffer_overflow : 1;
      uint32 trigger_lost : 1;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } trailer;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(VME_CAEN_V1190);
};
class VME_CAEN_V1190_SHORT_SUBTDC
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc,uint32 event_id);
  STRUCT_FCNS_DECL(VME_CAEN_V1190_SHORT_SUBTDC);
};
class VME_CAEN_V1190_SHORT_SUBTDC_ERROR
{
  union
  {
    struct
    {
      uint32 flags : 15;
      uint32 dummy_15_23 : 9;
      uint32 tdc : 2;
      uint32 dummy_26 : 1;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } error_flags;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc);
  STRUCT_FCNS_DECL(VME_CAEN_V1190_SHORT_SUBTDC_ERROR);
};
class VME_CAEN_V1190_SHORT
{
  raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
  union
  {
    struct
    {
      uint32 geom : 5;
      uint32 event_number : 22;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } header;
  SINGLE(VME_CAEN_V1190_SHORT_SUBTDC,tdc[4]);
  SINGLE(VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[4]);
  union
  {
    struct
    {
      uint32 time_tag : 27;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } trigger;
  union
  {
    struct
    {
      uint32 geom : 5;
      uint32 word_count : 15;
      uint32 dummy_20_23 : 4;
      uint32 tdc_error : 1;
      uint32 buffer_overflow : 1;
      uint32 trigger_lost : 1;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } trailer;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(VME_CAEN_V1190_SHORT);
};
class VME_CAEN_V1290_SUBTDC
{
  union
  {
    struct
    {
      uint32 bunch_id : 12;
      uint32 event_id : 12;
      uint32 tdc : 2;
      uint32 dummy_26 : 1;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } header;
  union
  {
    struct
    {
      uint32 flags : 15;
      uint32 dummy_15_23 : 9;
      uint32 tdc : 2;
      uint32 dummy_26 : 1;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } error_flags;
  union
  {
    struct
    {
      uint32 word_count : 12;
      uint32 event_id : 12;
      uint32 tdc : 2;
      uint32 dummy_26 : 1;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } trailer;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc,uint32 event_id);
  STRUCT_FCNS_DECL(VME_CAEN_V1290_SUBTDC);
};
class VME_CAEN_V1290
{
  raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
  union
  {
    struct
    {
      uint32 geom : 5;
      uint32 event_number : 22;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } header;
  SINGLE(VME_CAEN_V1290_SUBTDC,tdc[4]);
  union
  {
    struct
    {
      uint32 time_tag : 27;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } trigger;
  union
  {
    struct
    {
      uint32 geom : 5;
      uint32 word_count : 15;
      uint32 dummy_20_23 : 4;
      uint32 tdc_error : 1;
      uint32 buffer_overflow : 1;
      uint32 trigger_lost : 1;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } trailer;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(VME_CAEN_V1290);
};
class VME_CAEN_V1290_SHORT_SUBTDC
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc,uint32 event_id);
  STRUCT_FCNS_DECL(VME_CAEN_V1290_SHORT_SUBTDC);
};
class VME_CAEN_V1290_SHORT_SUBTDC_ERROR
{
  union
  {
    struct
    {
      uint32 flags : 15;
      uint32 dummy_15_23 : 9;
      uint32 tdc : 2;
      uint32 dummy_26 : 1;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } error_flags;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc);
  STRUCT_FCNS_DECL(VME_CAEN_V1290_SHORT_SUBTDC_ERROR);
};
class VME_CAEN_V1290_SHORT
{
  raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
  union
  {
    struct
    {
      uint32 geom : 5;
      uint32 event_number : 22;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } header;
  SINGLE(VME_CAEN_V1290_SHORT_SUBTDC,tdc[4]);
  SINGLE(VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[4]);
  union
  {
    struct
    {
      uint32 time_tag : 27;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } trigger;
  union
  {
    struct
    {
      uint32 geom : 5;
      uint32 word_count : 15;
      uint32 dummy_20_23 : 4;
      uint32 tdc_error : 1;
      uint32 buffer_overflow : 1;
      uint32 trigger_lost : 1;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } trailer;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(VME_CAEN_V1290_SHORT);
};
class VME_CAEN_V775
{
  raw_array_zero_suppress<DATA12_OVERFLOW,DATA12_OVERFLOW,32> data;
  union
  {
    struct
    {
      uint32 event_number : 24;
      uint32 unnamed_24_26 : 3;
      uint32 geom : 5;
    };
    uint32 u32;
  } eob;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom,uint32 crate);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom,uint32 crate);
  STRUCT_FCNS_DECL(VME_CAEN_V775);
};
class VME_CAEN_V775_FRS
{
  raw_array_zero_suppress<DATA12,DATA12,32> data;
  union
  {
    struct
    {
      uint32 event_number : 24;
      uint32 unnamed_24_26 : 3;
      uint32 geom : 5;
    };
    uint32 u32;
  } eob;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(VME_CAEN_V775_FRS);
};
class VME_CAEN_V830
{
  raw_array_zero_suppress<DATA32,DATA32,32> data;
  union
  {
    struct
    {
      uint32 event_number : 16;
      uint32 ts : 2;
      uint32 count : 6;
      uint32 dummy_24_25 : 2;
      uint32 unnamed_26_26 : 1;
      uint32 geom : 5;
    };
    uint32 u32;
  } header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(VME_CAEN_V830);
};
class VME_CAEN_V830_FRS
{
  raw_array<DATA32,DATA32,32> data;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  STRUCT_FCNS_DECL(VME_CAEN_V830_FRS);
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
class VME_MESYTEC_MDPP16
{
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,34,100> data;
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
  STRUCT_FCNS_DECL(VME_MESYTEC_MDPP16);
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
class ams_siderem_subev
 : public unpack_subevent_base
{
  SINGLE(GSI_SAM_PADDING,padd);
  SINGLE(EXT_SST,sst[3]);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(ams_siderem_subev);
};
class frs_master_subev
 : public unpack_subevent_base
{
  SINGLE(VME_CAEN_V1290,tdc0);
  SINGLE(VME_CAEN_V830_FRS,scaler0);
  SINGLE(VME_CAEN_V775_FRS,qdc0);
  SINGLE(BARRIER,barrier);
  SINGLE(LAND_STD_VME,land_vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_master_subev);
};
class frs_subev
 : public unpack_subevent_base
{
  SINGLE(VME_CAEN_V775_FRS,tdc0);
  SINGLE(VME_CAEN_V775_FRS,adc0);
  SINGLE(VME_CAEN_V830_FRS,scaler_0);
  SINGLE(VME_CAEN_V775_FRS,tdc1);
  SINGLE(VME_CAEN_V775_FRS,adc1);
  SINGLE(LAND_STD_VME,land_vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_subev);
};
class frs_tpcs2_subev
 : public unpack_subevent_base
{
  SINGLE(VME_CAEN_V775_FRS,tdc0);
  SINGLE(VME_CAEN_V775_FRS,adc0);
  SINGLE(LAND_STD_VME,land_vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_tpcs2_subev);
};
class frs_tpcs4_subev
 : public unpack_subevent_base
{
  SINGLE(VME_CAEN_V775_FRS,tdc0);
  SINGLE(VME_CAEN_V775_FRS,adc0);
  SINGLE(LAND_STD_VME,land_vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_tpcs4_subev);
};
class unpack_event : public unpack_event_base
{
SINGLE(frs_subev,frs);
SINGLE(frs_tpcs4_subev,tpc_s4);
SINGLE(frs_tpcs2_subev,tpc_s2);
SINGLE(ams_siderem_subev,ams_siderem);
  bitsone<5> __visited;
  void __clear_visited() { __visited.clear(); }
  bool ignore_unknown_subevent() { return true; }
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
