class raw_event_CS
{
  DATA12 E;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_CS);
} ;
class raw_event : public raw_event_base
{
  raw_array_zero_suppress<raw_event_CS,raw_event_CS,1>
       CS[155];
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
