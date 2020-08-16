class CAMAC_LECROY_2277_1CH_HACK
{
  raw_list_ii_zero_suppress<DATA16,DATA16,16> data;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 channel,uint32 edge,uint32 high_byte);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 channel,uint32 edge,uint32 high_byte);
  STRUCT_FCNS_DECL(CAMAC_LECROY_2277_1CH_HACK);
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
class CROS3_REWRITE
{
  raw_array_zero_suppress<WIRE_START_END,WIRE_START_END,32768> data;
  union
  {
    struct
    {
      uint32 data_size : 16;
      uint32 threshold_curve : 1;
      uint32 leading_edge : 1;
      uint32 data : 1;
      uint32 dummy_19 : 1;
      uint32 trigger_time : 4;
      uint32 ccb_id : 4;
      uint32 event_counter : 4;
    };
    uint32 u32;
  } h1;
    union
    {
      struct
      {
        uint32 read_out_mode : 2;
        uint32 dummy_2_3 : 2;
        uint32 pulser_enabled : 1;
        uint32 dummy_5_7 : 3;
        uint32 statistics : 3;
        uint32 both_edges : 1;
        uint32 slices : 8;
        uint32 scale : 2;
        uint32 dummy_22_30 : 9;
        uint32 odd_length16 : 1;
      };
      uint32 u32;
    } h2;
      union
      {
        struct
        {
          uint32 read_out_mode : 2;
          uint32 dummy_2_3 : 2;
          uint32 pulser_enabled : 1;
          uint32 dummy_5_7 : 3;
          uint32 statistics : 3;
          uint32 both_edges : 1;
          uint32 threshold_start : 8;
          uint32 threshold_step : 4;
          uint32 boards : 5;
          uint32 dummy_29_31 : 3;
        };
        uint32 u32;
      } trc_h2;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 ccb_id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 ccb_id);
  STRUCT_FCNS_DECL(CROS3_REWRITE);
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
class SIDEREM_BLOCK
{
  raw_array_zero_suppress<DATA12,DATA12,512> data[4];
  union
  {
    struct
    {
      uint32 count : 12;
      uint32 local_event_counter : 4;
      uint32 local_trigger : 4;
      uint32 siderem : 4;
      uint32 gtb : 4;
      uint32 sam : 4;
    };
    uint32 u32;
  } header;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sam,uint32 gtb,uint32 siderem);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sam,uint32 gtb,uint32 siderem);
  STRUCT_FCNS_DECL(SIDEREM_BLOCK);
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
class VME_VUPROM_V35
{
  raw_array_zero_suppress<DATA12,DATA12,192> data;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(VME_VUPROM_V35);
};
class CB_VME_LEFT
 : public unpack_subevent_base
{
  SINGLE(VME_VUPROM_V35,tdc);
  SINGLE(VME_MESYTEC_MADC32,adc[4]);
  SINGLE(VME_MESYTEC_MADC32,madc0_psp);
  SINGLE(LAND_STD_VME,vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(CB_VME_LEFT);
};
class CB_VME_RIGHT
 : public unpack_subevent_base
{
  SINGLE(VME_VUPROM_V35,tdc);
  SINGLE(VME_MESYTEC_MADC32,adc[4]);
  SINGLE(LAND_STD_VME,vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(CB_VME_RIGHT);
};
class CROS3_REWRITE_SUBEVENT
 : public unpack_subevent_base
{
  SINGLE(CROS3_REWRITE,ccb[2]);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(CROS3_REWRITE_SUBEVENT);
};
class CROS3_SUBEVENT
 : public unpack_subevent_base
{
  SINGLE(EXT_CROS3,ccb[2]);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(CROS3_SUBEVENT);
};
class DUMMY
 : public unpack_subevent_base
{
  SINGLE(DUMMY_WORD,d);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(DUMMY);
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
class LAND_CAMAC_PILEUP
 : public unpack_subevent_base
{
  SINGLE(CAMAC_LECROY_2277_1CH_HACK,tdc);
  SINGLE(CAMAC_LECROY_2277_1CH_HACK,tcal);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(LAND_CAMAC_PILEUP);
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
class MASTER_VME
 : public unpack_subevent_base
{
  SINGLE(TRLO_SAMPLER,sampler_pos);
  SINGLE(TRLO_SAMPLER,sampler_cb_sum);
  SINGLE(LAND_STD_VME,vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(MASTER_VME);
};
class SIDEREM01_VME
 : public unpack_subevent_base
{
  SINGLE(EXT_SST,sst[8]);
  union
  {
    struct
    {
      uint32 unnamed_0_31 : 32;
    };
    uint32 u32;
  } error_marker;
  union
  {
    struct
    {
      uint32 unnamed_0_31 : 32;
    };
    uint32 u32;
  } error_marker2;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(SIDEREM01_VME);
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
class TACQUILA_NEULAND_SUBEVENT
 : public unpack_subevent_base
{
  SINGLE(TACQUILA_DATA,data_sam7_gtb0);
  SINGLE(TACQUILA_DATA,data_sam7_gtb1);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TACQUILA_NEULAND_SUBEVENT);
};
class VME_CRATE1
 : public unpack_subevent_base
{
  SINGLE(VME_CAEN_V775,qdc792POS_ROLU);
  SINGLE(VME_CAEN_V775,qdc792PIXEL);
  SINGLE(VME_CAEN_V775,tdc775POS_ROLU);
  SINGLE(VME_CAEN_V830,scaler);
  SINGLE(LAND_STD_VME,vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(VME_CRATE1);
};
class VME_CRATE2
 : public unpack_subevent_base
{
  SINGLE(VME_CAEN_V830,scaler);
  SINGLE(VME_CAEN_V775,qdc792TFW1);
  SINGLE(VME_CAEN_V775,tdc775TFW1);
  SINGLE(VME_CAEN_V775,qdc792TFW2);
  SINGLE(VME_CAEN_V775,tdc775TFW2);
  SINGLE(VME_CAEN_V775,tdc775NTF);
  SINGLE(VME_CAEN_V775,qdc792NTF);
  SINGLE(VME_CAEN_V775,qdc792GFI1);
  SINGLE(VME_CAEN_V775,qdc792GFI2);
  SINGLE(VME_CAEN_V775,qdc792GFI3);
  SINGLE(VME_CAEN_V775,qdc792MFITEST);
  SINGLE(LAND_STD_VME,vme);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(VME_CRATE2);
};
class unpack_event : public unpack_event_base
{
SINGLE(LAND_CAMAC_PILEUP,pileup);
SINGLE(SIDEREM01_VME,sst);
SINGLE(CROS3_SUBEVENT,cros3);
SINGLE(CROS3_REWRITE_SUBEVENT,cros3_rewrite);
SINGLE(LAND_CAMAC_CONVERTER,camac);
SINGLE(DUMMY,acq);
SINGLE(VME_CRATE1,vme1);
SINGLE(VME_CRATE2,vme2);
SINGLE(CB_VME_RIGHT,vme_cbr);
SINGLE(CB_VME_LEFT,vme_cbl);
SINGLE(MASTER_VME,vme_master);
SINGLE(LAND_CAMAC_TCAL_INFO,camac_tcal_info);
SINGLE(LAND_CAMAC_SCALER,camac_scalers);
SINGLE(TACQUILA_LAND_SUBEVENT,tacquila);
SINGLE(TACQUILA_NEULAND_SUBEVENT,neuland);
  bitsone<16> __visited;
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
