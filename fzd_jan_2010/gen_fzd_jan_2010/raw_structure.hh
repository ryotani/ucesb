/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

//DUMPY: 2 0
class raw_event_U_QDC
{
public:
//DUMPY: 16 0
  DATA32 CH[16];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_U_QDC);
#endif//!__PSDC__
} ;

//DUMPY: 1 0
class raw_event_U_TDC
{
public:
//DUMPY: 32 0
//DUMPY: 5 2
  raw_list_ii_zero_suppress<DATA32,DATA32,5> CH[32];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_U_TDC);
#endif//!__PSDC__
} ;

//DUMPY: 4 0
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
//DUMPY: 2 0
  raw_event_U_QDC
  /* {
  public:
//DUMPY: 16 0
    DATA32 CH[16];
  } */ QDC[2];
//DUMPY: 1 0
  raw_event_U_TDC
  /* {
  public:
//DUMPY: 32 0
//DUMPY: 5 2
    raw_list_ii_zero_suppress<DATA32,DATA32,5> CH[32];
  } */ TDC[1];
//DUMPY: 4 0
  raw_event_U_Sca
  /* {
  public:
//DUMPY: 32 0
    DATA32 CH[32];
  } */ Sca[4];
  DATA32 MPflag;
//DUMPY: 8 0
  DATA32 tsCH[8];
//DUMPY: 2 0
  DATA32 RBWCH[2];

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
//DUMPY: 2 0
    raw_event_U_QDC
    {
    public:
//DUMPY: 16 0
      DATA32 CH[16];
    } QDC[2];
//DUMPY: 1 0
    raw_event_U_TDC
    {
    public:
//DUMPY: 32 0
//DUMPY: 5 2
      raw_list_ii_zero_suppress<DATA32,DATA32,5> CH[32];
    } TDC[1];
//DUMPY: 4 0
    raw_event_U_Sca
    {
    public:
//DUMPY: 32 0
      DATA32 CH[32];
    } Sca[4];
    DATA32 MPflag;
//DUMPY: 8 0
    DATA32 tsCH[8];
//DUMPY: 2 0
    DATA32 RBWCH[2];
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
