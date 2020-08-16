/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

//DUMPY: 1 0
class raw_event_LOS
{
public:
//DUMPY: 4 4
  raw_array_multi_zero_suppress<DATA12,DATA12,4,32> TF;
//DUMPY: 4 4
  raw_array_multi_zero_suppress<DATA16,DATA16,4,32> TC;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_LOS);
#endif//!__PSDC__
} ;

//DUMPY: 2 0
class raw_event_TOFD_VFTX
{
public:
//DUMPY: 3 0
  DATA16 T[3];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TOFD_VFTX);
#endif//!__PSDC__
} ;

//DUMPY: 2 0
class raw_event_TOFD_P_T
{
public:
//DUMPY: 6 4
  raw_array_multi_zero_suppress<DATA12,DATA12,6,32> TFL;
//DUMPY: 6 4
  raw_array_multi_zero_suppress<DATA12,DATA12,6,32> TFT;
//DUMPY: 6 4
  raw_array_multi_zero_suppress<DATA16,DATA16,6,32> TCL;
//DUMPY: 6 4
  raw_array_multi_zero_suppress<DATA16,DATA16,6,32> TCT;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TOFD_P_T);
#endif//!__PSDC__
} ;

//DUMPY: 6 0
class raw_event_TOFD_P
{
public:
//DUMPY: 2 0
  raw_event_TOFD_P_T
  /* {
  public:
//DUMPY: 6 4
    raw_array_multi_zero_suppress<DATA12,DATA12,6,32> TFL;
//DUMPY: 6 4
    raw_array_multi_zero_suppress<DATA12,DATA12,6,32> TFT;
//DUMPY: 6 4
    raw_array_multi_zero_suppress<DATA16,DATA16,6,32> TCL;
//DUMPY: 6 4
    raw_array_multi_zero_suppress<DATA16,DATA16,6,32> TCT;
  } */ T[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TOFD_P);
#endif//!__PSDC__
} ;

class raw_event_TOFD
{
public:
//DUMPY: 2 0
  raw_event_TOFD_VFTX
  /* {
  public:
//DUMPY: 3 0
    DATA16 T[3];
  } */ VFTX[2];
//DUMPY: 6 0
  raw_event_TOFD_P
  /* {
  public:
//DUMPY: 2 0
    raw_event_TOFD_P_T
    {
    public:
//DUMPY: 6 4
      raw_array_multi_zero_suppress<DATA12,DATA12,6,32> TFL;
//DUMPY: 6 4
      raw_array_multi_zero_suppress<DATA12,DATA12,6,32> TFT;
//DUMPY: 6 4
      raw_array_multi_zero_suppress<DATA16,DATA16,6,32> TCL;
//DUMPY: 6 4
      raw_array_multi_zero_suppress<DATA16,DATA16,6,32> TCT;
    } T[2];
  } */ P[6];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TOFD);
#endif//!__PSDC__
} ;

class raw_event_TIMESTAMP_MASTER_WR
{
public:
//DUMPY: 4 0
  DATA16 T[4];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_MASTER_WR);
#endif//!__PSDC__
} ;

class raw_event_TIMESTAMP_MASTER
{
public:
  DATA12 ID;
  raw_event_TIMESTAMP_MASTER_WR
  /* {
  public:
//DUMPY: 4 0
    DATA16 T[4];
  } */ WR;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_MASTER);
#endif//!__PSDC__
} ;

class raw_event_TIMESTAMP
{
public:
  raw_event_TIMESTAMP_MASTER
  /* {
  public:
    DATA12 ID;
    raw_event_TIMESTAMP_MASTER_WR
    {
    public:
//DUMPY: 4 0
      DATA16 T[4];
    } WR;
  } */ MASTER;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP);
#endif//!__PSDC__
} ;

class raw_event_TRLO_SAMPLER
{
public:
//DUMPY: 512 1
  raw_array_zero_suppress<DATA32,DATA32,512> S;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TRLO_SAMPLER);
#endif//!__PSDC__
} ;

class raw_event_TRLO
{
public:
  raw_event_TRLO_SAMPLER
  /* {
  public:
//DUMPY: 512 1
    raw_array_zero_suppress<DATA32,DATA32,512> S;
  } */ SAMPLER;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TRLO);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
//DUMPY: 1 0
  raw_event_LOS
  /* {
  public:
//DUMPY: 4 4
    raw_array_multi_zero_suppress<DATA12,DATA12,4,32> TF;
//DUMPY: 4 4
    raw_array_multi_zero_suppress<DATA16,DATA16,4,32> TC;
  } */ LOS[1];
  raw_event_TOFD
  /* {
  public:
//DUMPY: 2 0
    raw_event_TOFD_VFTX
    {
    public:
//DUMPY: 3 0
      DATA16 T[3];
    } VFTX[2];
//DUMPY: 6 0
    raw_event_TOFD_P
    {
    public:
//DUMPY: 2 0
      raw_event_TOFD_P_T
      {
      public:
//DUMPY: 6 4
        raw_array_multi_zero_suppress<DATA12,DATA12,6,32> TFL;
//DUMPY: 6 4
        raw_array_multi_zero_suppress<DATA12,DATA12,6,32> TFT;
//DUMPY: 6 4
        raw_array_multi_zero_suppress<DATA16,DATA16,6,32> TCL;
//DUMPY: 6 4
        raw_array_multi_zero_suppress<DATA16,DATA16,6,32> TCT;
      } T[2];
    } P[6];
  } */ TOFD;
  raw_event_TIMESTAMP
  /* {
  public:
    raw_event_TIMESTAMP_MASTER
    {
    public:
      DATA12 ID;
      raw_event_TIMESTAMP_MASTER_WR
      {
      public:
//DUMPY: 4 0
        DATA16 T[4];
      } WR;
    } MASTER;
  } */ TIMESTAMP;
  raw_event_TRLO
  /* {
  public:
    raw_event_TRLO_SAMPLER
    {
    public:
//DUMPY: 512 1
      raw_array_zero_suppress<DATA32,DATA32,512> S;
    } SAMPLER;
  } */ TRLO;

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
