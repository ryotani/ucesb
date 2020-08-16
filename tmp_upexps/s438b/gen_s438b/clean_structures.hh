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
class DAQ_STATUS
{
  uint32 spill_nr;
  uint32 trigger;
  uint32 time;
  raw_array_zero_suppress<DATA32,DATA32,48> scaler;
  raw_array_zero_suppress<DATA32,DATA32,16> trig_count;
  uint32 events;
  uint32 errors;
  uint32 errors_data_corrupt;
  uint32 errors_data_missing;
  uint32 errors_data_too_much;
  uint32 errors_event_counter_mismatch;
  uint32 errors_event_counter_incr_mismatch;
  uint32 errors_trigger_mismatch;
  uint32 ticks_count;
  uint32 ticks_deadtime;
  raw_array_zero_suppress<DATA32,DATA32,16> ticks_dt_trig;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(DAQ_STATUS);
};
class DUMMY_WORD
{
  uint32 dummy_word;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(DUMMY_WORD);
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
class FEBEX_EVENTHEADER
{
  union
  {
    struct
    {
      uint32 N_febex1 : 8;
      uint32 N_febex2 : 8;
      uint32 N_febex3 : 8;
      uint32 N_febex4 : 8;
    };
    uint32 u32;
  } febexcards;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FEBEX_EVENTHEADER);
};
class FEBEX_NOTRACE
{
  raw_array<DATA8,DATA8,16> Nhit;
  raw_array_multi_zero_suppress<DATA12,DATA12,16,10> t;
  raw_array_multi_zero_suppress<DATA32,DATA32,16,10> E;
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
class NTP64_TIME
{
  uint32 sec;
  uint32 frac;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(NTP64_TIME);
};
class NTP_MESSAGE
{
  union
  {
    struct
    {
      uint32 word_count : 16;
      uint32 quick_burst : 1;
      uint32 dummy_17_23 : 7;
      uint32 id : 8;
    };
    uint32 u32;
  } header;
  uint32 server_id;
  union
  {
    struct
    {
      uint32 precision : 8;
      uint32 poll : 8;
      uint32 stratum : 4;
      uint32 dummy_20_23 : 4;
      uint32 mode : 3;
      uint32 version : 3;
      uint32 leap : 2;
    };
    uint32 u32;
  } sspp;
  union
  {
    struct
    {
      uint32 frac : 16;
      uint32 sec : 16;
    };
    uint32 u32;
  } root_dly;
  union
  {
    struct
    {
      uint32 frac : 16;
      uint32 sec : 16;
    };
    uint32 u32;
  } root_disp;
  uint32 refid;
    SINGLE(NTP64_TIME,orig2time);
    SINGLE(NTP64_TIME,tmit2time);
    SINGLE(NTP64_TIME,rec2time);
    SINGLE(NTP64_TIME,rx2time);
  SINGLE(NTP64_TIME,reftime);
  SINGLE(NTP64_TIME,origtime);
  SINGLE(NTP64_TIME,rectime);
  SINGLE(NTP64_TIME,tmittime);
  SINGLE(NTP64_TIME,rxtime);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(NTP_MESSAGE);
};
class NXYTER
{
  DATA8 gemex;
  DATA8 nxyter;
  DATA8 err;
  DATA16 trigger_counter_head;
  DATA16 trigger_counter_foot;
  DATA16 ts_epoch_trigger;
  raw_list_ii_zero_suppress<DATA12,DATA12,10000> channel;
  raw_list_ii_zero_suppress<DATA12,DATA12,10000> adc;
  raw_list_ii_zero_suppress<DATA16,DATA16,10000> ts_epoch_hit;
  raw_list_ii_zero_suppress<DATA16,DATA16,10000> ts_nxy;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 gem,uint32 nxy);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 gem,uint32 nxy);
  STRUCT_FCNS_DECL(NXYTER);
};
class NXYTER_PADDING
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(NXYTER_PADDING);
};
class RANDOM_TCAL_TSTAMP_CLOCK
{
  uint32 soft_latches;
  uint32 hard_latches;
  uint32 clock_ticks;
  SINGLE(NTP64_TIME,before);
  SINGLE(NTP64_TIME,after);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(RANDOM_TCAL_TSTAMP_CLOCK);
};
class RANDOM_TCAL
{
  union
  {
    struct
    {
      uint32 word_count : 8;
      uint32 pulses : 4;
      uint32 clock_bits : 6;
      uint32 has_tstamp1 : 1;
      uint32 has_tstamp2 : 1;
      uint32 dummy_20_23 : 4;
      uint32 id : 8;
    };
    uint32 u32;
  } header;
    SINGLE(RANDOM_TCAL_TSTAMP_CLOCK,tstamp1);
    SINGLE(RANDOM_TCAL_TSTAMP_CLOCK,tstamp2);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(RANDOM_TCAL);
};
class SIS3316_ACTAR_S438
{
  raw_array<DATA32,DATA32,128> channel_header;
  raw_array_zero_suppress<DATA16,DATA16,40000> trace;
  union
  {
    struct
    {
      uint32 id : 8;
      uint32 channel_num : 8;
      uint32 unnamed_16_31 : 16;
    };
    uint32 u32;
  } custom_header;
    union
    {
      struct
      {
        uint32 sampleLength : 26;
        uint32 unnamed_26_26 : 1;
        uint32 mawFlag : 1;
        uint32 unnamed_28_31 : 4;
      };
      uint32 u32;
    } header3;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(SIS3316_ACTAR_S438);
};
class SIS3316_PSP_S438
{
  raw_array<DATA32,DATA32,128> channel_header;
  raw_array_zero_suppress<DATA16,DATA16,16000> trace;
  union
  {
    struct
    {
      uint32 id : 8;
      uint32 channel_num : 8;
      uint32 unnamed_16_31 : 16;
    };
    uint32 u32;
  } custom_header;
    union
    {
      struct
      {
        uint32 sampleLength : 26;
        uint32 unnamed_26_26 : 1;
        uint32 mawFlag : 1;
        uint32 unnamed_28_31 : 4;
      };
      uint32 u32;
    } header3;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(SIS3316_PSP_S438);
};
class SIS3316_S2_S438
{
  raw_array<DATA32,DATA32,128> channel_header;
  raw_array_zero_suppress<DATA16,DATA16,800> trace;
  union
  {
    struct
    {
      uint32 id : 8;
      uint32 channel_num : 8;
      uint32 unnamed_16_31 : 16;
    };
    uint32 u32;
  } custom_header;
    union
    {
      struct
      {
        uint32 sampleLength : 26;
        uint32 unnamed_26_26 : 1;
        uint32 mawFlag : 1;
        uint32 unnamed_28_31 : 4;
      };
      uint32 u32;
    } header3;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(SIS3316_S2_S438);
};
class SIS3316_S2_SCALERS_S438
{
  raw_array<DATA32,DATA32,192> scalers;
  union
  {
    struct
    {
      uint32 unnamed_0_31 : 32;
    };
    uint32 u32;
  } custom_header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(SIS3316_S2_SCALERS_S438);
};
class SIS3316_SCALERS_S438
{
  raw_array<DATA32,DATA32,480> scalers;
  union
  {
    struct
    {
      uint32 unnamed_0_31 : 32;
    };
    uint32 u32;
  } custom_header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(SIS3316_SCALERS_S438);
};
class SOFT_SCALER32
{
  raw_array_zero_suppress<DATA32,DATA32,32> data;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 channels);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 channels);
  STRUCT_FCNS_DECL(SOFT_SCALER32);
};
class TACQUILA_DATA
{
  raw_array_zero_suppress<DATA12,DATA12,17> tac[30];
  raw_array_zero_suppress<DATA12,DATA12,17> adc[30];
  raw_array_zero_suppress<DATA12,DATA12,17> clk[30];
  union
  {
    struct
    {
      uint32 count : 9;
      uint32 dummy1 : 3;
      uint32 trigger_tac : 4;
      uint32 trigger_sam : 4;
      uint32 lec : 4;
      uint32 gtb : 4;
      uint32 sam : 4;
    };
    uint32 u32;
  } header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sam,uint32 gtb);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sam,uint32 gtb);
  STRUCT_FCNS_DECL(TACQUILA_DATA);
};
class TACQUILA_DATA_S438B
{
  raw_array_zero_suppress<DATA12,DATA12,32> tac[30];
  raw_array_zero_suppress<DATA12,DATA12,17> adc[30];
  raw_array_zero_suppress<DATA12,DATA12,17> clk[30];
  union
  {
    struct
    {
      uint32 count : 9;
      uint32 dummy1 : 3;
      uint32 trigger_tac : 4;
      uint32 trigger_sam : 4;
      uint32 lec : 4;
      uint32 gtb : 4;
      uint32 sam : 4;
    };
    uint32 u32;
  } header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sam,uint32 gtb);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sam,uint32 gtb);
  STRUCT_FCNS_DECL(TACQUILA_DATA_S438B);
};
class TAMEX_CHANNEL
{
  raw_array_zero_suppress<DATA32,DATA32,128> type;
  raw_array_zero_suppress<DATA32,DATA32,128> tdc;
  union
  {
    struct
    {
      uint32 unnamed_0_7 : 8;
      uint32 trigger_type : 4;
      uint32 sfp_index : 4;
      uint32 card_index : 8;
      uint32 channel_index : 8;
    };
    uint32 u32;
  } header;
  uint32 data_size;
  union
  {
    struct
    {
      uint32 yanana_phone : 24;
      uint32 unnamed_24_31 : 8;
    };
    uint32 u32;
  } tdc_header;
  union
  {
    struct
    {
      uint32 wanana_phone : 24;
      uint32 unnamed_24_31 : 8;
    };
    uint32 u32;
  } tdc_trailer;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  STRUCT_FCNS_DECL(TAMEX_CHANNEL);
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
class TRIDI
{
  union
  {
    struct
    {
      uint32 tpat : 16;
      uint32 unnamed_16_31 : 16;
    };
    uint32 u32;
  } header;
  uint32 ts_msb;
  uint32 ts_lsb;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TRIDI);
};
class TRLO_SAMPLER
{
  raw_list_ii_zero_suppress<DATA32,DATA32,512> stamps;
  union
  {
    struct
    {
      uint32 count : 10;
      uint32 dummy_10_23 : 14;
      uint32 id : 8;
    };
    uint32 u32;
  } header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(TRLO_SAMPLER);
};
class TRLO_SCALER
{
  raw_list_ii_zero_suppress<DATA32,DATA32,16> stamps;
  union
  {
    struct
    {
      uint32 crate_id : 8;
      uint32 unnamed_8_31 : 24;
    };
    uint32 u32;
  } header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 crate_id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 crate_id);
  STRUCT_FCNS_DECL(TRLO_SCALER);
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
class VME_CAEN_V1190_S438_SUBTDC
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
  STRUCT_FCNS_DECL(VME_CAEN_V1190_S438_SUBTDC);
};
class VME_CAEN_V1190_S438
{
  raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
  union
  {
    struct
    {
      uint32 geom : 5;
      uint32 dummy_5_23 : 19;
      uint32 unnamed_24_31 : 8;
    };
    uint32 u32;
  } ucesb_separator;
  union
  {
    struct
    {
      uint32 dummy_0_4 : 5;
      uint32 event_number : 22;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } header;
  SINGLE(VME_CAEN_V1190_S438_SUBTDC,tdc[4]);
  union
  {
    struct
    {
      uint32 dummy_0_4 : 5;
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
  STRUCT_FCNS_DECL(VME_CAEN_V1190_S438);
};
class VME_CAEN_V1190_S438_SHORT_SUBTDC
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc,uint32 event_id);
  STRUCT_FCNS_DECL(VME_CAEN_V1190_S438_SHORT_SUBTDC);
};
class VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR
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
  STRUCT_FCNS_DECL(VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR);
};
class VME_CAEN_V1190_S438_SHORT
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
  SINGLE(VME_CAEN_V1190_S438_SHORT_SUBTDC,tdc[4]);
  SINGLE(VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[4]);
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
  STRUCT_FCNS_DECL(VME_CAEN_V1190_S438_SHORT);
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
class VME_CAEN_V1290_S438_SUBTDC
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
  STRUCT_FCNS_DECL(VME_CAEN_V1290_S438_SUBTDC);
};
class VME_CAEN_V1290_S438
{
  raw_array_multi_zero_suppress<DATA24,DATA24,32,128> data;
  union
  {
    struct
    {
      uint32 geom : 5;
      uint32 dummy_5_23 : 19;
      uint32 unnamed_24_31 : 8;
    };
    uint32 u32;
  } ucesb_separator;
  union
  {
    struct
    {
      uint32 dummy_0_4 : 5;
      uint32 event_number : 22;
      uint32 unnamed_27_31 : 5;
    };
    uint32 u32;
  } header;
  SINGLE(VME_CAEN_V1290_S438_SUBTDC,tdc[4]);
  union
  {
    struct
    {
      uint32 dummy_0_4 : 5;
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
  STRUCT_FCNS_DECL(VME_CAEN_V1290_S438);
};
class VME_CAEN_V1290_S438_SHORT_SUBTDC
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 tdc,uint32 event_id,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 tdc,uint32 event_id);
  STRUCT_FCNS_DECL(VME_CAEN_V1290_S438_SHORT_SUBTDC);
};
class VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR
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
  STRUCT_FCNS_DECL(VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR);
};
class VME_CAEN_V1290_S438_SHORT
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
  SINGLE(VME_CAEN_V1290_S438_SHORT_SUBTDC,tdc[4]);
  SINGLE(VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[4]);
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
  STRUCT_FCNS_DECL(VME_CAEN_V1290_S438_SHORT);
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
class VME_STRUCK_SIS3316
{
  raw_array_zero_suppress<DATA16,DATA16,900> data[2];
  raw_array_zero_suppress<DATA32,DATA32,3> maw[2];
  raw_array_zero_suppress<DATA32,DATA32,2> timeStamp[2];
  raw_array_zero_suppress<DATA32,DATA32,2> gate[2];
  union
  {
    struct
    {
      uint32 chanNo : 16;
      uint32 unnamed_16_31 : 16;
    };
    uint32 u32;
  } header0;
  union
  {
    struct
    {
      uint32 format : 4;
      uint32 channelID : 12;
      uint32 timeS : 16;
    };
    uint32 u32;
  } header1;
  union
  {
    struct
    {
      uint32 timeS : 32;
    };
    uint32 u32;
  } header2;
  union
  {
    struct
    {
      uint32 sum : 28;
      uint32 unnamed_28_31 : 4;
    };
    uint32 u32;
  } gate7;
  union
  {
    struct
    {
      uint32 sum : 28;
      uint32 unnamed_28_31 : 4;
    };
    uint32 u32;
  } gate8;
  union
  {
    struct
    {
      uint32 max : 28;
      uint32 unnamed_28_31 : 4;
    };
    uint32 u32;
  } maw1;
  union
  {
    struct
    {
      uint32 after : 28;
      uint32 unnamed_28_31 : 4;
    };
    uint32 u32;
  } maw2;
  union
  {
    struct
    {
      uint32 before : 28;
      uint32 unnamed_28_31 : 4;
    };
    uint32 u32;
  } maw3;
  union
  {
    struct
    {
      uint32 sampleLength : 26;
      uint32 unnamed_26_26 : 1;
      uint32 mawFlag : 1;
      uint32 unnamed_28_31 : 4;
    };
    uint32 u32;
  } header3;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(VME_STRUCK_SIS3316);
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
class LAND_CAMAC_CONVERTER
 : public unpack_subevent_base
{
  uint16 tpat;
  uint16 tprev;
  uint16 tnext;
  uint16 tprev2;
  uint32 has_data() const;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(LAND_CAMAC_CONVERTER);
};
class LAND_CAMAC_SCALER
 : public unpack_subevent_base
{
  uint32 has_timestamp() const;
    uint32 timestamp;
    union
    {
      struct
      {
        uint32 unnamed_0_31 : 32;
      };
      uint32 u32;
    } endianess;
  SINGLE(CAMAC_LECROY_4434,scaler0);
  SINGLE(CAMAC_LECROY_4434,scaler2);
  SINGLE(CAMAC_LECROY_4434,scaler1);
  SINGLE(SOFT_SCALER32,scaler3);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(LAND_CAMAC_SCALER);
};
class LAND_CAMAC_START_STOP_STAMP
 : public unpack_subevent_base
{
  uint32 timestamp;
  union
  {
    struct
    {
      uint32 unnamed_0_31 : 32;
    };
    uint32 u32;
  } endianess;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(LAND_CAMAC_START_STOP_STAMP);
};
class LAND_CAMAC_TCAL_INFO
 : public unpack_subevent_base
{
  uint32 info;
  SINGLE(RANDOM_TCAL,rtcal);
  SINGLE(NTP_MESSAGE,ntp);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(LAND_CAMAC_TCAL_INFO);
};
class TACQUILA_LAND_SUBEVENT
 : public unpack_subevent_base
{
  SINGLE(TACQUILA_DATA,data_sam5_gtb0);
  SINGLE(TACQUILA_DATA,data_sam6_gtb1);
  SINGLE(TACQUILA_DATA,data_sam6_gtb0);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TACQUILA_LAND_SUBEVENT);
};
class califa_subev
 : public unpack_subevent_base
{
  SINGLE(DUMMY_WORD,dummy);
  SINGLE(TIMESTAMP_WHITERABBIT,ts);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(califa_subev);
};
class daq_status_subev
 : public unpack_subevent_base
{
  SINGLE(DAQ_STATUS,status);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(daq_status_subev);
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
class fiber_subev
 : public unpack_subevent_base
{
  SINGLE(FEBEX_NOTRACE,GFI0);
  SINGLE(FEBEX_NOTRACE,GFI2);
  SINGLE(FEBEX_NOTRACE,GFI1);
  SINGLE(FEBEX_NOTRACE,GFI3);
  SINGLE(FEBEX_NOTRACE,GFI4);
  SINGLE(FEBEX_NOTRACE,fi4[4]);
  SINGLE(FEBEX_EVENTHEADER,evhe);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(fiber_subev);
};
class los_psp_subev
 : public unpack_subevent_base
{
  SINGLE(VME_GSI_VFTX2_7PS,vftx2_1);
  SINGLE(VME_MESYTEC_MADC32,madc32);
  SINGLE(VME_GSI_VFTX2_7PS,vftx2_2);
  SINGLE(LAND_STD_VME,land_vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(los_psp_subev);
};
class los_scaler_subev
 : public unpack_subevent_base
{
  SINGLE(TRLO_SCALER,scaler);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(los_scaler_subev);
};
class mark_event_time
 : public unpack_subevent_base
{
  SINGLE(TRLO_SAMPLER,sampler_los);
  SINGLE(TRLO_SAMPLER,sampler_cb_sum);
  SINGLE(LAND_STD_VME,land_vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(mark_event_time);
};
class mfi_subev
 : public unpack_subevent_base
{
  SINGLE(NXYTER_PADDING,pads);
  SINGLE(NXYTER,data01);
  SINGLE(NXYTER,data00);
  SINGLE(NXYTER,data10);
  SINGLE(NXYTER,data11);
  SINGLE(NXYTER,data20);
  SINGLE(NXYTER,data21);
  SINGLE(NXYTER,data30);
  SINGLE(NXYTER,data31);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(mfi_subev);
};
class neuland_subevent
 : public unpack_subevent_base
{
  SINGLE(TACQUILA_DATA_S438B,data_sam5_gtb0);
  SINGLE(TACQUILA_DATA_S438B,data_sam6_gtb1);
  SINGLE(TACQUILA_DATA_S438B,data_sam6_gtb0);
  SINGLE(TACQUILA_DATA_S438B,data_sam5_gtb1);
  SINGLE(TACQUILA_DATA_S438B,data_sam7_gtb0);
  SINGLE(TACQUILA_DATA_S438B,data_sam7_gtb1);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(neuland_subevent);
};
class neuland_tamex_subev
 : public unpack_subevent_base
{
  union
  {
    struct
    {
      uint32 ns_after_trigger : 11;
      uint32 dummy_11_15 : 5;
      uint32 ns_before_trigger : 11;
      uint32 dummy_27_31 : 5;
    };
    uint32 u32;
  } trigger_window;
  SINGLE(TAMEX_CHANNEL,tamex[13]);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(neuland_tamex_subev);
};
class psp_febex_subev
 : public unpack_subevent_base
{
  SINGLE(FEBEX_NOTRACE,febex1);
  SINGLE(FEBEX_NOTRACE,febex3);
  SINGLE(FEBEX_NOTRACE,febex2);
  SINGLE(FEBEX_NOTRACE,febex4);
  SINGLE(FEBEX_NOTRACE,febex5);
  SINGLE(FEBEX_NOTRACE,febex6);
  SINGLE(FEBEX_NOTRACE,febex7);
  SINGLE(FEBEX_NOTRACE,febex8);
  SINGLE(FEBEX_NOTRACE,febex9);
  SINGLE(FEBEX_NOTRACE,febex10);
  SINGLE(FEBEX_EVENTHEADER,eh);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(psp_febex_subev);
};
class psp_subev
 : public unpack_subevent_base
{
  SINGLE(SIS3316_ACTAR_S438,sis3316_3);
  SINGLE(SIS3316_ACTAR_S438,sis3316_5);
  SINGLE(SIS3316_ACTAR_S438,sis3316_4);
  SINGLE(SIS3316_ACTAR_S438,sis3316_6);
  SINGLE(SIS3316_ACTAR_S438,sis3316_7);
  SINGLE(SIS3316_ACTAR_S438,sis3316_8);
  SINGLE(LAND_STD_VME,land_vme);
  SINGLE(TRIDI,tridi_ts);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(psp_subev);
};
class sit_subev
 : public unpack_subevent_base
{
  SINGLE(DUMMY_WORD,dummy);
  SINGLE(TIMESTAMP_WHITERABBIT,ts);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(sit_subev);
};
class tof13_subev
 : public unpack_subevent_base
{
  SINGLE(VME_GSI_VFTX2,vftx2_1);
  SINGLE(VME_GSI_VFTX2,vftx2_2);
  SINGLE(VME_GSI_VFTX2,vftx2_3);
  SINGLE(VME_GSI_VFTX2,vftx2_4);
  SINGLE(VME_CAEN_V1290_S438,v1290_1);
  SINGLE(LAND_STD_VME,land_vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(tof13_subev);
};
class tof13_tamex_subev
 : public unpack_subevent_base
{
  union
  {
    struct
    {
      uint32 ns_after_trigger : 11;
      uint32 dummy_11_15 : 5;
      uint32 ns_before_trigger : 11;
      uint32 dummy_27_31 : 5;
    };
    uint32 u32;
  } trigger_window;
  SINGLE(TAMEX_CHANNEL,tamex[2]);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(tof13_tamex_subev);
};
class wr_100
 : public unpack_subevent_base
{
  SINGLE(TIMESTAMP_WHITERABBIT,ts100);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(wr_100);
};
class wr_300
 : public unpack_subevent_base
{
  SINGLE(TIMESTAMP_WHITERABBIT,ts300);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(wr_300);
};
class wr_500
 : public unpack_subevent_base
{
  SINGLE(TIMESTAMP_WHITERABBIT,ts500);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(wr_500);
};
class unpack_event : public unpack_event_base
{
SINGLE(LAND_CAMAC_SCALER,scalers);
SINGLE(wr_100,master_ts);
SINGLE(daq_status_subev,daq_status);
SINGLE(mark_event_time,event_time);
SINGLE(LAND_CAMAC_CONVERTER,tpat_and_co);
SINGLE(neuland_subevent,neuland_tacq);
SINGLE(los_psp_subev,los_psp);
SINGLE(los_scaler_subev,los_scaler);
SINGLE(tof13_subev,tof13);
SINGLE(wr_500,psp_ts);
SINGLE(sit_subev,sit);
SINGLE(wr_300,tbm_ts);
SINGLE(fiber_subev,fiber);
SINGLE(psp_febex_subev,psp_febex);
SINGLE(neuland_tamex_subev,neuland_tamex);
SINGLE(tof13_tamex_subev,tof13_tamex);
SINGLE(mfi_subev,mfi);
SINGLE(califa_subev,califa);
SINGLE(psp_subev,psp_struck);
SINGLE(empty_subev,empty_1);
SINGLE(empty_subev,empty_2);
  bitsone<21> __visited;
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
