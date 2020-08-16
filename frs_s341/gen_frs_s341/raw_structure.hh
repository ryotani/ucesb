/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

//DUMPY: 2 0
class raw_event_MW
{
public:
  DATA12_OVERFLOW AN;
  DATA12_OVERFLOW XR;
  DATA12_OVERFLOW XL;
  DATA12_OVERFLOW YU;
  DATA12_OVERFLOW YD;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_MW);
#endif//!__PSDC__
} ;

class raw_event_TOF
{
public:
  DATA12_OVERFLOW L;
  DATA12_OVERFLOW R;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TOF);
#endif//!__PSDC__
} ;

//DUMPY: 3 0
class raw_event_TPC
{
public:
//DUMPY: 4 0
  DATA12_OVERFLOW A[4];
//DUMPY: 2 0
  DATA12_OVERFLOW AR[2];
//DUMPY: 2 0
  DATA12_OVERFLOW AL[2];
//DUMPY: 4 0
  DATA12_OVERFLOW DT[4];
//DUMPY: 2 0
  DATA12_OVERFLOW LT[2];
//DUMPY: 2 0
  DATA12_OVERFLOW RT[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TPC);
#endif//!__PSDC__
} ;

//DUMPY: 3 0
class raw_event_SC
{
public:
  DATA12_OVERFLOW DT;
  DATA12_OVERFLOW DEL;
  DATA12_OVERFLOW DER;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SC);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
//DUMPY: 2 0
  raw_event_MW
  /* {
  public:
    DATA12_OVERFLOW AN;
    DATA12_OVERFLOW XR;
    DATA12_OVERFLOW XL;
    DATA12_OVERFLOW YU;
    DATA12_OVERFLOW YD;
  } */ MW[2];
  DATA32 PATTERN;
  DATA32 MULTIP;
//DUMPY: 2 0
//DUMPY: 18 0
  DATA32 SCALER[2][18];
  raw_event_TOF
  /* {
  public:
    DATA12_OVERFLOW L;
    DATA12_OVERFLOW R;
  } */ TOF;
//DUMPY: 3 0
  raw_event_TPC
  /* {
  public:
//DUMPY: 4 0
    DATA12_OVERFLOW A[4];
//DUMPY: 2 0
    DATA12_OVERFLOW AR[2];
//DUMPY: 2 0
    DATA12_OVERFLOW AL[2];
//DUMPY: 4 0
    DATA12_OVERFLOW DT[4];
//DUMPY: 2 0
    DATA12_OVERFLOW LT[2];
//DUMPY: 2 0
    DATA12_OVERFLOW RT[2];
  } */ TPC[3];
//DUMPY: 3 0
  raw_event_SC
  /* {
  public:
    DATA12_OVERFLOW DT;
    DATA12_OVERFLOW DEL;
    DATA12_OVERFLOW DER;
  } */ SC[3];

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
