class raw_event_MW
{
  DATA12_OVERFLOW AN;
  DATA12_OVERFLOW XR;
  DATA12_OVERFLOW XL;
  DATA12_OVERFLOW YU;
  DATA12_OVERFLOW YD;
  STRUCT_FCNS_DECL(raw_event_MW);
} ;
class raw_event_TOF
{
  DATA12_OVERFLOW L;
  DATA12_OVERFLOW R;
  STRUCT_FCNS_DECL(raw_event_TOF);
} ;
class raw_event_TPC
{
  DATA12_OVERFLOW A[4];
  DATA12_OVERFLOW AR[2];
  DATA12_OVERFLOW AL[2];
  DATA12_OVERFLOW DT[4];
  DATA12_OVERFLOW LT[2];
  DATA12_OVERFLOW RT[2];
  STRUCT_FCNS_DECL(raw_event_TPC);
} ;
class raw_event_SC
{
  DATA12_OVERFLOW DT;
  DATA12_OVERFLOW DEL;
  DATA12_OVERFLOW DER;
  STRUCT_FCNS_DECL(raw_event_SC);
} ;
class raw_event : public raw_event_base
{
  raw_event_MW
       MW[2];
  DATA32 PATTERN;
  DATA32 MULTIP;
  DATA32 SCALER[2][18];
  raw_event_TOF
       TOF;
  raw_event_TPC
       TPC[3];
  raw_event_SC
       SC[3];
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
