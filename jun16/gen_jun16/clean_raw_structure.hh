class raw_event_LOS
{
  raw_array_multi_zero_suppress<DATA12,DATA12,4,32> TF;
  raw_array_multi_zero_suppress<DATA16,DATA16,4,32> TC;
  STRUCT_FCNS_DECL(raw_event_LOS);
} ;
class raw_event_TOFD_VFTX
{
  DATA16 T[3];
  STRUCT_FCNS_DECL(raw_event_TOFD_VFTX);
} ;
class raw_event_TOFD_P_T
{
  raw_array_multi_zero_suppress<DATA12,DATA12,6,32> TFL;
  raw_array_multi_zero_suppress<DATA12,DATA12,6,32> TFT;
  raw_array_multi_zero_suppress<DATA16,DATA16,6,32> TCL;
  raw_array_multi_zero_suppress<DATA16,DATA16,6,32> TCT;
  STRUCT_FCNS_DECL(raw_event_TOFD_P_T);
} ;
class raw_event_TOFD_P
{
  raw_event_TOFD_P_T
       T[2];
  STRUCT_FCNS_DECL(raw_event_TOFD_P);
} ;
class raw_event_TOFD
{
  raw_event_TOFD_VFTX
       VFTX[2];
  raw_event_TOFD_P
       P[6];
  STRUCT_FCNS_DECL(raw_event_TOFD);
} ;
class raw_event_TIMESTAMP_MASTER_WR
{
  DATA16 T[4];
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_MASTER_WR);
} ;
class raw_event_TIMESTAMP_MASTER
{
  DATA12 ID;
  raw_event_TIMESTAMP_MASTER_WR
       WR;
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_MASTER);
} ;
class raw_event_TIMESTAMP
{
  raw_event_TIMESTAMP_MASTER
       MASTER;
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP);
} ;
class raw_event_TRLO_SAMPLER
{
  raw_array_zero_suppress<DATA32,DATA32,512> S;
  STRUCT_FCNS_DECL(raw_event_TRLO_SAMPLER);
} ;
class raw_event_TRLO
{
  raw_event_TRLO_SAMPLER
       SAMPLER;
  STRUCT_FCNS_DECL(raw_event_TRLO);
} ;
class raw_event : public raw_event_base
{
  raw_event_LOS
       LOS[1];
  raw_event_TOFD
       TOFD;
  raw_event_TIMESTAMP
       TIMESTAMP;
  raw_event_TRLO
       TRLO;
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
