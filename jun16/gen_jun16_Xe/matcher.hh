/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for BARRIER.
 *
 * Do not edit - automatically generated.
 */

// BARRIER()
template<typename __data_src_t>
bool BARRIER::__match(__data_src_t &__buffer)
{
  // UINT32 barrier
  // {
    //  0_31: 0xbabababa;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
    };
    uint32  u32;
  } __barrier;
  READ_FROM_BUFFER_FULL(56,uint32 ,barrier,__barrier.u32);
  MATCH_BITS_EQUAL(55,__barrier.unnamed_0_31,0xbabababa);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,BARRIER::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FEBEX_BADBAD.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_BADBAD()
template<typename __data_src_t>
bool FEBEX_BADBAD::__match(__data_src_t &__buffer)
{
  // UINT32 badbad
  // {
    //  0_31: 0xbad00bad;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
    };
    uint32  u32;
  } __badbad;
  READ_FROM_BUFFER_FULL(65,uint32 ,badbad,__badbad.u32);
  MATCH_BITS_EQUAL(64,__badbad.unnamed_0_31,0xbad00bad);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FEBEX_BADBAD::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FEBEX_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_EVENTHEADER()
template<typename __data_src_t>
bool FEBEX_EVENTHEADER::__match(__data_src_t &__buffer)
{
  // UINT32 identifier NOENCODE
  // {
    //  0_31: 0xfebe0000;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
    };
    uint32  u32;
  } identifier;
  READ_FROM_BUFFER_FULL(72,uint32 ,identifier,identifier.u32);
  MATCH_BITS_EQUAL(71,identifier.unnamed_0_31,0xfebe0000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FEBEX_EVENTHEADER::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FEBEX_NOTRACE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_NOTRACE(sfp,card)
template<typename __data_src_t>
bool FEBEX_NOTRACE::__match(__data_src_t &__buffer,uint32 sfp,uint32 card)
{
  // MEMBER(DATA8 n_hit[16]);
  // MEMBER(DATA12 t[16] ZERO_SUPPRESS_MULTI(10));
  // MEMBER(DATA32 e[16] ZERO_SUPPRESS_MULTI(10));
  // UINT32 indicator NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: 255;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_7 : 8; // 0..7
      uint32 trigger_type : 4; // 8..11
      uint32 sfp : 4; // 12..15
      uint32 card : 8; // 16..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 card : 8; // 16..23
      uint32 sfp : 4; // 12..15
      uint32 trigger_type : 4; // 8..11
      uint32 unnamed_0_7 : 8; // 0..7
#endif
    };
    uint32  u32;
  } indicator;
  READ_FROM_BUFFER_FULL(103,uint32 ,indicator,indicator.u32);
  MATCH_BITS_EQUAL(98,indicator.unnamed_0_7,52);
  MATCH_BITS_EQUAL(100,indicator.sfp,sfp);
  MATCH_BITS_EQUAL(101,indicator.card,card);
  MATCH_BITS_EQUAL(102,indicator.unnamed_24_31,255);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,FEBEX_NOTRACE::__match,uint32 sfp,uint32 card);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FEBEX_PADDING.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_PADDING()
template<typename __data_src_t>
bool FEBEX_PADDING::__match(__data_src_t &__buffer)
{
  // UINT32 pads_data NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 counter : 12; // 0..11
      uint32 index : 8; // 12..19
      uint32 unnamed_20_31 : 12; // 20..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_20_31 : 12; // 20..31
      uint32 index : 8; // 12..19
      uint32 counter : 12; // 0..11
#endif
    };
    uint32  u32;
  } pads_data;
  READ_FROM_BUFFER_FULL(88,uint32 ,pads_data,pads_data.u32);
  MATCH_BITS_EQUAL(87,pads_data.unnamed_20_31,0xadd);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FEBEX_PADDING::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FEBEX_TRACE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_TRACE(sfp,card)
template<typename __data_src_t>
bool FEBEX_TRACE::__match(__data_src_t &__buffer,uint32 sfp,uint32 card)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_7 : 8; // 0..7
      uint32 trigger_type : 4; // 8..11
      uint32 sfp : 4; // 12..15
      uint32 card : 8; // 16..23
      uint32 channel_id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 channel_id : 8; // 24..31
      uint32 card : 8; // 16..23
      uint32 sfp : 4; // 12..15
      uint32 trigger_type : 4; // 8..11
      uint32 unnamed_0_7 : 8; // 0..7
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(163,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(158,header.unnamed_0_7,52);
  MATCH_BITS_EQUAL(160,header.sfp,sfp);
  MATCH_BITS_EQUAL(161,header.card,card);
  MATCH_BITS_RANGE_MAX(162,header.channel_id,254);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,FEBEX_TRACE::__match,uint32 sfp,uint32 card);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for LAND_STD_VME.
 *
 * Do not edit - automatically generated.
 */

// LAND_STD_VME()
template<typename __data_src_t>
bool LAND_STD_VME::__match(__data_src_t &__buffer)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 fail_general : 1; // 0
      uint32 fail_data_corrupt : 1; // 1
      uint32 fail_data_missing : 1; // 2
      uint32 fail_data_too_much : 1; // 3
      uint32 fail_event_counter_mismatch : 1; // 4
      uint32 fail_readout_error_driver : 1; // 5
      uint32 fail_unexpected_trigger : 1; // 6
      uint32 fail_firmware_mismatch : 1; // 7
      uint32 dummy_8_21 : 14;
      uint32 has_multi_trlo_ii_counter0 : 1; // 22
      uint32 has_clock_counter_stamp : 1; // 23
      uint32 has_continous_event_counter : 1; // 24
      uint32 has_update_qdc_iped_value : 1; // 25
      uint32 spurious_start_before_tcal : 1; // 26
      uint32 has_no_zero_suppression : 1; // 27
      uint32 has_multi_adctdc_counter0 : 1; // 28
      uint32 has_multi_scaler_counter0 : 1; // 29
      uint32 has_multi_event : 1; // 30
      uint32 has_time_stamp : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 has_time_stamp : 1; // 31
      uint32 has_multi_event : 1; // 30
      uint32 has_multi_scaler_counter0 : 1; // 29
      uint32 has_multi_adctdc_counter0 : 1; // 28
      uint32 has_no_zero_suppression : 1; // 27
      uint32 spurious_start_before_tcal : 1; // 26
      uint32 has_update_qdc_iped_value : 1; // 25
      uint32 has_continous_event_counter : 1; // 24
      uint32 has_clock_counter_stamp : 1; // 23
      uint32 has_multi_trlo_ii_counter0 : 1; // 22
      uint32 dummy_8_21 : 14;
      uint32 fail_firmware_mismatch : 1; // 7
      uint32 fail_unexpected_trigger : 1; // 6
      uint32 fail_readout_error_driver : 1; // 5
      uint32 fail_event_counter_mismatch : 1; // 4
      uint32 fail_data_too_much : 1; // 3
      uint32 fail_data_missing : 1; // 2
      uint32 fail_data_corrupt : 1; // 1
      uint32 fail_general : 1; // 0
#endif
    };
    uint32  u32;
  } __failure;
  READ_FROM_BUFFER_FULL(245,uint32 ,failure,__failure.u32);
  MATCH_UNNAMED_BITS_ZERO(245,__failure.u32,0x003fff00);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,LAND_STD_VME::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for SCALER.
 *
 * Do not edit - automatically generated.
 */

// SCALER()
template<typename __data_src_t>
bool SCALER::__match(__data_src_t &__buffer)
{
  // UINT32 scaler;
  uint32  __scaler;
  READ_FROM_BUFFER(716,uint32 ,__scaler);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,SCALER::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX3_HEADER.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_HEADER()
template<typename __data_src_t>
bool TAMEX3_HEADER::__match(__data_src_t &__buffer)
{
  // UINT32 trigger_window
  // {
    //  0_15: post_trig_ns;
    // 16_31: pre_trig_ns;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 post_trig_ns : 16; // 0..15
      uint32 pre_trig_ns : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 pre_trig_ns : 16; // 16..31
      uint32 post_trig_ns : 16; // 0..15
#endif
    };
    uint32  u32;
  } __trigger_window;
  READ_FROM_BUFFER_FULL(594,uint32 ,trigger_window,__trigger_window.u32);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TAMEX3_HEADER::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX3_PADDING.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_PADDING()
template<typename __data_src_t>
bool TAMEX3_PADDING::__match(__data_src_t &__buffer)
{
  // UINT32 padding NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 counter : 12; // 0..11
      uint32 index : 8; // 12..19
      uint32 unnamed_20_31 : 12; // 20..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_20_31 : 12; // 20..31
      uint32 index : 8; // 12..19
      uint32 counter : 12; // 0..11
#endif
    };
    uint32  u32;
  } padding;
  READ_FROM_BUFFER_FULL(603,uint32 ,padding,padding.u32);
  MATCH_BITS_EQUAL(602,padding.unnamed_20_31,0xadd);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TAMEX3_PADDING::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX3_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_SFP(sfp,card)
template<typename __data_src_t>
bool TAMEX3_SFP::__match(__data_src_t &__buffer,uint32 sfp,uint32 card)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_7 : 8; // 0..7
      uint32 trigger_type : 4; // 8..11
      uint32 sfp : 4; // 12..15
      uint32 card : 8; // 16..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 card : 8; // 16..23
      uint32 sfp : 4; // 12..15
      uint32 trigger_type : 4; // 8..11
      uint32 unnamed_0_7 : 8; // 0..7
#endif
    };
    uint32  u32;
  } indicator;
  READ_FROM_BUFFER_FULL(624,uint32 ,indicator,indicator.u32);
  MATCH_BITS_EQUAL(619,indicator.unnamed_0_7,52);
  MATCH_BITS_EQUAL(621,indicator.sfp,sfp);
  MATCH_BITS_EQUAL(622,indicator.card,card);
  MATCH_BITS_EQUAL(623,indicator.unnamed_24_31,0);
  // MATCH_END;
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TAMEX3_SFP::__match,uint32 sfp,uint32 card);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TIMESTAMP_WHITERABBIT.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT(id)
template<typename __data_src_t>
bool TIMESTAMP_WHITERABBIT::__match(__data_src_t &__buffer,uint32 id)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 12; // 0..11
      uint32 unnamed_12_15 : 4; // 12..15
      uint32 error_bit : 1; // 16
      uint32 unnamed_17_31 : 15; // 17..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_17_31 : 15; // 17..31
      uint32 error_bit : 1; // 16
      uint32 unnamed_12_15 : 4; // 12..15
      uint32 id : 12; // 0..11
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(550,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(545,header.id,id);
  MATCH_BITS_EQUAL(546,header.unnamed_12_15,0);
  MATCH_BITS_EQUAL(548,header.unnamed_17_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TIMESTAMP_WHITERABBIT::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLOII_LMU_SCALERS.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_LMU_SCALERS(id)
template<typename __data_src_t>
bool TRLOII_LMU_SCALERS::__match(__data_src_t &__buffer,uint32 id)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 before_lmu : 6; // 0..5
      uint32 before_lmu_mux : 5; // 6..10
      uint32 before_lmu_aux : 5; // 11..15
      uint32 after_lmu : 8; // 16..23
      uint32 id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 8; // 24..31
      uint32 after_lmu : 8; // 16..23
      uint32 before_lmu_aux : 5; // 11..15
      uint32 before_lmu_mux : 5; // 6..10
      uint32 before_lmu : 6; // 0..5
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(296,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(295,__header.id,id);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLOII_LMU_SCALERS::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLOII_SAMPLER.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER(mark)
template<typename __data_src_t>
bool TRLOII_SAMPLER::__match(__data_src_t &__buffer,uint32 mark)
{
  // MEMBER(DATA32 sampler[512] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_09: word_num;
    //    10: overflow;
    // 16_31: mark = MATCH(mark);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_num : 10; // 0..9
      uint32 overflow : 1; // 10
      uint32 dummy_11_15 : 5;
      uint32 mark : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 mark : 16; // 16..31
      uint32 dummy_11_15 : 5;
      uint32 overflow : 1; // 10
      uint32 word_num : 10; // 0..9
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(342,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(341,__header.mark,mark);
  MATCH_UNNAMED_BITS_ZERO(342,__header.u32,0x0000f800);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLOII_SAMPLER::__match,uint32 mark);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLOII_SAMPLER_TWO.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER_TWO(mark)
template<typename __data_src_t>
bool TRLOII_SAMPLER_TWO::__match(__data_src_t &__buffer,uint32 mark)
{
  // MEMBER(DATA32 sampler_hi[512] ZERO_SUPPRESS);
  // MEMBER(DATA32 sampler_lo[512] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_09: word_num;
    //    10: overflow;
    // 16_31: mark = MATCH(mark);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_num : 10; // 0..9
      uint32 overflow : 1; // 10
      uint32 dummy_11_15 : 5;
      uint32 mark : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 mark : 16; // 16..31
      uint32 dummy_11_15 : 5;
      uint32 overflow : 1; // 10
      uint32 word_num : 10; // 0..9
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(363,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(362,__header.mark,mark);
  MATCH_UNNAMED_BITS_ZERO(363,__header.u32,0x0000f800);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLOII_SAMPLER_TWO::__match,uint32 mark);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLOII_TPAT.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_TPAT(id)
template<typename __data_src_t>
bool TRLOII_TPAT::__match(__data_src_t &__buffer,uint32 id)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 uint32_num : 12; // 0..11
      uint32 event_num : 12; // 12..23
      uint32 id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 8; // 24..31
      uint32 event_num : 12; // 12..23
      uint32 uint32_num : 12; // 0..11
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(399,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(397,header.id,id);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLOII_TPAT::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VFTX2_STATUS.
 *
 * Do not edit - automatically generated.
 */

// VFTX2_STATUS()
template<typename __data_src_t>
bool VFTX2_STATUS::__match(__data_src_t &__buffer)
{
  // UINT32 status;
  uint32  __status;
  READ_FROM_BUFFER(721,uint32 ,__status);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,VFTX2_STATUS::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_GSI_VFTX2.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2(id)
template<typename __data_src_t>
bool VME_GSI_VFTX2::__match(__data_src_t &__buffer,uint32 id)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 5; // 0..4
      uint32 internal_status : 4; // 5..8
      uint32 count : 9; // 9..17
      uint32 dummy_18_23 : 6;
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 dummy_18_23 : 6;
      uint32 count : 9; // 9..17
      uint32 internal_status : 4; // 5..8
      uint32 id : 5; // 0..4
#endif
    };
    uint32  u32;
  } __custom_header;
  READ_FROM_BUFFER_FULL(434,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(430,__custom_header.id,id);
  MATCH_BITS_EQUAL(433,__custom_header.unnamed_24_31,171);
  MATCH_UNNAMED_BITS_ZERO(434,__custom_header.u32,0x00fc0000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_GSI_VFTX2::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_GSI_VFTX2_7PS.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_7PS(id)
template<typename __data_src_t>
bool VME_GSI_VFTX2_7PS::__match(__data_src_t &__buffer,uint32 id)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 5; // 0..4
      uint32 internal_status : 4; // 5..8
      uint32 count : 9; // 9..17
      uint32 dummy_18_23 : 6;
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 dummy_18_23 : 6;
      uint32 count : 9; // 9..17
      uint32 internal_status : 4; // 5..8
      uint32 id : 5; // 0..4
#endif
    };
    uint32  u32;
  } __custom_header;
  READ_FROM_BUFFER_FULL(509,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(505,__custom_header.id,id);
  MATCH_BITS_EQUAL(508,__custom_header.unnamed_24_31,171);
  MATCH_UNNAMED_BITS_ZERO(509,__custom_header.u32,0x00fc0000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_GSI_VFTX2_7PS::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_GSI_VFTX2_LT.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_LT(id)
template<typename __data_src_t>
bool VME_GSI_VFTX2_LT::__match(__data_src_t &__buffer,uint32 id)
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 5; // 0..4
      uint32 internal_status : 4; // 5..8
      uint32 count : 9; // 9..17
      uint32 dummy_18_23 : 6;
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 dummy_18_23 : 6;
      uint32 count : 9; // 9..17
      uint32 internal_status : 4; // 5..8
      uint32 id : 5; // 0..4
#endif
    };
    uint32  u32;
  } __custom_header;
  READ_FROM_BUFFER_FULL(472,uint32 ,custom_header,__custom_header.u32);
  MATCH_BITS_EQUAL(468,__custom_header.id,id);
  MATCH_BITS_EQUAL(471,__custom_header.unnamed_24_31,171);
  MATCH_UNNAMED_BITS_ZERO(472,__custom_header.u32,0x00fc0000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_GSI_VFTX2_LT::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_GSI_VFTX2_STRAW.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_STRAW(id)
template<typename __data_src_t>
bool VME_GSI_VFTX2_STRAW::__match(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA12 time_fine[32] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA16 time_coarse[32] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA16 time_trigger);
  // UINT32 status
  // {
    //  0_03: internal;
    //  4_12: count;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 internal : 4; // 0..3
      uint32 count : 9; // 4..12
      uint32 dummy_13_31 : 19;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 dummy_13_31 : 19;
      uint32 count : 9; // 4..12
      uint32 internal : 4; // 0..3
#endif
    };
    uint32  u32;
  } __status;
  READ_FROM_BUFFER_FULL(682,uint32 ,status,__status.u32);
  MATCH_UNNAMED_BITS_ZERO(682,__status.u32,0xffffe000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_GSI_VFTX2_STRAW::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_MESYTEC_MADC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MADC32(geom)
template<typename __data_src_t>
bool VME_MESYTEC_MADC32::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA14_OVERFLOW data[32] ZERO_SUPPRESS);
  // MARK_COUNT(start);
  // UINT32 header NOENCODE
  // {
    //  0_11: word_number;
    // 12_14: adc_resol;
    //    15: out_form;
    // 16_23: geom = MATCH(geom);
    // 24_29: 0;
    // 30_31: 1;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_number : 12; // 0..11
      uint32 adc_resol : 3; // 12..14
      uint32 out_form : 1; // 15
      uint32 geom : 8; // 16..23
      uint32 unnamed_24_29 : 6; // 24..29
      uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_30_31 : 2; // 30..31
      uint32 unnamed_24_29 : 6; // 24..29
      uint32 geom : 8; // 16..23
      uint32 out_form : 1; // 15
      uint32 adc_resol : 3; // 12..14
      uint32 word_number : 12; // 0..11
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(22,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(19,header.geom,geom);
  MATCH_BITS_EQUAL(20,header.unnamed_24_29,0);
  MATCH_BITS_EQUAL(21,header.unnamed_30_31,1);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_MESYTEC_MADC32::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for WR_MULTI.
 *
 * Do not edit - automatically generated.
 */

// WR_MULTI()
template<typename __data_src_t>
bool WR_MULTI::__match(__data_src_t &__buffer)
{
  // MEMBER(DATA32 time_hi);
  // MEMBER(DATA32 time_lo);
  // UINT32 hi NOENCODE
  // {
    //  0_31: time;
    // ENCODE(time_hi,(value=time));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 time : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 time : 32; // 0..31
#endif
    };
    uint32  u32;
  } hi;
  READ_FROM_BUFFER_FULL(581,uint32 ,hi,hi.u32);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,WR_MULTI::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for empty_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(empty_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for fitest_febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fitest_febex_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for lmu_scalers_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(lmu_scalers_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for los_sampler_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_sampler_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for los_scalers_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_scalers_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for los_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for master_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(master_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for straw_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(straw_vme_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for tbm_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tbm_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for tofd_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tofd_tamex_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for tofd_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tofd_vme_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for tpat_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tpat_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for tracking_febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tracking_febex_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for wr_100.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_100)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for wr_200.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_200)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for wr_400.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_400)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
