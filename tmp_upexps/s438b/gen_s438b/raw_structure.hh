/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

//DUMPY: 2 0
class raw_event_LOS
{
public:
//DUMPY: 5 4
  raw_array_multi_zero_suppress<DATA12,DATA12,5,10> TF;
//DUMPY: 5 4
  raw_array_multi_zero_suppress<DATA16,DATA16,5,10> TC;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_LOS);
#endif//!__PSDC__
} ;

//DUMPY: 2 0
//DUMPY: 4 0
class raw_event_ROLU
{
public:
  DATA16 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_ROLU);
#endif//!__PSDC__
} ;

//DUMPY: 15 0
//DUMPY: 2 0
class raw_event_TOFD
{
public:
  DATA12 TF;
  DATA16 TC;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TOFD);
#endif//!__PSDC__
} ;

//DUMPY: 8 0
//DUMPY: 2 0
//DUMPY: 50 1
class raw_event_NNP
{
public:
  DATA12 TAC;
  DATA12 CLK;
  DATA12 ADC;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NNP);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
//DUMPY: 2 0
  raw_event_LOS
  /* {
  public:
//DUMPY: 5 4
    raw_array_multi_zero_suppress<DATA12,DATA12,5,10> TF;
//DUMPY: 5 4
    raw_array_multi_zero_suppress<DATA16,DATA16,5,10> TC;
  } */ LOS[2];
//DUMPY: 2 0
//DUMPY: 4 0
  raw_event_ROLU
  /* {
  public:
    DATA16 T;
  } */ ROLU[2][4];
//DUMPY: 15 0
//DUMPY: 2 0
  raw_event_TOFD
  /* {
  public:
    DATA12 TF;
    DATA16 TC;
  } */ TOFD[15][2];
//DUMPY: 8 0
//DUMPY: 2 0
//DUMPY: 50 1
  raw_array_zero_suppress<raw_event_NNP,raw_event_NNP,50>
  /* {
  public:
    DATA12 TAC;
    DATA12 CLK;
    DATA12 ADC;
    DATA12 T;
  } */ NNP[8][2];
//DUMPY: 5 0
//DUMPY: 65 4
  raw_array_multi_zero_suppress<DATA32,DATA32,65,10> PSPX[5];

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
