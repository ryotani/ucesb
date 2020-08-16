/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for EMPTY_32BIT_WORD_V775_FRS.
 *
 * Do not edit - automatically generated.
 */

// EMPTY_32BIT_WORD_V775_FRS(geom)
template<typename __data_src_t>
bool EMPTY_32BIT_WORD_V775_FRS::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32]);
  // UINT32 header NOENCODE
  // {
    //  0_23: 0;
    // 24_26: 6;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_23 : 24; // 0..23
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 unnamed_0_23 : 24; // 0..23
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(178,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(175,header.unnamed_0_23,0);
  MATCH_BITS_EQUAL(176,header.unnamed_24_26,6);
  MATCH_BITS_EQUAL(177,header.geom,geom);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,EMPTY_32BIT_WORD_V775_FRS::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for EMPTY_32BIT_WORD_V830_FRS.
 *
 * Do not edit - automatically generated.
 */

// EMPTY_32BIT_WORD_V830_FRS(geom)
template<typename __data_src_t>
bool EMPTY_32BIT_WORD_V830_FRS::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32]);
  // UINT32 header NOENCODE
  // {
    //  0_26: 0x06000000;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_26 : 27; // 0..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_0_26 : 27; // 0..26
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(161,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(159,header.unnamed_0_26,0x06000000);
  MATCH_BITS_EQUAL(160,header.geom,geom);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,EMPTY_32BIT_WORD_V830_FRS::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V259_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V259_FRS(geom)
template<typename __data_src_t>
bool VME_CAEN_V259_FRS::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_05: count;
    // 24_26: 2;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 6; // 0..5
      uint32 dummy_6_23 : 18;
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 dummy_6_23 : 18;
      uint32 count : 6; // 0..5
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(23,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(20,header.unnamed_24_26,2);
  MATCH_BITS_EQUAL(21,header.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(23,header.u32,0x00ffffc0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V259_FRS::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V775_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V775_FRS(geom)
template<typename __data_src_t>
bool VME_CAEN_V775_FRS::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA12_OVERFLOW data[32] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_05: count;
    // 16_23: crate;
    // 24_26: 2;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 6; // 0..5
      uint32 dummy_6_15 : 10;
      uint32 crate : 8; // 16..23
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 crate : 8; // 16..23
      uint32 dummy_6_15 : 10;
      uint32 count : 6; // 0..5
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(105,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(101,header.unnamed_24_26,2);
  MATCH_BITS_EQUAL(102,header.geom,geom);
  MATCH_UNNAMED_BITS_ZERO(105,header.u32,0x0000ffc0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V775_FRS::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V830_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V830_FRS(geom)
template<typename __data_src_t>
bool VME_CAEN_V830_FRS::__match(__data_src_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32]);
  // UINT32 header NOENCODE
  // {
    //  0_04: count;
    //  5_26: 0x00100000;
    // 27_31: geom = MATCH(geom);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 5; // 0..4
      uint32 unnamed_5_26 : 22; // 5..26
      uint32 geom : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geom : 5; // 27..31
      uint32 unnamed_5_26 : 22; // 5..26
      uint32 count : 5; // 0..4
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(65,uint32 ,header,header.u32);
  MATCH_BITS_EQUAL(63,header.unnamed_5_26,0x00100000);
  MATCH_BITS_EQUAL(64,header.geom,geom);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,VME_CAEN_V830_FRS::__match,uint32 geom);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FRS_CRATE.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(FRS_CRATE)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TPC_CRATE.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TPC_CRATE)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
