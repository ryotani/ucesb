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
  DATA32 HI;
  DATA32 LO;
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_MASTER);
} ;
class raw_event_TIMESTAMP
{
  raw_event_TIMESTAMP_MASTER
       MASTER;
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP);
} ;
class raw_event_LOS
{
  raw_array_multi_zero_suppress<DATA12,DATA12,8,10> VTF;
  raw_array_multi_zero_suppress<DATA16,DATA16,8,10> VTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,8,10> TTFL;
  raw_array_multi_zero_suppress<DATA12,DATA12,8,10> TTFT;
  raw_array_multi_zero_suppress<DATA12,DATA12,8,10> TTCL;
  raw_array_multi_zero_suppress<DATA12,DATA12,8,10> TTCT;
  STRUCT_FCNS_DECL(raw_event_LOS);
} ;
class raw_event_ROLU
{
  raw_array_multi_zero_suppress<DATA12,DATA12,4,10> VTF;
  raw_array_multi_zero_suppress<DATA16,DATA16,4,10> VTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,10> TTFL;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,10> TTFT;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,10> TTCL;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,10> TTCT;
  STRUCT_FCNS_DECL(raw_event_ROLU);
} ;
class raw_event_S
{
  raw_array_multi_zero_suppress<DATA12,DATA12,2,10> VTF;
  raw_array_multi_zero_suppress<DATA16,DATA16,2,10> VTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TTFL;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TTFT;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TTCL;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TTCT;
  STRUCT_FCNS_DECL(raw_event_S);
} ;
class raw_event_SST
{
  DATA12 E;
  STRUCT_FCNS_DECL(raw_event_SST);
} ;
class raw_event_FIBTEN
{
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTF;
  STRUCT_FCNS_DECL(raw_event_FIBTEN);
} ;
class raw_event_FIBELEVEN
{
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTF;
  STRUCT_FCNS_DECL(raw_event_FIBELEVEN);
} ;
class raw_event_FIBTWELVE
{
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTF;
  STRUCT_FCNS_DECL(raw_event_FIBTWELVE);
} ;
class raw_event_FIBTHIRTEEN
{
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTF;
  STRUCT_FCNS_DECL(raw_event_FIBTHIRTEEN);
} ;
class raw_event_FIBTHREEA
{
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTF;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSTF;
  STRUCT_FCNS_DECL(raw_event_FIBTHREEA);
} ;
class raw_event_FIBTHREEB
{
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTF;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSTF;
  STRUCT_FCNS_DECL(raw_event_FIBTHREEB);
} ;
class raw_event_TOFD_P_T
{
  raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TFL;
  raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TFT;
  raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TCL;
  raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TCT;
  STRUCT_FCNS_DECL(raw_event_TOFD_P_T);
} ;
class raw_event_TOFD_P
{
  raw_event_TOFD_P_T
       T[2];
  STRUCT_FCNS_DECL(raw_event_TOFD_P);
} ;
class raw_event_TOFD
{
  raw_event_TOFD_P
       P[4];
  STRUCT_FCNS_DECL(raw_event_TOFD);
} ;
class raw_event_CALIFA
{
  raw_array_zero_suppress<DATA16,DATA16,6912> ENE;
  raw_array_zero_suppress<DATA32,DATA32,6912> TSLSB;
  raw_array_zero_suppress<DATA32,DATA32,6912> TSMSB;
  raw_array_zero_suppress<DATA16,DATA16,6912> NF;
  raw_array_zero_suppress<DATA16,DATA16,6912> NS;
  STRUCT_FCNS_DECL(raw_event_CALIFA);
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
  raw_event_NN_P
       P[16];
  STRUCT_FCNS_DECL(raw_event_NN);
} ;
class raw_event : public raw_event_base
{
  raw_list_ii_zero_suppress<DATA16,DATA16,170> TPAT;
  raw_array_zero_suppress<DATA32,DATA32,512> SAMPLOSH;
  raw_array_zero_suppress<DATA32,DATA32,512> SAMPLOSL;
  raw_array_zero_suppress<DATA32,DATA32,512> SAMPMSH;
  raw_array_zero_suppress<DATA32,DATA32,512> SAMPMSL;
  raw_event_TIMESTAMP
       TIMESTAMP;
  raw_event_LOS
       LOS[1];
  raw_event_ROLU
       ROLU[1];
  raw_event_S
       S[8];
  raw_array_zero_suppress<raw_event_SST,raw_event_SST,1024>
       SST[4];
  raw_event_FIBTEN
       FIBTEN;
  raw_event_FIBELEVEN
       FIBELEVEN;
  raw_event_FIBTWELVE
       FIBTWELVE;
  raw_event_FIBTHIRTEEN
       FIBTHIRTEEN;
  raw_event_FIBTHREEA
       FIBTHREEA;
  raw_event_FIBTHREEB
       FIBTHREEB;
  raw_event_TOFD
       TOFD;
  raw_event_CALIFA
       CALIFA;
  raw_array_multi_zero_suppress<DATA32,DATA32,128,20> PSPX[6];
  raw_event_NN
       NN;
  STRUCT_FCNS_DECL(raw_event);
} ;
