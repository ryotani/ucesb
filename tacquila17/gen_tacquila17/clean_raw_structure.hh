class raw_event_tac
{
  DATA12 t[16];
  DATA12 q[16];
  STRUCT_FCNS_DECL(raw_event_tac);
} ;
class raw_event : public raw_event_base
{
  raw_event_tac
       tac[2];
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
