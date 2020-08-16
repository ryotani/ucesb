class cal_event_MW
{
  float AN;
  float XR;
  float XL;
  float YU;
  float YD;
  STRUCT_FCNS_DECL(cal_event_MW);
} ;
class cal_event_TOF
{
  float L;
  float R;
  STRUCT_FCNS_DECL(cal_event_TOF);
} ;
class cal_event_TPC
{
  float A[4];
  float AR[2];
  float AL[2];
  float DT[4];
  float LT[2];
  float RT[2];
  STRUCT_FCNS_DECL(cal_event_TPC);
} ;
class cal_event_SC
{
  float DT;
  float DEL;
  float DER;
  STRUCT_FCNS_DECL(cal_event_SC);
} ;
class cal_event : public cal_event_base
{
  cal_event_MW
       MW[2];
  cal_event_TOF
       TOF;
  cal_event_TPC
       TPC[3];
  cal_event_SC
       SC[3];
  STRUCT_FCNS_DECL(cal_event);
} ;
