/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EMPTY_32BIT_WORD_V775_FRS.
 *
 * Do not edit - automatically generated.
 */

// EMPTY_32BIT_WORD_V775_FRS(geom)
template<typename __data_dest_t>
void PACKER_EMPTY_32BIT_WORD_V775_FRS::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32]);
  // UINT32 header NOENCODE
  // {
    //  0_23: 0;
    // 24_26: 6;
    // 27_31: geom = MATCH(geom);
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,EMPTY_32BIT_WORD_V775_FRS::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EMPTY_32BIT_WORD_V830_FRS.
 *
 * Do not edit - automatically generated.
 */

// EMPTY_32BIT_WORD_V830_FRS(geom)
template<typename __data_dest_t>
void PACKER_EMPTY_32BIT_WORD_V830_FRS::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32]);
  // UINT32 header NOENCODE
  // {
    //  0_26: 0x06000000;
    // 27_31: geom = MATCH(geom);
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,EMPTY_32BIT_WORD_V830_FRS::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V259_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V259_FRS(geom)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V259_FRS::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_05: count;
    // 24_26: 2;
    // 27_31: geom = MATCH(geom);
  // }
  // list(0<=index<2)

  {
    // UINT32 ch_data_pattern NOENCODE
    // {
      //  0_26: value;
      // 27_31: geom = MATCH(geom);
      // ENCODE(data[index],(value=value));
    // }
  }
  // UINT32 eob
  // {
    // 24_26: 4;
    // 27_31: geom = MATCH(geom);
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V259_FRS::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V775_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V775_FRS(geom)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V775_FRS::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA12_OVERFLOW data[32] ZERO_SUPPRESS);
  // UINT32 header NOENCODE
  // {
    //  0_05: count;
    // 16_23: crate;
    // 24_26: 2;
    // 27_31: geom = MATCH(geom);
  // }
  // list(0<=index<header.count)

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_11: value;
      //    12: overflow;
      //    13: underflow;
      //    14: valid;
      // 16_20: channel;
      // 24_26: 0;
      // 27_31: geom = MATCH(geom);
      // ENCODE(data[channel],(value=value,overflow=overflow));
    // }
  }
  // UINT32 eob
  // {
    //  0_23: event_number;
    // 24_26: 4;
    // 27_31: geom = MATCH(geom);
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V775_FRS::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V830_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V830_FRS(geom)
template<typename __data_dest_t>
void PACKER_VME_CAEN_V830_FRS::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32]);
  // UINT32 header NOENCODE
  // {
    //  0_04: count;
    //  5_26: 0x00100000;
    // 27_31: geom = MATCH(geom);
  // }
  // list(0<=index<header.count)

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_31: value;
      // ENCODE(data[index],(value=value));
    // }
  }
  // UINT32 eob
  // {
    //  0_26: 0x04000000;
    // 27_31: geom = MATCH(geom);
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,VME_CAEN_V830_FRS::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FRS_CRATE.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(FRS_CRATE)
template<typename __data_dest_t>
void PACKER_FRS_CRATE::__packer(__data_dest_t &__buffer)
{
  // select several

    // scaler0 = VME_CAEN_V830_FRS(geom=6);
    // pattern = VME_CAEN_V259_FRS(geom=5);
    // tdc0 = VME_CAEN_V775_FRS(geom=8);
    // tdc1 = VME_CAEN_V775_FRS(geom=9);
    // qdc0 = VME_CAEN_V775_FRS(geom=11);
    // adc0 = VME_CAEN_V775_FRS(geom=13);
    // dummy0 = EMPTY_32BIT_WORD_V830_FRS(geom=6);
    // dummy1 = EMPTY_32BIT_WORD_V775_FRS(geom=8);
    // dummy2 = EMPTY_32BIT_WORD_V775_FRS(geom=9);
    // dummy3 = EMPTY_32BIT_WORD_V775_FRS(geom=11);
    // dummy4 = EMPTY_32BIT_WORD_V775_FRS(geom=13);
  {
    PACK_DECL(198,VME_CAEN_V830_FRS,scaler0,/*geom*/6);
    PACK_DECL(199,VME_CAEN_V259_FRS,pattern,/*geom*/5);
    PACK_DECL(200,VME_CAEN_V775_FRS,tdc0,/*geom*/8);
    PACK_DECL(201,VME_CAEN_V775_FRS,tdc1,/*geom*/9);
    PACK_DECL(202,VME_CAEN_V775_FRS,qdc0,/*geom*/11);
    PACK_DECL(203,VME_CAEN_V775_FRS,adc0,/*geom*/13);
    PACK_DECL(208,EMPTY_32BIT_WORD_V830_FRS,dummy0,/*geom*/6);
    PACK_DECL(209,EMPTY_32BIT_WORD_V775_FRS,dummy1,/*geom*/8);
    PACK_DECL(210,EMPTY_32BIT_WORD_V775_FRS,dummy2,/*geom*/9);
    PACK_DECL(211,EMPTY_32BIT_WORD_V775_FRS,dummy3,/*geom*/11);
    PACK_DECL(212,EMPTY_32BIT_WORD_V775_FRS,dummy4,/*geom*/13);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,FRS_CRATE::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TPC_CRATE.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(TPC_CRATE)
template<typename __data_dest_t>
void PACKER_TPC_CRATE::__packer(__data_dest_t &__buffer)
{
  // select several

    // tdc0 = VME_CAEN_V775_FRS(geom=8);
    // tdc1 = VME_CAEN_V775_FRS(geom=9);
    // adc0 = VME_CAEN_V775_FRS(geom=16);
    // adc1 = VME_CAEN_V775_FRS(geom=17);
    // scaler0 = VME_CAEN_V830_FRS(geom=5);
    // dummy0 = EMPTY_32BIT_WORD_V830_FRS(geom=5);
    // dummy1 = EMPTY_32BIT_WORD_V775_FRS(geom=8);
    // dummy2 = EMPTY_32BIT_WORD_V775_FRS(geom=9);
    // dummy3 = EMPTY_32BIT_WORD_V775_FRS(geom=16);
    // dummy4 = EMPTY_32BIT_WORD_V775_FRS(geom=17);
  {
    PACK_DECL(223,VME_CAEN_V775_FRS,tdc0,/*geom*/8);
    PACK_DECL(224,VME_CAEN_V775_FRS,tdc1,/*geom*/9);
    PACK_DECL(225,VME_CAEN_V775_FRS,adc0,/*geom*/16);
    PACK_DECL(226,VME_CAEN_V775_FRS,adc1,/*geom*/17);
    PACK_DECL(227,VME_CAEN_V830_FRS,scaler0,/*geom*/5);
    PACK_DECL(228,EMPTY_32BIT_WORD_V830_FRS,dummy0,/*geom*/5);
    PACK_DECL(229,EMPTY_32BIT_WORD_V775_FRS,dummy1,/*geom*/8);
    PACK_DECL(230,EMPTY_32BIT_WORD_V775_FRS,dummy2,/*geom*/9);
    PACK_DECL(231,EMPTY_32BIT_WORD_V775_FRS,dummy3,/*geom*/16);
    PACK_DECL(232,EMPTY_32BIT_WORD_V775_FRS,dummy4,/*geom*/17);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,TPC_CRATE::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
  // vme0 = FRS_CRATE(type=10,subtype=1,procid=10);
  // vme1 = TPC_CRATE(type=10,subtype=1,procid=20);
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
