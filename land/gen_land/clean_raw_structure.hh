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
class raw_event_ROL
{
  DATA12 E;
  STRUCT_FCNS_DECL(raw_event_ROL);
} ;
class raw_event_RPC
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_RPC);
} ;
class raw_event_SCI
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_SCI);
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
class raw_event : public raw_event_base
{
  raw_event_N
       N[10][20][2];
  raw_event_NTF
       NTF[16][2];
  raw_event_POS
       POS[1][4];
  raw_event_ROL
       ROL[2][4];
  raw_event_RPC
       RPC[4][2];
  raw_event_SCI
       SCI[2][2];
  raw_event_TFW
       TFW[24][2];
  raw_event_V
       V[1][20][2];
  raw_event_XB
       XB[1][162];
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
