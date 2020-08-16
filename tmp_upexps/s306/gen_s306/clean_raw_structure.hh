class raw_event_GFI
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_GFI);
} ;
class raw_event_N
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_N);
} ;
class raw_event_NTF
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_NTF);
} ;
class raw_event_POS
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_POS);
} ;
class raw_event_PSP
{
  DATA12 E;
  STRUCT_FCNS_DECL(raw_event_PSP);
} ;
class raw_event_ROL
{
  DATA12 E;
  STRUCT_FCNS_DECL(raw_event_ROL);
} ;
class raw_event_SCI
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_SCI);
} ;
class raw_event_STR
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_STR);
} ;
class raw_event_TFW
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_TFW);
} ;
class raw_event_V
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_V);
} ;
class raw_event_XB
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_XB);
} ;
class raw_event_XBSUM
{
  DATA12 E;
  STRUCT_FCNS_DECL(raw_event_XBSUM);
} ;
class raw_event_SST
{
  DATA12 E;
  STRUCT_FCNS_DECL(raw_event_SST);
} ;
class raw_event_MASTER
{
  DATA32 ACCEPT;
  DATA32 WANTED;
  STRUCT_FCNS_DECL(raw_event_MASTER);
} ;
class raw_event_PILEUP
{
  DATA16 T;
  STRUCT_FCNS_DECL(raw_event_PILEUP);
} ;
class raw_event_TCALMT
{
  DATA16 T;
  STRUCT_FCNS_DECL(raw_event_TCALMT);
} ;
class raw_event : public raw_event_base
{
  raw_array_zero_suppress<raw_event_GFI,raw_event_GFI,35>
       GFI[3];
  raw_array_zero_suppress_1<raw_event_N,raw_event_N[2],20,2>
       N[10];
  raw_array_zero_suppress_1<raw_event_NTF,raw_event_NTF[2],16,2>
       NTF;
  raw_event_POS
       POS[1][4];
  raw_event_PSP
       PSP[2][5];
  raw_event_ROL
       ROL[1][4];
  raw_event_SCI
       SCI[2][2];
  raw_event_STR
       STR[2][1];
  raw_array_zero_suppress_1<raw_event_TFW,raw_event_TFW[2],32,2>
       TFW;
  raw_array_zero_suppress_1<raw_event_V,raw_event_V[2],20,2>
       V[1];
  raw_array_zero_suppress_1<raw_event_XB,raw_event_XB[2],162,2>
       XB;
  raw_event_XBSUM
       XBSUM[1];
  raw_array_zero_suppress<raw_event_SST,raw_event_SST,1024>
       SST[2];
  raw_event_MASTER
       MASTER;
  raw_list_ii_zero_suppress<raw_event_PILEUP,raw_event_PILEUP,16>
       PILEUP;
  raw_list_ii_zero_suppress<raw_event_TCALMT,raw_event_TCALMT,16>
       TCALMT;
  uint16 IPED;
  float TCALT;
  float TCALE;
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
