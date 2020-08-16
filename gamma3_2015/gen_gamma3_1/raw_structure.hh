/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

class raw_event_TS
{
public:
  DATA32 HI;
  DATA32 LO;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TS);
#endif//!__PSDC__
} ;

//DUMPY: 16 0
class raw_event_ADC_TS
{
public:
  DATA32 H;
  DATA32 L;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_ADC_TS);
#endif//!__PSDC__
} ;

//DUMPY: 14 0
class raw_event_ADC_CH
{
public:
//DUMPY: 2 0
  DATA32 MAXE[2];
//DUMPY: 3 0
  DATA32 T[3];
//DUMPY: 8 0
  DATA32 GATE[8];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_ADC_CH);
#endif//!__PSDC__
} ;

//DUMPY: 3 0
class raw_event_ADC
{
public:
  DATA8 N;
//DUMPY: 16 0
  raw_event_ADC_TS
  /* {
  public:
    DATA32 H;
    DATA32 L;
  } */ TS[16];
//DUMPY: 14 0
  raw_event_ADC_CH
  /* {
  public:
//DUMPY: 2 0
    DATA32 MAXE[2];
//DUMPY: 3 0
    DATA32 T[3];
//DUMPY: 8 0
    DATA32 GATE[8];
  } */ CH[14];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_ADC);
#endif//!__PSDC__
} ;

//DUMPY: 4 0
class raw_event_LABRL
{
public:
  DATA12 T;
  DATA32 S;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_LABRL);
#endif//!__PSDC__
} ;

//DUMPY: 4 0
class raw_event_LABR
{
public:
  DATA32 S;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_LABR);
#endif//!__PSDC__
} ;

//DUMPY: 4 0
class raw_event_HPGEL
{
public:
  DATA12 T;
  DATA32 S;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_HPGEL);
#endif//!__PSDC__
} ;

//DUMPY: 4 0
class raw_event_HPGE
{
public:
  DATA32 S;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_HPGE);
#endif//!__PSDC__
} ;

//DUMPY: 8 0
class raw_event_N
{
public:
  DATA12 T;
  DATA32 S;
  DATA16 E;
  DATA16 P;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_N);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
  raw_event_TS
  /* {
  public:
    DATA32 HI;
    DATA32 LO;
  } */ TS;
  DATA32 TPAT;
  DATA8 TRIG;
//DUMPY: 16 0
  DATA32 TRLORAW[16];
//DUMPY: 16 0
  DATA32 TRLOBDT[16];
//DUMPY: 16 0
  DATA32 TRLOADT[16];
//DUMPY: 16 0
  DATA32 TRLOARD[16];
//DUMPY: 3 0
  raw_event_ADC
  /* {
  public:
    DATA8 N;
//DUMPY: 16 0
    raw_event_ADC_TS
    {
    public:
      DATA32 H;
      DATA32 L;
    } TS[16];
//DUMPY: 14 0
    raw_event_ADC_CH
    {
    public:
//DUMPY: 2 0
      DATA32 MAXE[2];
//DUMPY: 3 0
      DATA32 T[3];
//DUMPY: 8 0
      DATA32 GATE[8];
    } CH[14];
  } */ ADC[3];
//DUMPY: 12 0
  DATA12 TRIGT[12];
//DUMPY: 4 0
  raw_event_LABRL
  /* {
  public:
    DATA12 T;
    DATA32 S;
  } */ LABRL[4];
//DUMPY: 4 0
  raw_event_LABR
  /* {
  public:
    DATA32 S;
  } */ LABR[4];
//DUMPY: 4 0
  raw_event_HPGEL
  /* {
  public:
    DATA12 T;
    DATA32 S;
  } */ HPGEL[4];
//DUMPY: 4 0
  raw_event_HPGE
  /* {
  public:
    DATA32 S;
  } */ HPGE[4];
//DUMPY: 8 0
  DATA32 CRM[8];
//DUMPY: 8 0
  raw_event_N
  /* {
  public:
    DATA12 T;
    DATA32 S;
    DATA16 E;
    DATA16 P;
  } */ N[8];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event);
#endif//!__PSDC__
} ;

/** END_EVENT_RAW_STRUCTURE *******************************************/
/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

class raw_sticky : public raw_sticky_base
{
public:

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_sticky);
#endif//!__PSDC__
} ;

/** END_EVENT_RAW_STRUCTURE *******************************************/
