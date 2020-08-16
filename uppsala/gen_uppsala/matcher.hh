/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FZD_data_SUBITEM.
 *
 * Do not edit - automatically generated.
 */

// FZD_data_SUBITEM(geo,data)
template<typename __data_src_t>
bool FZD_data_SUBITEM::__match(__data_src_t &__buffer,uint32 geo)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 ch_data NOENCODE
  // {
    //  0_23: data;
    // 24_28: channel = RANGE(0,32);
    //    29: 0;
    //    30: 0;
    //    31: 0;
    // ENCODE(data[channel],(value=data));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 data : 24; // 0..23
      uint32 channel : 5; // 24..28
      uint32 unnamed_29_29 : 1; // 29
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_31_31 : 1; // 31
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_29_29 : 1; // 29
      uint32 channel : 5; // 24..28
      uint32 data : 24; // 0..23
#endif
    };
    uint32  u32;
  } ch_data;
  READ_FROM_BUFFER_FULL(19,uint32 ,ch_data,ch_data.u32);
  MATCH_BITS_RANGE_MAX(16,ch_data.channel,32);
  MATCH_BITS_EQUAL(15,ch_data.unnamed_29_29,0);
  MATCH_BITS_EQUAL(14,ch_data.unnamed_30_30,0);
  MATCH_BITS_EQUAL(13,ch_data.unnamed_31_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,FZD_data_SUBITEM::__match,uint32 geo);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FZD_Modul.
 *
 * Do not edit - automatically generated.
 */

// FZD_Modul(geom)
template<typename __data_src_t>
bool FZD_Modul::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 1;
    //    30: 0;
    //    31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_23 : 24; // 0..23
      uint32 geom : 5; // 24..28
      uint32 unnamed_29_29 : 1; // 29
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_31_31 : 1; // 31
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_29_29 : 1; // 29
      uint32 geom : 5; // 24..28
      uint32 unnamed_0_23 : 24; // 0..23
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(25,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(25,__header.unnamed_0_23,0);
  MATCH_BITS_EQUAL(25,__header.geom,geom);
  MATCH_BITS_EQUAL(25,__header.unnamed_29_29,1);
  MATCH_BITS_EQUAL(25,__header.unnamed_30_30,0);
  MATCH_BITS_EQUAL(25,__header.unnamed_31_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,FZD_Modul::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FZD_V1495_MP.
 *
 * Do not edit - automatically generated.
 */

// FZD_V1495_MP(geom)
template<typename __data_src_t>
bool FZD_V1495_MP::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 MP_FLAG[3] ZERO_SUPPRESS);
  // MEMBER(DATA32 Cy_FLAG[3] ZERO_SUPPRESS);
  // MEMBER(DATA32 ts[3] ZERO_SUPPRESS);
  // UINT32 header
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 1;
    //    30: 0;
    //    31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_23 : 24; // 0..23
      uint32 geom : 5; // 24..28
      uint32 unnamed_29_29 : 1; // 29
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_31_31 : 1; // 31
      uint32 unnamed_30_30 : 1; // 30
      uint32 unnamed_29_29 : 1; // 29
      uint32 geom : 5; // 24..28
      uint32 unnamed_0_23 : 24; // 0..23
#endif
    };
    uint32  u32;
  } __header;
  READ_FROM_BUFFER_FULL(38,uint32 ,header,__header.u32);
  MATCH_BITS_EQUAL(38,__header.unnamed_0_23,0);
  MATCH_BITS_EQUAL(38,__header.geom,geom);
  MATCH_BITS_EQUAL(38,__header.unnamed_29_29,1);
  MATCH_BITS_EQUAL(38,__header.unnamed_30_30,0);
  MATCH_BITS_EQUAL(38,__header.unnamed_31_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,FZD_V1495_MP::__match,uint32 geom);

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
