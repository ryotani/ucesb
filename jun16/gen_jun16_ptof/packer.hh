/** BEGIN_PACKER *******************************************************
 *
 * Event packer for BARRIER.
 *
 * Do not edit - automatically generated.
 */

// BARRIER()
template<typename __data_dest_t>
void PACKER_BARRIER::__packer(__data_dest_t &__buffer)
{
  // UINT32 barrier
  // {
    //  0_31: 0xbabababa;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,BARRIER::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FEBEX_BAD_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_BAD_EVENTHEADER()
template<typename __data_dest_t>
void PACKER_FEBEX_BAD_EVENTHEADER::__packer(__data_dest_t &__buffer)
{
  // UINT32 badbad
  // {
    //  0_31: 0xbad00bad;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_BAD_EVENTHEADER::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FEBEX_GOOD_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_GOOD_EVENTHEADER()
template<typename __data_dest_t>
void PACKER_FEBEX_GOOD_EVENTHEADER::__packer(__data_dest_t &__buffer)
{
  // UINT32 febexcards
  // {
    //  0_07: n_febex_sfp0 = RANGE(0,64);
    //  8_15: n_febex_sfp1 = RANGE(0,64);
    // 16_23: n_febex_sfp2 = RANGE(0,64);
    // 24_31: n_febex_sfp3 = RANGE(0,64);
  // }
  // UINT32 trig_length
  // {
    //  0_15: trace_length;
    // 16_31: trigger_delay;
  // }
  // UINT32 energy_filter
  // {
    //  0_10: sum_b;
    // 11_20: gap;
    // 21_31: sum_a;
  // }
  // UINT32 polarity1
  // {
    //  0_31: pola;
  // }
  // UINT32 polarity2
  // {
    //  0_31: pola;
  // }
  // UINT32 polarity3
  // {
    //  0_31: pola;
  // }
  // UINT32 polarity4
  // {
    //  0_31: pola;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_GOOD_EVENTHEADER::__packer);

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
  // select

    // good = FEBEX_GOOD_EVENTHEADER();
    // bad = FEBEX_BAD_EVENTHEADER();
  {
    PACK_DECL(66,FEBEX_GOOD_EVENTHEADER,good);
    PACK_DECL(67,FEBEX_BAD_EVENTHEADER,bad);
  }
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
  // MEMBER(DATA8 n_hit[16]);
  // MEMBER(DATA12 t[16] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA32 e[16] ZERO_SUPPRESS_MULTI(32));
  // UINT32 indicator NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: 255;
  // }
  // UINT32 data_size NOENCODE
  // {
    //  0_31: size;
  // }
  // UINT32 head NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 175;
  // }
  // UINT32 triggertime NOENCODE
  // {
    //  0_31: trigger_time;
  // }
  // UINT32 time NOENCODE
  // {
    //  0_31: time;
  // }
  // list(0<=i<((data_size.size - 16) >> 3))

  {
    // UINT32 time NOENCODE
    // {
      //  0_10: time;
      // 11_14: unused1;
      //    15: sign;
      // 16_19: unused2;
      // 20_23: multi_hit;
      // 24_27: n_hit;
      // 28_31: channel_id;
      // ENCODE(t[channel_id],(value=((time | (sign << 11)) & 0xfff)));
      // ENCODE(n_hit[channel_id],(value=n_hit));
    // }
    // UINT32 energy NOENCODE
    // {
      //  0_21: energy;
      //    22: unused1;
      //    23: sign;
      // 24_27: unused2;
      // 28_31: channel_id;
      // ENCODE(e[channel_id],(value=(energy | (sign << 23))));
    // }
  }
  // UINT32 trailer NOENCODE
  // {
    //  0_23: unused;
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
 * Event packer for FEBEX_TRACE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_TRACE(sfp,card)
template<typename __data_dest_t>
void PACKER_FEBEX_TRACE::__packer(__data_dest_t &__buffer,uint32 sfp,uint32 card)
{
  // MEMBER(DATA32 trace_length[16] ZERO_SUPPRESS);
  // MEMBER(DATA16 trace[16][1000] ZERO_SUPPRESS);
  // MEMBER(DATA32 filter[16][1000] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: channel_id = RANGE(0,254);
  // }
  // UINT32 trace_size NOENCODE
  // {
    //  0_31: size;
    // ENCODE(trace_length[header.channel_id],(value=((size / 2) - 4)));
  // }
  // UINT32 trace_header NOENCODE
  // {
    //  0_17: notused1;
    //    18: filter_mode;
    //    19: filter_onoff;
    // 20_22: notused2;
    //    23: adc_type;
    // 24_31: 170;
  // }
  // if((trace_header.filter_onoff == 0))

  // else

  if ((trace_header.filter_onoff == 0))
  {
    // list(0<=i<((trace_size.size / 4) - 2))

    {
      // UINT32 channel_trace NOENCODE
      // {
        //  0_13: data1;
        // 14_15: nik_knows;
        // 16_29: data2;
        // 30_31: nik_knows2;
        // ENCODE(trace[header.channel_id][((2 * i) + 0)],(value=data1));
        // ENCODE(trace[header.channel_id][((2 * i) + 1)],(value=data2));
      // }
    }
  }

  else
  {
    // list(0<=i<((trace_size.size / 8) - 1))

    {
      // UINT32 channel_trace NOENCODE
      // {
        //  0_13: data1;
        // 14_31: nik_knows;
        // ENCODE(trace[header.channel_id][i],(value=data1));
      // }
      // UINT32 channel_filter NOENCODE
      // {
        //  0_22: data1;
        //    23: sign;
        // 24_31: nik_knows2;
        // ENCODE(filter[header.channel_id][i],(value=(data1 * (1 - (2 * sign)))));
      // }
    }
  }
  // UINT32 trace_trailer NOENCODE
  // {
    //  0_23: notused;
    // 24_31: 187;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FEBEX_TRACE::__packer,uint32 sfp,uint32 card);

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
 * Event packer for SCALER.
 *
 * Do not edit - automatically generated.
 */

// SCALER()
template<typename __data_dest_t>
void PACKER_SCALER::__packer(__data_dest_t &__buffer)
{
  // UINT32 scaler;
}
FORCE_IMPL_DATA_SRC_FCN(void,SCALER::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TAMEX3_HEADER.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_HEADER()
template<typename __data_dest_t>
void PACKER_TAMEX3_HEADER::__packer(__data_dest_t &__buffer)
{
  // UINT32 trigger_window
  // {
    //  0_15: post_trig_ns;
    // 16_31: pre_trig_ns;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,TAMEX3_HEADER::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TAMEX3_PADDING.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_PADDING()
template<typename __data_dest_t>
void PACKER_TAMEX3_PADDING::__packer(__data_dest_t &__buffer)
{
  // UINT32 padding NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,TAMEX3_PADDING::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TAMEX3_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_SFP(sfp,card)
template<typename __data_dest_t>
void PACKER_TAMEX3_SFP::__packer(__data_dest_t &__buffer,uint32 sfp,uint32 card)
{
  // MEMBER(DATA16 time_coarse[34] ZERO_SUPPRESS_MULTI(200));
  // MEMBER(DATA12 time_fine[34] ZERO_SUPPRESS_MULTI(200));
  // UINT32 indicator NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: 0;
  // }
  // MATCH_END;
  // UINT32 data_size NOENCODE
  // {
    //  0_31: bytes;
  // }
  // UINT32 tdc_header NOENCODE
  // {
    //  0_15: lec;
    //    16: buf_no;
    // 17_19: reserved;
    // 20_23: trigger_type;
    // 24_31: 170;
  // }
  // list(0<=i<((data_size.bytes / 4) - 3))

  {
    // UINT32 data NOENCODE
    // {
      //  0_10: coarse;
      //    11: is_leading;
      // 12_21: fine;
      // 22_28: channel_index;
      // 29_31: type;
      // ENCODE(time_coarse[(((4 <= type) * channel_index) + ((4 > type) * 33))],(value=coarse));
      // ENCODE(time_fine[(((4 <= type) * channel_index) + ((4 > type) * 33))],(value=fine));
    // }
  }
  // UINT32 error_bits NOENCODE
  // {
    //  0_23: bits;
    // 24_31: 238;
  // }
  // UINT32 trailer NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 187;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX3_SFP::__packer,uint32 sfp,uint32 card);

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
 * Event packer for TRLOII_LMU_SCALERS.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_LMU_SCALERS(id)
template<typename __data_dest_t>
void PACKER_TRLOII_LMU_SCALERS::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 before_lmu[63] ZERO_SUPPRESS);
  // MEMBER(DATA32 before_lmu_mux[31] ZERO_SUPPRESS);
  // MEMBER(DATA32 before_lmu_aux[31] ZERO_SUPPRESS);
  // MEMBER(DATA32 before_dt[127] ZERO_SUPPRESS);
  // MEMBER(DATA32 after_dt[127] ZERO_SUPPRESS);
  // MEMBER(DATA32 after_reduction[127] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_05: before_lmu;
    //  6_10: before_lmu_mux;
    // 11_15: before_lmu_aux;
    // 16_23: after_lmu;
    // 24_31: id = MATCH(id);
  // }
  // list(0<=i<header.before_lmu)

  {
    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu[i],(value=value));
    // }
  }
  // list(0<=i<header.before_lmu_mux)

  {
    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_mux[i],(value=value));
    // }
  }
  // list(0<=i<header.before_lmu_aux)

  {
    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_aux[i],(value=value));
    // }
  }
  // list(0<=i<header.after_lmu)

  {
    // UINT32 scaler_bdt NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_dt[i],(value=value));
    // }
    // UINT32 scaler_adt NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_dt[i],(value=value));
    // }
    // UINT32 scaler_ard NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_reduction[i],(value=value));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_LMU_SCALERS::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TRLOII_SAMPLER.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER(mark)
template<typename __data_dest_t>
void PACKER_TRLOII_SAMPLER::__packer(__data_dest_t &__buffer,uint32 mark)
{
  // MEMBER(DATA32 sampler[512] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_09: word_num;
    //    10: overflow;
    // 16_31: mark = MATCH(mark);
  // }
  // list(0<=index<header.word_num)

  {
    // UINT32 time_lo NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler[index],(value=time));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_SAMPLER::__packer,uint32 mark);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TRLOII_SAMPLER_TWO.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER_TWO(mark)
template<typename __data_dest_t>
void PACKER_TRLOII_SAMPLER_TWO::__packer(__data_dest_t &__buffer,uint32 mark)
{
  // MEMBER(DATA32 sampler_hi[512] ZERO_SUPPRESS);
  // MEMBER(DATA32 sampler_lo[512] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_09: word_num;
    //    10: overflow;
    // 16_31: mark = MATCH(mark);
  // }
  // list(0<=index<(header.word_num / 2))

  {
    // UINT32 time_lo NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler_lo[index],(value=time));
    // }
    // UINT32 time_hi NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler_hi[index],(value=time));
    // }
  }
  // if(((header.word_num % 2) == 1))

  if (((header.word_num % 2) == 1))
  {
    // UINT32 last_word NOENCODE;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_SAMPLER_TWO::__packer,uint32 mark);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TRLOII_TPAT.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_TPAT(id)
template<typename __data_dest_t>
void PACKER_TRLOII_TPAT::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 n);
  // MEMBER(DATA16 tpat[170] NO_INDEX_LIST);
  // MEMBER(DATA8 trig[170] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_lo[170] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_hi[170] NO_INDEX_LIST);
  // UINT32 header NOENCODE
  // {
    //  0_11: uint32_num;
    // 12_23: event_num;
    // 24_31: id = MATCH(id);
    // ENCODE(n,(value=(uint32_num / 3)));
  // }
  // list(0<=index<(header.uint32_num / 3))

  {
    // UINT32 time_lo NOENCODE
    // {
      //  0_31: t;
      // ENCODE(ts_lo APPEND_LIST,(value=t));
    // }
    // UINT32 time_hi NOENCODE
    // {
      //  0_30: t;
      //    31: overflow;
      // ENCODE(ts_hi APPEND_LIST,(value=t));
    // }
    // UINT32 trigger NOENCODE
    // {
      //  0_15: tpat;
      // 16_23: dunno;
      // 24_27: encoded;
      // 28_31: lec;
      // ENCODE(tpat APPEND_LIST,(value=tpat));
      // ENCODE(trig APPEND_LIST,(value=encoded));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_TPAT::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VFTX2_STATUS.
 *
 * Do not edit - automatically generated.
 */

// VFTX2_STATUS()
template<typename __data_dest_t>
void PACKER_VFTX2_STATUS::__packer(__data_dest_t &__buffer)
{
  // UINT32 status;
}
FORCE_IMPL_DATA_SRC_FCN(void,VFTX2_STATUS::__packer);

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
 * Event packer for VME_GSI_VFTX2_STRAW.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_STRAW(id)
template<typename __data_dest_t>
void PACKER_VME_GSI_VFTX2_STRAW::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA12 time_fine[32] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA16 time_coarse[32] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA16 time_trigger);
  // UINT32 status
  // {
    //  0_03: internal;
    //  4_12: count;
  // }
  // UINT32 custom_header
  // {
    //  0_15: count;
    // 16_23: id = MATCH(id);
    // 24_31: 171;
  // }
  // UINT32 event_header
  // {
    //  0_07: 170;
    // 11_23: trigger_timestamp;
    // 29_30: 1;
    //    31: 1;
    // ENCODE(time_trigger,(value=trigger_timestamp));
  // }
  // list(0<=index<custom_header.count)

  {
    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_30: channel;
      //    31: bluppidupp;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_GSI_VFTX2_STRAW::__packer,uint32 id);

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
 * Event packer for fitest_febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fitest_febex_subev)
template<typename __data_dest_t>
void PACKER_fitest_febex_subev::__packer(__data_dest_t &__buffer)
{
  // header = FEBEX_EVENTHEADER();
  PACK_DECL(862,FEBEX_EVENTHEADER,header);
  // select several

    // padding = FEBEX_PADDING();
  {
    PACK_DECL(864,FEBEX_PADDING,padding);
  }
  // select several

    // febex[0] = FEBEX_NOTRACE(sfp=3,card=0);
    // febex[1] = FEBEX_NOTRACE(sfp=3,card=1);
    // febex[2] = FEBEX_NOTRACE(sfp=3,card=2);
    // febex[3] = FEBEX_NOTRACE(sfp=3,card=3);
    // febex[4] = FEBEX_NOTRACE(sfp=3,card=4);
    // febex[5] = FEBEX_NOTRACE(sfp=3,card=5);
    // febex[6] = FEBEX_NOTRACE(sfp=3,card=6);
    // febex[7] = FEBEX_NOTRACE(sfp=3,card=7);
    // febextrace[0] = FEBEX_TRACE(sfp=3,card=0);
    // febextrace[1] = FEBEX_TRACE(sfp=3,card=1);
    // febextrace[2] = FEBEX_TRACE(sfp=3,card=2);
    // febextrace[3] = FEBEX_TRACE(sfp=3,card=3);
    // febextrace[4] = FEBEX_TRACE(sfp=3,card=4);
    // febextrace[5] = FEBEX_TRACE(sfp=3,card=5);
    // febextrace[6] = FEBEX_TRACE(sfp=3,card=6);
    // febextrace[7] = FEBEX_TRACE(sfp=3,card=7);
  {
    PACK_DECL(867,FEBEX_NOTRACE,febex[0],/*sfp*/3,/*card*/0);
    PACK_DECL(868,FEBEX_NOTRACE,febex[1],/*sfp*/3,/*card*/1);
    PACK_DECL(869,FEBEX_NOTRACE,febex[2],/*sfp*/3,/*card*/2);
    PACK_DECL(870,FEBEX_NOTRACE,febex[3],/*sfp*/3,/*card*/3);
    PACK_DECL(871,FEBEX_NOTRACE,febex[4],/*sfp*/3,/*card*/4);
    PACK_DECL(872,FEBEX_NOTRACE,febex[5],/*sfp*/3,/*card*/5);
    PACK_DECL(873,FEBEX_NOTRACE,febex[6],/*sfp*/3,/*card*/6);
    PACK_DECL(874,FEBEX_NOTRACE,febex[7],/*sfp*/3,/*card*/7);
    PACK_DECL(875,FEBEX_TRACE,febextrace[0],/*sfp*/3,/*card*/0);
    PACK_DECL(876,FEBEX_TRACE,febextrace[1],/*sfp*/3,/*card*/1);
    PACK_DECL(877,FEBEX_TRACE,febextrace[2],/*sfp*/3,/*card*/2);
    PACK_DECL(878,FEBEX_TRACE,febextrace[3],/*sfp*/3,/*card*/3);
    PACK_DECL(879,FEBEX_TRACE,febextrace[4],/*sfp*/3,/*card*/4);
    PACK_DECL(880,FEBEX_TRACE,febextrace[5],/*sfp*/3,/*card*/5);
    PACK_DECL(881,FEBEX_TRACE,febextrace[6],/*sfp*/3,/*card*/6);
    PACK_DECL(882,FEBEX_TRACE,febextrace[7],/*sfp*/3,/*card*/7);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fitest_febex_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for lmu_scalers_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(lmu_scalers_subev)
template<typename __data_dest_t>
void PACKER_lmu_scalers_subev::__packer(__data_dest_t &__buffer)
{
  // scalers = TRLOII_LMU_SCALERS(id=199);
  PACK_DECL(778,TRLOII_LMU_SCALERS,scalers,/*id*/199);
}
FORCE_IMPL_DATA_SRC_FCN(void,lmu_scalers_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for los_sampler_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_sampler_subev)
template<typename __data_dest_t>
void PACKER_los_sampler_subev::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(800,LAND_STD_VME,land_vme);
  // select several

    // sampler = TRLOII_SAMPLER(mark=0x1050);
  {
    PACK_DECL(802,TRLOII_SAMPLER,sampler,/*mark*/0x1050);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,los_sampler_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for los_scalers_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_scalers_subev)
template<typename __data_dest_t>
void PACKER_los_scalers_subev::__packer(__data_dest_t &__buffer)
{
  // select several

    // scaler = SCALER();
  {
    PACK_DECL(794,SCALER,scaler);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,los_scalers_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for los_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_subev)
template<typename __data_dest_t>
void PACKER_los_subev::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(783,LAND_STD_VME,land_vme);
  // barrier1 = BARRIER();
  PACK_DECL(784,BARRIER,barrier1);
  // barrier2 = BARRIER();
  PACK_DECL(785,BARRIER,barrier2);
  // select several

    // vftx2 = VME_GSI_VFTX2_7PS(id=2);
  {
    PACK_DECL(787,VME_GSI_VFTX2_7PS,vftx2,/*id*/2);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,los_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for master_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(master_subev)
template<typename __data_dest_t>
void PACKER_master_subev::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(808,LAND_STD_VME,land_vme);
  // barrier = BARRIER();
  PACK_DECL(809,BARRIER,barrier);
}
FORCE_IMPL_DATA_SRC_FCN(void,master_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for straw_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(straw_vme_subev)
template<typename __data_dest_t>
void PACKER_straw_vme_subev::__packer(__data_dest_t &__buffer)
{
  // select several

    // vftx2 = VME_GSI_VFTX2_STRAW(id=0);
  {
    PACK_DECL(889,VME_GSI_VFTX2_STRAW,vftx2,/*id*/0);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,straw_vme_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for tbm_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tbm_subev)
template<typename __data_dest_t>
void PACKER_tbm_subev::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(895,LAND_STD_VME,land_vme);
  // barrier = BARRIER();
  PACK_DECL(897,BARRIER,barrier);
  // select several

    // vftx2 = VME_GSI_VFTX2_LT(id=1);
    // madc32 = VME_MESYTEC_MADC32(geom=2);
  {
    PACK_DECL(899,VME_GSI_VFTX2_LT,vftx2,/*id*/1);
    PACK_DECL(900,VME_MESYTEC_MADC32,madc32,/*geom*/2);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,tbm_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for tofd_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tofd_tamex_subev)
template<typename __data_dest_t>
void PACKER_tofd_tamex_subev::__packer(__data_dest_t &__buffer)
{
  // header = TAMEX3_HEADER();
  PACK_DECL(907,TAMEX3_HEADER,header);
  // select several

    // padding1 = TAMEX3_PADDING();
  {
    PACK_DECL(909,TAMEX3_PADDING,padding1);
  }
  // select several

    // tamex_1 = TAMEX3_SFP(sfp=2,card=0);
    // tamex_2 = TAMEX3_SFP(sfp=2,card=1);
  {
    PACK_DECL(912,TAMEX3_SFP,tamex_1,/*sfp*/2,/*card*/0);
    PACK_DECL(913,TAMEX3_SFP,tamex_2,/*sfp*/2,/*card*/1);
  }
  // select several

    // padding2 = TAMEX3_PADDING();
  {
    PACK_DECL(916,TAMEX3_PADDING,padding2);
  }
  // select several

    // tamex_3 = TAMEX3_SFP(sfp=3,card=0);
    // tamex_4 = TAMEX3_SFP(sfp=3,card=1);
  {
    PACK_DECL(919,TAMEX3_SFP,tamex_3,/*sfp*/3,/*card*/0);
    PACK_DECL(920,TAMEX3_SFP,tamex_4,/*sfp*/3,/*card*/1);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,tofd_tamex_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for tofd_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tofd_vme_subev)
template<typename __data_dest_t>
void PACKER_tofd_vme_subev::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(926,LAND_STD_VME,land_vme);
  // barrier = BARRIER();
  PACK_DECL(927,BARRIER,barrier);
  // select several

    // vftx2_1 = VME_GSI_VFTX2_7PS(id=1);
    // vftx2_2 = VME_GSI_VFTX2_7PS(id=2);
    // vftx2_3 = VME_GSI_VFTX2_7PS(id=3);
  {
    PACK_DECL(929,VME_GSI_VFTX2_7PS,vftx2_1,/*id*/1);
    PACK_DECL(930,VME_GSI_VFTX2_7PS,vftx2_2,/*id*/2);
    PACK_DECL(931,VME_GSI_VFTX2_7PS,vftx2_3,/*id*/3);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,tofd_vme_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for tpat_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tpat_subev)
template<typename __data_dest_t>
void PACKER_tpat_subev::__packer(__data_dest_t &__buffer)
{
  // tpat = TRLOII_TPAT(id=207);
  PACK_DECL(937,TRLOII_TPAT,tpat,/*id*/207);
}
FORCE_IMPL_DATA_SRC_FCN(void,tpat_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for tracking_febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tracking_febex_subev)
template<typename __data_dest_t>
void PACKER_tracking_febex_subev::__packer(__data_dest_t &__buffer)
{
  // header = FEBEX_EVENTHEADER();
  PACK_DECL(815,FEBEX_EVENTHEADER,header);
  // select several

    // padding = FEBEX_PADDING();
  {
    PACK_DECL(817,FEBEX_PADDING,padding);
  }
  // select several

    // febex_0[0] = FEBEX_NOTRACE(sfp=0,card=0);
    // febex_0[1] = FEBEX_NOTRACE(sfp=0,card=1);
    // febex_0[2] = FEBEX_NOTRACE(sfp=0,card=2);
    // febex_0[3] = FEBEX_NOTRACE(sfp=0,card=3);
    // febex_0[4] = FEBEX_NOTRACE(sfp=0,card=4);
    // febex_0[5] = FEBEX_NOTRACE(sfp=0,card=5);
    // febex_0[6] = FEBEX_NOTRACE(sfp=0,card=6);
    // febex_0[7] = FEBEX_NOTRACE(sfp=0,card=7);
    // febex_0[8] = FEBEX_NOTRACE(sfp=0,card=8);
    // febex_0[9] = FEBEX_NOTRACE(sfp=0,card=9);
    // febex_0[10] = FEBEX_NOTRACE(sfp=0,card=10);
    // febex_0[11] = FEBEX_NOTRACE(sfp=0,card=11);
    // febex_0[12] = FEBEX_NOTRACE(sfp=0,card=12);
    // febex_0[13] = FEBEX_NOTRACE(sfp=0,card=13);
    // febex_0[14] = FEBEX_NOTRACE(sfp=0,card=14);
    // febex_0[15] = FEBEX_NOTRACE(sfp=0,card=15);
    // febex_0[16] = FEBEX_NOTRACE(sfp=0,card=16);
    // febex_0[17] = FEBEX_NOTRACE(sfp=0,card=17);
    // febextrace_0[0] = FEBEX_TRACE(sfp=0,card=0);
    // febextrace_0[1] = FEBEX_TRACE(sfp=0,card=1);
    // febextrace_0[2] = FEBEX_TRACE(sfp=0,card=2);
    // febextrace_0[3] = FEBEX_TRACE(sfp=0,card=3);
    // febextrace_0[4] = FEBEX_TRACE(sfp=0,card=4);
    // febextrace_0[5] = FEBEX_TRACE(sfp=0,card=5);
    // febextrace_0[6] = FEBEX_TRACE(sfp=0,card=6);
    // febextrace_0[7] = FEBEX_TRACE(sfp=0,card=7);
    // febextrace_0[8] = FEBEX_TRACE(sfp=0,card=8);
    // febextrace_0[9] = FEBEX_TRACE(sfp=0,card=9);
    // febextrace_0[10] = FEBEX_TRACE(sfp=0,card=10);
    // febextrace_0[11] = FEBEX_TRACE(sfp=0,card=11);
    // febextrace_0[12] = FEBEX_TRACE(sfp=0,card=12);
    // febextrace_0[13] = FEBEX_TRACE(sfp=0,card=13);
    // febextrace_0[14] = FEBEX_TRACE(sfp=0,card=14);
    // febextrace_0[15] = FEBEX_TRACE(sfp=0,card=15);
    // febextrace_0[16] = FEBEX_TRACE(sfp=0,card=16);
    // febextrace_0[17] = FEBEX_TRACE(sfp=0,card=17);
  {
    PACK_DECL(820,FEBEX_NOTRACE,febex_0[0],/*sfp*/0,/*card*/0);
    PACK_DECL(821,FEBEX_NOTRACE,febex_0[1],/*sfp*/0,/*card*/1);
    PACK_DECL(822,FEBEX_NOTRACE,febex_0[2],/*sfp*/0,/*card*/2);
    PACK_DECL(823,FEBEX_NOTRACE,febex_0[3],/*sfp*/0,/*card*/3);
    PACK_DECL(824,FEBEX_NOTRACE,febex_0[4],/*sfp*/0,/*card*/4);
    PACK_DECL(825,FEBEX_NOTRACE,febex_0[5],/*sfp*/0,/*card*/5);
    PACK_DECL(826,FEBEX_NOTRACE,febex_0[6],/*sfp*/0,/*card*/6);
    PACK_DECL(827,FEBEX_NOTRACE,febex_0[7],/*sfp*/0,/*card*/7);
    PACK_DECL(828,FEBEX_NOTRACE,febex_0[8],/*sfp*/0,/*card*/8);
    PACK_DECL(829,FEBEX_NOTRACE,febex_0[9],/*sfp*/0,/*card*/9);
    PACK_DECL(830,FEBEX_NOTRACE,febex_0[10],/*sfp*/0,/*card*/10);
    PACK_DECL(831,FEBEX_NOTRACE,febex_0[11],/*sfp*/0,/*card*/11);
    PACK_DECL(832,FEBEX_NOTRACE,febex_0[12],/*sfp*/0,/*card*/12);
    PACK_DECL(833,FEBEX_NOTRACE,febex_0[13],/*sfp*/0,/*card*/13);
    PACK_DECL(834,FEBEX_NOTRACE,febex_0[14],/*sfp*/0,/*card*/14);
    PACK_DECL(835,FEBEX_NOTRACE,febex_0[15],/*sfp*/0,/*card*/15);
    PACK_DECL(836,FEBEX_NOTRACE,febex_0[16],/*sfp*/0,/*card*/16);
    PACK_DECL(837,FEBEX_NOTRACE,febex_0[17],/*sfp*/0,/*card*/17);
    PACK_DECL(838,FEBEX_TRACE,febextrace_0[0],/*sfp*/0,/*card*/0);
    PACK_DECL(839,FEBEX_TRACE,febextrace_0[1],/*sfp*/0,/*card*/1);
    PACK_DECL(840,FEBEX_TRACE,febextrace_0[2],/*sfp*/0,/*card*/2);
    PACK_DECL(841,FEBEX_TRACE,febextrace_0[3],/*sfp*/0,/*card*/3);
    PACK_DECL(842,FEBEX_TRACE,febextrace_0[4],/*sfp*/0,/*card*/4);
    PACK_DECL(843,FEBEX_TRACE,febextrace_0[5],/*sfp*/0,/*card*/5);
    PACK_DECL(844,FEBEX_TRACE,febextrace_0[6],/*sfp*/0,/*card*/6);
    PACK_DECL(845,FEBEX_TRACE,febextrace_0[7],/*sfp*/0,/*card*/7);
    PACK_DECL(846,FEBEX_TRACE,febextrace_0[8],/*sfp*/0,/*card*/8);
    PACK_DECL(847,FEBEX_TRACE,febextrace_0[9],/*sfp*/0,/*card*/9);
    PACK_DECL(848,FEBEX_TRACE,febextrace_0[10],/*sfp*/0,/*card*/10);
    PACK_DECL(849,FEBEX_TRACE,febextrace_0[11],/*sfp*/0,/*card*/11);
    PACK_DECL(850,FEBEX_TRACE,febextrace_0[12],/*sfp*/0,/*card*/12);
    PACK_DECL(851,FEBEX_TRACE,febextrace_0[13],/*sfp*/0,/*card*/13);
    PACK_DECL(852,FEBEX_TRACE,febextrace_0[14],/*sfp*/0,/*card*/14);
    PACK_DECL(853,FEBEX_TRACE,febextrace_0[15],/*sfp*/0,/*card*/15);
    PACK_DECL(854,FEBEX_TRACE,febextrace_0[16],/*sfp*/0,/*card*/16);
    PACK_DECL(855,FEBEX_TRACE,febextrace_0[17],/*sfp*/0,/*card*/17);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,tracking_febex_subev::__packer);

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
  PACK_DECL(751,TIMESTAMP_WHITERABBIT,ts100,/*id*/0x100);
  // multi_ = WR_MULTI();
  PACK_DECL(754,WR_MULTI,multi_);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_100::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for wr_200.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_200)
template<typename __data_dest_t>
void PACKER_wr_200::__packer(__data_dest_t &__buffer)
{
  // ts200 = TIMESTAMP_WHITERABBIT(id=0x200);
  PACK_DECL(760,TIMESTAMP_WHITERABBIT,ts200,/*id*/0x200);
  // multi_ = WR_MULTI();
  PACK_DECL(763,WR_MULTI,multi_);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_200::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for wr_400.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_400)
template<typename __data_dest_t>
void PACKER_wr_400::__packer(__data_dest_t &__buffer)
{
  // ts400 = TIMESTAMP_WHITERABBIT(id=0x400);
  PACK_DECL(769,TIMESTAMP_WHITERABBIT,ts400,/*id*/0x400);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_400::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
  // master_ts = wr_100(type=10,subtype=1,control=0);
  // master_tpat = tpat_subev(type=36,subtype=0xe10,control=0);
  // master_lmu_scalers = lmu_scalers_subev(type=37,subtype=0xe74,control=0);
  // master_vme = master_subev(type=88,subtype=0x2260,control=0);
  // los = los_subev(type=88,subtype=0x2260,control=1);
  // los_scalers = los_scalers_subev(type=38,subtype=0xed8,control=1);
  // los_sampler = los_sampler_subev(type=39,subtype=0xf3c,control=1);
  // tofd_vme = tofd_vme_subev(type=88,subtype=0x2260,control=2);
  // tbm_ts = wr_200(type=10,subtype=1,control=3);
  // tbm_tpat = tpat_subev(type=36,subtype=0xe10,control=3);
  // tbm_vme = tbm_subev(type=88,subtype=0x2260,control=3);
  // tofd_tamex = tofd_tamex_subev(type=102,subtype=0x27d8,control=4);
  // tracking_febex = tracking_febex_subev(type=100,subtype=0x2710,control=5);
  // fitest_febex = fitest_febex_subev(type=100,subtype=0x2710,control=6);
  // straw_ts = wr_400(type=10,subtype=1,control=7);
  // straw = straw_vme_subev(type=88,subtype=0x2260,control=7);
  // los_empty = empty_subev(type=10,subtype=1,control=1);
  // tofd_empty = empty_subev(type=10,subtype=1,control=2);
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
