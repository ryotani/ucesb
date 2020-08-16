class raw_event_TS
{
  DATA32 HI;
  DATA32 LO;
  STRUCT_FCNS_DECL(raw_event_TS);
} ;
class raw_event_ADC_TS
{
  DATA32 H;
  DATA32 L;
  STRUCT_FCNS_DECL(raw_event_ADC_TS);
} ;
class raw_event_ADC_CH
{
  DATA32 MAXE[2];
  DATA32 T[3];
  DATA32 GATE[8];
  STRUCT_FCNS_DECL(raw_event_ADC_CH);
} ;
class raw_event_ADC
{
  DATA8 N;
  raw_event_ADC_TS
       TS[16];
  raw_event_ADC_CH
       CH[14];
  STRUCT_FCNS_DECL(raw_event_ADC);
} ;
class raw_event_LABRL
{
  DATA12 T;
  DATA32 S;
  STRUCT_FCNS_DECL(raw_event_LABRL);
} ;
class raw_event_LABR
{
  DATA32 S;
  STRUCT_FCNS_DECL(raw_event_LABR);
} ;
class raw_event_HPGEL
{
  DATA12 T;
  DATA32 S;
  STRUCT_FCNS_DECL(raw_event_HPGEL);
} ;
class raw_event_HPGE
{
  DATA32 S;
  STRUCT_FCNS_DECL(raw_event_HPGE);
} ;
class raw_event_N
{
  DATA12 T;
  DATA32 S;
  DATA16 E;
  DATA16 P;
  STRUCT_FCNS_DECL(raw_event_N);
} ;
class raw_event : public raw_event_base
{
  raw_event_TS
       TS;
  DATA32 TPAT;
  DATA8 TRIG;
  DATA32 TRLORAW[16];
  DATA32 TRLOBDT[16];
  DATA32 TRLOADT[16];
  DATA32 TRLOARD[16];
  raw_event_ADC
       ADC[3];
  DATA12 TRIGT[12];
  raw_event_LABRL
       LABRL[4];
  raw_event_LABR
       LABR[4];
  raw_event_HPGEL
       HPGEL[4];
  raw_event_HPGE
       HPGE[4];
  DATA32 CRM[8];
  raw_event_N
       N[8];
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
