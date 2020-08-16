/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FZD_data_SUBITEM.
 *
 * Do not edit - automatically generated.
 */

// FZD_data_SUBITEM(geo,data)
template<typename __data_dest_t>
void PACKER_FZD_data_SUBITEM::__packer(__data_dest_t &__buffer,uint32 geo
                                                              ,raw_array_zero_suppress<DATA32,DATA32,32> &data)
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
  // MEMBER(DATA32 data[32] ZERO_SUPPRESS);
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
    PACK_DECL(28,FZD_data_SUBITEM,dummy,/*geo*/geom,/*data*/data);
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
 * Event packer for FZD_V1495_MP.
 *
 * Do not edit - automatically generated.
 */

// FZD_V1495_MP(geom)
template<typename __data_dest_t>
void PACKER_FZD_V1495_MP::__packer(__data_dest_t &__buffer,uint32 geom)
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
  // list(0<=index<3)

  {
    // UINT32 ch_data NOENCODE
    // {
      //  0_19: timestamp;
      //    20: flag4;
      //    21: flag3;
      //    22: Cyflag;
      //    23: MPflag;
      // 24_28: channel = RANGE(0,2);
      //    29: 0;
      //    30: 0;
      //    31: 0;
      // ENCODE(MP_FLAG[index],(value=MPflag));
      // ENCODE(Cy_FLAG[index],(value=Cyflag));
      // ENCODE(ts[index],(value=timestamp));
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
FORCE_IMPL_DATA_SRC_FCN_ARG(void,FZD_V1495_MP::__packer,uint32 geom);

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

    // MP = FZD_V1495_MP(geom=21);
    // QDC1 = FZD_Modul(geom=6);
    // QDC2 = FZD_Modul(geom=7);
    // QDC3 = FZD_Modul(geom=8);
    // QDC4 = FZD_Modul(geom=9);
    // TDC1 = FZD_Modul(geom=1);
    // TDC2 = FZD_Modul(geom=2);
    // TDC3 = FZD_Modul(geom=3);
    // Sca1 = FZD_Modul(geom=13);
    // Sca2 = FZD_Modul(geom=14);
    // Sca3 = FZD_Modul(geom=15);
    // Sca4 = FZD_Modul(geom=16);
    // Sca5 = FZD_Modul(geom=17);
    // Sca6 = FZD_Modul(geom=18);
    // Sca7 = FZD_Modul(geom=20);
    // time = FZD_Modul(geom=19);
  {
    PACK_DECL(69,FZD_V1495_MP,MP,/*geom*/21);
    PACK_DECL(70,FZD_Modul,QDC1,/*geom*/6);
    PACK_DECL(71,FZD_Modul,QDC2,/*geom*/7);
    PACK_DECL(72,FZD_Modul,QDC3,/*geom*/8);
    PACK_DECL(73,FZD_Modul,QDC4,/*geom*/9);
    PACK_DECL(74,FZD_Modul,TDC1,/*geom*/1);
    PACK_DECL(75,FZD_Modul,TDC2,/*geom*/2);
    PACK_DECL(76,FZD_Modul,TDC3,/*geom*/3);
    PACK_DECL(77,FZD_Modul,Sca1,/*geom*/13);
    PACK_DECL(78,FZD_Modul,Sca2,/*geom*/14);
    PACK_DECL(79,FZD_Modul,Sca3,/*geom*/15);
    PACK_DECL(80,FZD_Modul,Sca4,/*geom*/16);
    PACK_DECL(81,FZD_Modul,Sca5,/*geom*/17);
    PACK_DECL(82,FZD_Modul,Sca6,/*geom*/18);
    PACK_DECL(83,FZD_Modul,Sca7,/*geom*/20);
    PACK_DECL(84,FZD_Modul,time,/*geom*/19);
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
