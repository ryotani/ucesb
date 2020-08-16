/** BEGIN_PACKER *******************************************************
 *
 * Event packer for DUMMY.
 *
 * Do not edit - automatically generated.
 */

// DUMMY(id)
template<typename __data_dest_t>
void PACKER_DUMMY::__packer(__data_dest_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 time_lo);
  // MEMBER(DATA32 time_hi);
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_15: wordcount;
    // 16_31: id = MATCH(id);
  // }
  // UINT32 timestamp_hi NOENCODE
  // {
    //  0_31: value;
    // ENCODE(time_hi,(value=value));
  // }
  // UINT32 timestamp_lo NOENCODE
  // {
    //  0_31: value;
    // ENCODE(time_lo,(value=value));
  // }
  // list(0<=ch<32)

  {
    // UINT32 item NOENCODE
    // {
      //  0_23: value;
      // 24_31: channel;
      // ENCODE(data[channel],(value=value));
    // }
  }
  // UINT32 footer NOENCODE
  // {
    //  0_31: event_number;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,DUMMY::__packer,uint32 id);

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
 * Event packer for empty_subevent.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(empty_subevent)
template<typename __data_dest_t>
void PACKER_empty_subevent::__packer(__data_dest_t &__buffer)
{
}
FORCE_IMPL_DATA_SRC_FCN(void,empty_subevent::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for land_header_only.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(land_header_only)
template<typename __data_dest_t>
void PACKER_land_header_only::__packer(__data_dest_t &__buffer)
{
  // header = LAND_STD_VME();
  PACK_DECL(183,LAND_STD_VME,header);
}
FORCE_IMPL_DATA_SRC_FCN(void,land_header_only::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for vme_subevent.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(vme_subevent)
template<typename __data_dest_t>
void PACKER_vme_subevent::__packer(__data_dest_t &__buffer)
{
  // header = LAND_STD_VME();
  PACK_DECL(167,LAND_STD_VME,header);
  // select several

    // multi dummy[0] = DUMMY(id=0x1234);
  {
    PACK_DECL(170,DUMMY,dummy[0],/*id*/0x1234);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,vme_subevent::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for wr_ts_100.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_ts_100)
template<typename __data_dest_t>
void PACKER_wr_ts_100::__packer(__data_dest_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x100);
  PACK_DECL(176,TIMESTAMP_WHITERABBIT,ts,/*id*/0x100);
}
FORCE_IMPL_DATA_SRC_FCN(void,wr_ts_100::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
  // ts = wr_ts_100(type=10,subtype=1,control=0,subcrate=0);
  // vme = vme_subevent(type=88,subtype=0x2260,control=0,subcrate=0);
  // vme_drasi = empty_subevent(type=0x4d2,subtype=0x162e,control=9,
                             // subcrate=0);
  // vme_drasi_unknown = empty_subevent(type=0xffff,subtype=0xffff,control=9,
                                     // subcrate=9);
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
