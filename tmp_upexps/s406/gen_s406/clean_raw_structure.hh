class raw_event_NTF
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_NTF);
} ;
class raw_event_CXB
{
  DATA12 T;
  DATA14_OVERFLOW E;
  STRUCT_FCNS_DECL(raw_event_CXB);
} ;
class raw_event_DTF
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_DTF);
} ;
class raw_event_GFI
{
  DATA12 E;
  STRUCT_FCNS_DECL(raw_event_GFI);
} ;
class raw_event_POS
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_POS);
} ;
class raw_event_ROL
{
  DATA12 E;
  STRUCT_FCNS_DECL(raw_event_ROL);
} ;
class raw_event_PSP
{
  DATA14_OVERFLOW E;
  STRUCT_FCNS_DECL(raw_event_PSP);
} ;
class raw_event_SCI
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_SCI);
} ;
class raw_event_XBTRIG
{
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_XBTRIG);
} ;
class raw_event_XB
{
  DATA14_OVERFLOW E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_XB);
} ;
class raw_event_SST
{
  DATA12 E;
  STRUCT_FCNS_DECL(raw_event_SST);
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
  raw_array_zero_suppress_1<raw_event_NTF,raw_event_NTF[2],16,2>
       NTF;
  raw_event_CXB
       CXB[7][1];
  raw_array_zero_suppress_1<raw_event_DTF,raw_event_DTF[2],8,2>
       DTF;
  raw_array_zero_suppress<raw_event_GFI,raw_event_GFI,34>
       GFI[2];
  raw_event_POS
       POS[1][4];
  raw_event_ROL
       ROL[1][4];
  raw_event_PSP
       PSP[1][5];
  raw_event_SCI
       SCI[2][2];
  raw_event_XBTRIG
       XBTRIG[16][1];
  raw_array_zero_suppress_1<raw_event_XB,raw_event_XB[2],162,2>
       XB;
  raw_array_zero_suppress<raw_event_SST,raw_event_SST,1024>
       SST[8];
  raw_list_ii_zero_suppress<raw_event_PILEUP,raw_event_PILEUP,16>
       PILEUP;
  raw_list_ii_zero_suppress<raw_event_TCALMT,raw_event_TCALMT,16>
       TCALMT;
  float TCALT;
  float TCALE;
  float TPREV;
  float TNEXT;
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
