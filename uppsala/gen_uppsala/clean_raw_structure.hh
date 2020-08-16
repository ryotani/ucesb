class raw_event_U_QDC
{
  raw_array_zero_suppress<DATA32,DATA32,16> CH;
  STRUCT_FCNS_DECL(raw_event_U_QDC);
} ;
class raw_event_U_TDC
{
  DATA32 CH[32];
  STRUCT_FCNS_DECL(raw_event_U_TDC);
} ;
class raw_event_U_Sca
{
  DATA32 CH[32];
  STRUCT_FCNS_DECL(raw_event_U_Sca);
} ;
class raw_event_U
{
  raw_event_U_QDC
       QDC[4];
  raw_event_U_TDC
       TDC[3];
  raw_event_U_Sca
       Sca[7];
  DATA32 MPflag;
  DATA32 Cyflag;
  DATA32 ts;
  DATA32 ro;
  DATA32 timeCH[9];
  STRUCT_FCNS_DECL(raw_event_U);
} ;
class raw_event : public raw_event_base
{
  raw_event_U
       U;
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
