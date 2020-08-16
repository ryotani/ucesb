/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_FZR.
 *
 * Do not edit - automatically generated.
 */

// VME_FZR()
template<typename __data_src_t>
void VME_FZR::__unpack(__data_src_t &__buffer)
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
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(24,index);
      __item.value = ch_data.value;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,VME_FZR::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for CRATE.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(CRATE)
template<typename __data_src_t>
void CRATE::__unpack(__data_src_t &__buffer)
{
  // block = VME_FZR();
  UNPACK_DECL(41,VME_FZR,block);
}
FORCE_IMPL_DATA_SRC_FCN(void,CRATE::__unpack);

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
  // vme0 = CRATE(type=10,subtype=1);
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(36,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)),vme0);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(36,CRATE,vme0,0);
      UNPACK_SUBEVENT_DECL(36,0,CRATE,vme0);
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
