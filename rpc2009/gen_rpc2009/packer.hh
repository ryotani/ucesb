/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_FZR.
 *
 * Do not edit - automatically generated.
 */

// VME_FZR()
template<typename __data_dest_t>
void PACKER_VME_FZR::__packer(__data_dest_t &__buffer)
{
  // MEMBER(DATA32 data[32]);
  // list(0<=index<32)

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_31: value;
      // ENCODE(data[index],(value=value));
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,VME_FZR::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for CRATE.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CRATE)
template<typename __data_dest_t>
void PACKER_CRATE::__packer(__data_dest_t &__buffer)
{
  // block = VME_FZR();
  PACK_DECL(41,VME_FZR,block);
}
FORCE_IMPL_DATA_SRC_FCN(void,CRATE::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
  // vme0 = CRATE(type=10,subtype=1);
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
