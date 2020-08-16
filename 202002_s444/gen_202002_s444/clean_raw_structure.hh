class raw_event_SCITWO
{
  raw_array_multi_zero_suppress<DATA12,DATA12,8,32> VTF;
  raw_array_multi_zero_suppress<DATA16,DATA16,8,32> VTC;
  STRUCT_FCNS_DECL(raw_event_SCITWO);
} ;
class raw_event_SCIEIGHT
{
  raw_array_multi_zero_suppress<DATA12,DATA12,8,32> VTF;
  raw_array_multi_zero_suppress<DATA16,DATA16,8,32> VTC;
  STRUCT_FCNS_DECL(raw_event_SCIEIGHT);
} ;
class raw_event_NN_WR
{
  DATA12 ID;
  DATA16 T[4];
  STRUCT_FCNS_DECL(raw_event_NN_WR);
} ;
class raw_event_NN_P_tcl_T
{
  raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  STRUCT_FCNS_DECL(raw_event_NN_P_tcl_T);
} ;
class raw_event_NN_P_tcl
{
  raw_event_NN_P_tcl_T
       T[2];
  STRUCT_FCNS_DECL(raw_event_NN_P_tcl);
} ;
class raw_event_NN_P_tfl_T
{
  raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  STRUCT_FCNS_DECL(raw_event_NN_P_tfl_T);
} ;
class raw_event_NN_P_tfl
{
  raw_event_NN_P_tfl_T
       T[2];
  STRUCT_FCNS_DECL(raw_event_NN_P_tfl);
} ;
class raw_event_NN_P_tct_T
{
  raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  STRUCT_FCNS_DECL(raw_event_NN_P_tct_T);
} ;
class raw_event_NN_P_tct
{
  raw_event_NN_P_tct_T
       T[2];
  STRUCT_FCNS_DECL(raw_event_NN_P_tct);
} ;
class raw_event_NN_P_tft_T
{
  raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  STRUCT_FCNS_DECL(raw_event_NN_P_tft_T);
} ;
class raw_event_NN_P_tft
{
  raw_event_NN_P_tft_T
       T[2];
  STRUCT_FCNS_DECL(raw_event_NN_P_tft);
} ;
class raw_event_NN_P
{
  raw_event_NN_P_tcl
       tcl;
  raw_event_NN_P_tfl
       tfl;
  raw_event_NN_P_tct
       tct;
  raw_event_NN_P_tft
       tft;
  STRUCT_FCNS_DECL(raw_event_NN_P);
} ;
class raw_event_NN
{
  raw_event_NN_WR
       WR;
  raw_event_NN_P
       P[16];
  STRUCT_FCNS_DECL(raw_event_NN);
} ;
class raw_event_MUSIC
{
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,8,100> E;
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,8,100> T;
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,100> TREF;
  STRUCT_FCNS_DECL(raw_event_MUSIC);
} ;
class raw_event_SOFSCI
{
  raw_array_multi_zero_suppress<DATA12,DATA12,3,10> TF;
  raw_array_multi_zero_suppress<DATA16,DATA16,3,10> TC;
  STRUCT_FCNS_DECL(raw_event_SOFSCI);
} ;
class raw_event_SOFTWIM_S
{
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,100> E;
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,100> T;
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,100> TREF;
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,100> TRIG;
  STRUCT_FCNS_DECL(raw_event_SOFTWIM_S);
} ;
class raw_event_SOFTWIM
{
  raw_event_SOFTWIM_S
       S[1];
  STRUCT_FCNS_DECL(raw_event_SOFTWIM);
} ;
class raw_event_SOFTOFW_P
{
  raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TF;
  raw_array_multi_zero_suppress<DATA16,DATA16,2,10> TC;
  DATA14 E[2];
  STRUCT_FCNS_DECL(raw_event_SOFTOFW_P);
} ;
class raw_event_SOFTOFW
{
  raw_event_SOFTOFW_P
       P[28];
  STRUCT_FCNS_DECL(raw_event_SOFTOFW);
} ;
class raw_event_SOFMWPC_Plane
{
  raw_array_zero_suppress<DATA12,DATA12,288> Q;
  STRUCT_FCNS_DECL(raw_event_SOFMWPC_Plane);
} ;
class raw_event_SOFMWPC
{
  raw_event_SOFMWPC_Plane
       Plane[3];
  STRUCT_FCNS_DECL(raw_event_SOFMWPC);
} ;
class raw_event_SOFSCALERS
{
  DATA32 UPSTREAM[7];
  DATA32 TOFW[56];
  STRUCT_FCNS_DECL(raw_event_SOFSCALERS);
} ;
class raw_event_CALIFA
{
  raw_array_zero_suppress<DATA16,DATA16,4861> ENE;
  raw_array_zero_suppress<DATA16,DATA16,4861> TOT;
  raw_array_zero_suppress<DATA32,DATA32,4861> TSLSB;
  raw_array_zero_suppress<DATA32,DATA32,4861> TSMSB;
  raw_array_zero_suppress<DATA16,DATA16,4861> NF;
  raw_array_zero_suppress<DATA16,DATA16,4861> NS;
  STRUCT_FCNS_DECL(raw_event_CALIFA);
} ;
class raw_event_TIMESTAMP_SCITWO_WR
{
  DATA16 T[4];
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_SCITWO_WR);
} ;
class raw_event_TIMESTAMP_SCITWO
{
  DATA12 ID;
  raw_event_TIMESTAMP_SCITWO_WR
       WR;
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_SCITWO);
} ;
class raw_event_TIMESTAMP_SCIEIGHT_WR
{
  DATA16 T[4];
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_SCIEIGHT_WR);
} ;
class raw_event_TIMESTAMP_SCIEIGHT
{
  DATA12 ID;
  raw_event_TIMESTAMP_SCIEIGHT_WR
       WR;
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_SCIEIGHT);
} ;
class raw_event_TIMESTAMP_CALIFA_WR
{
  DATA16 T[4];
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_CALIFA_WR);
} ;
class raw_event_TIMESTAMP_CALIFA
{
  DATA12 ID;
  raw_event_TIMESTAMP_CALIFA_WR
       WR;
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_CALIFA);
} ;
class raw_event_TIMESTAMP_MASTER_WR
{
  DATA16 T[4];
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_MASTER_WR);
} ;
class raw_event_TIMESTAMP_MASTER
{
  DATA12 ID;
  raw_event_TIMESTAMP_MASTER_WR
       WR;
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_MASTER);
} ;
class raw_event_TIMESTAMP_SOFIA_WR
{
  DATA16 T[4];
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_SOFIA_WR);
} ;
class raw_event_TIMESTAMP_SOFIA
{
  DATA12 ID;
  raw_event_TIMESTAMP_SOFIA_WR
       WR;
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_SOFIA);
} ;
class raw_event_TIMESTAMP
{
  raw_event_TIMESTAMP_SCITWO
       SCITWO;
  raw_event_TIMESTAMP_SCIEIGHT
       SCIEIGHT;
  raw_event_TIMESTAMP_CALIFA
       CALIFA[2];
  raw_event_TIMESTAMP_MASTER
       MASTER;
  raw_event_TIMESTAMP_SOFIA
       SOFIA;
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP);
} ;
class raw_event : public raw_event_base
{
  raw_event_SCITWO
       SCITWO;
  raw_event_SCIEIGHT
       SCIEIGHT;
  raw_event_NN
       NN;
  raw_array_zero_suppress<DATA32,DATA32,512> SAMP;
  raw_event_MUSIC
       MUSIC;
  raw_event_SOFSCI
       SOFSCI[1];
  raw_event_SOFTWIM
       SOFTWIM;
  raw_event_SOFTOFW
       SOFTOFW;
  raw_event_SOFMWPC
       SOFMWPC[4];
  raw_event_SOFSCALERS
       SOFSCALERS;
  raw_event_CALIFA
       CALIFA;
  raw_event_TIMESTAMP
       TIMESTAMP;
  raw_list_ii_zero_suppress<DATA16,DATA16,170> TPAT;
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
