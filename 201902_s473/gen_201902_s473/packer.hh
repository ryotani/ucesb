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
 * Event packer for FEBEX3_CALIFA_BASE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX3_CALIFA_BASE()
template<typename __data_dest_t>
void PACKER_FEBEX3_CALIFA_BASE::__packer(__data_dest_t &__buffer)
{
  // MEMBER(DATA16 energy[512] ZERO_SUPPRESS);
  // MEMBER(DATA32 ts_lsb[512] ZERO_SUPPRESS);
  // MEMBER(DATA32 ts_msb[512] ZERO_SUPPRESS);
  // MEMBER(DATA16 n_f[512] ZERO_SUPPRESS);
  // MEMBER(DATA16 n_s[512] ZERO_SUPPRESS);
  // several UINT32 PADDING NOENCODE
  // {
    //  0_19: irrelevant;
    // 20_31: all = MATCH(0xadd);
  // }
  // UINT32 HEADER NOENCODE
  // {
    //  0_07: header_size;
    //  8_11: trigger;
    // 12_15: sfp_id;
    // 16_23: module_id;
    // 24_31: submemory_id;
  // }
  // UINT32 DATASIZE NOENCODE
  // {
    //  0_15: sizebytes;
    // 16_31: 0;
  // }
  // if((DATASIZE.sizebytes > 0))

  if ((DATASIZE.sizebytes > 0))
  {
    // if((HEADER.submemory_id == 255))

    // else

    if ((HEADER.submemory_id == 255))
    {
      // list(0<=index<(DATASIZE.sizebytes / 4))

      {
        // UINT32 SYNCHRO NOENCODE;
      }
    }

    else
    {
      // UINT32 HEADER_MAGIC NOENCODE
      // {
        //  0_15: sizebytes = MATCH(DATASIZE.sizebytes);
        // 16_31: magic;
      // }
      // if((HEADER_MAGIC.magic == 0x115a))

      // else

      if ((HEADER_MAGIC.magic == 0x115a))
      {
        // UINT32 eventid NOENCODE;
        // UINT32 timestamp_lsb NOENCODE;
        // UINT32 timestamp_msb NOENCODE;
        // UINT16 cfd_sample_val1 NOENCODE;
        // UINT16 cfd_sample_val2 NOENCODE;
        // UINT16 cfd_sample_val3 NOENCODE;
        // UINT16 cfd_sample_val4 NOENCODE;
        // UINT32 FLAGS NOENCODE
        // {
          //  0_23: ov;
          // 24_31: selftrigger;
        // }
        // UINT16 pileup NOENCODE;
        // UINT16 discard NOENCODE;
        // UINT32 ENERGY_VALUE NOENCODE
        // {
          //  0_15: eneval;
          // 16_31: reservedbits;
        // }
        // UINT32 INTEGRAL_VALUE NOENCODE
        // {
          //  0_15: nf;
          // 16_31: ns;
        // }
        // ENCODE(energy[((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id)],(value=ENERGY_VALUE.eneval));

        // ENCODE(ts_lsb[((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id)],(value=timestamp_lsb));

        // ENCODE(ts_msb[((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id)],(value=timestamp_msb));

        // ENCODE(n_f[((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id)],(value=INTEGRAL_VALUE.nf));

        // ENCODE(n_s[((((HEADER.sfp_id * 16) * 16) + (HEADER.module_id * 16)) + HEADER.submemory_id)],(value=INTEGRAL_VALUE.ns));

        // if((DATASIZE.sizebytes > 40))

        if ((DATASIZE.sizebytes > 40))
        {
          // UINT32 HEADER_TOT NOENCODE
          // {
            //  0_15: tot;
            // 16_31: magic_beef = MATCH(0xbeef);
          // }
          // UINT16 trace_sample_val1 NOENCODE;
          // UINT16 trace_sample_val2 NOENCODE;
          // UINT16 trace_sample_val3 NOENCODE;
          // UINT16 trace_sample_val4 NOENCODE;
        }
        // if((DATASIZE.sizebytes > 52))

        if ((DATASIZE.sizebytes > 52))
        {
          // UINT32 HEADER_TRACE NOENCODE
          // {
            //  0_15: datalength;
            // 16_31: magic_2bad = MATCH(0x2bad);
          // }
          // list(0<=index<((HEADER_TRACE.datalength / 4) - 1))

          {
            // UINT32 TRACE_SAMPLES NOENCODE;
          }
        }
      }

      else
      {
        // if((HEADER_MAGIC.magic == 0xb00b))

        if ((HEADER_MAGIC.magic == 0xb00b))
        {
          // UINT32 pul_eventid NOENCODE;
          // UINT32 pul_timestamp_lsb NOENCODE;
          // UINT32 pul_timestamp_msb NOENCODE;
          // UINT32 N_S_TOT NOENCODE
          // {
            //  0_07: pul_n_s;
            //  8_31: pul_nothingofinterest;
          // }
          // UINT32 N_F_TOT NOENCODE
          // {
            //  0_07: pul_firstterm;
            //  8_11: pul_secondterm;
            // 12_15: pul_nothingofinterest2;
            // 16_23: pul_nothingofinterest3;
            // 24_31: pul_n_f;
          // }
          // UINT32 pul_throwme NOENCODE;
        }
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX3_CALIFA_BASE::__packer);

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
    PACK_DECL(879,FEBEX_GOOD_EVENTHEADER,good);
    PACK_DECL(880,FEBEX_BAD_EVENTHEADER,bad);
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
      // ENCODE(t[channel_id],(value=(((sign * ( - time)) + ((sign - 1) * ( - time))) & 0xfff)));
      // ENCODE(n_hit[channel_id],(value=n_hit));
    // }
    // UINT32 energy NOENCODE
    // {
      //  0_21: energy;
      //    22: unused1;
      //    23: sign;
      // 24_27: unused2;
      // 28_31: channel_id;
      // ENCODE(e[channel_id],(value=((sign * ( - energy)) + ((sign - 1) * ( - energy)))));
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
 * Event packer for GSI_CLOCKTDC_16PH_ITEM.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_16PH_ITEM(sfp,tdc)
template<typename __data_dest_t>
void PACKER_GSI_CLOCKTDC_16PH_ITEM::__packer(__data_dest_t &__buffer,uint32 sfp
                                                                    ,uint32 tdc)
{
  // MEMBER(DATA32 event_counter_lo32);
  // MEMBER(DATA32 event_counter_hi16);
  // MEMBER(DATA32 trigger_coarse_lo22);
  // MEMBER(DATA32 trigger_coarse_hi24);
  // MEMBER(DATA12 time_coarse[258] ZERO_SUPPRESS_MULTI(80));
  // MEMBER(DATA12 time_fine[258] ZERO_SUPPRESS_MULTI(80));
  // UINT32 header
  // {
    //  0_07: _0x34 = MATCH(52);
    //  8_11: trigger_type;
    // 12_15: sfp_id = MATCH(sfp);
    // 16_23: tdc_id = MATCH(tdc);
    // 24_31: channel_id;
  // }
  // MATCH_END;
  // UINT32 channel_num;
  // UINT32 event_counter_lo_ NOENCODE
  // {
    //  0_31: value;
    // ENCODE(event_counter_lo32,(value=value));
  // }
  // UINT32 event_counter_hi_ NOENCODE
  // {
    //  0_15: value;
    // ENCODE(event_counter_hi16,(value=value));
  // }
  // UINT32 trigger_coarse_lo_ NOENCODE
  // {
    //  0_09: ignore;
    // 10_31: value;
    // ENCODE(trigger_coarse_lo22,(value=value));
  // }
  // UINT32 trigger_coarse_hi_ NOENCODE
  // {
    //  0_23: value;
    // 24_31: ignore;
    // ENCODE(trigger_coarse_hi24,(value=value));
  // }
  // UINT32 channel_header
  // {
    //  0_07: _0x34 = MATCH(52);
    //  8_11: trigger_type;
    // 12_15: sfp_id = MATCH(sfp);
    // 16_23: tdc_id = MATCH(tdc);
    // 24_31: channel_id = RANGE(0,128);
  // }
  // UINT32 data_byte_num;
  // list(0<=i<(data_byte_num / 4))

  {
    // UINT32 data
    // {
      //  0_04: time_fine;
      //  5_16: time_coarse;
      //    17: time_coarse_ext;
      //    18: edge;
      //    19: ws;
      //    20: time_coarse_overflow;
      //    21: rb_overflow;
      //    22: dummy;
      //    23: is_data;
      // 24_31: channel;
      // ENCODE(time_coarse[(((((128 > channel) || ((128 == channel) && (0 == edge))) && is_data) * ((channel * 2) + edge)) + (( ! (((128 > channel) || ((128 == channel) && (0 == edge))) && is_data)) * 0x101))],(value=time_coarse));
      // ENCODE(time_fine[(((((128 > channel) || ((128 == channel) && (0 == edge))) && is_data) * ((channel * 2) + edge)) + (( ! (((128 > channel) || ((128 == channel) && (0 == edge))) && is_data)) * 0x101))],(value=time_fine));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,GSI_CLOCKTDC_16PH_ITEM::__packer,uint32 sfp
                                                                 ,uint32 tdc);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for GSI_CLOCKTDC_BAD00BAD.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_BAD00BAD()
template<typename __data_dest_t>
void PACKER_GSI_CLOCKTDC_BAD00BAD::__packer(__data_dest_t &__buffer)
{
  // UINT32 bad00bad NOENCODE
  // {
    //  0_31: bad00bad = MATCH(0xbad00bad);
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,GSI_CLOCKTDC_BAD00BAD::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for GSI_CLOCKTDC_FUSER.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_FUSER(a_sfp0_num,a_sfp1_num,a_sfp2_num,a_sfp3_num,
                   // ch_per_ctdc)
template<typename __data_dest_t>
void PACKER_GSI_CLOCKTDC_FUSER::__packer(__data_dest_t &__buffer,uint32 a_sfp0_num
                                                                ,uint32 a_sfp1_num
                                                                ,uint32 a_sfp2_num
                                                                ,uint32 a_sfp3_num
                                                                ,uint32 ch_per_ctdc)
{
  // UINT32 slave_num
  // {
    //  0_07: sfp0_num = MATCH(a_sfp0_num);
    //  8_15: sfp1_num = MATCH(a_sfp1_num);
    // 16_23: sfp2_num = MATCH(a_sfp2_num);
    // 24_31: sfp3_num = MATCH(a_sfp3_num);
  // }
  // UINT32 trig_window;
  // UINT32 channel_num
  // {
    //  0_31: num = MATCH(ch_per_ctdc);
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,GSI_CLOCKTDC_FUSER::__packer,uint32 a_sfp0_num
                                                             ,uint32 a_sfp1_num
                                                             ,uint32 a_sfp2_num
                                                             ,uint32 a_sfp3_num
                                                             ,uint32 ch_per_ctdc);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for GSI_CLOCKTDC_ITEM.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_ITEM(sfp,tdc)
template<typename __data_dest_t>
void PACKER_GSI_CLOCKTDC_ITEM::__packer(__data_dest_t &__buffer,uint32 sfp
                                                               ,uint32 tdc)
{
  // MEMBER(DATA32 event_counter_lo32);
  // MEMBER(DATA32 event_counter_hi16);
  // MEMBER(DATA32 trigger_coarse_lo22);
  // MEMBER(DATA32 trigger_coarse_hi24);
  // MEMBER(DATA12 time_coarse[258] ZERO_SUPPRESS_MULTI(80));
  // MEMBER(DATA12 time_fine[258] ZERO_SUPPRESS_MULTI(80));
  // UINT32 header
  // {
    //  0_07: _0x34 = MATCH(52);
    //  8_11: trigger_type;
    // 12_15: sfp_id = MATCH(sfp);
    // 16_23: tdc_id = MATCH(tdc);
    // 24_31: channel_id;
  // }
  // MATCH_END;
  // UINT32 channel_num;
  // UINT32 event_counter_lo_ NOENCODE
  // {
    //  0_31: value;
    // ENCODE(event_counter_lo32,(value=value));
  // }
  // UINT32 event_counter_hi_ NOENCODE
  // {
    //  0_15: value;
    // ENCODE(event_counter_hi16,(value=value));
  // }
  // UINT32 trigger_coarse_lo_ NOENCODE
  // {
    //  0_09: ignore;
    // 10_31: value;
    // ENCODE(trigger_coarse_lo22,(value=value));
  // }
  // UINT32 trigger_coarse_hi_ NOENCODE
  // {
    //  0_23: value;
    // 24_31: ignore;
    // ENCODE(trigger_coarse_hi24,(value=value));
  // }
  // UINT32 channel_header
  // {
    //  0_07: _0x34 = MATCH(52);
    //  8_11: trigger_type;
    // 12_15: sfp_id = MATCH(sfp);
    // 16_23: tdc_id = MATCH(tdc);
    // 24_31: channel_id = RANGE(0,128);
  // }
  // UINT32 data_byte_num;
  // list(0<=i<(data_byte_num / 4))

  {
    // UINT32 data
    // {
      //  0_03: time_fine;
      //  4_15: time_coarse;
      //    16: time_coarse_ext;
      //    17: edge;
      //    18: ws;
      //    19: time_coarse_overflow;
      //    20: rb_overflow;
      // 21_23: status;
      // 24_31: channel;
      // ENCODE(time_coarse[(((((128 > channel) || ((128 == channel) && (0 == edge))) && (4 == status)) * ((channel * 2) + edge)) + (( ! (((128 > channel) || ((128 == channel) && (0 == edge))) && (4 == status))) * 0x101))],(value=time_coarse));
      // ENCODE(time_fine[(((((128 > channel) || ((128 == channel) && (0 == edge))) && (4 == status)) * ((channel * 2) + edge)) + (( ! (((128 > channel) || ((128 == channel) && (0 == edge))) && (4 == status))) * 0x101))],(value=time_fine));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,GSI_CLOCKTDC_ITEM::__packer,uint32 sfp,uint32 tdc);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for GSI_CLOCKTDC_PADDING.
 *
 * Do not edit - automatically generated.
 */

// GSI_CLOCKTDC_PADDING()
template<typename __data_dest_t>
void PACKER_GSI_CLOCKTDC_PADDING::__packer(__data_dest_t &__buffer)
{
  // UINT32 padding NOENCODE
  // {
    //  0_19: whatever;
    // 20_31: 0xadd;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,GSI_CLOCKTDC_PADDING::__packer);

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
  // MEMBER(DATA12 time_coarse[34] ZERO_SUPPRESS_MULTI(256));
  // MEMBER(DATA12 time_fine[34] ZERO_SUPPRESS_MULTI(256));
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
      // ENCODE(time_coarse[(((4 == type) * channel_index) + ((4 != type) * 33))],(value=coarse));
      // ENCODE(time_fine[(((4 == type) * channel_index) + ((4 != type) * 33))],(value=fine));
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
 * Event packer for TAMEX3_WINDOW.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_WINDOW()
template<typename __data_dest_t>
void PACKER_TAMEX3_WINDOW::__packer(__data_dest_t &__buffer)
{
  // UINT32 trigger_window
  // {
    //  0_15: post_trig_ns;
    // 16_31: pre_trig_ns;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,TAMEX3_WINDOW::__packer);

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
    PACK_DECL(489,VME_CAEN_V1190_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(490,VME_CAEN_V1190_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(491,VME_CAEN_V1190_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(492,VME_CAEN_V1190_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
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
    PACK_DECL(578,VME_CAEN_V1190_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(579,VME_CAEN_V1190_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(580,VME_CAEN_V1190_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(581,VME_CAEN_V1190_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(583,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
    PACK_DECL(584,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
    PACK_DECL(585,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
    PACK_DECL(586,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
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
    PACK_DECL(284,VME_CAEN_V1290_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(285,VME_CAEN_V1290_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(286,VME_CAEN_V1290_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(287,VME_CAEN_V1290_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
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
    PACK_DECL(373,VME_CAEN_V1290_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(374,VME_CAEN_V1290_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(375,VME_CAEN_V1290_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(376,VME_CAEN_V1290_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(378,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
    PACK_DECL(379,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
    PACK_DECL(380,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
    PACK_DECL(381,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
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
 * Event packer for febex_subev_data.
 *
 * Do not edit - automatically generated.
 */

// febex_subev_data()
template<typename __data_dest_t>
void PACKER_febex_subev_data::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(1648,LAND_STD_VME,land_vme);
  // select several

    // header0 = FEBEX_GOOD_EVENTHEADER();
  {
    PACK_DECL(1650,FEBEX_GOOD_EVENTHEADER,header0);
  }
  // select several

    // padding0 = FEBEX_PADDING();
  {
    PACK_DECL(1653,FEBEX_PADDING,padding0);
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
  {
    PACK_DECL(1656,FEBEX_NOTRACE,febex_0[0],/*sfp*/0,/*card*/0);
    PACK_DECL(1657,FEBEX_NOTRACE,febex_0[1],/*sfp*/0,/*card*/1);
    PACK_DECL(1658,FEBEX_NOTRACE,febex_0[2],/*sfp*/0,/*card*/2);
    PACK_DECL(1659,FEBEX_NOTRACE,febex_0[3],/*sfp*/0,/*card*/3);
    PACK_DECL(1660,FEBEX_NOTRACE,febex_0[4],/*sfp*/0,/*card*/4);
    PACK_DECL(1661,FEBEX_NOTRACE,febex_0[5],/*sfp*/0,/*card*/5);
    PACK_DECL(1662,FEBEX_NOTRACE,febex_0[6],/*sfp*/0,/*card*/6);
    PACK_DECL(1663,FEBEX_NOTRACE,febex_0[7],/*sfp*/0,/*card*/7);
    PACK_DECL(1664,FEBEX_NOTRACE,febex_0[8],/*sfp*/0,/*card*/8);
    PACK_DECL(1665,FEBEX_NOTRACE,febex_0[9],/*sfp*/0,/*card*/9);
    PACK_DECL(1666,FEBEX_NOTRACE,febex_0[10],/*sfp*/0,/*card*/10);
    PACK_DECL(1667,FEBEX_NOTRACE,febex_0[11],/*sfp*/0,/*card*/11);
    PACK_DECL(1668,FEBEX_NOTRACE,febex_0[12],/*sfp*/0,/*card*/12);
    PACK_DECL(1669,FEBEX_NOTRACE,febex_0[13],/*sfp*/0,/*card*/13);
    PACK_DECL(1670,FEBEX_NOTRACE,febex_0[14],/*sfp*/0,/*card*/14);
    PACK_DECL(1671,FEBEX_NOTRACE,febex_0[15],/*sfp*/0,/*card*/15);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,febex_subev_data::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for fib_ctdc0_fib3_subev_data.
 *
 * Do not edit - automatically generated.
 */

// fib_ctdc0_fib3_subev_data()
template<typename __data_dest_t>
void PACKER_fib_ctdc0_fib3_subev_data::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(1706,LAND_STD_VME,land_vme);
  // select several

    // padding = GSI_CLOCKTDC_PADDING();
  {
    PACK_DECL(1708,GSI_CLOCKTDC_PADDING,padding);
  }
  // select several

    // ctdc[0] = GSI_CLOCKTDC_ITEM(sfp=0,tdc=0);
    // ctdc[1] = GSI_CLOCKTDC_ITEM(sfp=0,tdc=1);
    // ctdc[2] = GSI_CLOCKTDC_ITEM(sfp=0,tdc=2);
    // ctdc[3] = GSI_CLOCKTDC_ITEM(sfp=0,tdc=3);
  {
    PACK_DECL(1711,GSI_CLOCKTDC_ITEM,ctdc[0],/*sfp*/0,/*tdc*/0);
    PACK_DECL(1712,GSI_CLOCKTDC_ITEM,ctdc[1],/*sfp*/0,/*tdc*/1);
    PACK_DECL(1713,GSI_CLOCKTDC_ITEM,ctdc[2],/*sfp*/0,/*tdc*/2);
    PACK_DECL(1714,GSI_CLOCKTDC_ITEM,ctdc[3],/*sfp*/0,/*tdc*/3);
  }
  // select several

    // barrier = BARRIER();
  {
    PACK_DECL(1717,BARRIER,barrier);
  }
  // select several

    // ctdc3[0] = GSI_CLOCKTDC_ITEM(sfp=1,tdc=0);
    // ctdc3[1] = GSI_CLOCKTDC_ITEM(sfp=1,tdc=1);
    // ctdc3[2] = GSI_CLOCKTDC_ITEM(sfp=1,tdc=2);
    // ctdc3[3] = GSI_CLOCKTDC_ITEM(sfp=1,tdc=3);
  {
    PACK_DECL(1720,GSI_CLOCKTDC_ITEM,ctdc3[0],/*sfp*/1,/*tdc*/0);
    PACK_DECL(1721,GSI_CLOCKTDC_ITEM,ctdc3[1],/*sfp*/1,/*tdc*/1);
    PACK_DECL(1722,GSI_CLOCKTDC_ITEM,ctdc3[2],/*sfp*/1,/*tdc*/2);
    PACK_DECL(1723,GSI_CLOCKTDC_ITEM,ctdc3[3],/*sfp*/1,/*tdc*/3);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fib_ctdc0_fib3_subev_data::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for fib_ctdc0_subev_data.
 *
 * Do not edit - automatically generated.
 */

// fib_ctdc0_subev_data()
template<typename __data_dest_t>
void PACKER_fib_ctdc0_subev_data::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(1685,LAND_STD_VME,land_vme);
  // select several

    // padding = GSI_CLOCKTDC_PADDING();
  {
    PACK_DECL(1687,GSI_CLOCKTDC_PADDING,padding);
  }
  // select several

    // ctdc[0] = GSI_CLOCKTDC_ITEM(sfp=0,tdc=0);
    // ctdc[1] = GSI_CLOCKTDC_ITEM(sfp=0,tdc=1);
    // ctdc[2] = GSI_CLOCKTDC_ITEM(sfp=0,tdc=2);
    // ctdc[3] = GSI_CLOCKTDC_ITEM(sfp=0,tdc=3);
  {
    PACK_DECL(1690,GSI_CLOCKTDC_ITEM,ctdc[0],/*sfp*/0,/*tdc*/0);
    PACK_DECL(1691,GSI_CLOCKTDC_ITEM,ctdc[1],/*sfp*/0,/*tdc*/1);
    PACK_DECL(1692,GSI_CLOCKTDC_ITEM,ctdc[2],/*sfp*/0,/*tdc*/2);
    PACK_DECL(1693,GSI_CLOCKTDC_ITEM,ctdc[3],/*sfp*/0,/*tdc*/3);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fib_ctdc0_subev_data::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for fib_tamex_data.
 *
 * Do not edit - automatically generated.
 */

// fib_tamex_data()
template<typename __data_dest_t>
void PACKER_fib_tamex_data::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(1736,LAND_STD_VME,land_vme);
  // select several

    // padding = TAMEX3_PADDING();
  {
    PACK_DECL(1738,TAMEX3_PADDING,padding);
  }
  // select several

    // tamex[0] = TAMEX3_SFP(sfp=2,card=0);
    // tamex[1] = TAMEX3_SFP(sfp=2,card=1);
    // tamex[2] = TAMEX3_SFP(sfp=2,card=2);
    // tamex[3] = TAMEX3_SFP(sfp=2,card=3);
  {
    PACK_DECL(1741,TAMEX3_SFP,tamex[0],/*sfp*/2,/*card*/0);
    PACK_DECL(1742,TAMEX3_SFP,tamex[1],/*sfp*/2,/*card*/1);
    PACK_DECL(1743,TAMEX3_SFP,tamex[2],/*sfp*/2,/*card*/2);
    PACK_DECL(1744,TAMEX3_SFP,tamex[3],/*sfp*/2,/*card*/3);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fib_tamex_data::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for lmu_scalers_data.
 *
 * Do not edit - automatically generated.
 */

// lmu_scalers_data()
template<typename __data_dest_t>
void PACKER_lmu_scalers_data::__packer(__data_dest_t &__buffer)
{
  // UINT32 beam;
}
FORCE_IMPL_DATA_SRC_FCN(void,lmu_scalers_data::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for los_sampler_data.
 *
 * Do not edit - automatically generated.
 */

// los_sampler_data()
template<typename __data_dest_t>
void PACKER_los_sampler_data::__packer(__data_dest_t &__buffer)
{
  // UINT32 beam;
}
FORCE_IMPL_DATA_SRC_FCN(void,los_sampler_data::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for los_scalers_data.
 *
 * Do not edit - automatically generated.
 */

// los_scalers_data()
template<typename __data_dest_t>
void PACKER_los_scalers_data::__packer(__data_dest_t &__buffer)
{
  // UINT32 beam;
}
FORCE_IMPL_DATA_SRC_FCN(void,los_scalers_data::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for los_tamex_data.
 *
 * Do not edit - automatically generated.
 */

// los_tamex_data()
template<typename __data_dest_t>
void PACKER_los_tamex_data::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(1795,LAND_STD_VME,land_vme);
  // select several

    // padding = TAMEX3_PADDING();
  {
    PACK_DECL(1797,TAMEX3_PADDING,padding);
  }
  // select several

    // tamex = TAMEX3_SFP(sfp=2,card=0);
  {
    PACK_DECL(1800,TAMEX3_SFP,tamex,/*sfp*/2,/*card*/0);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,los_tamex_data::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for los_vme_subev_data.
 *
 * Do not edit - automatically generated.
 */

// los_vme_subev_data()
template<typename __data_dest_t>
void PACKER_los_vme_subev_data::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(1813,LAND_STD_VME,land_vme);
  // select several

    // barrier = BARRIER();
  {
    PACK_DECL(1815,BARRIER,barrier);
  }
  // select several

    // vftx2 = VME_GSI_VFTX2_7PS(id=1);
  {
    PACK_DECL(1818,VME_GSI_VFTX2_7PS,vftx2,/*id*/1);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,los_vme_subev_data::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for master_monitor_subev_data.
 *
 * Do not edit - automatically generated.
 */

// master_monitor_subev_data()
template<typename __data_dest_t>
void PACKER_master_monitor_subev_data::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(1831,LAND_STD_VME,land_vme);
  // select several

    // v830 = VME_CAEN_V830(geom=3);
  {
    PACK_DECL(1833,VME_CAEN_V830,v830,/*geom*/3);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,master_monitor_subev_data::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for master_scalers_data.
 *
 * Do not edit - automatically generated.
 */

// master_scalers_data()
template<typename __data_dest_t>
void PACKER_master_scalers_data::__packer(__data_dest_t &__buffer)
{
  // UINT32 mega;
}
FORCE_IMPL_DATA_SRC_FCN(void,master_scalers_data::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for neuland_sfp.
 *
 * Do not edit - automatically generated.
 */

// neuland_sfp(sfp)
template<typename __data_dest_t>
void PACKER_neuland_sfp::__packer(__data_dest_t &__buffer,uint32 sfp)
{
  // select several

    // card[0] = TAMEX3_SFP(sfp=sfp,card=0);
    // card[1] = TAMEX3_SFP(sfp=sfp,card=1);
    // card[2] = TAMEX3_SFP(sfp=sfp,card=2);
    // card[3] = TAMEX3_SFP(sfp=sfp,card=3);
    // card[4] = TAMEX3_SFP(sfp=sfp,card=4);
    // card[5] = TAMEX3_SFP(sfp=sfp,card=5);
    // card[6] = TAMEX3_SFP(sfp=sfp,card=6);
    // card[7] = TAMEX3_SFP(sfp=sfp,card=7);
    // card[8] = TAMEX3_SFP(sfp=sfp,card=8);
    // card[9] = TAMEX3_SFP(sfp=sfp,card=9);
    // card[10] = TAMEX3_SFP(sfp=sfp,card=10);
    // card[11] = TAMEX3_SFP(sfp=sfp,card=11);
    // card[12] = TAMEX3_SFP(sfp=sfp,card=12);
    // card[13] = TAMEX3_SFP(sfp=sfp,card=13);
    // card[14] = TAMEX3_SFP(sfp=sfp,card=14);
    // card[15] = TAMEX3_SFP(sfp=sfp,card=15);
    // card[16] = TAMEX3_SFP(sfp=sfp,card=16);
    // card[17] = TAMEX3_SFP(sfp=sfp,card=17);
    // card[18] = TAMEX3_SFP(sfp=sfp,card=18);
    // card[19] = TAMEX3_SFP(sfp=sfp,card=19);
    // card[20] = TAMEX3_SFP(sfp=sfp,card=20);
    // card[21] = TAMEX3_SFP(sfp=sfp,card=21);
    // card[22] = TAMEX3_SFP(sfp=sfp,card=22);
    // card[23] = TAMEX3_SFP(sfp=sfp,card=23);
    // card[24] = TAMEX3_SFP(sfp=sfp,card=24);
    // card[25] = TAMEX3_SFP(sfp=sfp,card=25);
    // card[26] = TAMEX3_SFP(sfp=sfp,card=26);
    // card[27] = TAMEX3_SFP(sfp=sfp,card=27);
    // card[28] = TAMEX3_SFP(sfp=sfp,card=28);
    // card[29] = TAMEX3_SFP(sfp=sfp,card=29);
    // card[30] = TAMEX3_SFP(sfp=sfp,card=30);
    // card[31] = TAMEX3_SFP(sfp=sfp,card=31);
    // card[32] = TAMEX3_SFP(sfp=sfp,card=32);
    // card[33] = TAMEX3_SFP(sfp=sfp,card=33);
    // card[34] = TAMEX3_SFP(sfp=sfp,card=34);
  {
    PACK_DECL(1857,TAMEX3_SFP,card[0],/*sfp*/sfp,/*card*/0);
    PACK_DECL(1858,TAMEX3_SFP,card[1],/*sfp*/sfp,/*card*/1);
    PACK_DECL(1859,TAMEX3_SFP,card[2],/*sfp*/sfp,/*card*/2);
    PACK_DECL(1860,TAMEX3_SFP,card[3],/*sfp*/sfp,/*card*/3);
    PACK_DECL(1861,TAMEX3_SFP,card[4],/*sfp*/sfp,/*card*/4);
    PACK_DECL(1862,TAMEX3_SFP,card[5],/*sfp*/sfp,/*card*/5);
    PACK_DECL(1863,TAMEX3_SFP,card[6],/*sfp*/sfp,/*card*/6);
    PACK_DECL(1864,TAMEX3_SFP,card[7],/*sfp*/sfp,/*card*/7);
    PACK_DECL(1865,TAMEX3_SFP,card[8],/*sfp*/sfp,/*card*/8);
    PACK_DECL(1866,TAMEX3_SFP,card[9],/*sfp*/sfp,/*card*/9);
    PACK_DECL(1867,TAMEX3_SFP,card[10],/*sfp*/sfp,/*card*/10);
    PACK_DECL(1868,TAMEX3_SFP,card[11],/*sfp*/sfp,/*card*/11);
    PACK_DECL(1869,TAMEX3_SFP,card[12],/*sfp*/sfp,/*card*/12);
    PACK_DECL(1870,TAMEX3_SFP,card[13],/*sfp*/sfp,/*card*/13);
    PACK_DECL(1871,TAMEX3_SFP,card[14],/*sfp*/sfp,/*card*/14);
    PACK_DECL(1872,TAMEX3_SFP,card[15],/*sfp*/sfp,/*card*/15);
    PACK_DECL(1873,TAMEX3_SFP,card[16],/*sfp*/sfp,/*card*/16);
    PACK_DECL(1874,TAMEX3_SFP,card[17],/*sfp*/sfp,/*card*/17);
    PACK_DECL(1875,TAMEX3_SFP,card[18],/*sfp*/sfp,/*card*/18);
    PACK_DECL(1876,TAMEX3_SFP,card[19],/*sfp*/sfp,/*card*/19);
    PACK_DECL(1877,TAMEX3_SFP,card[20],/*sfp*/sfp,/*card*/20);
    PACK_DECL(1878,TAMEX3_SFP,card[21],/*sfp*/sfp,/*card*/21);
    PACK_DECL(1879,TAMEX3_SFP,card[22],/*sfp*/sfp,/*card*/22);
    PACK_DECL(1880,TAMEX3_SFP,card[23],/*sfp*/sfp,/*card*/23);
    PACK_DECL(1881,TAMEX3_SFP,card[24],/*sfp*/sfp,/*card*/24);
    PACK_DECL(1882,TAMEX3_SFP,card[25],/*sfp*/sfp,/*card*/25);
    PACK_DECL(1883,TAMEX3_SFP,card[26],/*sfp*/sfp,/*card*/26);
    PACK_DECL(1884,TAMEX3_SFP,card[27],/*sfp*/sfp,/*card*/27);
    PACK_DECL(1885,TAMEX3_SFP,card[28],/*sfp*/sfp,/*card*/28);
    PACK_DECL(1886,TAMEX3_SFP,card[29],/*sfp*/sfp,/*card*/29);
    PACK_DECL(1887,TAMEX3_SFP,card[30],/*sfp*/sfp,/*card*/30);
    PACK_DECL(1888,TAMEX3_SFP,card[31],/*sfp*/sfp,/*card*/31);
    PACK_DECL(1889,TAMEX3_SFP,card[32],/*sfp*/sfp,/*card*/32);
    PACK_DECL(1890,TAMEX3_SFP,card[33],/*sfp*/sfp,/*card*/33);
    PACK_DECL(1891,TAMEX3_SFP,card[34],/*sfp*/sfp,/*card*/34);
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,neuland_sfp::__packer,uint32 sfp);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for neuland_tamex_subev_data.
 *
 * Do not edit - automatically generated.
 */

// neuland_tamex_subev_data()
template<typename __data_dest_t>
void PACKER_neuland_tamex_subev_data::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(1902,LAND_STD_VME,land_vme);
  // select several

    // padding0 = TAMEX3_PADDING();
  {
    PACK_DECL(1904,TAMEX3_PADDING,padding0);
  }
  // sfp[0] = neuland_sfp(sfp=0);
  PACK_DECL(1906,neuland_sfp,sfp[0],/*sfp*/0);
  // select several

    // barrier = BARRIER();
    // padding1 = TAMEX3_PADDING();
  {
    PACK_DECL(1908,BARRIER,barrier);
    PACK_DECL(1909,TAMEX3_PADDING,padding1);
  }
  // sfp[1] = neuland_sfp(sfp=1);
  PACK_DECL(1911,neuland_sfp,sfp[1],/*sfp*/1);
}
FORCE_IMPL_DATA_SRC_FCN(void,neuland_tamex_subev_data::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for neuland_tamex_subev_data_swapped.
 *
 * Do not edit - automatically generated.
 */

// neuland_tamex_subev_data_swapped()
template<typename __data_dest_t>
void PACKER_neuland_tamex_subev_data_swapped::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(1917,LAND_STD_VME,land_vme);
  // select several

    // padding0 = TAMEX3_PADDING();
  {
    PACK_DECL(1919,TAMEX3_PADDING,padding0);
  }
  // sfp[1] = neuland_sfp(sfp=1);
  PACK_DECL(1921,neuland_sfp,sfp[1],/*sfp*/1);
  // select several

    // barrier = BARRIER();
    // padding1 = TAMEX3_PADDING();
  {
    PACK_DECL(1923,BARRIER,barrier);
    PACK_DECL(1924,TAMEX3_PADDING,padding1);
  }
  // sfp[0] = neuland_sfp(sfp=0);
  PACK_DECL(1926,neuland_sfp,sfp[0],/*sfp*/0);
}
FORCE_IMPL_DATA_SRC_FCN(void,neuland_tamex_subev_data_swapped::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for neuland_window.
 *
 * Do not edit - automatically generated.
 */

// neuland_window()
template<typename __data_dest_t>
void PACKER_neuland_window::__packer(__data_dest_t &__buffer)
{
  // UINT32 window;
}
FORCE_IMPL_DATA_SRC_FCN(void,neuland_window::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for tofd_tamex_subev_data.
 *
 * Do not edit - automatically generated.
 */

// tofd_tamex_subev_data()
template<typename __data_dest_t>
void PACKER_tofd_tamex_subev_data::__packer(__data_dest_t &__buffer)
{
  // land_vme = LAND_STD_VME();
  PACK_DECL(1945,LAND_STD_VME,land_vme);
  // select several

    // padding = TAMEX3_PADDING();
  {
    PACK_DECL(1947,TAMEX3_PADDING,padding);
  }
  // select several

    // tamex[0] = TAMEX3_SFP(sfp=0,card=0);
    // tamex[1] = TAMEX3_SFP(sfp=0,card=1);
    // tamex[2] = TAMEX3_SFP(sfp=0,card=2);
    // tamex[3] = TAMEX3_SFP(sfp=0,card=3);
    // tamex[4] = TAMEX3_SFP(sfp=0,card=4);
    // tamex[5] = TAMEX3_SFP(sfp=0,card=5);
    // tamex[6] = TAMEX3_SFP(sfp=0,card=6);
    // tamex[7] = TAMEX3_SFP(sfp=0,card=7);
    // tamex[8] = TAMEX3_SFP(sfp=0,card=8);
    // tamex[9] = TAMEX3_SFP(sfp=0,card=9);
    // tamex[10] = TAMEX3_SFP(sfp=0,card=10);
    // tamex[11] = TAMEX3_SFP(sfp=0,card=11);
  {
    PACK_DECL(1950,TAMEX3_SFP,tamex[0],/*sfp*/0,/*card*/0);
    PACK_DECL(1951,TAMEX3_SFP,tamex[1],/*sfp*/0,/*card*/1);
    PACK_DECL(1952,TAMEX3_SFP,tamex[2],/*sfp*/0,/*card*/2);
    PACK_DECL(1953,TAMEX3_SFP,tamex[3],/*sfp*/0,/*card*/3);
    PACK_DECL(1954,TAMEX3_SFP,tamex[4],/*sfp*/0,/*card*/4);
    PACK_DECL(1955,TAMEX3_SFP,tamex[5],/*sfp*/0,/*card*/5);
    PACK_DECL(1956,TAMEX3_SFP,tamex[6],/*sfp*/0,/*card*/6);
    PACK_DECL(1957,TAMEX3_SFP,tamex[7],/*sfp*/0,/*card*/7);
    PACK_DECL(1958,TAMEX3_SFP,tamex[8],/*sfp*/0,/*card*/8);
    PACK_DECL(1959,TAMEX3_SFP,tamex[9],/*sfp*/0,/*card*/9);
    PACK_DECL(1960,TAMEX3_SFP,tamex[10],/*sfp*/0,/*card*/10);
    PACK_DECL(1961,TAMEX3_SFP,tamex[11],/*sfp*/0,/*card*/11);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,tofd_tamex_subev_data::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for CALIFA.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CALIFA)
template<typename __data_dest_t>
void PACKER_CALIFA::__packer(__data_dest_t &__buffer)
{
  // ts400 = TIMESTAMP_WHITERABBIT(id=0x400);
  PACK_DECL(1640,TIMESTAMP_WHITERABBIT,ts400,/*id*/0x400);
  // select several

    // febex3 = FEBEX3_CALIFA_BASE();
  {
    PACK_DECL(1642,FEBEX3_CALIFA_BASE,febex3);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,CALIFA::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for ams_siderem_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(ams_siderem_subev)
template<typename __data_dest_t>
void PACKER_ams_siderem_subev::__packer(__data_dest_t &__buffer)
{
  // ts300 = TIMESTAMP_WHITERABBIT(id=0x300);
  PACK_DECL(1506,TIMESTAMP_WHITERABBIT,ts300,/*id*/0x300);
  // select several

    // external sst[0] = EXT_SST(siderem=1,gtb=0,sam=5,branch=0);
    // external sst[1] = EXT_SST(siderem=2,gtb=0,sam=5,branch=0);
    // external sst[2] = EXT_SST(siderem=1,gtb=1,sam=5,branch=0);
    // external sst[3] = EXT_SST(siderem=2,gtb=1,sam=5,branch=0);
  {
    PACK_DECL(1508,EXT_SST,sst[0],/*sam*/5,/*gtb*/0,/*siderem*/1,/*branch*/0);
    PACK_DECL(1509,EXT_SST,sst[1],/*sam*/5,/*gtb*/0,/*siderem*/2,/*branch*/0);
    PACK_DECL(1510,EXT_SST,sst[2],/*sam*/5,/*gtb*/1,/*siderem*/1,/*branch*/0);
    PACK_DECL(1511,EXT_SST,sst[3],/*sam*/5,/*gtb*/1,/*siderem*/2,/*branch*/0);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,ams_siderem_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(febex_subev)
template<typename __data_dest_t>
void PACKER_febex_subev::__packer(__data_dest_t &__buffer)
{
  // select several

    // data = febex_subev_data();
  {
    PACK_DECL(1679,febex_subev_data,data);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,febex_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for fib_ctdc0_fib3_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fib_ctdc0_fib3_subev)
template<typename __data_dest_t>
void PACKER_fib_ctdc0_fib3_subev::__packer(__data_dest_t &__buffer)
{
  // select several

    // data = fib_ctdc0_fib3_subev_data();
  {
    PACK_DECL(1730,fib_ctdc0_fib3_subev_data,data);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fib_ctdc0_fib3_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for fib_ctdc0_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fib_ctdc0_subev)
template<typename __data_dest_t>
void PACKER_fib_ctdc0_subev::__packer(__data_dest_t &__buffer)
{
  // select several

    // data = fib_ctdc0_subev_data();
  {
    PACK_DECL(1700,fib_ctdc0_subev_data,data);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fib_ctdc0_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for fib_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fib_tamex_subev)
template<typename __data_dest_t>
void PACKER_fib_tamex_subev::__packer(__data_dest_t &__buffer)
{
  // select several

    // data = fib_tamex_data();
  {
    PACK_DECL(1751,fib_tamex_data,data);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fib_tamex_subev::__packer);

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
  // select several

    // scalers = lmu_scalers_data();
  {
    PACK_DECL(1763,lmu_scalers_data,scalers);
  }
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
  PACK_DECL(1774,LAND_STD_VME,land_vme);
  // select several

    // los = TRLOII_SAMPLER_TWO(mark=0x1050);
    // ms = TRLOII_SAMPLER_TWO(mark=0x1060);
  {
    PACK_DECL(1776,TRLOII_SAMPLER_TWO,los,/*mark*/0x1050);
    PACK_DECL(1777,TRLOII_SAMPLER_TWO,ms,/*mark*/0x1060);
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

    // scalers = los_scalers_data();
  {
    PACK_DECL(1789,los_scalers_data,scalers);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,los_scalers_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for los_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_tamex_subev)
template<typename __data_dest_t>
void PACKER_los_tamex_subev::__packer(__data_dest_t &__buffer)
{
  // select several

    // data = los_tamex_data();
  {
    PACK_DECL(1807,los_tamex_data,data);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,los_tamex_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for los_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_vme_subev)
template<typename __data_dest_t>
void PACKER_los_vme_subev::__packer(__data_dest_t &__buffer)
{
  // select several

    // data = los_vme_subev_data();
  {
    PACK_DECL(1825,los_vme_subev_data,data);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,los_vme_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for master_monitor_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(master_monitor_subev)
template<typename __data_dest_t>
void PACKER_master_monitor_subev::__packer(__data_dest_t &__buffer)
{
  // select several

    // data = master_monitor_subev_data();
  {
    PACK_DECL(1840,master_monitor_subev_data,data);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,master_monitor_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for master_scalers_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(master_scalers_subev)
template<typename __data_dest_t>
void PACKER_master_scalers_subev::__packer(__data_dest_t &__buffer)
{
  // scalers = master_scalers_data();
  PACK_DECL(1851,master_scalers_data,scalers);
}
FORCE_IMPL_DATA_SRC_FCN(void,master_scalers_subev::__packer);

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
  // select several

    // data = neuland_tamex_subev_data();
  {
    PACK_DECL(1932,neuland_tamex_subev_data,data);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,neuland_tamex_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for neuland_tamex_swapped_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(neuland_tamex_swapped_subev)
template<typename __data_dest_t>
void PACKER_neuland_tamex_swapped_subev::__packer(__data_dest_t &__buffer)
{
  // select several

    // data = neuland_tamex_subev_data_swapped();
  {
    PACK_DECL(1939,neuland_tamex_subev_data_swapped,data);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,neuland_tamex_swapped_subev::__packer);

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
  // select several

    // data = tofd_tamex_subev_data();
  {
    PACK_DECL(1968,tofd_tamex_subev_data,data);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,tofd_tamex_subev::__packer);

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
  PACK_DECL(1974,TRLOII_TPAT,tpat,/*id*/207);
}
FORCE_IMPL_DATA_SRC_FCN(void,tpat_subev::__packer);

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
  PACK_DECL(1979,TIMESTAMP_WHITERABBIT,ts100,/*id*/0x100);
  // wr_multi = WR_MULTI();
  PACK_DECL(1980,WR_MULTI,wr_multi);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_100::__packer);

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
  // master_scalers = master_scalers_subev(type=38,subtype=0xed8,control=0);
  // master_monitor = master_monitor_subev(type=88,subtype=0x2260,control=0);
  // los_sampler = los_sampler_subev(type=39,subtype=0xf3c,control=1);
  // los_scalers = los_scalers_subev(type=38,subtype=0xed8,control=1);
  // los_vme = los_vme_subev(type=88,subtype=0x2260,control=1);
  // los_tamex = los_tamex_subev(type=102,subtype=0x27d8,control=2);
  // tofd_tamex_1 = tofd_tamex_subev(type=102,subtype=0x27d8,control=3);
  // tofd_tamex_2 = tofd_tamex_subev(type=102,subtype=0x27d8,control=8);
  // fib12_ctdc = fib_ctdc0_subev(type=103,subtype=0x283c,control=4);
  // fib13_ctdc = fib_ctdc0_subev(type=103,subtype=0x283c,control=12);
  // fib10_ctdc = fib_ctdc0_fib3_subev(type=103,subtype=0x283c,control=13);
  // fib11_ctdc = fib_ctdc0_subev(type=103,subtype=0x283c,control=14);
  // fib_tamex = fib_tamex_subev(type=102,subtype=0x27d8,control=5);
  // pspx = febex_subev(type=101,subtype=0x2774,control=6);
  // pspx2 = febex_subev(type=101,subtype=0x2774,control=16);
  // pspx3 = febex_subev(type=101,subtype=0x2774,control=17);
  // ams_siderem = ams_siderem_subev(type=82,subtype=0x2008,control=7);
  // revisit califa = CALIFA(type=100,subtype=0x2710,subcrate=2,procid=2,
                          // control=9);
  // neuland_tamex_1 = neuland_tamex_subev(type=102,subtype=0x27d8,control=10);
  // neuland_tamex_2 = neuland_tamex_swapped_subev(type=102,subtype=0x27d8,
                                                // control=11);
  // fibsipm_ctdc = fib_ctdc0_subev(type=103,subtype=0x283c,control=18);
  // ignore_unknown_subevent;
{
}

/** END_PACKER ********************************************************/
