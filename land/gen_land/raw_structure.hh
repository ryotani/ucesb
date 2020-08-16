/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

//DUMPY: 10 0
//DUMPY: 20 0
//DUMPY: 2 0
class raw_event_N
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_N);
#endif//!__PSDC__
} ;

//DUMPY: 16 0
//DUMPY: 2 0
class raw_event_NTF
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NTF);
#endif//!__PSDC__
} ;

//DUMPY: 1 0
//DUMPY: 4 0
class raw_event_POS
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_POS);
#endif//!__PSDC__
} ;

//DUMPY: 2 0
//DUMPY: 4 0
class raw_event_ROL
{
public:
  DATA12 E;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_ROL);
#endif//!__PSDC__
} ;

//DUMPY: 4 0
//DUMPY: 2 0
class raw_event_RPC
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_RPC);
#endif//!__PSDC__
} ;

//DUMPY: 2 0
//DUMPY: 2 0
class raw_event_SCI
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SCI);
#endif//!__PSDC__
} ;

//DUMPY: 24 0
//DUMPY: 2 0
class raw_event_TFW
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TFW);
#endif//!__PSDC__
} ;

//DUMPY: 1 0
//DUMPY: 20 0
//DUMPY: 2 0
class raw_event_V
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_V);
#endif//!__PSDC__
} ;

//DUMPY: 1 0
//DUMPY: 162 0
class raw_event_XB
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_XB);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
//DUMPY: 10 0
//DUMPY: 20 0
//DUMPY: 2 0
  raw_event_N
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ N[10][20][2];
//DUMPY: 16 0
//DUMPY: 2 0
  raw_event_NTF
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ NTF[16][2];
//DUMPY: 1 0
//DUMPY: 4 0
  raw_event_POS
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ POS[1][4];
//DUMPY: 2 0
//DUMPY: 4 0
  raw_event_ROL
  /* {
  public:
    DATA12 E;
  } */ ROL[2][4];
//DUMPY: 4 0
//DUMPY: 2 0
  raw_event_RPC
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ RPC[4][2];
//DUMPY: 2 0
//DUMPY: 2 0
  raw_event_SCI
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ SCI[2][2];
//DUMPY: 24 0
//DUMPY: 2 0
  raw_event_TFW
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ TFW[24][2];
//DUMPY: 1 0
//DUMPY: 20 0
//DUMPY: 2 0
  raw_event_V
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ V[1][20][2];
//DUMPY: 1 0
//DUMPY: 162 0
  raw_event_XB
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ XB[1][162];

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
