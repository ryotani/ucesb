/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

//DUMPY: 2 0
class raw_event_tac
{
public:
//DUMPY: 16 0
  DATA12 t[16];
//DUMPY: 16 0
  DATA12 q[16];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_tac);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
//DUMPY: 2 0
  raw_event_tac
  /* {
  public:
//DUMPY: 16 0
    DATA12 t[16];
//DUMPY: 16 0
    DATA12 q[16];
  } */ tac[2];

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
