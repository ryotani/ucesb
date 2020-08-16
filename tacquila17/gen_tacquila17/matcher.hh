/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TACQUILA_GTB.
 *
 * Do not edit - automatically generated.
 */

// TACQUILA_GTB(sam,gtb)
template<typename __data_src_t>
bool TACQUILA_GTB::__match(__data_src_t &__buffer,uint32 sam,uint32 gtb)
{
  // MEMBER(DATA12 tac[2][16] ZERO_SUPPRESS);
  // MEMBER(DATA12 adc[2][16] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_08: count;
    // 12_15: trigger_tacquila = RANGE(0,0);
    // 16_19: trigger_sam = RANGE(1,1);
    // 20_23: local_event_counter;
    // 24_27: gtb = MATCH(gtb);
    // 28_31: sam = MATCH(sam);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 9; // 0..8
      uint32 dummy_9_11 : 3;
      uint32 trigger_tacquila : 4; // 12..15
      uint32 trigger_sam : 4; // 16..19
      uint32 local_event_counter : 4; // 20..23
      uint32 gtb : 4; // 24..27
      uint32 sam : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 sam : 4; // 28..31
      uint32 gtb : 4; // 24..27
      uint32 local_event_counter : 4; // 20..23
      uint32 trigger_sam : 4; // 16..19
      uint32 trigger_tacquila : 4; // 12..15
      uint32 dummy_9_11 : 3;
      uint32 count : 9; // 0..8
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(22,uint32 ,header,__header.u32);
  MATCH_BITS_RANGE_MAX(17,__header.trigger_tacquila,0);
  MATCH_BITS_RANGE(18,__header.trigger_sam,1,1);
  MATCH_BITS_EQUAL(20,__header.gtb,gtb);
  MATCH_BITS_EQUAL(21,__header.sam,sam);
  MATCH_UNNAMED_BITS_ZERO(22,__header.u32,0x00000e00);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TACQUILA_GTB::__match,uint32 sam,uint32 gtb);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TACQUILA_RPC.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TACQUILA_RPC)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
