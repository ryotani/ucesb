class raw_event_LOS
{
  raw_array_multi_zero_suppress<DATA12,DATA12,5,10> TF;
  raw_array_multi_zero_suppress<DATA16,DATA16,5,10> TC;
  STRUCT_FCNS_DECL(raw_event_LOS);
} ;
class raw_event_ROLU
{
  DATA16 T;
  STRUCT_FCNS_DECL(raw_event_ROLU);
} ;
class raw_event_TOFD
{
  DATA12 TF;
  DATA16 TC;
  STRUCT_FCNS_DECL(raw_event_TOFD);
} ;
class raw_event_NNP
{
  DATA12 TAC;
  DATA12 CLK;
  DATA12 ADC;
  DATA12 T;
  STRUCT_FCNS_DECL(raw_event_NNP);
} ;
class raw_event : public raw_event_base
{
  raw_event_LOS
       LOS[2];
  raw_event_ROLU
       ROLU[2][4];
  raw_event_TOFD
       TOFD[15][2];
  raw_array_zero_suppress<raw_event_NNP,raw_event_NNP,50>
       NNP[8][2];
  raw_array_multi_zero_suppress<DATA32,DATA32,65,10> PSPX[5];
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
