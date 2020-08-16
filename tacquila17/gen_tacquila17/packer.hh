/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TACQUILA_GTB.
 *
 * Do not edit - automatically generated.
 */

// TACQUILA_GTB(sam,gtb)
template<typename __data_dest_t>
void PACKER_TACQUILA_GTB::__packer(__data_dest_t &__buffer,uint32 sam,uint32 gtb)
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
  // list(0<=index<header.count)

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
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TACQUILA_GTB::__packer,uint32 sam,uint32 gtb);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TACQUILA_RPC.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TACQUILA_RPC)
template<typename __data_dest_t>
void PACKER_TACQUILA_RPC::__packer(__data_dest_t &__buffer)
{
  // tacq = TACQUILA_GTB(sam=6,gtb=0);
  PACK_DECL(64,TACQUILA_GTB,tacq,/*sam*/6,/*gtb*/0);
}
FORCE_IMPL_DATA_SRC_FCN(void,TACQUILA_RPC::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
  // rpc = TACQUILA_RPC(type=10,subtype=1);
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
