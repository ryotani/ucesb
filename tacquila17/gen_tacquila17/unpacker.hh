/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TACQUILA_GTB.
 *
 * Do not edit - automatically generated.
 */

// TACQUILA_GTB(sam,gtb)
template<typename __data_src_t>
void TACQUILA_GTB::__unpack(__data_src_t &__buffer,uint32 sam,uint32 gtb)
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
  READ_FROM_BUFFER_FULL(22,uint32 ,header,header.u32);
  CHECK_BITS_RANGE_MAX(17,header.trigger_tacquila,0);
  CHECK_BITS_RANGE(18,header.trigger_sam,1,1);
  CHECK_BITS_EQUAL(20,header.gtb,gtb);
  CHECK_BITS_EQUAL(21,header.sam,sam);
  CHECK_UNNAMED_BITS_ZERO(22,header.u32,0x00000e00);
  // list(0<=index<header.count)

  for (uint32 index = 0; index < (uint32) (header.count); ++index)
  {
    // if(( ! (index & 1)))

    // else

    if (( ! (index & 1)))
    {
      // UINT32 ch_data NOENCODE
      // {
        //  0_11: tac_value;
        // 12_17: clock_cycle;
        //    20: trigger = RANGE(0,0);
        //    21: 0;
        // 22_26: channel = RANGE(0,15);
        // 27_31: module = RANGE(1,2);
        // ENCODE(tac[(module - 1)][channel],(value=tac_value));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 tac_value : 12; // 0..11
          uint32 clock_cycle : 6; // 12..17
          uint32 dummy_18_19 : 2;
          uint32 trigger : 1; // 20
          uint32 unnamed_21_21 : 1; // 21
          uint32 channel : 5; // 22..26
          uint32 module : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 module : 5; // 27..31
          uint32 channel : 5; // 22..26
          uint32 unnamed_21_21 : 1; // 21
          uint32 trigger : 1; // 20
          uint32 dummy_18_19 : 2;
          uint32 clock_cycle : 6; // 12..17
          uint32 tac_value : 12; // 0..11
#endif
        };
        uint32  u32;
      } ch_data;
      READ_FROM_BUFFER_FULL(38,uint32 ,ch_data,ch_data.u32);
      CHECK_BITS_RANGE_MAX(32,ch_data.trigger,0);
      CHECK_BITS_EQUAL(33,ch_data.unnamed_21_21,0);
      CHECK_BITS_RANGE_MAX(34,ch_data.channel,15);
      CHECK_BITS_RANGE(35,ch_data.module,1,2);
      CHECK_UNNAMED_BITS_ZERO(38,ch_data.u32,0x000c0000);
      {
        typedef __typeof__(*(&(tac[(ch_data.module - 1)]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = tac[(ch_data.module - 1)].insert_index(37,ch_data.channel);
        __item.value = ch_data.tac_value;
      }
    }

    else
    {
      // UINT32 ch_data2 NOENCODE
      // {
        //  0_11: adc_value;
        //    20: trigger = RANGE(0,0);
        //    21: 1;
        // 22_26: channel = RANGE(0,15);
        // 27_31: module = RANGE(1,2);
        // ENCODE(adc[(module - 1)][channel],(value=adc_value));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 adc_value : 12; // 0..11
          uint32 dummy_12_19 : 8;
          uint32 trigger : 1; // 20
          uint32 unnamed_21_21 : 1; // 21
          uint32 channel : 5; // 22..26
          uint32 module : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 module : 5; // 27..31
          uint32 channel : 5; // 22..26
          uint32 unnamed_21_21 : 1; // 21
          uint32 trigger : 1; // 20
          uint32 dummy_12_19 : 8;
          uint32 adc_value : 12; // 0..11
#endif
        };
        uint32  u32;
      } ch_data2;
      READ_FROM_BUFFER_FULL(50,uint32 ,ch_data2,ch_data2.u32);
      CHECK_BITS_RANGE_MAX(44,ch_data2.trigger,0);
      CHECK_BITS_EQUAL(45,ch_data2.unnamed_21_21,1);
      CHECK_BITS_RANGE_MAX(46,ch_data2.channel,15);
      CHECK_BITS_RANGE(47,ch_data2.module,1,2);
      CHECK_UNNAMED_BITS_ZERO(50,ch_data2.u32,0x000ff000);
      {
        typedef __typeof__(*(&(adc[(ch_data2.module - 1)]))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = adc[(ch_data2.module - 1)].insert_index(49,ch_data2.channel);
        __item.value = ch_data2.adc_value;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TACQUILA_GTB::__unpack,uint32 sam,uint32 gtb);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TACQUILA_RPC.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TACQUILA_RPC)
template<typename __data_src_t>
void TACQUILA_RPC::__unpack(__data_src_t &__buffer)
{
  // tacq = TACQUILA_GTB(sam=6,gtb=0);
  UNPACK_DECL(64,TACQUILA_GTB,tacq,/*sam*/6,/*gtb*/0);
}
FORCE_IMPL_DATA_SRC_FCN(void,TACQUILA_RPC::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
template<typename __data_src_t>
int unpack_event::__unpack_subevent(subevent_header *__header,__data_src_t &__buffer)
  // rpc = TACQUILA_RPC(type=10,subtype=1);
  // ignore_unknown_subevent;
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(57,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)),rpc);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(57,TACQUILA_RPC,rpc,0);
      UNPACK_SUBEVENT_DECL(57,0,TACQUILA_RPC,rpc);
      break;
  }
  return 0;
}
FORCE_IMPL_DATA_SRC_FCN_HDR(int,unpack_event::__unpack_subevent);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// STICKY_EVENT
template<typename __data_src_t>
int unpack_sticky_event::__unpack_subevent(subevent_header *__header,__data_src_t &__buffer)
{
  int __match_no = 0;
  if (!__match_no) return 0;
  switch (__match_no)
  {
  }
  return 0;
}
FORCE_IMPL_DATA_SRC_FCN_HDR(int,unpack_sticky_event::__unpack_subevent);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER_DEFINES *********************************************
 *
 * Control
 *
 * Do not edit - automatically generated.
 */

#define STICKY_EVENT_IS_NONTRIVIAL  0


/** END_UNPACKER_DEFINES **********************************************/
