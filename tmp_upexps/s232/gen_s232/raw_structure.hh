/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

//DUMPY: 155 0
//DUMPY: 1 1
class raw_event_CS
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_CS);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
//DUMPY: 155 0
//DUMPY: 1 1
  raw_array_zero_suppress<raw_event_CS,raw_event_CS,1>
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ CS[155];

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
