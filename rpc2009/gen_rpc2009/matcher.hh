/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_FZR.
 *
 * Do not edit - automatically generated.
 */

// VME_FZR()
template<typename __data_src_t>
bool VME_FZR::__match(__data_src_t &__buffer)
{
  // MEMBER(DATA32 data[32]);
  // list(0<=index<32)

  for (uint32 index = 0; index < (uint32) (32); ++index)
  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_31: value;
      // ENCODE(data[index],(value=value));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 value : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 value : 32; // 0..31
#endif
      };
      uint32  u32;
    } ch_data;
    READ_FROM_BUFFER_FULL(25,uint32 ,ch_data,ch_data.u32);
    return true;
    return false;
  }
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,VME_FZR::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for CRATE.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CRATE)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
