class raw_event_U_QDC
{
  DATA32 CH[16];
  STRUCT_FCNS_DECL(raw_event_U_QDC);
} ;
class raw_event_U_TDC
{
  raw_list_ii_zero_suppress<DATA32,DATA32,5> CH[32];
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
       QDC[2];
  raw_event_U_TDC
       TDC[1];
  raw_event_U_Sca
       Sca[4];
  DATA32 MPflag;
  DATA32 tsCH[8];
  DATA32 RBWCH[2];
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
