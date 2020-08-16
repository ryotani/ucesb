class raw_event_TPC
{
  DATA12 DT[4];
  DATA12 LT[2];
  DATA12 RT[2];
  DATA12 A[4];
  DATA12 AL[2];
  DATA12 AR[2];
  STRUCT_FCNS_DECL(raw_event_TPC);
} ;
class raw_event_MUS
{
  DATA12 A[8];
  STRUCT_FCNS_DECL(raw_event_MUS);
} ;
class raw_event_SST
{
  DATA12 E;
  STRUCT_FCNS_DECL(raw_event_SST);
} ;
class raw_event : public raw_event_base
{
  raw_event_TPC
       TPC[6];
  raw_event_MUS
       MUS[3];
  raw_array_zero_suppress<raw_event_SST,raw_event_SST,1024>
       SST[3];
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
