/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

//DUMPY: 6 0
class raw_event_TPC
{
public:
//DUMPY: 4 0
  DATA12 DT[4];
//DUMPY: 2 0
  DATA12 LT[2];
//DUMPY: 2 0
  DATA12 RT[2];
//DUMPY: 4 0
  DATA12 A[4];
//DUMPY: 2 0
  DATA12 AL[2];
//DUMPY: 2 0
  DATA12 AR[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TPC);
#endif//!__PSDC__
} ;

//DUMPY: 3 0
class raw_event_MUS
{
public:
//DUMPY: 8 0
  DATA12 A[8];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_MUS);
#endif//!__PSDC__
} ;

//DUMPY: 3 0
//DUMPY: 1024 1
class raw_event_SST
{
public:
  DATA12 E;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SST);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
//DUMPY: 6 0
  raw_event_TPC
  /* {
  public:
//DUMPY: 4 0
    DATA12 DT[4];
//DUMPY: 2 0
    DATA12 LT[2];
//DUMPY: 2 0
    DATA12 RT[2];
//DUMPY: 4 0
    DATA12 A[4];
//DUMPY: 2 0
    DATA12 AL[2];
//DUMPY: 2 0
    DATA12 AR[2];
  } */ TPC[6];
//DUMPY: 3 0
  raw_event_MUS
  /* {
  public:
//DUMPY: 8 0
    DATA12 A[8];
  } */ MUS[3];
//DUMPY: 3 0
//DUMPY: 1024 1
  raw_array_zero_suppress<raw_event_SST,raw_event_SST,1024>
  /* {
  public:
    DATA12 E;
  } */ SST[3];

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
