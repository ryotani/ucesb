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
  PACK_DECL(817,NTP64_TIME,reftime);
  // origtime = NTP64_TIME();
  PACK_DECL(818,NTP64_TIME,origtime);
  // rectime = NTP64_TIME();
  PACK_DECL(819,NTP64_TIME,rectime);
  // tmittime = NTP64_TIME();
  PACK_DECL(820,NTP64_TIME,tmittime);
  // rxtime = NTP64_TIME();
  PACK_DECL(823,NTP64_TIME,rxtime);
  // if(header.quick_burst)

  if (header.quick_burst)
  {
    // orig2time = NTP64_TIME();
    PACK_DECL(827,NTP64_TIME,orig2time);
    // rec2time = NTP64_TIME();
    PACK_DECL(828,NTP64_TIME,rec2time);
    // tmit2time = NTP64_TIME();
    PACK_DECL(829,NTP64_TIME,tmit2time);
    // rx2time = NTP64_TIME();
    PACK_DECL(830,NTP64_TIME,rx2time);
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
  PACK_DECL(846,NTP64_TIME,before);
  // after = NTP64_TIME();
  PACK_DECL(847,NTP64_TIME,after);
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
    PACK_DECL(870,RANDOM_TCAL_TSTAMP_CLOCK,tstamp1);
  }
  // if(header.has_tstamp2)

  if (header.has_tstamp2)
  {
    // tstamp2 = RANDOM_TCAL_TSTAMP_CLOCK();
    PACK_DECL(874,RANDOM_TCAL_TSTAMP_CLOCK,tstamp2);
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
 * Event packer for DUMMY_TDC.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(DUMMY_TDC)
template<typename __data_dest_t>
void PACKER_DUMMY_TDC::__packer(__data_dest_t &__buffer)
{
  // select several

    // d = DUMMY_WORD();
  {
    PACK_DECL(1034,DUMMY_WORD,d);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,DUMMY_TDC::__packer);

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
    // qdc_SIA0429 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    PACK_DECL(759,CAMAC_SILENA_4418,qdc_SIA0429,/*channels*/8,/*mark_channel_no*/0);
    // tdc_SIA8035 = CAMAC_SILENA_4418(channels=4,mark_channel_no=0);
    PACK_DECL(760,CAMAC_SILENA_4418,tdc_SIA8035,/*channels*/4,/*mark_channel_no*/0);
    // qdc_SIA0458 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    PACK_DECL(761,CAMAC_SILENA_4418,qdc_SIA0458,/*channels*/8,/*mark_channel_no*/0);
    // qdc_SIA0416 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    PACK_DECL(762,CAMAC_SILENA_4418,qdc_SIA0416,/*channels*/8,/*mark_channel_no*/0);
    // tdc_SIA0426 = CAMAC_SILENA_4418(channels=4,mark_channel_no=0);
    PACK_DECL(763,CAMAC_SILENA_4418,tdc_SIA0426,/*channels*/4,/*mark_channel_no*/0);
    // tdc_SIA0400 = CAMAC_SILENA_4418(channels=8,mark_channel_no=0);
    PACK_DECL(764,CAMAC_SILENA_4418,tdc_SIA0400,/*channels*/8,/*mark_channel_no*/0);
    // tdc_SIA0401 = CAMAC_SILENA_4418(channels=2,mark_channel_no=0);
    PACK_DECL(765,CAMAC_SILENA_4418,tdc_SIA0401,/*channels*/2,/*mark_channel_no*/0);
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
  PACK_DECL(914,CAMAC_LECROY_4434,scaler0,/*channels*/32);
  // scaler1 = CAMAC_LECROY_4434(channels=32);
  PACK_DECL(915,CAMAC_LECROY_4434,scaler1,/*channels*/32);
  // scaler2 = CAMAC_LECROY_4434(channels=32);
  PACK_DECL(916,CAMAC_LECROY_4434,scaler2,/*channels*/32);
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
    PACK_DECL(889,RANDOM_TCAL,rtcal,/*id*/231);
    PACK_DECL(890,NTP_MESSAGE,ntp,/*id*/239);
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

    // qdc_L_Q47342 = FASTBUS_LECROY_1885(geom=7,channels=96);
    // qdc_L_Q11111 = FASTBUS_LECROY_1885(geom=8,channels=96);
    // qdc_L_Q46848 = FASTBUS_LECROY_1885(geom=10,channels=96);
    // qdc_L_Q47315 = FASTBUS_LECROY_1885(geom=11,channels=96);
    // qdc_L_Q17320 = FASTBUS_LECROY_1885(geom=13,channels=96);
    // qdc_L_Q15372 = FASTBUS_LECROY_1885(geom=15,channels=96);
    // qdc_F_Q46962 = FASTBUS_LECROY_1885(geom=16,channels=96);
    // qdc_L_Q46993 = FASTBUS_LECROY_1885(geom=18,channels=96);
    // qdc_L_Q15358 = FASTBUS_LECROY_1885(geom=20,channels=96);
    // qdc_L_Q47264 = FASTBUS_LECROY_1885(geom=23,channels=96);
    // tdc_L_T81855 = FASTBUS_LECROY_1875(geom=3,channels=64);
    // tdc_L_T87044 = FASTBUS_LECROY_1875(geom=4,channels=64);
    // tdc_L_T87024 = FASTBUS_LECROY_1875(geom=5,channels=64);
    // tdc_L_T81800 = FASTBUS_LECROY_1875(geom=6,channels=64);
  {
    PACK_DECL(982,FASTBUS_LECROY_1885,qdc_L_Q47342,/*geom*/7,/*channels*/96);
    PACK_DECL(983,FASTBUS_LECROY_1885,qdc_L_Q11111,/*geom*/8,/*channels*/96);
    PACK_DECL(984,FASTBUS_LECROY_1885,qdc_L_Q46848,/*geom*/10,/*channels*/96);
    PACK_DECL(985,FASTBUS_LECROY_1885,qdc_L_Q47315,/*geom*/11,/*channels*/96);
    PACK_DECL(986,FASTBUS_LECROY_1885,qdc_L_Q17320,/*geom*/13,/*channels*/96);
    PACK_DECL(987,FASTBUS_LECROY_1885,qdc_L_Q15372,/*geom*/15,/*channels*/96);
    PACK_DECL(988,FASTBUS_LECROY_1885,qdc_F_Q46962,/*geom*/16,/*channels*/96);
    PACK_DECL(989,FASTBUS_LECROY_1885,qdc_L_Q46993,/*geom*/18,/*channels*/96);
    PACK_DECL(990,FASTBUS_LECROY_1885,qdc_L_Q15358,/*geom*/20,/*channels*/96);
    PACK_DECL(991,FASTBUS_LECROY_1885,qdc_L_Q47264,/*geom*/23,/*channels*/96);
    PACK_DECL(992,FASTBUS_LECROY_1875,tdc_L_T81855,/*geom*/3,/*channels*/64);
    PACK_DECL(993,FASTBUS_LECROY_1875,tdc_L_T87044,/*geom*/4,/*channels*/64);
    PACK_DECL(994,FASTBUS_LECROY_1875,tdc_L_T87024,/*geom*/5,/*channels*/64);
    PACK_DECL(995,FASTBUS_LECROY_1875,tdc_L_T81800,/*geom*/6,/*channels*/64);
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

    // tdc_L_T87047 = FASTBUS_LECROY_1875(geom=1,channels=64);
    // tdc_L_T48854 = FASTBUS_LECROY_1875(geom=2,channels=64);
    // tdc_L_T81808 = FASTBUS_LECROY_1875(geom=3,channels=64);
    // tdc_L_T81859 = FASTBUS_LECROY_1875(geom=4,channels=64);
    // tdc_L_T81795 = FASTBUS_LECROY_1875(geom=5,channels=64);
    // tdc_L_T81806 = FASTBUS_LECROY_1875(geom=6,channels=64);
    // tdc_L_T48834 = FASTBUS_LECROY_1875(geom=7,channels=64);
  {
    PACK_DECL(1010,FASTBUS_LECROY_1875,tdc_L_T87047,/*geom*/1,/*channels*/64);
    PACK_DECL(1011,FASTBUS_LECROY_1875,tdc_L_T48854,/*geom*/2,/*channels*/64);
    PACK_DECL(1012,FASTBUS_LECROY_1875,tdc_L_T81808,/*geom*/3,/*channels*/64);
    PACK_DECL(1013,FASTBUS_LECROY_1875,tdc_L_T81859,/*geom*/4,/*channels*/64);
    PACK_DECL(1014,FASTBUS_LECROY_1875,tdc_L_T81795,/*geom*/5,/*channels*/64);
    PACK_DECL(1015,FASTBUS_LECROY_1875,tdc_L_T81806,/*geom*/6,/*channels*/64);
    PACK_DECL(1016,FASTBUS_LECROY_1875,tdc_L_T48834,/*geom*/7,/*channels*/64);
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
 * Event packer for SIDEREM01_VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(SIDEREM01_VME)
template<typename __data_dest_t>
void PACKER_SIDEREM01_VME::__packer(__data_dest_t &__buffer)
{
  // select several

    // sst[0] = SIDEREM_BLOCK(siderem=1,gtb=0,sam=3);
    // sst[1] = SIDEREM_BLOCK(siderem=2,gtb=0,sam=3);
    // sst[2] = SIDEREM_BLOCK(siderem=3,gtb=0,sam=3);
    // sst[3] = SIDEREM_BLOCK(siderem=4,gtb=0,sam=3);
  {
    PACK_DECL(737,SIDEREM_BLOCK,sst[0],/*sam*/3,/*gtb*/0,/*siderem*/1);
    PACK_DECL(738,SIDEREM_BLOCK,sst[1],/*sam*/3,/*gtb*/0,/*siderem*/2);
    PACK_DECL(739,SIDEREM_BLOCK,sst[2],/*sam*/3,/*gtb*/0,/*siderem*/3);
    PACK_DECL(740,SIDEREM_BLOCK,sst[3],/*sam*/3,/*gtb*/0,/*siderem*/4);
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
  // sst = SIDEREM01_VME(type=10,subtype=1,control=91);
  // camac = LAND_CAMAC_CONVERTER(type=34,subtype=0xc80);
  // fastbus_1 = LAND_FASTBUS1(type=32,subtype=0xc3a,subcrate=1);
  // fastbus_2 = LAND_FASTBUS2(type=32,subtype=0xc3a,subcrate=2);
  // camac = LAND_CAMAC_CONVERTER(type=0x26ce,subtype=0xc80);
  // camac_tcal_info = LAND_CAMAC_TCAL_INFO(type=0x26ce,subtype=0xc7f);
  // d2 = DUMMY_TDC(type=35,subtype=0xc1c);
  // camac_scalers = LAND_CAMAC_SCALER(type=34,subtype=0xc1c);
  // camac_scalers = LAND_CAMAC_SCALER(type=0x26ce,subtype=0xc1c);
  // fastbus_error = LAND_FASTBUS_ERROR(type=31,subtype=0xc1c);
  // d1 = DUMMY_TDC(type=34,subtype=0xdac,control=9);
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
