/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FZD_data_SUBITEM.
 *
 * Do not edit - automatically generated.
 */

// FZD_data_SUBITEM(geo,data)
template<typename __data_dest_t>
void PACKER_FZD_data_SUBITEM::__packer(__data_dest_t &__buffer,uint32 geo
                                                              ,raw_array_multi_zero_suppress<DATA32,DATA32,32,5> &data)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS_MULTI(5));
  // UINT32 ch_data NOENCODE
  // {
    //  0_23: data;
    // 24_28: channel = RANGE(0,32);
    //    29: 0;
    //    30: 0;
    //    31: 0;
    // ENCODE(data[channel],(value=data));
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FZD_data_SUBITEM::__packer,uint32 geo);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FZD_Modul.
 *
 * Do not edit - automatically generated.
 */

// FZD_Modul(geom)
template<typename __data_dest_t>
void PACKER_FZD_Modul::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS_MULTI(5));
  // UINT32 header
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 1;
    //    30: 0;
    //    31: 0;
  // }
  // select several

    // dummy = FZD_data_SUBITEM(geo=geom,data=data);
  {
    PACK_DECL(30,FZD_data_SUBITEM,dummy,/*geo*/geom,/*data*/data);
  }
  // UINT32 EOB
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 0;
    //    30: 1;
    //    31: 0;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FZD_Modul::__packer,uint32 geom);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FZD_V1495.
 *
 * Do not edit - automatically generated.
 */

// FZD_V1495(geom)
template<typename __data_dest_t>
void PACKER_FZD_V1495::__packer(__data_dest_t &__buffer,uint32 geom)
{
  // MEMBER(DATA32 ts[8] ZERO_SUPPRESS);
  // MEMBER(DATA32 RBWL[2] ZERO_SUPPRESS);
  // MEMBER(DATA32 MP);
  // UINT32 header
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 1;
    //    30: 0;
    //    31: 0;
  // }
  // list(0<=index<5)

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_23: timestamp;
      // 24_28: channel = RANGE(0,4);
      //    29: 0;
      //    30: 0;
      //    31: 0;
      // ENCODE(ts[channel],(value=timestamp));
    // }
  }
  // UINT32 ch_data NOENCODE
  // {
    //  0_07: timestamp;
    //     8: dummy = RANGE(0,1);
    //     9: MPF = RANGE(0,1);
    //    10: RBWF = RANGE(0,1);
    // 11_23: 0;
    // 24_28: channel = RANGE(5,5);
    //    29: 0;
    //    30: 0;
    //    31: 0;
    // ENCODE(MP,(value=MPF));
    // ENCODE(ts[channel],(value=timestamp));
  // }
  // list(0<=index<2)

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_23: timestamp;
      // 24_28: channel = RANGE(6,7);
      //    29: 0;
      //    30: 0;
      //    31: 0;
      // ENCODE(ts[channel],(value=timestamp));
    // }
  }
  // list(0<=index<2)

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_23: length;
      // 24_28: channel = RANGE(8,9);
      //    29: 0;
      //    30: 0;
      //    31: 0;
      // ENCODE(RBWL[(channel - 8)],(value=length));
    // }
  }
  // UINT32 EOB
  // {
    //  0_23: 0;
    // 24_28: geom = MATCH(geom);
    //    29: 0;
    //    30: 1;
    //    31: 0;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FZD_V1495::__packer,uint32 geom);

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
  // select several

    // timestamp = FZD_V1495(geom=21);
    // QDC1 = FZD_Modul(geom=7);
    // QDC2 = FZD_Modul(geom=8);
    // TDC1 = FZD_Modul(geom=5);
    // Sca1 = FZD_Modul(geom=13);
    // Sca2 = FZD_Modul(geom=14);
    // Sca3 = FZD_Modul(geom=15);
    // Sca4 = FZD_Modul(geom=16);
  {
    PACK_DECL(115,FZD_V1495,timestamp,/*geom*/21);
    PACK_DECL(117,FZD_Modul,QDC1,/*geom*/7);
    PACK_DECL(118,FZD_Modul,QDC2,/*geom*/8);
    PACK_DECL(120,FZD_Modul,TDC1,/*geom*/5);
    PACK_DECL(122,FZD_Modul,Sca1,/*geom*/13);
    PACK_DECL(123,FZD_Modul,Sca2,/*geom*/14);
    PACK_DECL(124,FZD_Modul,Sca3,/*geom*/15);
    PACK_DECL(125,FZD_Modul,Sca4,/*geom*/16);
  }
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
