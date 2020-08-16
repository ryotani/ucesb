/** BEGIN_PACKER *******************************************************
 *
 * Event packer for CAEN_V775.
 *
 * Do not edit - automatically generated.
 */

// CAEN_V775(geom,crate)
template<typename __data_dest_t>
void PACKER_CAEN_V775::__packer(__data_dest_t &__buffer,uint32 geom,uint32 crate)
{
  // MEMBER(DATA12_OVERFLOW data[32] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_07: undefined;
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
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CAEN_V775::__packer,uint32 geom,uint32 crate);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for CAEN_V830_SCALER.
 *
 * Do not edit - automatically generated.
 */

// CAEN_V830_SCALER(id)
template<typename __data_dest_t>
void PACKER_CAEN_V830_SCALER::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 sc_header
  // {
    //  0_06: count = RANGE(0,31);
    // 24_31: id = MATCH(id);
  // }
  // UINT32 header
  // {
    //  0_15: event_number;
    // 16_17: ts;
    // 18_23: count;
    // 24_25: undefined;
    //    26: 1;
    // 27_31: geom;
  // }
  // list(0<=index<header.count)

  {
    // UINT32 sc NOENCODE
    // {
      //  0_25: value;
      //    26: 0;
      // 27_31: channel;
      // ENCODE(data[channel],(value=value));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,CAEN_V830_SCALER::__packer,uint32 id);

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
  // MEMBER(DATA32 timestamp);
  // UINT32 failure
  // {
    //     0: fail_general;
    //     1: fail_data_corrupt;
    //     2: fail_data_missing;
    //     3: fail_data_too_much;
    //     4: fail_event_counter_mismatch;
    //     5: fail_readout_error_driver;
    //     6: fail_unexpected_trigger;
    //    26: has_scaler_data;
    //    27: has_no_zero_suppression;
    //    28: has_multi_adctdc_counter0;
    //    29: has_multi_scaler_counter0;
    //    30: has_multi_event;
    //    31: has_time_stamp;
  // }
  // if(failure.has_time_stamp)

  if (failure.has_time_stamp)
  {
    // UINT32 time_stamp
    // {
      //  0_31: value;
      // ENCODE(timestamp,(value=value));
    // }
  }
  // if(failure.has_multi_event)

  if (failure.has_multi_event)
  {
    // UINT32 multi_events;
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
 * Event packer for SERIAL_TS_EVENT.
 *
 * Do not edit - automatically generated.
 */

// SERIAL_TS_EVENT()
template<typename __data_dest_t>
void PACKER_SERIAL_TS_EVENT::__packer(__data_dest_t &__buffer)
{
  // MEMBER(DATA32 ts_hi);
  // MEMBER(DATA32 ts_lo);
  // UINT32 ts_lsb NOENCODE
  // {
    //  0_31: t_lsb;
    // ENCODE(ts_lo,(value=t_lsb));
  // }
  // UINT32 ts_msb NOENCODE
  // {
    //  0_30: t_msb;
    //    31: missed_event;
    // ENCODE(ts_hi,(value=t_msb));
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,SERIAL_TS_EVENT::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for SERIAL_TS.
 *
 * Do not edit - automatically generated.
 */

// SERIAL_TS()
template<typename __data_dest_t>
void PACKER_SERIAL_TS::__packer(__data_dest_t &__buffer)
{
  // UINT32 header NOENCODE
  // {
    //  0_31: multi_events;
  // }
  // list(0<=i<header.multi_events)

  {
    // multi event = SERIAL_TS_EVENT();
    PACK_DECL(808,SERIAL_TS_EVENT,multi_event.next_free());
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,SERIAL_TS::__packer);

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
 * Event packer for TRIGBUF_ENTRY.
 *
 * Do not edit - automatically generated.
 */

// TRIGBUF_ENTRY()
template<typename __data_dest_t>
void PACKER_TRIGBUF_ENTRY::__packer(__data_dest_t &__buffer)
{
  // MEMBER(DATA32 ts_hi);
  // MEMBER(DATA32 ts_lo);
  // MEMBER(DATA32 tpat);
  // MEMBER(DATA8 trig);
  // UINT32 ts_lsb NOENCODE
  // {
    //  0_31: t_lsb;
    // ENCODE(ts_lo,(value=t_lsb));
  // }
  // UINT32 ts_msb NOENCODE
  // {
    //  0_30: t_msb;
    //    31: missed_event;
    // ENCODE(ts_hi,(value=t_msb));
  // }
  // UINT32 info NOENCODE
  // {
    //  0_23: tpat;
    // 24_27: trig;
    // 28_31: cnt;
    // ENCODE(tpat,(value=tpat));
    // ENCODE(trig,(value=trig));
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,TRIGBUF_ENTRY::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TRIGBUF.
 *
 * Do not edit - automatically generated.
 */

// TRIGBUF(multi_events)
template<typename __data_dest_t>
void PACKER_TRIGBUF::__packer(__data_dest_t &__buffer,uint32 multi_events)
{
  // UINT32 header
  // {
    //  0_11: entries;
    // 12_31: multi_events;
  // }
  // list(0<=i<multi_events)

  {
    // multi entry = TRIGBUF_ENTRY();
    PACK_DECL(836,TRIGBUF_ENTRY,multi_entry.next_free());
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRIGBUF::__packer,uint32 multi_events);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TRLO.
 *
 * Do not edit - automatically generated.
 */

// TRLO(id,multi_events)
template<typename __data_dest_t>
void PACKER_TRLO::__packer(__data_dest_t &__buffer,uint32 id,uint32 multi_events)
{
  // wr_ts = TIMESTAMP_WHITERABBIT(id=id);
  PACK_DECL(869,TIMESTAMP_WHITERABBIT,wr_ts,/*id*/id);
  // serial_ts = SERIAL_TS();
  PACK_DECL(870,SERIAL_TS,serial_ts);
  // trigbuf = TRIGBUF(multi_events=multi_events);
  PACK_DECL(871,TRIGBUF,trigbuf,/*multi_events*/multi_events);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLO::__packer,uint32 id,uint32 multi_events);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TRLO_EVENT_TRIGGER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_EVENT_TRIGGER()
template<typename __data_dest_t>
void PACKER_TRLO_EVENT_TRIGGER::__packer(__data_dest_t &__buffer)
{
  // UINT32 time_lo
  // {
    //  0_31: val;
  // }
  // UINT32 time_hi
  // {
    //  0_30: val;
    //    31: missed_event;
  // }
  // UINT32 status
  // {
    //  0_23: tpat;
    // 24_27: trig;
    // 28_31: count;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,TRLO_EVENT_TRIGGER::__packer);

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
    //    10: missing_at_end;
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
 * Event packer for TRLO_TRIG_SCALER.
 *
 * Do not edit - automatically generated.
 */

// TRLO_TRIG_SCALER(id)
template<typename __data_dest_t>
void PACKER_TRLO_TRIG_SCALER::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 before_lmu[16] ZERO_SUPPRESS);
  // MEMBER(DATA32 before_lmu_mux[1] ZERO_SUPPRESS);
  // MEMBER(DATA32 before_lmu_aux[4] ZERO_SUPPRESS);
  // MEMBER(DATA32 before_deadtime[16] ZERO_SUPPRESS);
  // MEMBER(DATA32 after_deadtime[16] ZERO_SUPPRESS);
  // MEMBER(DATA32 after_reduction[16] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_05: before_lmu = RANGE(0,16);
    //  6_10: before_lmu_mux = RANGE(0,1);
    // 11_15: before_lmu_aux = RANGE(0,4);
    // 16_21: after_lmu = RANGE(0,16);
    // 24_31: id = MATCH(id);
  // }
  // list(0<=index<header.before_lmu)

  {
    // UINT32 b_lmu NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu[index],(value=value));
    // }
  }
  // list(0<=index<header.before_lmu_mux)

  {
    // UINT32 b_lmu_mux NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_mux[index],(value=value));
    // }
  }
  // list(0<=index<header.before_lmu_aux)

  {
    // UINT32 b_lmu_aux NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_aux[index],(value=value));
    // }
  }
  // list(0<=index<header.after_lmu)

  {
    // UINT32 b_deadtime NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_deadtime[index],(value=value));
    // }
  }
  // list(0<=index<header.after_lmu)

  {
    // UINT32 a_deadtime NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_deadtime[index],(value=value));
    // }
  }
  // list(0<=index<header.after_lmu)

  {
    // UINT32 a_reduction NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_reduction[index],(value=value));
    // }
  }
  // list(0<=index<16)

  {
    // UINT32 val;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLO_TRIG_SCALER::__packer,uint32 id);

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
    PACK_DECL(487,VME_CAEN_V1190_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(488,VME_CAEN_V1190_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(489,VME_CAEN_V1190_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(490,VME_CAEN_V1190_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
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
    PACK_DECL(576,VME_CAEN_V1190_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(577,VME_CAEN_V1190_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(578,VME_CAEN_V1190_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(579,VME_CAEN_V1190_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(581,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
    PACK_DECL(582,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
    PACK_DECL(583,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
    PACK_DECL(584,VME_CAEN_V1190_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
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
    PACK_DECL(282,VME_CAEN_V1290_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(283,VME_CAEN_V1290_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(284,VME_CAEN_V1290_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(285,VME_CAEN_V1290_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
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
    PACK_DECL(371,VME_CAEN_V1290_SHORT_SUBTDC,tdc[0],/*tdc*/0,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(372,VME_CAEN_V1290_SHORT_SUBTDC,tdc[1],/*tdc*/1,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(373,VME_CAEN_V1290_SHORT_SUBTDC,tdc[2],/*tdc*/2,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(374,VME_CAEN_V1290_SHORT_SUBTDC,tdc[3],/*tdc*/3,/*event_id*/(header.event_number & 0xfff),/*data*/data);
    PACK_DECL(376,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[0],/*tdc*/0);
    PACK_DECL(377,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[1],/*tdc*/1);
    PACK_DECL(378,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[2],/*tdc*/2);
    PACK_DECL(379,VME_CAEN_V1290_SHORT_SUBTDC_ERROR,err[3],/*tdc*/3);
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
 * Event packer for VME_MESY_MADC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESY_MADC32(geom)
template<typename __data_dest_t>
void PACKER_VME_MESY_MADC32::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA16 data[32] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_11: word_number;
    // 12_14: adc_resol;
    //    15: out_form;
    // 16_23: geom = MATCH(geom);
    // 24_29: 0;
    // 30_31: 1;
  // }
  // list(0<=index<(header.word_number - 1))

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_12: value;
      //    14: outofrange;
      // 16_20: channel;
      // 21_29: 32;
      // 30_31: 0;
      // ENCODE(data[channel],(value=value));
    // }
  }
  // UINT32 end_of_event NOENCODE
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_MESY_MADC32::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_MESY_MADC32_PADDING.
 *
 * Do not edit - automatically generated.
 */

// VME_MESY_MADC32_PADDING()
template<typename __data_dest_t>
void PACKER_VME_MESY_MADC32_PADDING::__packer(__data_dest_t &__buffer)
{
  // UINT32 padding NOENCODE
  // {
    //  0_31: value = MATCH(0x32323232);
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,VME_MESY_MADC32_PADDING::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_STRUCK_SIS3316_CHANNEL_DATA.
 *
 * Do not edit - automatically generated.
 */

// VME_STRUCK_SIS3316_CHANNEL_DATA(id,ch)
template<typename __data_dest_t>
void PACKER_VME_STRUCK_SIS3316_CHANNEL_DATA::__packer(__data_dest_t &__buffer,uint32 id
                                                                             ,uint32 ch)
{
  // MEMBER(DATA32 ts[2] ZERO_SUPPRESS);
  // MEMBER(DATA32 gate[8] ZERO_SUPPRESS);
  // MEMBER(DATA32 maw[3] ZERO_SUPPRESS);
  // MEMBER(DATA32 maxe[2] ZERO_SUPPRESS);
  // UINT32 header0
  // {
    //     0: has_acc6;
    //     1: has_acc2;
    //     2: has_maw;
    //     3: has_e;
    //  4_07: chanNo = MATCH(ch);
    //  8_15: id = MATCH(id);
    // 16_31: timeS;
    // ENCODE(ts[0],(value=timeS));
  // }
  // UINT32 header2
  // {
    //  0_31: timeS;
    // ENCODE(ts[1],(value=timeS));
  // }
  // if(header0.has_acc6)

  if (header0.has_acc6)
  {
    // UINT32 peak NOENCODE
    // {
      //  0_15: peakValue;
      // 16_31: peakIndex;
    // }
    // UINT32 gate_group_1
    // {
      //  0_23: sum;
      // 24_27: reserved;
      //    28: has_pileup;
      //    29: has_repileup;
      //    30: has_underflow;
      //    31: has_overflow;
      // ENCODE(gate[0],(value=sum));
    // }
    // list(1<=i<6)

    {
      // UINT32 gate_group_2_6
      // {
        //  0_27: sum;
        // 28_31: 0;
        // ENCODE(gate[i],(value=sum));
      // }
    }
  }
  // if(header0.has_acc2)

  if (header0.has_acc2)
  {
    // list(6<=i<8)

    {
      // UINT32 gate_group_7_8
      // {
        //  0_27: sum;
        // 28_31: 0;
        // ENCODE(gate[i],(value=sum));
      // }
    }
  }
  // if(header0.has_maw)

  if (header0.has_maw)
  {
    // UINT32 maw1
    // {
      //  0_31: max;
      // ENCODE(maw[0],(value=max));
    // }
    // UINT32 maw2
    // {
      //  0_31: after;
      // ENCODE(maw[1],(value=after));
    // }
    // UINT32 maw3
    // {
      //  0_31: before;
      // ENCODE(maw[2],(value=before));
    // }
  }
  // if(header0.has_e)

  if (header0.has_e)
  {
    // UINT32 maxe1
    // {
      //  0_31: start;
      // ENCODE(maxe[0],(value=(start + 0x08000000)));
    // }
    // UINT32 maxe2
    // {
      //  0_31: max;
      // ENCODE(maxe[1],(value=(max + 0x08000000)));
    // }
  }
  // UINT32 header3
  // {
    //  0_25: sampleLength;
    //    26: pileup;
    //    27: mawFlag;
    // 28_31: 14;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_STRUCK_SIS3316_CHANNEL_DATA::__packer,uint32 id
                                                                          ,uint32 ch);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_STRUCK_SIS3316_CHANNEL.
 *
 * Do not edit - automatically generated.
 */

// VME_STRUCK_SIS3316_CHANNEL(id,ch)
template<typename __data_dest_t>
void PACKER_VME_STRUCK_SIS3316_CHANNEL::__packer(__data_dest_t &__buffer,uint32 id
                                                                        ,uint32 ch)
{
  // UINT32 channel_header NOENCODE
  // {
    //  0_07: id = MATCH(id);
    //  8_11: ch = MATCH(ch);
    // 12_15: padding_words;
    // 16_31: module = MATCH(0x3316);
  // }
  // list(0<=n<channel_header.padding_words)

  {
    // UINT32 padding NOENCODE
    // {
      //  0_07: id = MATCH(id);
      //  8_15: ch = MATCH(ch);
      // 16_31: module = MATCH(0x3316);
    // }
  }
  // select several

    // multi data = VME_STRUCK_SIS3316_CHANNEL_DATA(id=id,ch=ch);
  {
    PACK_DECL(1124,VME_STRUCK_SIS3316_CHANNEL_DATA,data,/*id*/id,/*ch*/ch);
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_STRUCK_SIS3316_CHANNEL::__packer,uint32 id
                                                                     ,uint32 ch);

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
  // MEMBER(DATA8 n_ch);
  // UINT32 header NOENCODE
  // {
    //  0_07: id = MATCH(id);
    //  8_15: nofCH;
    // 16_31: module = MATCH(0x3316);
    // ENCODE(n_ch,(value=nofCH));
  // }
  // select several

    // channel[0] = VME_STRUCK_SIS3316_CHANNEL(ch=0,id=id);
    // channel[1] = VME_STRUCK_SIS3316_CHANNEL(ch=1,id=id);
    // channel[2] = VME_STRUCK_SIS3316_CHANNEL(ch=2,id=id);
    // channel[3] = VME_STRUCK_SIS3316_CHANNEL(ch=3,id=id);
    // channel[4] = VME_STRUCK_SIS3316_CHANNEL(ch=4,id=id);
    // channel[5] = VME_STRUCK_SIS3316_CHANNEL(ch=5,id=id);
    // channel[6] = VME_STRUCK_SIS3316_CHANNEL(ch=6,id=id);
    // channel[7] = VME_STRUCK_SIS3316_CHANNEL(ch=7,id=id);
    // channel[8] = VME_STRUCK_SIS3316_CHANNEL(ch=8,id=id);
    // channel[9] = VME_STRUCK_SIS3316_CHANNEL(ch=9,id=id);
    // channel[10] = VME_STRUCK_SIS3316_CHANNEL(ch=10,id=id);
    // channel[11] = VME_STRUCK_SIS3316_CHANNEL(ch=11,id=id);
    // channel[12] = VME_STRUCK_SIS3316_CHANNEL(ch=12,id=id);
    // channel[13] = VME_STRUCK_SIS3316_CHANNEL(ch=13,id=id);
    // channel[14] = VME_STRUCK_SIS3316_CHANNEL(ch=14,id=id);
    // channel[15] = VME_STRUCK_SIS3316_CHANNEL(ch=15,id=id);
  {
    PACK_DECL(1084,VME_STRUCK_SIS3316_CHANNEL,channel[0],/*id*/id,/*ch*/0);
    PACK_DECL(1085,VME_STRUCK_SIS3316_CHANNEL,channel[1],/*id*/id,/*ch*/1);
    PACK_DECL(1086,VME_STRUCK_SIS3316_CHANNEL,channel[2],/*id*/id,/*ch*/2);
    PACK_DECL(1087,VME_STRUCK_SIS3316_CHANNEL,channel[3],/*id*/id,/*ch*/3);
    PACK_DECL(1088,VME_STRUCK_SIS3316_CHANNEL,channel[4],/*id*/id,/*ch*/4);
    PACK_DECL(1089,VME_STRUCK_SIS3316_CHANNEL,channel[5],/*id*/id,/*ch*/5);
    PACK_DECL(1090,VME_STRUCK_SIS3316_CHANNEL,channel[6],/*id*/id,/*ch*/6);
    PACK_DECL(1091,VME_STRUCK_SIS3316_CHANNEL,channel[7],/*id*/id,/*ch*/7);
    PACK_DECL(1092,VME_STRUCK_SIS3316_CHANNEL,channel[8],/*id*/id,/*ch*/8);
    PACK_DECL(1093,VME_STRUCK_SIS3316_CHANNEL,channel[9],/*id*/id,/*ch*/9);
    PACK_DECL(1094,VME_STRUCK_SIS3316_CHANNEL,channel[10],/*id*/id,/*ch*/10);
    PACK_DECL(1095,VME_STRUCK_SIS3316_CHANNEL,channel[11],/*id*/id,/*ch*/11);
    PACK_DECL(1096,VME_STRUCK_SIS3316_CHANNEL,channel[12],/*id*/id,/*ch*/12);
    PACK_DECL(1097,VME_STRUCK_SIS3316_CHANNEL,channel[13],/*id*/id,/*ch*/13);
    PACK_DECL(1098,VME_STRUCK_SIS3316_CHANNEL,channel[14],/*id*/id,/*ch*/14);
    PACK_DECL(1099,VME_STRUCK_SIS3316_CHANNEL,channel[15],/*id*/id,/*ch*/15);
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
 * Event packer for SCALERS.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(SCALERS)
template<typename __data_dest_t>
void PACKER_SCALERS::__packer(__data_dest_t &__buffer)
{
  // select several

    // trlo = TRLO_TRIG_SCALER(id=18);
    // caen_scaler = VME_CAEN_V830(geom=31);
  {
    PACK_DECL(1290,TRLO_TRIG_SCALER,trlo,/*id*/18);
    PACK_DECL(1291,VME_CAEN_V830,caen_scaler,/*geom*/31);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,SCALERS::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TS.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TS)
template<typename __data_dest_t>
void PACKER_TS::__packer(__data_dest_t &__buffer)
{
  // trlo = TRLO(id=2,multi_events=29);
  PACK_DECL(1298,TRLO,trlo,/*id*/2,/*multi_events*/29);
}
FORCE_IMPL_DATA_SRC_FCN(void,TS::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(VME)
template<typename __data_dest_t>
void PACKER_VME::__packer(__data_dest_t &__buffer)
{
  // header = LAND_STD_VME();
  PACK_DECL(1303,LAND_STD_VME,header);
  // select several

    // sis3316[0] = VME_STRUCK_SIS3316(id=3);
    // sis3316[1] = VME_STRUCK_SIS3316(id=4);
    // sis3316[2] = VME_STRUCK_SIS3316(id=5);
    // multi tdc = CAEN_V775(geom=31,crate=0);
    // mesy_padding = VME_MESY_MADC32_PADDING();
    // multi adc = VME_MESY_MADC32(geom=6);
  {
    PACK_DECL(1306,VME_STRUCK_SIS3316,sis3316[0],/*id*/3);
    PACK_DECL(1307,VME_STRUCK_SIS3316,sis3316[1],/*id*/4);
    PACK_DECL(1308,VME_STRUCK_SIS3316,sis3316[2],/*id*/5);
    PACK_DECL(1309,CAEN_V775,tdc,/*geom*/31,/*crate*/0);
    PACK_DECL(1310,VME_MESY_MADC32_PADDING,mesy_padding);
    PACK_DECL(1312,VME_MESY_MADC32,adc,/*geom*/6);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,VME::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
  // ts = TS(type=10,subtype=1,control=5,subcrate=1);
  // vme = VME(type=88,subtype=0x2260,control=5,subcrate=1);
  // scalers = SCALERS(type=12,subtype=0xd80,control=5,subcrate=1);
  // ignore_unknown_subevent;
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
