/** BEGIN_PACKER *******************************************************
 *
 * Event packer for APV25_BLOCK.
 *
 * Do not edit - automatically generated.
 */

// APV25_BLOCK(dsp_no)
template<typename __data_dest_t>
void PACKER_APV25_BLOCK::__packer(__data_dest_t &__buffer,uint32 dsp_no)
{
  // MEMBER(DATA12_OVERFLOW d2[128] ZERO_SUPPRESS);
  // MEMBER(DATA12_OVERFLOW d3[128] ZERO_SUPPRESS);
  // UINT32 dsp_header
  // {
    //  0_15: count32;
    // 16_23: trigger_counter;
    // 24_31: dsp_no = MATCH(dsp_no);
  // }
  // UINT32 seh_ahw_header
  // {
    //     0: 0;
    //  1_11: count32;
    // 12_14: 0;
    //    15: dummy;
    // 16_23: se_trigger_counter = MATCH(dsp_header.trigger_counter);
    // 24_26: trigger_number;
    // 27_30: 0;
    //    31: has_data;
  // }
  // if(seh_ahw_header.count32)

  if (seh_ahw_header.count32)
  {
    // UINT32 first_ch_data NOENCODE
    // {
      //  0_11: adc_value;
      //    12: adc_id;
      //    13: 1;
      //    14: underflow;
      //    15: overflow;
      // 16_22: strip;
      //    23: 1;
      // 24_31: r;
    // }
    // if(first_ch_data.adc_id)

    // else

    if (first_ch_data.adc_id)
    {
      // ENCODE(d3[first_ch_data.strip],(value=first_ch_data.adc_value,
                                      // overflow=first_ch_data.overflow));

    }

    else
    {
      // ENCODE(d2[first_ch_data.strip],(value=first_ch_data.adc_value,
                                      // overflow=first_ch_data.overflow));

    }
    // list(1<=index<seh_ahw_header.count32)

    {
      // UINT32 ch_data NOENCODE
      // {
        //  0_11: adc_value;
        //    12: adc_id;
        //    13: 1;
        //    14: underflow;
        //    15: overflow;
        // 16_22: strip;
        //    23: 1;
        // 24_31: r = MATCH(first_ch_data.r);
      // }
      // if(ch_data.adc_id)

      // else

      if (ch_data.adc_id)
      {
        // ENCODE(d3[ch_data.strip],(value=ch_data.adc_value,overflow=ch_data.overflow));

      }

      else
      {
        // ENCODE(d2[ch_data.strip],(value=ch_data.adc_value,overflow=ch_data.overflow));

      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,APV25_BLOCK::__packer,uint32 dsp_no);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for CAMAC_LECROY_2277_1CH_HACK.
 *
 * Do not edit - automatically generated.
 */

// CAMAC_LECROY_2277_1CH_HACK(channel,edge,high_byte)
template<typename __data_dest_t>
void PACKER_CAMAC_LECROY_2277_1CH_HACK::__packer(__data_dest_t &__buffer,uint32 channel
                                                                        ,uint32 edge
                                                                        ,uint32 high_byte)
{
  // MEMBER(DATA16 data[16] NO_INDEX_LIST);
  // UINT32 ch_data NOENCODE
  // {
    //  0_15: value;
    //    16: edge = CHECK(edge);
    // 17_21: channel = CHECK(channel);
    // 24_31: high = CHECK(high_byte);
    // ENCODE(data APPEND_LIST,(value=value));
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CAMAC_LECROY_2277_1CH_HACK::__packer,uint32 channel
                                                                     ,uint32 edge
                                                                     ,uint32 high_byte);

/** END_PACKER ********************************************************/
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
 * Event packer for CROS3_REWRITE.
 *
 * Do not edit - automatically generated.
 */

// CROS3_REWRITE(ccb_id)
template<typename __data_dest_t>
void PACKER_CROS3_REWRITE::__packer(__data_dest_t &__buffer,uint32 ccb_id)
{
  // MEMBER(WIRE_START_END data[32768] ZERO_SUPPRESS);
  // UINT32 h1
  // {
    //  0_15: data_size;
    //    16: threshold_curve;
    //    17: leading_edge;
    //    18: data;
    // 20_23: trigger_time;
    // 24_27: ccb_id = MATCH(ccb_id);
    // 28_31: event_counter;
  // }
  // if(h1.data)

  // else

  if (h1.data)
  {
    // UINT32 h2
    // {
      //  0_01: read_out_mode;
      //     4: pulser_enabled;
      //  8_10: statistics;
      //    11: both_edges;
      // 12_19: slices;
      // 20_21: scale;
      //    31: odd_length16;
    // }
    // if(h1.leading_edge)

    // else

    if (h1.leading_edge)
    {
      // list(0<=index<static_cast<uint32>((h1.data_size - h2.odd_length16)))

      {
        // UINT32 ch_data NOENCODE
        // {
          //  0_07: start_slice1;
          //  8_15: wire1;
          // 16_23: start_slice2;
          // 24_31: wire2;
          // ENCODE(data[(index * 2)],(wire=wire1,start=start_slice1,stop=0));
          // ENCODE(data[((index * 2) + 1)],(wire=wire2,start=start_slice2,
                                          // stop=0));
        // }
      }
      // if(h2.odd_length16)

      if (h2.odd_length16)
      {
        // UINT32 ch_data_odd NOENCODE
        // {
          //  0_07: start_slice1;
          //  8_15: wire1;
          // 16_23: start_slice2 = CHECK(255);
          // 24_31: wire2 = CHECK(0);
          // ENCODE(data[((h1.data_size - 1) * 2)],(wire=wire1,start=start_slice1,
                                                 // stop=0));
        // }
      }
    }

    else
    {
      // list(0<=index<h1.data_size)

      {
        // UINT32 ch_data NOENCODE
        // {
          //  0_07: start_slice;
          //  8_15: wire;
          // 16_23: end_slice;
          // ENCODE(data[index],(wire=wire,start=start_slice,stop=end_slice));
        // }
      }
    }
  }

  else
  {
    // if(h1.threshold_curve)

    // else

    if (h1.threshold_curve)
    {
      // UINT32 trc_h2
      // {
        //  0_01: read_out_mode;
        //     4: pulser_enabled;
        //  8_10: statistics;
        //    11: both_edges;
        // 12_19: threshold_start;
        // 20_23: threshold_step;
        // 24_28: boards;
      // }
      // list(0<=board<trc_h2.boards)

      {
        // UINT32 trc_h3 NOENCODE
        // {
          //  0_07: test_pulser_even;
          //  8_15: test_pulser_odd;
          // 16_23: threshold_steps;
          // 28_31: ad_id;
        // }
        // list(0<=index_thr<trc_h3.threshold_steps)

        {
          // list(0<=index_wire2<8)

          {
            // UINT32 ch_counts NOENCODE
            // {
              //  0_11: counts1;
              // 12_15: wire1;
              // 16_27: counts2;
              // 28_31: wire2;
            // }
          }
        }
      }
    }

    else
    {
      // UINT32 dummy_h2 NOENCODE
      // {
        //  0_31: 0;
      // }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CROS3_REWRITE::__packer,uint32 ccb_id);

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
 * Event packer for EXTERNAL_DATA_INFO.
 *
 * Do not edit - automatically generated.
 */


/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EXT_CROS3.
 *
 * Do not edit - automatically generated.
 */


/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EXT_SST.
 *
 * Do not edit - automatically generated.
 */


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
  PACK_DECL(1136,NTP64_TIME,reftime);
  // origtime = NTP64_TIME();
  PACK_DECL(1137,NTP64_TIME,origtime);
  // rectime = NTP64_TIME();
  PACK_DECL(1138,NTP64_TIME,rectime);
  // tmittime = NTP64_TIME();
  PACK_DECL(1139,NTP64_TIME,tmittime);
  // rxtime = NTP64_TIME();
  PACK_DECL(1142,NTP64_TIME,rxtime);
  // if(header.quick_burst)

  if (header.quick_burst)
  {
    // orig2time = NTP64_TIME();
    PACK_DECL(1146,NTP64_TIME,orig2time);
    // rec2time = NTP64_TIME();
    PACK_DECL(1147,NTP64_TIME,rec2time);
    // tmit2time = NTP64_TIME();
    PACK_DECL(1148,NTP64_TIME,tmit2time);
    // rx2time = NTP64_TIME();
    PACK_DECL(1149,NTP64_TIME,rx2time);
  }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._offset;
  // CHECK_COUNT(header.word_count,start,end,0,4)
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,NTP_MESSAGE::__packer,uint32 id);

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
  PACK_DECL(1165,NTP64_TIME,before);
  // after = NTP64_TIME();
  PACK_DECL(1166,NTP64_TIME,after);
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
    PACK_DECL(1189,RANDOM_TCAL_TSTAMP_CLOCK,tstamp1);
  }
  // if(header.has_tstamp2)

  if (header.has_tstamp2)
  {
    // tstamp2 = RANDOM_TCAL_TSTAMP_CLOCK();
    PACK_DECL(1193,RANDOM_TCAL_TSTAMP_CLOCK,tstamp2);
  }
  // MARK_COUNT(end);
  void *__mark_end = __buffer._offset;
  // CHECK_COUNT(header.word_count,start,end,0,4)
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,RANDOM_TCAL::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for SIDEREM_BLOCK.
 *
 * Do not edit - automatically generated.
 */

// SIDEREM_BLOCK(sam,gtb,siderem)
template<typename __data_dest_t>
void PACKER_SIDEREM_BLOCK::__packer(__data_dest_t &__buffer,uint32 sam,uint32 gtb
                                                           ,uint32 siderem)
{
  // MEMBER(DATA12 data[4][512] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_11: count;
    // 12_15: local_event_counter;
    // 16_19: local_trigger;
    // 20_23: siderem = MATCH(siderem);
    // 24_27: gtb = MATCH(gtb);
    // 28_31: sam = MATCH(sam);
  // }
  // list(0<=index<header.count)

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_11: value;
      // 12_13: adc_no;
      // 16_24: channel;
      // 28_31: 15;
      // ENCODE(data[adc_no][channel],(value=value));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,SIDEREM_BLOCK::__packer,uint32 sam,uint32 gtb
                                                        ,uint32 siderem);

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
    PACK_DECL(492,VME_CAEN_V1190_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(493,VME_CAEN_V1190_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(494,VME_CAEN_V1190_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(495,VME_CAEN_V1190_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
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
    PACK_DECL(581,VME_CAEN_V1190_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(582,VME_CAEN_V1190_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(583,VME_CAEN_V1190_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(584,VME_CAEN_V1190_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(586,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
    PACK_DECL(587,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
    PACK_DECL(588,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
    PACK_DECL(589,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
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
    PACK_DECL(287,VME_CAEN_V1290_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(288,VME_CAEN_V1290_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(289,VME_CAEN_V1290_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(290,VME_CAEN_V1290_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
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
    PACK_DECL(376,VME_CAEN_V1290_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(377,VME_CAEN_V1290_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(378,VME_CAEN_V1290_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(379,VME_CAEN_V1290_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(381,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
    PACK_DECL(382,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
    PACK_DECL(383,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
    PACK_DECL(384,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
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
 * Event packer for CROS3_REWRITE_SUBEVENT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CROS3_REWRITE_SUBEVENT)
template<typename __data_dest_t>
void PACKER_CROS3_REWRITE_SUBEVENT::__packer(__data_dest_t &__buffer)
{
  // select several

    // norevisit ccb[0] = CROS3_REWRITE(ccb_id=1);
    // norevisit ccb[1] = CROS3_REWRITE(ccb_id=2);
  {
    PACK_DECL(1058,CROS3_REWRITE,ccb[0],/*ccb_id*/1);
    PACK_DECL(1059,CROS3_REWRITE,ccb[1],/*ccb_id*/2);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,CROS3_REWRITE_SUBEVENT::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for CROS3_SUBEVENT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CROS3_SUBEVENT)
template<typename __data_dest_t>
void PACKER_CROS3_SUBEVENT::__packer(__data_dest_t &__buffer)
{
  // select several

    // external norevisit ccb[0] = EXT_CROS3(ccb_id=1);
    // external norevisit ccb[1] = EXT_CROS3(ccb_id=2);
  {
    PACK_DECL(912,EXT_CROS3,ccb[0],/*ccb_id*/1);
    PACK_DECL(913,EXT_CROS3,ccb[1],/*ccb_id*/2);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,CROS3_SUBEVENT::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for DIAMOND_SUBEVENT.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(DIAMOND_SUBEVENT)
template<typename __data_dest_t>
void PACKER_DIAMOND_SUBEVENT::__packer(__data_dest_t &__buffer)
{
  // external subevent_info = EXTERNAL_DATA_INFO();
  PACK_DECL(841,EXTERNAL_DATA_INFO,subevent_info);
  // UINT32 dummy_header NOENCODE
  // {
    //  0_31: 0x54443041;
  // }
  // MARK(begin_tdc);
  begin_tdc = __buffer._offset;
  // select several

    // tdc = VME_CAEN_V775(geom=31,crate=0);
  {
    PACK_DECL(851,VME_CAEN_V775,tdc,/*geom*/31,/*crate*/0);
  }
  // MARK(end_tdc);
  end_tdc = __buffer._offset;
  // UINT32 dummy_footer NOENCODE
  // {
    //  0_31: 0x54443045;
  // }
  // UINT32 dummy_header_adc NOENCODE
  // {
    //  0_31: 0x41443041;
  // }
  // MARK(begin_adc);
  begin_adc = __buffer._offset;
  // select several

    // adc = VME_CAEN_V775(geom=31,crate=0);
  {
    PACK_DECL(867,VME_CAEN_V775,adc,/*geom*/31,/*crate*/0);
  }
  // MARK(end_adc);
  end_adc = __buffer._offset;
  // UINT32 dummy_footer_adc NOENCODE
  // {
    //  0_31: 0x41443045;
  // }
  // UINT32 dummy_header_apv NOENCODE
  // {
    //  0_31: 0x41505641;
  // }
  // MARK(begin_apv25);
  begin_apv25 = __buffer._offset;
  // select several

    // apv25 = APV25_BLOCK(dsp_no=48);
  {
    PACK_DECL(883,APV25_BLOCK,apv25,/*dsp_no*/48);
  }
  // MARK(end_apv25);
  end_apv25 = __buffer._offset;
  // UINT32 dummy_footer_apv NOENCODE
  // {
    //  0_31: 0x41505645;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,DIAMOND_SUBEVENT::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for DIAMOND_VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(DIAMOND_VME)
template<typename __data_dest_t>
void PACKER_DIAMOND_VME::__packer(__data_dest_t &__buffer)
{
  // vme = LAND_STD_VME();
  PACK_DECL(894,LAND_STD_VME,vme);
  // select several

    // tdc = VME_CAEN_V775(geom=28,crate=0);
    // adc = VME_CAEN_V775(geom=31,crate=0);
    // apv25 = APV25_BLOCK(dsp_no=48);
  {
    PACK_DECL(898,VME_CAEN_V775,tdc,/*geom*/28,/*crate*/0);
    PACK_DECL(899,VME_CAEN_V775,adc,/*geom*/31,/*crate*/0);
    PACK_DECL(900,APV25_BLOCK,apv25,/*dsp_no*/48);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,DIAMOND_VME::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for DUMMY.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(DUMMY)
template<typename __data_dest_t>
void PACKER_DUMMY::__packer(__data_dest_t &__buffer)
{
  // select several

    // d = DUMMY_WORD();
  {
    PACK_DECL(1466,DUMMY_WORD,d);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,DUMMY::__packer);

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
    // aPHI14829 = CAMAC_PHILLIPS_7164(channels=16,mark_channel_no=1);
    PACK_DECL(1078,CAMAC_PHILLIPS_7164,aPHI14829,/*channels*/16,/*mark_channel_no*/1);
    // qSIA0429 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    PACK_DECL(1079,CAMAC_SILENA_4418,qSIA0429,/*channels*/8,/*mark_channel_no*/0);
    // qSIA0480 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    PACK_DECL(1080,CAMAC_SILENA_4418,qSIA0480,/*channels*/8,/*mark_channel_no*/0);
    // tSIA0400 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    PACK_DECL(1081,CAMAC_SILENA_4418,tSIA0400,/*channels*/8,/*mark_channel_no*/0);
    // tC_FRS120 = CAMAC_SILENA_4418(channels=6,mark_channel_no=0);
    PACK_DECL(1082,CAMAC_SILENA_4418,tC_FRS120,/*channels*/6,/*mark_channel_no*/0);
    // tSIA0426 = CAMAC_SILENA_4418(channels=4,mark_channel_no=0);
    PACK_DECL(1083,CAMAC_SILENA_4418,tSIA0426,/*channels*/4,/*mark_channel_no*/0);
    // qSIA0458 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    PACK_DECL(1084,CAMAC_SILENA_4418,qSIA0458,/*channels*/8,/*mark_channel_no*/0);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_CONVERTER::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for LAND_CAMAC_PILEUP.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_CAMAC_PILEUP)
template<typename __data_dest_t>
void PACKER_LAND_CAMAC_PILEUP::__packer(__data_dest_t &__buffer)
{
  // select several

    // tdc = CAMAC_LECROY_2277_1CH_HACK(channel=0,edge=1,high_byte=0);
    // tcal = CAMAC_LECROY_2277_1CH_HACK(channel=1,edge=1,high_byte=0);
  {
    PACK_DECL(1280,CAMAC_LECROY_2277_1CH_HACK,tdc,/*channel*/0,/*edge*/1,/*high_byte*/0);
    PACK_DECL(1282,CAMAC_LECROY_2277_1CH_HACK,tcal,/*channel*/1,/*edge*/1,/*high_byte*/0);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_PILEUP::__packer);

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
  PACK_DECL(1233,CAMAC_LECROY_4434,scaler0,/*channels*/32);
  // scaler1 = CAMAC_LECROY_4434(channels=32);
  PACK_DECL(1234,CAMAC_LECROY_4434,scaler1,/*channels*/32);
  // scaler2 = CAMAC_LECROY_4434(channels=32);
  PACK_DECL(1235,CAMAC_LECROY_4434,scaler2,/*channels*/32);
  // scaler3 = SOFT_SCALER32(channels=16);
  PACK_DECL(1237,SOFT_SCALER32,scaler3,/*channels*/16);
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
    PACK_DECL(1208,RANDOM_TCAL,rtcal,/*id*/231);
    PACK_DECL(1209,NTP_MESSAGE,ntp,/*id*/239);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_CAMAC_TCAL_INFO::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for LAND_FASTBUS1.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_FASTBUS1)
template<typename __data_dest_t>
void PACKER_LAND_FASTBUS1::__packer(__data_dest_t &__buffer)
{
  // select several

    // Q47342 = FASTBUS_LECROY_1885(geom=7,channels=96);
    // Q11111 = FASTBUS_LECROY_1885(geom=8,channels=96);
    // Q46848 = FASTBUS_LECROY_1885(geom=10,channels=96);
    // Q47315 = FASTBUS_LECROY_1885(geom=11,channels=96);
    // Q17320 = FASTBUS_LECROY_1885(geom=13,channels=96);
    // Q15372 = FASTBUS_LECROY_1885(geom=15,channels=96);
    // Q46962 = FASTBUS_LECROY_1885(geom=16,channels=96);
    // Q46993 = FASTBUS_LECROY_1885(geom=18,channels=96);
    // Q15358 = FASTBUS_LECROY_1885(geom=20,channels=96);
    // Q47264 = FASTBUS_LECROY_1885(geom=23,channels=96);
    // T81855 = FASTBUS_LECROY_1875(geom=3,channels=64);
    // T87044 = FASTBUS_LECROY_1875(geom=4,channels=64);
    // T87024 = FASTBUS_LECROY_1875(geom=5,channels=64);
    // T81800 = FASTBUS_LECROY_1875(geom=6,channels=64);
  {
    PACK_DECL(1333,FASTBUS_LECROY_1885,Q47342,/*geom*/7,/*channels*/96);
    PACK_DECL(1334,FASTBUS_LECROY_1885,Q11111,/*geom*/8,/*channels*/96);
    PACK_DECL(1335,FASTBUS_LECROY_1885,Q46848,/*geom*/10,/*channels*/96);
    PACK_DECL(1336,FASTBUS_LECROY_1885,Q47315,/*geom*/11,/*channels*/96);
    PACK_DECL(1337,FASTBUS_LECROY_1885,Q17320,/*geom*/13,/*channels*/96);
    PACK_DECL(1338,FASTBUS_LECROY_1885,Q15372,/*geom*/15,/*channels*/96);
    PACK_DECL(1339,FASTBUS_LECROY_1885,Q46962,/*geom*/16,/*channels*/96);
    PACK_DECL(1340,FASTBUS_LECROY_1885,Q46993,/*geom*/18,/*channels*/96);
    PACK_DECL(1341,FASTBUS_LECROY_1885,Q15358,/*geom*/20,/*channels*/96);
    PACK_DECL(1342,FASTBUS_LECROY_1885,Q47264,/*geom*/23,/*channels*/96);
    PACK_DECL(1343,FASTBUS_LECROY_1875,T81855,/*geom*/3,/*channels*/64);
    PACK_DECL(1344,FASTBUS_LECROY_1875,T87044,/*geom*/4,/*channels*/64);
    PACK_DECL(1345,FASTBUS_LECROY_1875,T87024,/*geom*/5,/*channels*/64);
    PACK_DECL(1346,FASTBUS_LECROY_1875,T81800,/*geom*/6,/*channels*/64);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_FASTBUS1::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for LAND_FASTBUS2.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_FASTBUS2)
template<typename __data_dest_t>
void PACKER_LAND_FASTBUS2::__packer(__data_dest_t &__buffer)
{
  // select several

    // Q75266 = FASTBUS_LECROY_1885(geom=17,channels=96);
    // T87047 = FASTBUS_LECROY_1875(geom=1,channels=64);
    // T48854 = FASTBUS_LECROY_1875(geom=2,channels=64);
    // T81808 = FASTBUS_LECROY_1875(geom=3,channels=64);
    // T81859 = FASTBUS_LECROY_1875(geom=4,channels=64);
    // T81795 = FASTBUS_LECROY_1875(geom=5,channels=64);
    // T81806 = FASTBUS_LECROY_1875(geom=6,channels=64);
    // T48834 = FASTBUS_LECROY_1875(geom=7,channels=64);
  {
    PACK_DECL(1361,FASTBUS_LECROY_1885,Q75266,/*geom*/17,/*channels*/96);
    PACK_DECL(1362,FASTBUS_LECROY_1875,T87047,/*geom*/1,/*channels*/64);
    PACK_DECL(1363,FASTBUS_LECROY_1875,T48854,/*geom*/2,/*channels*/64);
    PACK_DECL(1364,FASTBUS_LECROY_1875,T81808,/*geom*/3,/*channels*/64);
    PACK_DECL(1365,FASTBUS_LECROY_1875,T81859,/*geom*/4,/*channels*/64);
    PACK_DECL(1366,FASTBUS_LECROY_1875,T81795,/*geom*/5,/*channels*/64);
    PACK_DECL(1367,FASTBUS_LECROY_1875,T81806,/*geom*/6,/*channels*/64);
    PACK_DECL(1368,FASTBUS_LECROY_1875,T48834,/*geom*/7,/*channels*/64);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_FASTBUS2::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for LAND_FASTBUS_ERROR.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_FASTBUS_ERROR)
template<typename __data_dest_t>
void PACKER_LAND_FASTBUS_ERROR::__packer(__data_dest_t &__buffer)
{
  // UINT32 error_code
  // {
    //     0: timeout_waiting_smi;
    //     1: illegal_block_transfer;
    //     2: fifa_address_overflow;
    //     3: fifa_register_error;
    //    16: init_error;
  // }
  // UINT32 error_num;
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_FASTBUS_ERROR::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for LAND_FASTBUS_ERROR_NGF.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_FASTBUS_ERROR_NGF)
template<typename __data_dest_t>
void PACKER_LAND_FASTBUS_ERROR_NGF::__packer(__data_dest_t &__buffer)
{
  // UINT32 magic
  // {
    //  0_31: 0x10000000;
  // }
  // UINT32 error_code
  // {
    //     0: error;
    //     1: uninitialized;
    //     2: ss1;
    //     3: wc;
    //     4: mid;
    //     5: fifo_empty;
    //     6: fifo_not_empty;
    //     7: not_finished;
    //     8: bad_end_addr;
    //     9: word_lost;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_FASTBUS_ERROR_NGF::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for LAND_VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(LAND_VME)
template<typename __data_dest_t>
void PACKER_LAND_VME::__packer(__data_dest_t &__buffer)
{
  // vme = LAND_STD_VME();
  PACK_DECL(1438,LAND_STD_VME,vme);
  // select several

    // tCAEN0614 = VME_CAEN_V775(geom=16,crate=130);
    // qCAEN0472 = VME_CAEN_V775(geom=0,crate=1);
    // scaler[0] = VME_CAEN_V830(geom=30);
    // scaler[1] = VME_CAEN_V830(geom=31);
    // rtcal = RANDOM_TCAL(id=231);
    // ntp = NTP_MESSAGE(id=239);
  {
    PACK_DECL(1443,VME_CAEN_V775,tCAEN0614,/*geom*/16,/*crate*/130);
    PACK_DECL(1445,VME_CAEN_V775,qCAEN0472,/*geom*/0,/*crate*/1);
    PACK_DECL(1446,VME_CAEN_V830,scaler[0],/*geom*/30);
    PACK_DECL(1447,VME_CAEN_V830,scaler[1],/*geom*/31);
    PACK_DECL(1449,RANDOM_TCAL,rtcal,/*id*/231);
    PACK_DECL(1450,NTP_MESSAGE,ntp,/*id*/239);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,LAND_VME::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for SIDEREM01_VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(SIDEREM01_VME)
template<typename __data_dest_t>
void PACKER_SIDEREM01_VME::__packer(__data_dest_t &__buffer)
{
  // select several

    // external sst[0] = EXT_SST(siderem=1,gtb=0,sam=5,branch=1);
    // external sst[1] = EXT_SST(siderem=1,gtb=1,sam=5,branch=1);
  {
    PACK_DECL(746,EXT_SST,sst[0],/*sam*/5,/*gtb*/0,/*siderem*/1,/*branch*/1);
    PACK_DECL(748,EXT_SST,sst[1],/*sam*/5,/*gtb*/1,/*siderem*/1,/*branch*/1);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,SIDEREM01_VME::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
  // cros3 = CROS3_SUBEVENT(type=85,subtype=0x2134);
  // cros3_rewrite = CROS3_REWRITE_SUBEVENT(type=85,subtype=0x213e);
  // diamond = DIAMOND_SUBEVENT(type=91,subtype=0x238c);
  // sst1 = SIDEREM01_VME(type=82,subtype=0x2008,control=3);
  // camac = LAND_CAMAC_CONVERTER(type=34,subtype=0xc80);
  // fastbus1 = LAND_FASTBUS1(type=32,subtype=0xc3a,subcrate=1);
  // fastbus2 = LAND_FASTBUS2(type=32,subtype=0xc3a,subcrate=2);
  // acq = DUMMY(type=35,subtype=0xc1c);
  // vme = LAND_VME(type=88,subtype=0x2260,control=5,subcrate=0);
  // vme_diamond = DIAMOND_VME(type=88,subtype=0x2260,subcrate=1);
  // camac_tcal_info = LAND_CAMAC_TCAL_INFO(type=0x26ce,subtype=0xc7f);
  // camac_scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c);
  // fastbus1_error = LAND_FASTBUS_ERROR_NGF(type=31,subtype=0xc3b,subcrate=1);
  // fastbus2_error = LAND_FASTBUS_ERROR_NGF(type=31,subtype=0xc3b,subcrate=2);
  // pileup = LAND_CAMAC_PILEUP(type=34,subtype=0xdac,control=1);
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
