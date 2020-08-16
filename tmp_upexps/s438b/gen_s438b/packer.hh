/** BEGIN_PACKER *******************************************************
 *
 * Event packer for CAMAC_LECROY_4434.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_LECROY_4434(channels)
template<typename __data_dest_t>
void PACKER_CAMAC_LECROY_4434::__packer(__data_dest_t &__buffer,uint32 channels)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS);
  // list(0<=index<channels)

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_23: value;
      // 24_31: 0;
      // ENCODE(data[index],(value=value));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CAMAC_LECROY_4434::__packer,uint32 channels);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for CAMAC_PHILLIPS_7164.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_PHILLIPS_7164(channels,mark_channel_no)
template<typename __data_dest_t>
void PACKER_CAMAC_PHILLIPS_7164::__packer(__data_dest_t &__buffer,uint32 channels
                                                                 ,uint32 mark_channel_no)
{
  // MEMBER(DATA12 data[16] ZERO_SUPPRESS);
  // list(0<=index<channels)

  {
    // if(mark_channel_no)

    // else

    if (mark_channel_no)
    {
      // UINT16 ch_data NOENCODE
      // {
        //  0_11: value;
        // 12_15: channel = CHECK(index);
        // ENCODE(data[index],(value=value));
      // }
    }

    else
    {
      // UINT16 ch_data NOENCODE
      // {
        //  0_11: value;
        // ENCODE(data[index],(value=value));
      // }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CAMAC_PHILLIPS_7164::__packer,uint32 channels
                                                              ,uint32 mark_channel_no);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for CAMAC_SILENA_4418.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_SILENA_4418(channels,mark_channel_no)
template<typename __data_dest_t>
void PACKER_CAMAC_SILENA_4418::__packer(__data_dest_t &__buffer,uint32 channels
                                                               ,uint32 mark_channel_no)
{
  // MEMBER(DATA12_OVERFLOW data[8] ZERO_SUPPRESS);
  // list(0<=index<channels)

  {
    // if(mark_channel_no)

    // else

    if (mark_channel_no)
    {
      // UINT16 ch_data NOENCODE
      // {
        //  0_11: value;
        // 12_14: channel = CHECK(index);
        //    15: overflow;
        // ENCODE(data[index],(value=value,overflow=overflow));
      // }
    }

    else
    {
      // UINT16 ch_data NOENCODE
      // {
        //  0_11: value;
        //    15: overflow;
        // ENCODE(data[index],(value=value,overflow=overflow));
      // }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CAMAC_SILENA_4418::__packer,uint32 channels
                                                            ,uint32 mark_channel_no);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for DAQ_STATUS.
 *
 * Do not edit - automatically generated.
 */

// DAQ_STATUS()
template<typename __data_dest_t>
void PACKER_DAQ_STATUS::__packer(__data_dest_t &__buffer)
{
  // UINT32 spill_nr;
  // UINT32 trigger;
  // UINT32 time;
  // MEMBER(DATA32 scaler[48] ZERO_SUPPRESS);
  // list(0<=i<48)

  {
    // UINT32 count NOENCODE
    // {
      //  0_31: value;
      // ENCODE(scaler[i],(value=value));
    // }
  }
  // MEMBER(DATA32 trig_count[16] ZERO_SUPPRESS);
  // list(0<=i<16)

  {
    // UINT32 count NOENCODE
    // {
      //  0_31: value;
      // ENCODE(trig_count[i],(value=value));
    // }
  }
  // UINT32 events;
  // UINT32 errors;
  // UINT32 errors_data_corrupt;
  // UINT32 errors_data_missing;
  // UINT32 errors_data_too_much;
  // UINT32 errors_event_counter_mismatch;
  // UINT32 errors_event_counter_incr_mismatch;
  // UINT32 errors_trigger_mismatch;
  // UINT32 ticks_count;
  // UINT32 ticks_deadtime;
  // MEMBER(DATA32 ticks_dt_trig[16] ZERO_SUPPRESS);
  // list(0<=i<16)

  {
    // UINT32 count NOENCODE
    // {
      //  0_31: value;
      // ENCODE(ticks_dt_trig[i],(value=value));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,DAQ_STATUS::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for DUMMY_WORD.
 *
 * Do not edit - automatically generated.
 */

// DUMMY_WORD()
template<typename __data_dest_t>
void PACKER_DUMMY_WORD::__packer(__data_dest_t &__buffer)
{
  // UINT32 dummy_word;
}
FORCE_IMPL_DATA_SRC_FCN(void,DUMMY_WORD::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FASTBUS_LECROY_1875.
 *
 * Do not edit - automatically generated.
 */

// FASTBUS_LECROY_1875(geom,channels)
template<typename __data_dest_t>
void PACKER_FASTBUS_LECROY_1875::__packer(__data_dest_t &__buffer,uint32 geom
                                                                 ,uint32 channels)
{
  // MEMBER(DATA12_RANGE data[64] ZERO_SUPPRESS);
  // UINT32 ch_data NOENCODE
  // {
    //  0_11: value;
    // 16_21: channel = RANGE(0,(channels - 1));
    //    23: range;
    // 24_26: n = CHECK(0);
    // 27_31: geom = MATCH(geom);
    // ENCODE(data[channel],(value=value,range=range));
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FASTBUS_LECROY_1875::__packer,uint32 geom
                                                              ,uint32 channels);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FASTBUS_LECROY_1885.
 *
 * Do not edit - automatically generated.
 */

// FASTBUS_LECROY_1885(geom,channels)
template<typename __data_dest_t>
void PACKER_FASTBUS_LECROY_1885::__packer(__data_dest_t &__buffer,uint32 geom
                                                                 ,uint32 channels)
{
  // MEMBER(DATA12_RANGE data[96] ZERO_SUPPRESS);
  // UINT32 ch_data NOENCODE
  // {
    //  0_11: value;
    // 16_22: channel = RANGE(0,(channels - 1));
    //    23: range;
    // 24_26: n = CHECK(0);
    // 27_31: geom = MATCH(geom);
    // ENCODE(data[channel],(value=value,range=range));
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FASTBUS_LECROY_1885::__packer,uint32 geom
                                                              ,uint32 channels);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FEBEX_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_EVENTHEADER()
template<typename __data_dest_t>
void PACKER_FEBEX_EVENTHEADER::__packer(__data_dest_t &__buffer)
{
  // UINT32 Identifier NOENCODE
  // {
    //  0_31: 0xfebe0000;
  // }
  // UINT32 febexcards
  // {
    //  0_07: N_febex1;
    //  8_15: N_febex2;
    // 16_23: N_febex3;
    // 24_31: N_febex4;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_EVENTHEADER::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FEBEX_NOTRACE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_NOTRACE(sfp,card)
template<typename __data_dest_t>
void PACKER_FEBEX_NOTRACE::__packer(__data_dest_t &__buffer,uint32 sfp,uint32 card)
{
  // MEMBER(DATA8 Nhit[16]);
  // MEMBER(DATA12 t[16] ZERO_SUPPRESS_MULTI(10));
  // MEMBER(DATA32 E[16] ZERO_SUPPRESS_MULTI(10));
  // UINT32 indicator NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: 255;
  // }
  // UINT32 ETsize NOENCODE
  // {
    //  0_31: channelsize;
  // }
  // UINT32 head NOENCODE
  // {
    //  0_23: notused;
    // 24_31: 175;
  // }
  // UINT32 triggertime NOENCODE
  // {
    //  0_31: triggertime;
  // }
  // UINT32 time NOENCODE
  // {
    //  0_31: time;
  // }
  // list(0<=i<((ETsize.channelsize - 16) >> 3))

  {
    // UINT32 hittime NOENCODE
    // {
      //  0_11: data;
      // 12_14: notused1;
      //    15: sign;
      // 16_19: notused2;
      // 20_23: multihit;
      // 24_27: Nhit;
      // 28_31: channel_id;
      // ENCODE(t[channel_id],(value=data));
      // ENCODE(Nhit[channel_id],(value=Nhit));
    // }
    // UINT32 energy NOENCODE
    // {
      //  0_21: data;
      //    22: notused1;
      //    23: sign;
      // 24_27: notused2;
      // 28_31: channel_id;
      // ENCODE(E[channel_id],(value=(data | (sign << 23))));
    // }
  }
  // UINT32 trail NOENCODE
  // {
    //  0_23: notused;
    // 24_31: 191;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FEBEX_NOTRACE::__packer,uint32 sfp,uint32 card);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FEBEX_PADDING.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_PADDING()
template<typename __data_dest_t>
void PACKER_FEBEX_PADDING::__packer(__data_dest_t &__buffer)
{
  // UINT32 pads_data NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_PADDING::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for LAND_STD_VME.
 *
 * Do not edit - automatically generated.
 */

// LAND_STD_VME()
template<typename __data_dest_t>
void PACKER_LAND_STD_VME::__packer(__data_dest_t &__buffer)
{
  // UINT32 failure
  // {
    //     0: fail_general;
    //     1: fail_data_corrupt;
    //     2: fail_data_missing;
    //     3: fail_data_too_much;
    //     4: fail_event_counter_mismatch;
    //     5: fail_readout_error_driver;
    //     6: fail_unexpected_trigger;
    //     7: fail_firmware_mismatch;
    //    22: has_multi_trlo_ii_counter0;
    //    23: has_clock_counter_stamp;
    //    24: has_continous_event_counter;
    //    25: has_update_qdc_iped_value;
    //    26: spurious_start_before_tcal;
    //    27: has_no_zero_suppression;
    //    28: has_multi_adctdc_counter0;
    //    29: has_multi_scaler_counter0;
    //    30: has_multi_event;
    //    31: has_time_stamp;
  // }
  // if(failure.has_continous_event_counter)

  if (failure.has_continous_event_counter)
  {
    // UINT32 continous_event_counter;
  }
  // if(failure.has_time_stamp)

  if (failure.has_time_stamp)
  {
    // UINT32 time_stamp;
  }
  // if(failure.has_clock_counter_stamp)

  if (failure.has_clock_counter_stamp)
  {
    // UINT32 clock_counter_stamp;
  }
  // if(failure.has_update_qdc_iped_value)

  if (failure.has_update_qdc_iped_value)
  {
    // UINT32 iped;
  }
  // if(failure.has_multi_event)

  if (failure.has_multi_event)
  {
    // UINT32 multi_events;
  }
  // if(failure.has_multi_trlo_ii_counter0)

  if (failure.has_multi_trlo_ii_counter0)
  {
    // UINT32 multi_trlo_ii_counter0;
  }
  // if(failure.has_multi_scaler_counter0)

  if (failure.has_multi_scaler_counter0)
  {
    // UINT32 multi_scaler_counter0;
  }
  // if(failure.has_multi_adctdc_counter0)

  if (failure.has_multi_adctdc_counter0)
  {
    // UINT32 multi_adctdc_counter0;
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_STD_VME::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for NTP64_TIME.
 *
 * Do not edit - automatically generated.
 */

// NTP64_TIME()
template<typename __data_dest_t>
void PACKER_NTP64_TIME::__packer(__data_dest_t &__buffer)
{
  // UINT32 sec;
  // UINT32 frac;
}
FORCE_IMPL_DATA_SRC_FCN(void,NTP64_TIME::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for NTP_MESSAGE.
 *
 * Do not edit - automatically generated.
 */

// NTP_MESSAGE(id)
template<typename __data_dest_t>
void PACKER_NTP_MESSAGE::__packer(__data_dest_t &__buffer,uint32 id)
{
  // UINT32 header
  // {
    //  0_15: word_count;
    //    16: quick_burst;
    // 24_31: id = MATCH(id);
  // }
  // MARK_COUNT(start);
  void *__mark_start = __buffer._offset;
  // UINT32 server_id;
  // UINT32 sspp
  // {
    //  0_07: precision;
    //  8_15: poll;
    // 16_19: stratum;
    // 24_26: mode;
    // 27_29: version = CHECK(3);
    // 30_31: leap;
  // }
  // UINT32 root_dly
  // {
    //  0_15: frac;
    // 16_31: sec;
  // }
  // UINT32 root_disp
  // {
    //  0_15: frac;
    // 16_31: sec;
  // }
  // UINT32 refid;
  // reftime = NTP64_TIME();
  PACK_DECL(830,NTP64_TIME,reftime);
  // origtime = NTP64_TIME();
  PACK_DECL(831,NTP64_TIME,origtime);
  // rectime = NTP64_TIME();
  PACK_DECL(832,NTP64_TIME,rectime);
  // tmittime = NTP64_TIME();
  PACK_DECL(833,NTP64_TIME,tmittime);
  // rxtime = NTP64_TIME();
  PACK_DECL(836,NTP64_TIME,rxtime);
  // if(header.quick_burst)

  if (header.quick_burst)
  {
    // orig2time = NTP64_TIME();
    PACK_DECL(840,NTP64_TIME,orig2time);
    // rec2time = NTP64_TIME();
    PACK_DECL(841,NTP64_TIME,rec2time);
    // tmit2time = NTP64_TIME();
    PACK_DECL(842,NTP64_TIME,tmit2time);
    // rx2time = NTP64_TIME();
    PACK_DECL(843,NTP64_TIME,rx2time);
  }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._offset;
  // CHECK_COUNT(header.word_count,start,end,0,4)
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,NTP_MESSAGE::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for NXYTER.
 *
 * Do not edit - automatically generated.
 */

// NXYTER(gem,nxy)
template<typename __data_dest_t>
void PACKER_NXYTER::__packer(__data_dest_t &__buffer,uint32 gem,uint32 nxy)
{
  // MEMBER(DATA8 gemex);
  // MEMBER(DATA8 nxyter);
  // MEMBER(DATA8 err);
  // MEMBER(DATA16 trigger_counter_head);
  // MEMBER(DATA16 trigger_counter_foot);
  // MEMBER(DATA16 ts_epoch_trigger);
  // MEMBER(DATA12 channel[10000] NO_INDEX_LIST);
  // MEMBER(DATA12 adc[10000] NO_INDEX_LIST);
  // MEMBER(DATA16 ts_epoch_hit[10000] NO_INDEX_LIST);
  // MEMBER(DATA16 ts_nxy[10000] NO_INDEX_LIST);
  // UINT32 header1 NOENCODE
  // {
    //  0_07: 52;
    //  8_15: trigger_tp;
    // 16_23: id_gemex = MATCH(gem);
    // 24_31: id_nxyter = MATCH(nxy);
    // ENCODE(gemex,(value=id_gemex));
    // ENCODE(nxyter,(value=id_nxyter));
  // }
  // UINT32 header2 NOENCODE
  // {
    //  0_31: packet_data_size;
  // }
  // UINT32 header_data NOENCODE
  // {
    //  0_15: trigger_counter1;
    // 16_19: rob;
    // 20_23: empty_trt1;
    // 24_31: 170;
    // ENCODE(trigger_counter_head,(value=trigger_counter1));
  // }
  // UINT32 local_epoche_ts1 NOENCODE
  // {
    //  0_15: epoche_time_stamp_a;
    // 16_23: 0;
    // 24_31: 0;
  // }
  // UINT32 local_epoche_ts2 NOENCODE
  // {
    //  0_10: epoche_time_stamp_b;
    // 11_31: epoche_time_stamp_ab;
    // ENCODE(ts_epoch_trigger,(value=epoche_time_stamp_b));
  // }
  // several UINT64 nxyter_data NOENCODE
  // {
    //  0_10: nxyter_epoche_time_stamp;
    // 11_23: nxyter_epoche_time_stamp2;
    // 24_30: id_ch = RANGE(0,127);
    //    31: 0;
    // 32_45: nxyter_time_stamp;
    //    46: of;
    //    47: pu;
    // 48_59: adc_data;
    // 60_61: 0;
    // ENCODE(channel APPEND_LIST,(value=id_ch));
    // ENCODE(adc APPEND_LIST,(value=adc_data));
    // ENCODE(ts_epoch_hit APPEND_LIST,(value=nxyter_epoche_time_stamp));
    // ENCODE(ts_nxy APPEND_LIST,(value=nxyter_time_stamp));
  // }
  // UINT32 errors NOENCODE
  // {
    //  0_15: trigger_counter_not_processed;
    // 16_23: error_flags;
    // 24_31: 238;
    // ENCODE(err,(value=error_flags));
  // }
  // UINT32 data_folder NOENCODE
  // {
    //  0_15: trigger_counter2;
    // 16_19: rob;
    // 20_23: empty_trt2;
    // 24_31: 187;
    // ENCODE(trigger_counter_foot,(value=trigger_counter2));
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,NXYTER::__packer,uint32 gem,uint32 nxy);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for NXYTER_PADDING.
 *
 * Do not edit - automatically generated.
 */

// NXYTER_PADDING()
template<typename __data_dest_t>
void PACKER_NXYTER_PADDING::__packer(__data_dest_t &__buffer)
{
  // UINT32 pads_data NOENCODE
  // {
    //  0_11: counter;
    // 12_19: 1;
    // 20_31: 0xadd;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,NXYTER_PADDING::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for RANDOM_TCAL_TSTAMP_CLOCK.
 *
 * Do not edit - automatically generated.
 */

// RANDOM_TCAL_TSTAMP_CLOCK()
template<typename __data_dest_t>
void PACKER_RANDOM_TCAL_TSTAMP_CLOCK::__packer(__data_dest_t &__buffer)
{
  // UINT32 soft_latches;
  // UINT32 hard_latches;
  // UINT32 clock_ticks;
  // before = NTP64_TIME();
  PACK_DECL(859,NTP64_TIME,before);
  // after = NTP64_TIME();
  PACK_DECL(860,NTP64_TIME,after);
}
FORCE_IMPL_DATA_SRC_FCN(void,RANDOM_TCAL_TSTAMP_CLOCK::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for RANDOM_TCAL.
 *
 * Do not edit - automatically generated.
 */

// RANDOM_TCAL(id)
template<typename __data_dest_t>
void PACKER_RANDOM_TCAL::__packer(__data_dest_t &__buffer,uint32 id)
{
  // UINT32 header
  // {
    //  0_07: word_count;
    //  8_11: pulses;
    // 12_17: clock_bits;
    //    18: has_tstamp1;
    //    19: has_tstamp2;
    // 24_31: id = MATCH(id);
  // }
  // MARK_COUNT(start);
  void *__mark_start = __buffer._offset;
  // if(header.has_tstamp1)

  if (header.has_tstamp1)
  {
    // tstamp1 = RANDOM_TCAL_TSTAMP_CLOCK();
    PACK_DECL(883,RANDOM_TCAL_TSTAMP_CLOCK,tstamp1);
  }
  // if(header.has_tstamp2)

  if (header.has_tstamp2)
  {
    // tstamp2 = RANDOM_TCAL_TSTAMP_CLOCK();
    PACK_DECL(887,RANDOM_TCAL_TSTAMP_CLOCK,tstamp2);
  }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._offset;
  // CHECK_COUNT(header.word_count,start,end,0,4)
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,RANDOM_TCAL::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for SIS3316_ACTAR_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_ACTAR_S438(id)
template<typename __data_dest_t>
void PACKER_SIS3316_ACTAR_S438::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 channel_header[128]);
  // MEMBER(DATA16 trace[40000] ZERO_SUPPRESS);
  // UINT32 custom_header
  // {
    //  0_07: id = MATCH(id);
    //  8_15: channel_num;
    // 16_31: 0x3316;
  // }
  // list(0<=channel_index<custom_header.channel_num)

  {
    // optional UINT32 padding0 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // optional UINT32 padding1 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // optional UINT32 padding2 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // list(0<=header_index<7)

    {
      // UINT32 header_data NOENCODE
      // {
        //  0_31: data;
        // ENCODE(channel_header[((channel_index * 8) + header_index)],(value=data));
      // }
    }
    // UINT32 header3
    // {
      //  0_25: sampleLength;
      //    26: 0;
      //    27: mawFlag;
      // 28_31: 14;
    // }
    // list(0<=sample_index<(header3.sampleLength * 2))

    {
      // UINT16 sample NOENCODE
      // {
        //  0_15: data;
        // ENCODE(trace[((channel_index * header3.sampleLength) + sample_index)],(value=data));
      // }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,SIS3316_ACTAR_S438::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for SIS3316_PSP_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_PSP_S438(id)
template<typename __data_dest_t>
void PACKER_SIS3316_PSP_S438::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 channel_header[128]);
  // MEMBER(DATA16 trace[16000] ZERO_SUPPRESS);
  // UINT32 custom_header
  // {
    //  0_07: id = MATCH(id);
    //  8_15: channel_num;
    // 16_31: 0x3316;
  // }
  // list(0<=channel_index<custom_header.channel_num)

  {
    // optional UINT32 padding0 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // optional UINT32 padding1 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // optional UINT32 padding2 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // list(0<=header_index<7)

    {
      // UINT32 header_data NOENCODE
      // {
        //  0_31: data;
        // ENCODE(channel_header[((channel_index * 8) + header_index)],(value=data));
      // }
    }
    // UINT32 header3
    // {
      //  0_25: sampleLength;
      //    26: 0;
      //    27: mawFlag;
      // 28_31: 14;
    // }
    // list(0<=sample_index<(header3.sampleLength * 2))

    {
      // UINT16 sample NOENCODE
      // {
        //  0_15: data;
        // ENCODE(trace[((channel_index * header3.sampleLength) + sample_index)],(value=data));
      // }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,SIS3316_PSP_S438::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for SIS3316_S2_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_S2_S438(id)
template<typename __data_dest_t>
void PACKER_SIS3316_S2_S438::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 channel_header[128]);
  // MEMBER(DATA16 trace[800] ZERO_SUPPRESS);
  // UINT32 custom_header
  // {
    //  0_07: id = MATCH(id);
    //  8_15: channel_num;
    // 16_31: 0x3316;
  // }
  // list(0<=channel_index<custom_header.channel_num)

  {
    // optional UINT32 padding0 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // optional UINT32 padding1 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // optional UINT32 padding2 NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: 0;
      // 16_31: 0x3316;
    // }
    // list(0<=header_index<7)

    {
      // UINT32 header_data NOENCODE
      // {
        //  0_31: data;
        // ENCODE(channel_header[((channel_index * 8) + header_index)],(value=data));
      // }
    }
    // UINT32 header3
    // {
      //  0_25: sampleLength;
      //    26: 0;
      //    27: mawFlag;
      // 28_31: 14;
    // }
    // list(0<=sample_index<(header3.sampleLength * 2))

    {
      // UINT16 sample NOENCODE
      // {
        //  0_15: data;
        // ENCODE(trace[((channel_index * header3.sampleLength) + sample_index)],(value=data));
      // }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,SIS3316_S2_S438::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for SIS3316_S2_SCALERS_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_S2_SCALERS_S438()
template<typename __data_dest_t>
void PACKER_SIS3316_S2_SCALERS_S438::__packer(__data_dest_t &__buffer)
{
  // MEMBER(DATA32 scalers[192]);
  // UINT32 custom_header
  // {
    //  0_31: 0x33161234;
  // }
  // list(0<=index<(((2 * 4) * 4) * 6))

  {
    // UINT32 scaler NOENCODE
    // {
      //  0_31: data;
      // ENCODE(scalers[index],(value=data));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,SIS3316_S2_SCALERS_S438::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for SIS3316_SCALERS_S438.
 *
 * Do not edit - automatically generated.
 */

// SIS3316_SCALERS_S438()
template<typename __data_dest_t>
void PACKER_SIS3316_SCALERS_S438::__packer(__data_dest_t &__buffer)
{
  // MEMBER(DATA32 scalers[480]);
  // UINT32 custom_header
  // {
    //  0_31: 0x33161234;
  // }
  // list(0<=index<(((5 * 4) * 4) * 6))

  {
    // UINT32 scaler NOENCODE
    // {
      //  0_31: data;
      // ENCODE(scalers[index],(value=data));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,SIS3316_SCALERS_S438::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for SOFT_SCALER32.
 *
 * Do not edit - automatically generated.
 */

// SOFT_SCALER32(channels)
template<typename __data_dest_t>
void PACKER_SOFT_SCALER32::__packer(__data_dest_t &__buffer,uint32 channels)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // list(0<=index<channels)

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_31: value;
      // ENCODE(data[index],(value=value));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,SOFT_SCALER32::__packer,uint32 channels);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TACQUILA_DATA.
 *
 * Do not edit - automatically generated.
 */

// TACQUILA_DATA(sam,gtb)
template<typename __data_dest_t>
void PACKER_TACQUILA_DATA::__packer(__data_dest_t &__buffer,uint32 sam,uint32 gtb)
{
  // MEMBER(DATA12 tac[30][17] ZERO_SUPPRESS);
  // MEMBER(DATA12 adc[30][17] ZERO_SUPPRESS);
  // MEMBER(DATA12 clk[30][17] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_08: count;
    //  9_11: dummy1;
    // 12_15: trigger_tac = RANGE(0,1);
    // 16_19: trigger_sam = RANGE(1,2);
    // 20_23: lec;
    // 24_27: gtb = MATCH(gtb);
    // 28_31: sam = MATCH(sam);
  // }
  // list(0<=index<header.count)

  {
    // if(( ! (index & 1)))

    if (( ! (index & 1)))
    {
      // UINT32 ch_data NOENCODE
      // {
        //  0_11: tac_value;
        // 12_17: clock_cycle;
        // 18_19: dummy2;
        //    20: trigger;
        //    21: 0;
        // 22_26: channel = RANGE(0,16);
        // 27_31: module = RANGE(1,30);
        // ENCODE(tac[(module - 1)][channel],(value=tac_value));
        // ENCODE(clk[(module - 1)][channel],(value=clock_cycle));
      // }
      // UINT32 ch_data2 NOENCODE
      // {
        //  0_11: adc_value;
        // 12_19: dummy3;
        //    20: trigger;
        //    21: 1;
        // 22_26: channel = RANGE(0,16);
        // 27_31: module = RANGE(1,30);
        // ENCODE(adc[(module - 1)][channel],(value=adc_value));
      // }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TACQUILA_DATA::__packer,uint32 sam,uint32 gtb);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TACQUILA_DATA_S438B.
 *
 * Do not edit - automatically generated.
 */

// TACQUILA_DATA_S438B(sam,gtb)
template<typename __data_dest_t>
void PACKER_TACQUILA_DATA_S438B::__packer(__data_dest_t &__buffer,uint32 sam
                                                                 ,uint32 gtb)
{
  // MEMBER(DATA12 tac[30][32] ZERO_SUPPRESS);
  // MEMBER(DATA12 adc[30][17] ZERO_SUPPRESS);
  // MEMBER(DATA12 clk[30][17] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_08: count;
    //  9_11: dummy1;
    // 12_15: trigger_tac;
    // 16_19: trigger_sam = RANGE(1,2);
    // 20_23: lec;
    // 24_27: gtb = MATCH(gtb);
    // 28_31: sam = MATCH(sam);
  // }
  // list(0<=index<header.count)

  {
    // if(( ! (index & 1)))

    if (( ! (index & 1)))
    {
      // UINT32 ch_data NOENCODE
      // {
        //  0_11: tac_value;
        // 12_17: clock_cycle;
        // 18_19: dummy2;
        //    20: trigger;
        //    21: 0;
        // 22_26: channel = RANGE(0,16);
        // 27_31: module = RANGE(1,30);
        // ENCODE(tac[(module - 1)][channel],(value=tac_value));
        // ENCODE(clk[(module - 1)][channel],(value=clock_cycle));
      // }
      // UINT32 ch_data2 NOENCODE
      // {
        //  0_11: adc_value;
        // 12_19: dummy3;
        //    20: trigger;
        //    21: 1;
        // 22_26: channel = RANGE(0,16);
        // 27_31: module = RANGE(1,30);
        // ENCODE(adc[(module - 1)][channel],(value=adc_value));
      // }
      // if((ch_data.channel == 16))

      if ((ch_data.channel == 16))
      {
        // list(17<=chan<32)

        {
          // ENCODE(tac[(ch_data.module - 1)][chan],(value=ch_data.tac_value));

        }
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TACQUILA_DATA_S438B::__packer,uint32 sam
                                                              ,uint32 gtb);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TAMEX_CHANNEL.
 *
 * Do not edit - automatically generated.
 */

// TAMEX_CHANNEL(sfp,card)
template<typename __data_dest_t>
void PACKER_TAMEX_CHANNEL::__packer(__data_dest_t &__buffer,uint32 sfp,uint32 card)
{
  // MEMBER(DATA32 type[128] ZERO_SUPPRESS);
  // MEMBER(DATA32 tdc[128] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp_index = MATCH(sfp);
    // 16_23: card_index = MATCH(card);
    // 24_31: channel_index = CHECK(0);
  // }
  // UINT32 data_size;
  // UINT32 tdc_header
  // {
    //  0_23: yanana_phone;
    // 24_31: 170;
  // }
  // list(0<=index<((data_size / 4) - 2))

  {
    // UINT32 tdc_data NOENCODE
    // {
      //  0_21: value;
      // 22_28: channel_i;
      // 29_31: type;
      // ENCODE(type[channel_i],(value=type));
      // ENCODE(tdc[channel_i],(value=value));
    // }
  }
  // UINT32 tdc_trailer
  // {
    //  0_23: wanana_phone;
    // 24_31: 187;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX_CHANNEL::__packer,uint32 sfp,uint32 card);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TIMESTAMP_WHITERABBIT.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT(id)
template<typename __data_dest_t>
void PACKER_TIMESTAMP_WHITERABBIT::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA12 subsystem_id);
  // MEMBER(DATA16 t1);
  // MEMBER(DATA16 t2);
  // MEMBER(DATA16 t3);
  // MEMBER(DATA16 t4);
  // UINT32 header NOENCODE
  // {
    //  0_11: id = MATCH(id);
    // 12_15: 0;
    //    16: error_bit;
    // 17_31: 0;
    // ENCODE(subsystem_id,(value=id));
  // }
  // UINT32 d1 NOENCODE
  // {
    //  0_15: t1;
    // 16_31: 0x3e1;
    // ENCODE(t1,(value=t1));
  // }
  // UINT32 d2 NOENCODE
  // {
    //  0_15: t2;
    // 16_31: 0x4e1;
    // ENCODE(t2,(value=t2));
  // }
  // UINT32 d3 NOENCODE
  // {
    //  0_15: t3;
    // 16_31: 0x5e1;
    // ENCODE(t3,(value=t3));
  // }
  // UINT32 d4 NOENCODE
  // {
    //  0_15: t4;
    // 16_31: 0x6e1;
    // ENCODE(t4,(value=t4));
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TIMESTAMP_WHITERABBIT::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TRIDI.
 *
 * Do not edit - automatically generated.
 */

// TRIDI()
template<typename __data_dest_t>
void PACKER_TRIDI::__packer(__data_dest_t &__buffer)
{
  // UINT32 header
  // {
    //  0_15: tpat;
    // 16_31: 0x3d00;
  // }
  // UINT32 ts_msb;
  // UINT32 ts_lsb;
}
FORCE_IMPL_DATA_SRC_FCN(void,TRIDI::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TRLO_SAMPLER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_SAMPLER(id)
template<typename __data_dest_t>
void PACKER_TRLO_SAMPLER::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 stamps[512] NO_INDEX_LIST);
  // UINT32 header
  // {
    //  0_09: count;
    // 24_31: id = MATCH(id);
  // }
  // list(0<=index<header.count)

  {
    // UINT32 data NOENCODE
    // {
      //  0_31: stamp;
      // ENCODE(stamps APPEND_LIST,(value=stamp));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLO_SAMPLER::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TRLO_SCALER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_SCALER(crate_id)
template<typename __data_dest_t>
void PACKER_TRLO_SCALER::__packer(__data_dest_t &__buffer,uint32 crate_id)
{
  // MEMBER(DATA32 stamps[16] NO_INDEX_LIST);
  // UINT32 header
  // {
    //  0_07: crate_id = MATCH(crate_id);
    //  8_31: 0x00721009;
  // }
  // list(0<=index<16)

  {
    // UINT32 data NOENCODE
    // {
      //  0_31: value;
      // ENCODE(stamps APPEND_LIST,(value=value));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLO_SCALER::__packer,uint32 crate_id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1190_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SUBTDC(tdc,event_id,data)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1190_SUBTDC::__packer(__data_dest_t &__buffer,uint32 tdc
                                                                   ,uint32 event_id
                                                                   ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(tdc_start);
  void *__mark_tdc_start = __buffer._offset;
  // UINT32 header
  // {
    //  0_11: bunch_id;
    // 12_23: event_id = CHECK(event_id);
    // 24_25: tdc = MATCH(tdc);
    // 27_31: 1;
  // }
  // several UINT32 ch_data NOENCODE
  // {
    //  0_18: value;
    // 19_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 5) | channel_low)],(value=value));
  // }
  // optional UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
  // MARK_COUNT(tdc_end);
  void *__mark_tdc_end = __buffer._offset;
  // UINT32 trailer
  // {
    //  0_11: word_count = CHECK_COUNT(tdc_start,tdc_end,4,4);
    // 12_23: event_id = CHECK(header.event_id);
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 3;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_SUBTDC::__packer,uint32 tdc
                                                                ,uint32 event_id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1190.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190(geom)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1190::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._offset;
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  // select several

    // tdc[0] = VME_CAEN_V1190_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[1] = VME_CAEN_V1190_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[2] = VME_CAEN_V1190_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[3] = VME_CAEN_V1190_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                   // data=data);
  {
    PACK_DECL(491,VME_CAEN_V1190_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(492,VME_CAEN_V1190_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(493,VME_CAEN_V1190_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(494,VME_CAEN_V1190_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
  }
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._offset;
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1190_S438_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SUBTDC(tdc,event_id,data)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1190_S438_SUBTDC::__packer(__data_dest_t &__buffer,uint32 tdc
                                                                        ,uint32 event_id
                                                                        ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(tdc_start);
  void *__mark_tdc_start = __buffer._offset;
  // UINT32 header
  // {
    //  0_11: bunch_id;
    // 12_23: event_id = CHECK(event_id);
    // 24_25: tdc = MATCH(tdc);
    // 27_31: 1;
  // }
  // several UINT32 ch_data NOENCODE
  // {
    //  0_18: value;
    // 19_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 5) | channel_low)],(value=value));
  // }
  // optional UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
  // MARK_COUNT(tdc_end);
  void *__mark_tdc_end = __buffer._offset;
  // UINT32 trailer
  // {
    //  0_11: word_count = CHECK_COUNT(tdc_start,tdc_end,4,4);
    // 12_23: event_id = CHECK(header.event_id);
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 3;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_S438_SUBTDC::__packer,uint32 tdc
                                                                     ,uint32 event_id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1190_S438.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438(geom)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1190_S438::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // UINT32 ucesb_separator
  // {
    //  0_04: geom = MATCH(geom);
    // 24_31: 76;
  // }
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._offset;
  // UINT32 header
  // {
    //  5_26: event_number;
    // 27_31: 8;
  // }
  // select several

    // tdc[0] = VME_CAEN_V1190_S438_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[1] = VME_CAEN_V1190_S438_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[2] = VME_CAEN_V1190_S438_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[3] = VME_CAEN_V1190_S438_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                        // data=data);
  {
    PACK_DECL(2098,VME_CAEN_V1190_S438_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(2099,VME_CAEN_V1190_S438_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(2100,VME_CAEN_V1190_S438_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(2101,VME_CAEN_V1190_S438_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
  }
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._offset;
  // UINT32 trailer
  // {
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_S438::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1190_S438_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SHORT_SUBTDC(tdc,event_id,data)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1190_S438_SHORT_SUBTDC::__packer(__data_dest_t &__buffer,uint32 tdc
                                                                              ,uint32 event_id
                                                                              ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // UINT32 ch_data NOENCODE
  // {
    //  0_18: value;
    // 19_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 5) | channel_low)],(value=value));
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_S438_SHORT_SUBTDC::__packer,uint32 tdc
                                                                           ,uint32 event_id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR(tdc)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR::__packer(__data_dest_t &__buffer,uint32 tdc)
{
  // UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR::__packer,uint32 tdc);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1190_S438_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_S438_SHORT(geom)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1190_S438_SHORT::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._offset;
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  // select several

    // tdc[0] = VME_CAEN_V1190_S438_SHORT_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // tdc[1] = VME_CAEN_V1190_S438_SHORT_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // tdc[2] = VME_CAEN_V1190_S438_SHORT_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // tdc[3] = VME_CAEN_V1190_S438_SHORT_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // norevisit err[0] = VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR(tdc=0);
    // norevisit err[1] = VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR(tdc=1);
    // norevisit err[2] = VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR(tdc=2);
    // norevisit err[3] = VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR(tdc=3);
  {
    PACK_DECL(2179,VME_CAEN_V1190_S438_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(2180,VME_CAEN_V1190_S438_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(2181,VME_CAEN_V1190_S438_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(2182,VME_CAEN_V1190_S438_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(2184,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
    PACK_DECL(2185,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
    PACK_DECL(2186,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
    PACK_DECL(2187,VME_CAEN_V1190_S438_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
  }
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._offset;
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_S438_SHORT::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1190_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SHORT_SUBTDC(tdc,event_id,data)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1190_SHORT_SUBTDC::__packer(__data_dest_t &__buffer,uint32 tdc
                                                                         ,uint32 event_id
                                                                         ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // UINT32 ch_data NOENCODE
  // {
    //  0_18: value;
    // 19_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 5) | channel_low)],(value=value));
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_SHORT_SUBTDC::__packer,uint32 tdc
                                                                      ,uint32 event_id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1190_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SHORT_SUBTDC_ERROR(tdc)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1190_SHORT_SUBTDC_ERROR::__packer(__data_dest_t &__buffer,uint32 tdc)
{
  // UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_SHORT_SUBTDC_ERROR::__packer,uint32 tdc);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1190_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1190_SHORT(geom)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1190_SHORT::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._offset;
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  // select several

    // tdc[0] = VME_CAEN_V1190_SHORT_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // tdc[1] = VME_CAEN_V1190_SHORT_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // tdc[2] = VME_CAEN_V1190_SHORT_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // tdc[3] = VME_CAEN_V1190_SHORT_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // norevisit err[0] = VME_CAEN_V1190_SHORT_SUBTDC_ERROR(tdc=0);
    // norevisit err[1] = VME_CAEN_V1190_SHORT_SUBTDC_ERROR(tdc=1);
    // norevisit err[2] = VME_CAEN_V1190_SHORT_SUBTDC_ERROR(tdc=2);
    // norevisit err[3] = VME_CAEN_V1190_SHORT_SUBTDC_ERROR(tdc=3);
  {
    PACK_DECL(580,VME_CAEN_V1190_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(581,VME_CAEN_V1190_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(582,VME_CAEN_V1190_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(583,VME_CAEN_V1190_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(585,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
    PACK_DECL(586,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
    PACK_DECL(587,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
    PACK_DECL(588,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
  }
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._offset;
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1190_SHORT::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1290_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SUBTDC(tdc,event_id,data)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1290_SUBTDC::__packer(__data_dest_t &__buffer,uint32 tdc
                                                                   ,uint32 event_id
                                                                   ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(tdc_start);
  void *__mark_tdc_start = __buffer._offset;
  // UINT32 header
  // {
    //  0_11: bunch_id;
    // 12_23: event_id = CHECK(event_id);
    // 24_25: tdc = MATCH(tdc);
    // 27_31: 1;
  // }
  // several UINT32 ch_data NOENCODE
  // {
    //  0_20: value;
    // 21_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 3) | channel_low)],(value=value));
  // }
  // optional UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
  // MARK_COUNT(tdc_end);
  void *__mark_tdc_end = __buffer._offset;
  // UINT32 trailer
  // {
    //  0_11: word_count = CHECK_COUNT(tdc_start,tdc_end,4,4);
    // 12_23: event_id = CHECK(header.event_id);
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 3;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_SUBTDC::__packer,uint32 tdc
                                                                ,uint32 event_id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1290.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290(geom)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1290::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._offset;
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  // select several

    // tdc[0] = VME_CAEN_V1290_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[1] = VME_CAEN_V1290_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[2] = VME_CAEN_V1290_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                   // data=data);
    // tdc[3] = VME_CAEN_V1290_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                   // data=data);
  {
    PACK_DECL(286,VME_CAEN_V1290_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(287,VME_CAEN_V1290_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(288,VME_CAEN_V1290_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(289,VME_CAEN_V1290_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
  }
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._offset;
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1290_S438_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SUBTDC(tdc,event_id,data)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1290_S438_SUBTDC::__packer(__data_dest_t &__buffer,uint32 tdc
                                                                        ,uint32 event_id
                                                                        ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(tdc_start);
  void *__mark_tdc_start = __buffer._offset;
  // UINT32 header
  // {
    //  0_11: bunch_id;
    // 12_23: event_id = CHECK(event_id);
    // 24_25: tdc = MATCH(tdc);
    // 27_31: 1;
  // }
  // several UINT32 ch_data NOENCODE
  // {
    //  0_20: value;
    // 21_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 3) | channel_low)],(value=value));
  // }
  // optional UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
  // MARK_COUNT(tdc_end);
  void *__mark_tdc_end = __buffer._offset;
  // UINT32 trailer
  // {
    //  0_11: word_count = CHECK_COUNT(tdc_start,tdc_end,4,4);
    // 12_23: event_id = CHECK(header.event_id);
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 3;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_S438_SUBTDC::__packer,uint32 tdc
                                                                     ,uint32 event_id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1290_S438.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438(geom)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1290_S438::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // UINT32 ucesb_separator
  // {
    //  0_04: geom = MATCH(geom);
    // 24_31: 76;
  // }
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._offset;
  // UINT32 header
  // {
    //  5_26: event_number;
    // 27_31: 8;
  // }
  // select several

    // tdc[0] = VME_CAEN_V1290_S438_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[1] = VME_CAEN_V1290_S438_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[2] = VME_CAEN_V1290_S438_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                        // data=data);
    // tdc[3] = VME_CAEN_V1290_S438_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                        // data=data);
  {
    PACK_DECL(1897,VME_CAEN_V1290_S438_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(1898,VME_CAEN_V1290_S438_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(1899,VME_CAEN_V1290_S438_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(1900,VME_CAEN_V1290_S438_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
  }
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._offset;
  // UINT32 trailer
  // {
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_S438::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1290_S438_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SHORT_SUBTDC(tdc,event_id,data)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1290_S438_SHORT_SUBTDC::__packer(__data_dest_t &__buffer,uint32 tdc
                                                                              ,uint32 event_id
                                                                              ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // UINT32 ch_data NOENCODE
  // {
    //  0_20: value;
    // 21_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 3) | channel_low)],(value=value));
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_S438_SHORT_SUBTDC::__packer,uint32 tdc
                                                                           ,uint32 event_id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR(tdc)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR::__packer(__data_dest_t &__buffer,uint32 tdc)
{
  // UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR::__packer,uint32 tdc);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1290_S438_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_S438_SHORT(geom)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1290_S438_SHORT::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._offset;
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  // select several

    // tdc[0] = VME_CAEN_V1290_S438_SHORT_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // tdc[1] = VME_CAEN_V1290_S438_SHORT_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // tdc[2] = VME_CAEN_V1290_S438_SHORT_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // tdc[3] = VME_CAEN_V1290_S438_SHORT_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                              // data=data);
    // norevisit err[0] = VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR(tdc=0);
    // norevisit err[1] = VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR(tdc=1);
    // norevisit err[2] = VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR(tdc=2);
    // norevisit err[3] = VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR(tdc=3);
  {
    PACK_DECL(1978,VME_CAEN_V1290_S438_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(1979,VME_CAEN_V1290_S438_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(1980,VME_CAEN_V1290_S438_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(1981,VME_CAEN_V1290_S438_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(1983,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
    PACK_DECL(1984,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
    PACK_DECL(1985,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
    PACK_DECL(1986,VME_CAEN_V1290_S438_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
  }
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._offset;
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_S438_SHORT::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1290_SHORT_SUBTDC.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SHORT_SUBTDC(tdc,event_id,data)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1290_SHORT_SUBTDC::__packer(__data_dest_t &__buffer,uint32 tdc
                                                                         ,uint32 event_id
                                                                         ,raw_array_multi_zero_suppress<DATA24,DATA24,32,128> &data)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // UINT32 ch_data NOENCODE
  // {
    //  0_20: value;
    // 21_23: channel_low;
    // 24_25: tdc = CHECK(tdc);
    //    26: trailing;
    // 27_31: 0;
    // ENCODE(data[((tdc << 3) | channel_low)],(value=value));
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_SHORT_SUBTDC::__packer,uint32 tdc
                                                                      ,uint32 event_id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1290_SHORT_SUBTDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SHORT_SUBTDC_ERROR(tdc)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1290_SHORT_SUBTDC_ERROR::__packer(__data_dest_t &__buffer,uint32 tdc)
{
  // UINT32 error_flags
  // {
    //  0_14: flags;
    // 24_25: tdc = CHECK(tdc);
    // 27_31: 4;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_SHORT_SUBTDC_ERROR::__packer,uint32 tdc);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1290_SHORT.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_SHORT(geom)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1290_SHORT::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(128));
  // MARK_COUNT(v1190_start);
  void *__mark_v1190_start = __buffer._offset;
  // UINT32 header
  // {
    //  0_04: geom = MATCH(geom);
    //  5_26: event_number;
    // 27_31: 8;
  // }
  // select several

    // tdc[0] = VME_CAEN_V1290_SHORT_SUBTDC(tdc=0,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // tdc[1] = VME_CAEN_V1290_SHORT_SUBTDC(tdc=1,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // tdc[2] = VME_CAEN_V1290_SHORT_SUBTDC(tdc=2,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // tdc[3] = VME_CAEN_V1290_SHORT_SUBTDC(tdc=3,event_id=(header.event_number & 0xfff),
                                         // data=data);
    // norevisit err[0] = VME_CAEN_V1290_SHORT_SUBTDC_ERROR(tdc=0);
    // norevisit err[1] = VME_CAEN_V1290_SHORT_SUBTDC_ERROR(tdc=1);
    // norevisit err[2] = VME_CAEN_V1290_SHORT_SUBTDC_ERROR(tdc=2);
    // norevisit err[3] = VME_CAEN_V1290_SHORT_SUBTDC_ERROR(tdc=3);
  {
    PACK_DECL(375,VME_CAEN_V1290_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(376,VME_CAEN_V1290_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(377,VME_CAEN_V1290_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(378,VME_CAEN_V1290_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(380,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
    PACK_DECL(381,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
    PACK_DECL(382,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
    PACK_DECL(383,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
  }
  // UINT32 trigger
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  // MARK_COUNT(v1190_end);
  void *__mark_v1190_end = __buffer._offset;
  // UINT32 trailer
  // {
    //  0_04: geom = CHECK(geom);
    //  5_19: word_count = CHECK_COUNT(v1190_start,v1190_end,4,4);
    //    24: tdc_error;
    //    25: buffer_overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V1290_SHORT::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V775.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V775(geom,crate)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V775::__packer(__data_dest_t &__buffer,uint32 geom,uint32 crate)
{
  // MEMBER(DATA12_OVERFLOW data[32] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  8_13: count;
    // 16_23: crate = MATCH(crate);
    // 24_26: 2;
    // 27_31: geom = MATCH(geom);
  // }
  // list(0<=index<header.count)

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_11: value;
      //    12: overflow;
      //    13: underflow;
      //    14: valid;
      // 16_20: channel;
      // 24_26: 0;
      // 27_31: geom = CHECK(geom);
      // ENCODE(data[channel],(value=value,overflow=overflow));
    // }
  }
  // UINT32 eob
  // {
    //  0_23: event_number;
    // 24_26: 4;
    // 27_31: geom = CHECK(geom);
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V775::__packer,uint32 geom,uint32 crate);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V830.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V830(geom)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V830::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_15: event_number;
    // 16_17: ts;
    // 18_23: count;
    //    26: 1;
    // 27_31: geom = MATCH(geom);
  // }
  // list(0<=index<header.count)

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_25: value;
      //    26: 0;
      // 27_31: channel;
      // ENCODE(data[channel],(value=value));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V830::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_GSI_VFTX2.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2(id)
template<typename __data_dest_t>
void PACKER_VME_GSI_VFTX2::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA12 time_fine[32] ZERO_SUPPRESS_MULTI(100));
  // MEMBER(DATA16 time_coarse[32] ZERO_SUPPRESS_MULTI(100));
  // MEMBER(DATA16 time_trigger);
  // UINT32 custom_header
  // {
    //  0_04: id = MATCH(id);
    //  5_08: internal_status;
    //  9_17: count;
    // 24_31: 171;
  // }
  // if((0 < custom_header.count))

  if ((0 < custom_header.count))
  {
    // UINT32 event_header
    // {
      //  0_07: 170;
      // 11_23: trigger_timestamp;
      // 29_30: 1;
      //    31: 1;
      // ENCODE(time_trigger,(value=trigger_timestamp));
    // }
  }
  // list(1<=index<custom_header.count)

  {
    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_29: channel;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_GSI_VFTX2::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_GSI_VFTX2_7PS.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_7PS(id)
template<typename __data_dest_t>
void PACKER_VME_GSI_VFTX2_7PS::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA12 time_fine[32] ZERO_SUPPRESS_MULTI(100));
  // MEMBER(DATA16 time_coarse[32] ZERO_SUPPRESS_MULTI(100));
  // MEMBER(DATA16 time_trigger);
  // UINT32 custom_header
  // {
    //  0_04: id = MATCH(id);
    //  5_08: internal_status;
    //  9_17: count;
    // 24_31: 171;
  // }
  // if((0 < custom_header.count))

  if ((0 < custom_header.count))
  {
    // UINT32 event_header NOENCODE
    // {
      //  0_07: 170;
      // 11_23: trigger_timestamp;
      // 29_30: 1;
      //    31: 1;
      // ENCODE(time_trigger,(value=trigger_timestamp));
    // }
  }
  // list(1<=index<custom_header.count)

  {
    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_29: channel;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_GSI_VFTX2_7PS::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_GSI_VFTX2_LT.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_LT(id)
template<typename __data_dest_t>
void PACKER_VME_GSI_VFTX2_LT::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA12 time_fine[64] ZERO_SUPPRESS_MULTI(100));
  // MEMBER(DATA16 time_coarse[64] ZERO_SUPPRESS_MULTI(100));
  // MEMBER(DATA16 time_trigger);
  // UINT32 custom_header
  // {
    //  0_04: id = MATCH(id);
    //  5_08: internal_status;
    //  9_17: count;
    // 24_31: 171;
  // }
  // if((0 < custom_header.count))

  if ((0 < custom_header.count))
  {
    // UINT32 event_header
    // {
      //  0_07: 170;
      // 11_23: trigger_timestamp;
      // 29_30: 1;
      //    31: 1;
      // ENCODE(time_trigger,(value=trigger_timestamp));
    // }
  }
  // list(1<=index<custom_header.count)

  {
    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_30: channel;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_GSI_VFTX2_LT::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_MESYTEC_MADC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MADC32(geom)
template<typename __data_dest_t>
void PACKER_VME_MESYTEC_MADC32::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA14_OVERFLOW data[32] ZERO_SUPPRESS);
  // MARK_COUNT(start);
  void *__mark_start = __buffer._offset;
  // UINT32 header NOENCODE
  // {
    //  0_11: word_number;
    // 12_14: adc_resol;
    //    15: out_form;
    // 16_23: geom = MATCH(geom);
    // 24_29: 0;
    // 30_31: 1;
  // }
  // several UINT32 ch_data NOENCODE
  // {
    //  0_12: value;
    //    14: outofrange;
    // 16_20: channel;
    // 21_29: 32;
    // 30_31: 0;
    // ENCODE(data[channel],(value=value,overflow=outofrange));
  // }
  // optional UINT32 filler NOENCODE
  // {
    //  0_31: 0;
  // }
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._offset;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_MESYTEC_MADC32::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_MESYTEC_MDPP16.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MDPP16(geom)
template<typename __data_dest_t>
void PACKER_VME_MESYTEC_MDPP16::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA16_OVERFLOW data[34] ZERO_SUPPRESS_MULTI(100));
  // MARK_COUNT(start);
  void *__mark_start = __buffer._offset;
  // UINT32 header NOENCODE
  // {
    //  0_09: word_number;
    // 10_12: adc_res;
    // 13_15: tdc_res;
    // 16_23: geom = MATCH(geom);
    // 24_29: 0;
    // 30_31: 1;
  // }
  // several UINT32 ch_data NOENCODE
  // {
    //  0_15: value;
    // 16_21: channel;
    //    22: overflow;
    //    23: pileup;
    // 24_27: 0;
    // 28_31: 1;
    // ENCODE(data[channel],(value=value,overflow=overflow,pileup=pileup));
  // }
  // several UINT32 fill_word NOENCODE
  // {
    //  0_31: 0;
  // }
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._offset;
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_MESYTEC_MDPP16::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_STRUCK_SIS3316.
 *
 * Do not edit - automatically generated.
 */

// VME_STRUCK_SIS3316(id)
template<typename __data_dest_t>
void PACKER_VME_STRUCK_SIS3316::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA16 data[2][900] ZERO_SUPPRESS);
  // MEMBER(DATA32 maw[2][3] ZERO_SUPPRESS);
  // MEMBER(DATA32 timeStamp[2][2] ZERO_SUPPRESS);
  // MEMBER(DATA32 gate[2][2] ZERO_SUPPRESS);
  // UINT32 header0
  // {
    //  0_15: chanNo;
    // 16_31: 0;
  // }
  // UINT32 header1
  // {
    //  0_03: format;
    //  4_15: channelID;
    // 16_31: timeS;
    // ENCODE(timeStamp[header0.chanNo][0],(value=timeS));
  // }
  // UINT32 header2
  // {
    //  0_31: timeS;
    // ENCODE(timeStamp[header0.chanNo][1],(value=timeS));
  // }
  // UINT32 gate7
  // {
    //  0_27: sum;
    // 28_31: 0;
    // ENCODE(gate[header0.chanNo][0],(value=sum));
  // }
  // UINT32 gate8
  // {
    //  0_27: sum;
    // 28_31: 0;
    // ENCODE(gate[header0.chanNo][1],(value=sum));
  // }
  // UINT32 maw1
  // {
    //  0_27: max;
    // 28_31: 0;
    // ENCODE(maw[header0.chanNo][0],(value=max));
  // }
  // UINT32 maw2
  // {
    //  0_27: after;
    // 28_31: 0;
    // ENCODE(maw[header0.chanNo][1],(value=after));
  // }
  // UINT32 maw3
  // {
    //  0_27: before;
    // 28_31: 0;
    // ENCODE(maw[header0.chanNo][2],(value=before));
  // }
  // UINT32 header3
  // {
    //  0_25: sampleLength;
    //    26: 0;
    //    27: mawFlag;
    // 28_31: 14;
  // }
  // list(0<=index<header3.sampleLength)

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_15: sample1;
      // 16_31: sample2;
      // ENCODE(data[header0.chanNo][(2 * index)],(value=sample1));
      // ENCODE(data[header0.chanNo][((2 * index) + 1)],(value=sample2));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_STRUCK_SIS3316::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for WR_MULTI.
 *
 * Do not edit - automatically generated.
 */

// WR_MULTI()
template<typename __data_dest_t>
void PACKER_WR_MULTI::__packer(__data_dest_t &__buffer)
{
  // MEMBER(DATA32 time_hi);
  // MEMBER(DATA32 time_lo);
  // UINT32 hi NOENCODE
  // {
    //  0_31: time;
    // ENCODE(time_hi,(value=time));
  // }
  // UINT32 lo NOENCODE
  // {
    //  0_31: time;
    // ENCODE(time_lo,(value=time));
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,WR_MULTI::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for LAND_CAMAC_CONVERTER.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_CONVERTER)
template<typename __data_dest_t>
void PACKER_LAND_CAMAC_CONVERTER::__packer(__data_dest_t &__buffer)
{
  // UINT16 tpat;
  // UINT16 tprev;
  // UINT16 tnext;
  // UINT16 tprev2;
  // if(EXTERNAL has_data)

  if (has_data())
  {
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_CONVERTER::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for LAND_CAMAC_SCALER.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_SCALER)
template<typename __data_dest_t>
void PACKER_LAND_CAMAC_SCALER::__packer(__data_dest_t &__buffer)
{
  // scaler0 = CAMAC_LECROY_4434(channels=32);
  PACK_DECL(927,CAMAC_LECROY_4434,scaler0,/*channels*/32);
  // scaler1 = CAMAC_LECROY_4434(channels=32);
  PACK_DECL(928,CAMAC_LECROY_4434,scaler1,/*channels*/32);
  // scaler2 = CAMAC_LECROY_4434(channels=32);
  PACK_DECL(929,CAMAC_LECROY_4434,scaler2,/*channels*/32);
  // scaler3 = SOFT_SCALER32(channels=16);
  PACK_DECL(931,SOFT_SCALER32,scaler3,/*channels*/16);
  // if(EXTERNAL has_timestamp)

  if (has_timestamp())
  {
    // UINT32 timestamp;
    // UINT32 endianess
    // {
      //  0_31: 0x87654321;
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_SCALER::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for LAND_CAMAC_START_STOP_STAMP.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_START_STOP_STAMP)
template<typename __data_dest_t>
void PACKER_LAND_CAMAC_START_STOP_STAMP::__packer(__data_dest_t &__buffer)
{
  // UINT32 timestamp;
  // UINT32 endianess
  // {
    //  0_31: 0x87654321;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_START_STOP_STAMP::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for LAND_CAMAC_TCAL_INFO.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_TCAL_INFO)
template<typename __data_dest_t>
void PACKER_LAND_CAMAC_TCAL_INFO::__packer(__data_dest_t &__buffer)
{
  // UINT32 info;
  // select several

    // rtcal = RANDOM_TCAL(id=231);
    // ntp = NTP_MESSAGE(id=239);
  {
    PACK_DECL(902,RANDOM_TCAL,rtcal,/*id*/231);
    PACK_DECL(903,NTP_MESSAGE,ntp,/*id*/239);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_TCAL_INFO::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TACQUILA_LAND_SUBEVENT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TACQUILA_LAND_SUBEVENT)
template<typename __data_dest_t>
void PACKER_TACQUILA_LAND_SUBEVENT::__packer(__data_dest_t &__buffer)
{
  // select several

    // data_sam5_gtb0 = TACQUILA_DATA(sam=5,gtb=0);
    // data_sam6_gtb0 = TACQUILA_DATA(sam=6,gtb=0);
    // data_sam6_gtb1 = TACQUILA_DATA(sam=6,gtb=1);
  {
    PACK_DECL(1131,TACQUILA_DATA,data_sam5_gtb0,/*sam*/5,/*gtb*/0);
    PACK_DECL(1132,TACQUILA_DATA,data_sam6_gtb0,/*sam*/6,/*gtb*/0);
    PACK_DECL(1133,TACQUILA_DATA,data_sam6_gtb1,/*sam*/6,/*gtb*/1);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,TACQUILA_LAND_SUBEVENT::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for califa_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(califa_subev)
template<typename __data_dest_t>
void PACKER_califa_subev::__packer(__data_dest_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x400);
  PACK_DECL(2473,TIMESTAMP_WHITERABBIT,ts,/*id*/0x400);
  // select several

    // dummy = DUMMY_WORD();
  {
    PACK_DECL(2475,DUMMY_WORD,dummy);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,califa_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for daq_status_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(daq_status_subev)
template<typename __data_dest_t>
void PACKER_daq_status_subev::__packer(__data_dest_t &__buffer)
{
  // status = DAQ_STATUS();
  PACK_DECL(2333,DAQ_STATUS,status);
}
FORCE_IMPL_DATA_SRC_FCN(void,daq_status_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for empty_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(empty_subev)
template<typename __data_dest_t>
void PACKER_empty_subev::__packer(__data_dest_t &__buffer)
{
}
FORCE_IMPL_DATA_SRC_FCN(void,empty_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for fiber_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fiber_subev)
template<typename __data_dest_t>
void PACKER_fiber_subev::__packer(__data_dest_t &__buffer)
{
  // evhe = FEBEX_EVENTHEADER();
  PACK_DECL(2385,FEBEX_EVENTHEADER,evhe);
  // select several

    // GFI0 = FEBEX_NOTRACE(sfp=0,card=0);
    // GFI1 = FEBEX_NOTRACE(sfp=0,card=1);
    // GFI2 = FEBEX_NOTRACE(sfp=0,card=2);
    // GFI3 = FEBEX_NOTRACE(sfp=0,card=3);
    // GFI4 = FEBEX_NOTRACE(sfp=0,card=4);
    // fi4[0] = FEBEX_NOTRACE(sfp=0,card=5);
    // fi4[1] = FEBEX_NOTRACE(sfp=0,card=6);
    // fi4[2] = FEBEX_NOTRACE(sfp=0,card=7);
    // fi4[3] = FEBEX_NOTRACE(sfp=0,card=8);
  {
    PACK_DECL(2387,FEBEX_NOTRACE,GFI0,/*sfp*/0,/*card*/0);
    PACK_DECL(2388,FEBEX_NOTRACE,GFI1,/*sfp*/0,/*card*/1);
    PACK_DECL(2389,FEBEX_NOTRACE,GFI2,/*sfp*/0,/*card*/2);
    PACK_DECL(2390,FEBEX_NOTRACE,GFI3,/*sfp*/0,/*card*/3);
    PACK_DECL(2391,FEBEX_NOTRACE,GFI4,/*sfp*/0,/*card*/4);
    PACK_DECL(2392,FEBEX_NOTRACE,fi4[0],/*sfp*/0,/*card*/5);
    PACK_DECL(2393,FEBEX_NOTRACE,fi4[1],/*sfp*/0,/*card*/6);
    PACK_DECL(2394,FEBEX_NOTRACE,fi4[2],/*sfp*/0,/*card*/7);
    PACK_DECL(2395,FEBEX_NOTRACE,fi4[3],/*sfp*/0,/*card*/8);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fiber_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for los_psp_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_psp_subev)
template<typename __data_dest_t>
void PACKER_los_psp_subev::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(2338,LAND_STD_VME,land_vme);
  // select several

    // vftx2_1 = VME_GSI_VFTX2_7PS(id=0);
    // vftx2_2 = VME_GSI_VFTX2_7PS(id=1);
    // madc32 = VME_MESYTEC_MADC32(geom=2);
  {
    PACK_DECL(2340,VME_GSI_VFTX2_7PS,vftx2_1,/*id*/0);
    PACK_DECL(2341,VME_GSI_VFTX2_7PS,vftx2_2,/*id*/1);
    PACK_DECL(2342,VME_MESYTEC_MADC32,madc32,/*geom*/2);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,los_psp_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for los_scaler_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_scaler_subev)
template<typename __data_dest_t>
void PACKER_los_scaler_subev::__packer(__data_dest_t &__buffer)
{
  // scaler = TRLO_SCALER(crate_id=1);
  PACK_DECL(2348,TRLO_SCALER,scaler,/*crate_id*/1);
}
FORCE_IMPL_DATA_SRC_FCN(void,los_scaler_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for mark_event_time.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(mark_event_time)
template<typename __data_dest_t>
void PACKER_mark_event_time::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(2324,LAND_STD_VME,land_vme);
  // select several

    // sampler_los = TRLO_SAMPLER(id=223);
    // sampler_cb_sum = TRLO_SAMPLER(id=215);
  {
    PACK_DECL(2326,TRLO_SAMPLER,sampler_los,/*id*/223);
    PACK_DECL(2327,TRLO_SAMPLER,sampler_cb_sum,/*id*/215);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,mark_event_time::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for mfi_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(mfi_subev)
template<typename __data_dest_t>
void PACKER_mfi_subev::__packer(__data_dest_t &__buffer)
{
  // select several

    // pads = NXYTER_PADDING();
    // data00 = NXYTER(gem=0,nxy=0);
    // data01 = NXYTER(gem=0,nxy=1);
    // data10 = NXYTER(gem=1,nxy=0);
    // data11 = NXYTER(gem=1,nxy=1);
    // data20 = NXYTER(gem=2,nxy=0);
    // data21 = NXYTER(gem=2,nxy=1);
    // data30 = NXYTER(gem=3,nxy=0);
    // data31 = NXYTER(gem=3,nxy=1);
  {
    PACK_DECL(2459,NXYTER_PADDING,pads);
    PACK_DECL(2460,NXYTER,data00,/*gem*/0,/*nxy*/0);
    PACK_DECL(2461,NXYTER,data01,/*gem*/0,/*nxy*/1);
    PACK_DECL(2462,NXYTER,data10,/*gem*/1,/*nxy*/0);
    PACK_DECL(2463,NXYTER,data11,/*gem*/1,/*nxy*/1);
    PACK_DECL(2464,NXYTER,data20,/*gem*/2,/*nxy*/0);
    PACK_DECL(2465,NXYTER,data21,/*gem*/2,/*nxy*/1);
    PACK_DECL(2466,NXYTER,data30,/*gem*/3,/*nxy*/0);
    PACK_DECL(2467,NXYTER,data31,/*gem*/3,/*nxy*/1);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,mfi_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for neuland_subevent.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(neuland_subevent)
template<typename __data_dest_t>
void PACKER_neuland_subevent::__packer(__data_dest_t &__buffer)
{
  // select several

    // data_sam5_gtb0 = TACQUILA_DATA_S438B(sam=5,gtb=0);
    // data_sam5_gtb1 = TACQUILA_DATA_S438B(sam=5,gtb=1);
    // data_sam6_gtb0 = TACQUILA_DATA_S438B(sam=6,gtb=0);
    // data_sam6_gtb1 = TACQUILA_DATA_S438B(sam=6,gtb=1);
    // data_sam7_gtb0 = TACQUILA_DATA_S438B(sam=7,gtb=0);
    // data_sam7_gtb1 = TACQUILA_DATA_S438B(sam=7,gtb=1);
  {
    PACK_DECL(2366,TACQUILA_DATA_S438B,data_sam5_gtb0,/*sam*/5,/*gtb*/0);
    PACK_DECL(2367,TACQUILA_DATA_S438B,data_sam5_gtb1,/*sam*/5,/*gtb*/1);
    PACK_DECL(2368,TACQUILA_DATA_S438B,data_sam6_gtb0,/*sam*/6,/*gtb*/0);
    PACK_DECL(2369,TACQUILA_DATA_S438B,data_sam6_gtb1,/*sam*/6,/*gtb*/1);
    PACK_DECL(2370,TACQUILA_DATA_S438B,data_sam7_gtb0,/*sam*/7,/*gtb*/0);
    PACK_DECL(2371,TACQUILA_DATA_S438B,data_sam7_gtb1,/*sam*/7,/*gtb*/1);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,neuland_subevent::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for neuland_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(neuland_tamex_subev)
template<typename __data_dest_t>
void PACKER_neuland_tamex_subev::__packer(__data_dest_t &__buffer)
{
  // UINT32 trigger_window
  // {
    //  0_10: ns_after_trigger;
    // 16_26: ns_before_trigger;
  // }
  // tamex[0] = TAMEX_CHANNEL(sfp=0,card=0);
  PACK_DECL(2429,TAMEX_CHANNEL,tamex[0],/*sfp*/0,/*card*/0);
  // tamex[1] = TAMEX_CHANNEL(sfp=0,card=1);
  PACK_DECL(2430,TAMEX_CHANNEL,tamex[1],/*sfp*/0,/*card*/1);
  // tamex[2] = TAMEX_CHANNEL(sfp=0,card=2);
  PACK_DECL(2431,TAMEX_CHANNEL,tamex[2],/*sfp*/0,/*card*/2);
  // tamex[3] = TAMEX_CHANNEL(sfp=0,card=3);
  PACK_DECL(2432,TAMEX_CHANNEL,tamex[3],/*sfp*/0,/*card*/3);
  // tamex[4] = TAMEX_CHANNEL(sfp=0,card=4);
  PACK_DECL(2433,TAMEX_CHANNEL,tamex[4],/*sfp*/0,/*card*/4);
  // tamex[5] = TAMEX_CHANNEL(sfp=0,card=5);
  PACK_DECL(2434,TAMEX_CHANNEL,tamex[5],/*sfp*/0,/*card*/5);
  // tamex[6] = TAMEX_CHANNEL(sfp=0,card=6);
  PACK_DECL(2435,TAMEX_CHANNEL,tamex[6],/*sfp*/0,/*card*/6);
  // tamex[7] = TAMEX_CHANNEL(sfp=0,card=7);
  PACK_DECL(2436,TAMEX_CHANNEL,tamex[7],/*sfp*/0,/*card*/7);
  // tamex[8] = TAMEX_CHANNEL(sfp=0,card=8);
  PACK_DECL(2437,TAMEX_CHANNEL,tamex[8],/*sfp*/0,/*card*/8);
  // tamex[9] = TAMEX_CHANNEL(sfp=0,card=9);
  PACK_DECL(2438,TAMEX_CHANNEL,tamex[9],/*sfp*/0,/*card*/9);
  // tamex[10] = TAMEX_CHANNEL(sfp=0,card=10);
  PACK_DECL(2439,TAMEX_CHANNEL,tamex[10],/*sfp*/0,/*card*/10);
  // tamex[11] = TAMEX_CHANNEL(sfp=0,card=11);
  PACK_DECL(2440,TAMEX_CHANNEL,tamex[11],/*sfp*/0,/*card*/11);
  // tamex[12] = TAMEX_CHANNEL(sfp=0,card=12);
  PACK_DECL(2441,TAMEX_CHANNEL,tamex[12],/*sfp*/0,/*card*/12);
}
FORCE_IMPL_DATA_SRC_FCN(void,neuland_tamex_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for psp_febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(psp_febex_subev)
template<typename __data_dest_t>
void PACKER_psp_febex_subev::__packer(__data_dest_t &__buffer)
{
  // eh = FEBEX_EVENTHEADER();
  PACK_DECL(2406,FEBEX_EVENTHEADER,eh);
  // select several

    // febex1 = FEBEX_NOTRACE(sfp=1,card=0);
    // febex2 = FEBEX_NOTRACE(sfp=1,card=1);
    // febex3 = FEBEX_NOTRACE(sfp=1,card=2);
    // febex4 = FEBEX_NOTRACE(sfp=1,card=3);
    // febex5 = FEBEX_NOTRACE(sfp=1,card=4);
    // febex6 = FEBEX_NOTRACE(sfp=1,card=5);
    // febex7 = FEBEX_NOTRACE(sfp=1,card=6);
    // febex8 = FEBEX_NOTRACE(sfp=1,card=7);
    // febex9 = FEBEX_NOTRACE(sfp=1,card=8);
    // febex10 = FEBEX_NOTRACE(sfp=1,card=9);
  {
    PACK_DECL(2409,FEBEX_NOTRACE,febex1,/*sfp*/1,/*card*/0);
    PACK_DECL(2410,FEBEX_NOTRACE,febex2,/*sfp*/1,/*card*/1);
    PACK_DECL(2411,FEBEX_NOTRACE,febex3,/*sfp*/1,/*card*/2);
    PACK_DECL(2412,FEBEX_NOTRACE,febex4,/*sfp*/1,/*card*/3);
    PACK_DECL(2413,FEBEX_NOTRACE,febex5,/*sfp*/1,/*card*/4);
    PACK_DECL(2414,FEBEX_NOTRACE,febex6,/*sfp*/1,/*card*/5);
    PACK_DECL(2415,FEBEX_NOTRACE,febex7,/*sfp*/1,/*card*/6);
    PACK_DECL(2416,FEBEX_NOTRACE,febex8,/*sfp*/1,/*card*/7);
    PACK_DECL(2417,FEBEX_NOTRACE,febex9,/*sfp*/1,/*card*/8);
    PACK_DECL(2418,FEBEX_NOTRACE,febex10,/*sfp*/1,/*card*/9);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,psp_febex_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for psp_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(psp_subev)
template<typename __data_dest_t>
void PACKER_psp_subev::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(2481,LAND_STD_VME,land_vme);
  // tridi_ts = TRIDI();
  PACK_DECL(2482,TRIDI,tridi_ts);
  // select several

    // sis3316_3 = SIS3316_ACTAR_S438(id=3);
    // sis3316_4 = SIS3316_ACTAR_S438(id=4);
    // sis3316_5 = SIS3316_ACTAR_S438(id=5);
    // sis3316_6 = SIS3316_ACTAR_S438(id=6);
    // sis3316_7 = SIS3316_ACTAR_S438(id=7);
    // sis3316_8 = SIS3316_ACTAR_S438(id=8);
  {
    PACK_DECL(2484,SIS3316_ACTAR_S438,sis3316_3,/*id*/3);
    PACK_DECL(2485,SIS3316_ACTAR_S438,sis3316_4,/*id*/4);
    PACK_DECL(2486,SIS3316_ACTAR_S438,sis3316_5,/*id*/5);
    PACK_DECL(2487,SIS3316_ACTAR_S438,sis3316_6,/*id*/6);
    PACK_DECL(2488,SIS3316_ACTAR_S438,sis3316_7,/*id*/7);
    PACK_DECL(2489,SIS3316_ACTAR_S438,sis3316_8,/*id*/8);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,psp_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for sit_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(sit_subev)
template<typename __data_dest_t>
void PACKER_sit_subev::__packer(__data_dest_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x200);
  PACK_DECL(2377,TIMESTAMP_WHITERABBIT,ts,/*id*/0x200);
  // select several

    // dummy = DUMMY_WORD();
  {
    PACK_DECL(2379,DUMMY_WORD,dummy);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,sit_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for tof13_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tof13_subev)
template<typename __data_dest_t>
void PACKER_tof13_subev::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(2353,LAND_STD_VME,land_vme);
  // select several

    // vftx2_1 = VME_GSI_VFTX2(id=0);
    // vftx2_2 = VME_GSI_VFTX2(id=1);
    // vftx2_3 = VME_GSI_VFTX2(id=2);
    // vftx2_4 = VME_GSI_VFTX2(id=3);
    // v1290_1 = VME_CAEN_V1290_S438(geom=4);
  {
    PACK_DECL(2355,VME_GSI_VFTX2,vftx2_1,/*id*/0);
    PACK_DECL(2356,VME_GSI_VFTX2,vftx2_2,/*id*/1);
    PACK_DECL(2357,VME_GSI_VFTX2,vftx2_3,/*id*/2);
    PACK_DECL(2358,VME_GSI_VFTX2,vftx2_4,/*id*/3);
    PACK_DECL(2359,VME_CAEN_V1290_S438,v1290_1,/*geom*/4);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,tof13_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for tof13_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tof13_tamex_subev)
template<typename __data_dest_t>
void PACKER_tof13_tamex_subev::__packer(__data_dest_t &__buffer)
{
  // UINT32 trigger_window
  // {
    //  0_10: ns_after_trigger;
    // 16_26: ns_before_trigger;
  // }
  // tamex[0] = TAMEX_CHANNEL(sfp=0,card=0);
  PACK_DECL(2451,TAMEX_CHANNEL,tamex[0],/*sfp*/0,/*card*/0);
  // tamex[1] = TAMEX_CHANNEL(sfp=0,card=1);
  PACK_DECL(2452,TAMEX_CHANNEL,tamex[1],/*sfp*/0,/*card*/1);
}
FORCE_IMPL_DATA_SRC_FCN(void,tof13_tamex_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for wr_100.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_100)
template<typename __data_dest_t>
void PACKER_wr_100::__packer(__data_dest_t &__buffer)
{
  // ts100 = TIMESTAMP_WHITERABBIT(id=0x100);
  PACK_DECL(2309,TIMESTAMP_WHITERABBIT,ts100,/*id*/0x100);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_100::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for wr_300.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_300)
template<typename __data_dest_t>
void PACKER_wr_300::__packer(__data_dest_t &__buffer)
{
  // ts300 = TIMESTAMP_WHITERABBIT(id=0x300);
  PACK_DECL(2314,TIMESTAMP_WHITERABBIT,ts300,/*id*/0x300);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_300::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for wr_500.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_500)
template<typename __data_dest_t>
void PACKER_wr_500::__packer(__data_dest_t &__buffer)
{
  // ts500 = TIMESTAMP_WHITERABBIT(id=0x500);
  PACK_DECL(2319,TIMESTAMP_WHITERABBIT,ts500,/*id*/0x500);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_500::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
  // master_ts = wr_100(type=10,subtype=1,control=1,subcrate=0);
  // event_time = mark_event_time(type=88,subtype=0x2260,control=1,subcrate=0);
  // daq_status = daq_status_subev(type=89,subtype=0x22c4,control=1,
                                // subcrate=2);
  // tpat_and_co = LAND_CAMAC_CONVERTER(type=34,subtype=0xc80,control=1,
                                     // subcrate=2);
  // scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c,control=1,subcrate=2);
  // neuland_tacq = neuland_subevent(type=94,subtype=0x24b8,control=3,
                                  // subcrate=0);
  // los_psp = los_psp_subev(type=88,subtype=0x2260,control=9,subcrate=1);
  // los_scaler = los_scaler_subev(type=34,subtype=0xce4,control=9,subcrate=1);
  // tof13 = tof13_subev(type=88,subtype=0x2260,control=9,subcrate=2);
  // sit = sit_subev(type=104,subtype=0x28a0,control=37,subcrate=0);
  // tbm_ts = wr_300(type=10,subtype=1,control=5,subcrate=4);
  // fiber = fiber_subev(type=100,subtype=0x2710,control=9,subcrate=0);
  // psp_febex = psp_febex_subev(type=100,subtype=0x2710,control=9,subcrate=1);
  // neuland_tamex = neuland_tamex_subev(type=102,subtype=0x27d8,control=9,
                                      // subcrate=0);
  // tof13_tamex = tof13_tamex_subev(type=102,subtype=0x27d8,control=9,
                                  // subcrate=1);
  // mfi = mfi_subev(type=97,subtype=0x25e4,control=9,subcrate=0);
  // califa = califa_subev(type=100,subtype=0x2710,control=9,subcrate=2);
  // psp_ts = wr_500(type=10,subtype=1,control=5,subcrate=0);
  // psp_struck = psp_subev(type=88,subtype=0x2260,control=5,subcrate=3);
  // empty_1 = empty_subev(type=10,subtype=1,control=9,subcrate=1);
  // empty_2 = empty_subev(type=10,subtype=1,control=9,subcrate=2);
{
}

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EVENT.
 *
 * Do not edit - automatically generated.
 */

// STICKY_EVENT
{
}

/** END_PACKER ********************************************************/
