class raw_event_CS
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_CS);
} ;
class raw_event_CV
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_CV);
} ;
class raw_event_FGR
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_FGR);
} ;
class raw_event_GFI
{
  DATA12 E;
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
class raw_event_PIX
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_PIX);
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
class raw_event_ZST
{
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_ZST);
} ;
class raw_event : public raw_event_base
{
  raw_array_zero_suppress<raw_event_CS,raw_event_CS,144>
       CS[1];
  raw_array_zero_suppress<raw_event_CV,raw_event_CV,12>
       CV[1];
  raw_array_zero_suppress<raw_event_FGR,raw_event_FGR,16>
       FGR[1];
  raw_array_zero_suppress<raw_event_GFI,raw_event_GFI,34>
       GFI[3];
  raw_array_zero_suppress_1<raw_event_N,raw_event_N[2],20,2>
       N[10];
  raw_array_zero_suppress_1<raw_event_NTF,raw_event_NTF[2],8,2>
       NTF;
  raw_event_POS
       POS[1][4];
  raw_event_PSP
       PSP[3][5];
  raw_event_ROL
       ROL[1][4];
  raw_event_PIX
       PIX[3][1];
  raw_array_zero_suppress_1<raw_event_TFW,raw_event_TFW[2],32,2>
       TFW;
  raw_array_zero_suppress_1<raw_event_V,raw_event_V[2],20,2>
       V[1];
  raw_event_ZST
       ZST[4][5];
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
