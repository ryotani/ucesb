/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

//DUMPY: 4 0
class raw_event_U_QDC
{
public:
//DUMPY: 16 1
  raw_array_zero_suppress<DATA32,DATA32,16> CH;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_U_QDC);
#endif//!__PSDC__
} ;

//DUMPY: 3 0
class raw_event_U_TDC
{
public:
//DUMPY: 32 0
  DATA32 CH[32];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_U_TDC);
#endif//!__PSDC__
} ;

//DUMPY: 7 0
class raw_event_U_Sca
{
public:
//DUMPY: 32 0
  DATA32 CH[32];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_U_Sca);
#endif//!__PSDC__
} ;

class raw_event_U
{
public:
//DUMPY: 4 0
  raw_event_U_QDC
  /* {
  public:
//DUMPY: 16 1
    raw_array_zero_suppress<DATA32,DATA32,16> CH;
  } */ QDC[4];
//DUMPY: 3 0
  raw_event_U_TDC
  /* {
  public:
//DUMPY: 32 0
    DATA32 CH[32];
  } */ TDC[3];
//DUMPY: 7 0
  raw_event_U_Sca
  /* {
  public:
//DUMPY: 32 0
    DATA32 CH[32];
  } */ Sca[7];
  DATA32 MPflag;
  DATA32 Cyflag;
  DATA32 ts;
  DATA32 ro;
//DUMPY: 9 0
  DATA32 timeCH[9];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_U);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
  raw_event_U
  /* {
  public:
//DUMPY: 4 0
    raw_event_U_QDC
    {
    public:
//DUMPY: 16 1
      raw_array_zero_suppress<DATA32,DATA32,16> CH;
    } QDC[4];
//DUMPY: 3 0
    raw_event_U_TDC
    {
    public:
//DUMPY: 32 0
      DATA32 CH[32];
    } TDC[3];
//DUMPY: 7 0
    raw_event_U_Sca
    {
    public:
//DUMPY: 32 0
      DATA32 CH[32];
    } Sca[7];
    DATA32 MPflag;
    DATA32 Cyflag;
    DATA32 ts;
    DATA32 ro;
//DUMPY: 9 0
    DATA32 timeCH[9];
  } */ U;

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
