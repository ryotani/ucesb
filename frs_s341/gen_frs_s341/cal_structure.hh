/** BEGIN_EVENT_CAL_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

//DUMPY: 2 0
class cal_event_MW
{
public:
  float AN;
  float XR;
  float XL;
  float YU;
  float YD;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(cal_event_MW);
#endif//!__PSDC__
} ;

class cal_event_TOF
{
public:
  float L;
  float R;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(cal_event_TOF);
#endif//!__PSDC__
} ;

//DUMPY: 3 0
class cal_event_TPC
{
public:
//DUMPY: 4 0
  float A[4];
//DUMPY: 2 0
  float AR[2];
//DUMPY: 2 0
  float AL[2];
//DUMPY: 4 0
  float DT[4];
//DUMPY: 2 0
  float LT[2];
//DUMPY: 2 0
  float RT[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(cal_event_TPC);
#endif//!__PSDC__
} ;

//DUMPY: 3 0
class cal_event_SC
{
public:
  float DT;
  float DEL;
  float DER;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(cal_event_SC);
#endif//!__PSDC__
} ;

class cal_event : public cal_event_base
{
public:
//DUMPY: 2 0
  cal_event_MW
  /* {
  public:
    float AN;
    float XR;
    float XL;
    float YU;
    float YD;
  } */ MW[2];
  cal_event_TOF
  /* {
  public:
    float L;
    float R;
  } */ TOF;
//DUMPY: 3 0
  cal_event_TPC
  /* {
  public:
//DUMPY: 4 0
    float A[4];
//DUMPY: 2 0
    float AR[2];
//DUMPY: 2 0
    float AL[2];
//DUMPY: 4 0
    float DT[4];
//DUMPY: 2 0
    float LT[2];
//DUMPY: 2 0
    float RT[2];
  } */ TPC[3];
//DUMPY: 3 0
  cal_event_SC
  /* {
  public:
    float DT;
    float DEL;
    float DER;
  } */ SC[3];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(cal_event);
#endif//!__PSDC__
} ;

/** END_EVENT_CAL_STRUCTURE *******************************************/
