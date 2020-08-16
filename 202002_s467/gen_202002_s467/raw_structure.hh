/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

class raw_event_NN_WR
{
public:
  DATA12 ID;
//DUMPY: 4 0
  DATA16 T[4];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_WR);
#endif//!__PSDC__
} ;

//DUMPY: 2 0
class raw_event_NN_P_tcl_T
{
public:
//DUMPY: 50 4
  raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tcl_T);
#endif//!__PSDC__
} ;

class raw_event_NN_P_tcl
{
public:
//DUMPY: 2 0
  raw_event_NN_P_tcl_T
  /* {
  public:
//DUMPY: 50 4
    raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  } */ T[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tcl);
#endif//!__PSDC__
} ;

//DUMPY: 2 0
class raw_event_NN_P_tfl_T
{
public:
//DUMPY: 50 4
  raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tfl_T);
#endif//!__PSDC__
} ;

class raw_event_NN_P_tfl
{
public:
//DUMPY: 2 0
  raw_event_NN_P_tfl_T
  /* {
  public:
//DUMPY: 50 4
    raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  } */ T[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tfl);
#endif//!__PSDC__
} ;

//DUMPY: 2 0
class raw_event_NN_P_tct_T
{
public:
//DUMPY: 50 4
  raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tct_T);
#endif//!__PSDC__
} ;

class raw_event_NN_P_tct
{
public:
//DUMPY: 2 0
  raw_event_NN_P_tct_T
  /* {
  public:
//DUMPY: 50 4
    raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  } */ T[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tct);
#endif//!__PSDC__
} ;

//DUMPY: 2 0
class raw_event_NN_P_tft_T
{
public:
//DUMPY: 50 4
  raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tft_T);
#endif//!__PSDC__
} ;

class raw_event_NN_P_tft
{
public:
//DUMPY: 2 0
  raw_event_NN_P_tft_T
  /* {
  public:
//DUMPY: 50 4
    raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  } */ T[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tft);
#endif//!__PSDC__
} ;

//DUMPY: 16 0
class raw_event_NN_P
{
public:
  raw_event_NN_P_tcl
  /* {
  public:
//DUMPY: 2 0
    raw_event_NN_P_tcl_T
    {
    public:
//DUMPY: 50 4
      raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
    } T[2];
  } */ tcl;
  raw_event_NN_P_tfl
  /* {
  public:
//DUMPY: 2 0
    raw_event_NN_P_tfl_T
    {
    public:
//DUMPY: 50 4
      raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
    } T[2];
  } */ tfl;
  raw_event_NN_P_tct
  /* {
  public:
//DUMPY: 2 0
    raw_event_NN_P_tct_T
    {
    public:
//DUMPY: 50 4
      raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
    } T[2];
  } */ tct;
  raw_event_NN_P_tft
  /* {
  public:
//DUMPY: 2 0
    raw_event_NN_P_tft_T
    {
    public:
//DUMPY: 50 4
      raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
    } T[2];
  } */ tft;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P);
#endif//!__PSDC__
} ;

class raw_event_NN
{
public:
  raw_event_NN_WR
  /* {
  public:
    DATA12 ID;
//DUMPY: 4 0
    DATA16 T[4];
  } */ WR;
//DUMPY: 16 0
  raw_event_NN_P
  /* {
  public:
    raw_event_NN_P_tcl
    {
    public:
//DUMPY: 2 0
      raw_event_NN_P_tcl_T
      {
      public:
//DUMPY: 50 4
        raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
      } T[2];
    } tcl;
    raw_event_NN_P_tfl
    {
    public:
//DUMPY: 2 0
      raw_event_NN_P_tfl_T
      {
      public:
//DUMPY: 50 4
        raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
      } T[2];
    } tfl;
    raw_event_NN_P_tct
    {
    public:
//DUMPY: 2 0
      raw_event_NN_P_tct_T
      {
      public:
//DUMPY: 50 4
        raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
      } T[2];
    } tct;
    raw_event_NN_P_tft
    {
    public:
//DUMPY: 2 0
      raw_event_NN_P_tft_T
      {
      public:
//DUMPY: 50 4
        raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
      } T[2];
    } tft;
  } */ P[16];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN);
#endif//!__PSDC__
} ;

class raw_event_MUSIC
{
public:
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,8,100> E;
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,8,100> T;
//DUMPY: 2 4
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,100> TREF;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_MUSIC);
#endif//!__PSDC__
} ;

//DUMPY: 4 0
class raw_event_SOFSCI
{
public:
//DUMPY: 3 4
  raw_array_multi_zero_suppress<DATA12,DATA12,3,100> TF;
//DUMPY: 3 4
  raw_array_multi_zero_suppress<DATA16,DATA16,3,100> TC;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SOFSCI);
#endif//!__PSDC__
} ;

//DUMPY: 1 0
class raw_event_SOFTWIM_S
{
public:
//DUMPY: 16 4
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,100> E;
//DUMPY: 16 4
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,100> T;
//DUMPY: 2 4
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,100> TREF;
//DUMPY: 2 4
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,100> TRIG;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SOFTWIM_S);
#endif//!__PSDC__
} ;

class raw_event_SOFTWIM
{
public:
//DUMPY: 1 0
  raw_event_SOFTWIM_S
  /* {
  public:
//DUMPY: 16 4
    raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,100> E;
//DUMPY: 16 4
    raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,100> T;
//DUMPY: 2 4
    raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,100> TREF;
//DUMPY: 2 4
    raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,100> TRIG;
  } */ S[1];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SOFTWIM);
#endif//!__PSDC__
} ;

//DUMPY: 28 0
class raw_event_SOFTOFW_P
{
public:
//DUMPY: 2 4
  raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TF;
//DUMPY: 2 4
  raw_array_multi_zero_suppress<DATA16,DATA16,2,10> TC;
//DUMPY: 2 0
  DATA14 E[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SOFTOFW_P);
#endif//!__PSDC__
} ;

class raw_event_SOFTOFW
{
public:
//DUMPY: 28 0
  raw_event_SOFTOFW_P
  /* {
  public:
//DUMPY: 2 4
    raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TF;
//DUMPY: 2 4
    raw_array_multi_zero_suppress<DATA16,DATA16,2,10> TC;
//DUMPY: 2 0
    DATA14 E[2];
  } */ P[28];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SOFTOFW);
#endif//!__PSDC__
} ;

//DUMPY: 3 0
class raw_event_SOFMWPC_Plane
{
public:
//DUMPY: 288 1
  raw_array_zero_suppress<DATA12,DATA12,288> Q;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SOFMWPC_Plane);
#endif//!__PSDC__
} ;

//DUMPY: 4 0
class raw_event_SOFMWPC
{
public:
//DUMPY: 3 0
  raw_event_SOFMWPC_Plane
  /* {
  public:
//DUMPY: 288 1
    raw_array_zero_suppress<DATA12,DATA12,288> Q;
  } */ Plane[3];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SOFMWPC);
#endif//!__PSDC__
} ;

class raw_event_SOFSCALERS
{
public:
//DUMPY: 7 0
  DATA32 UPSTREAM[7];
//DUMPY: 56 0
  DATA32 TOFW[56];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SOFSCALERS);
#endif//!__PSDC__
} ;

class raw_event_CALIFA
{
public:
//DUMPY: 4861 1
  raw_array_zero_suppress<DATA16,DATA16,4861> ENE;
//DUMPY: 4861 1
  raw_array_zero_suppress<DATA16,DATA16,4861> TOT;
//DUMPY: 4861 1
  raw_array_zero_suppress<DATA32,DATA32,4861> TSLSB;
//DUMPY: 4861 1
  raw_array_zero_suppress<DATA32,DATA32,4861> TSMSB;
//DUMPY: 4861 1
  raw_array_zero_suppress<DATA16,DATA16,4861> NF;
//DUMPY: 4861 1
  raw_array_zero_suppress<DATA16,DATA16,4861> NS;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_CALIFA);
#endif//!__PSDC__
} ;

class raw_event_TIMESTAMP_SCITWO_WR
{
public:
//DUMPY: 4 0
  DATA16 T[4];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_SCITWO_WR);
#endif//!__PSDC__
} ;

class raw_event_TIMESTAMP_SCITWO
{
public:
  DATA12 ID;
  raw_event_TIMESTAMP_SCITWO_WR
  /* {
  public:
//DUMPY: 4 0
    DATA16 T[4];
  } */ WR;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_SCITWO);
#endif//!__PSDC__
} ;

class raw_event_TIMESTAMP_SCIEIGHT_WR
{
public:
//DUMPY: 4 0
  DATA16 T[4];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_SCIEIGHT_WR);
#endif//!__PSDC__
} ;

class raw_event_TIMESTAMP_SCIEIGHT
{
public:
  DATA12 ID;
  raw_event_TIMESTAMP_SCIEIGHT_WR
  /* {
  public:
//DUMPY: 4 0
    DATA16 T[4];
  } */ WR;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_SCIEIGHT);
#endif//!__PSDC__
} ;

class raw_event_TIMESTAMP_CALIFA_WR
{
public:
//DUMPY: 4 0
  DATA16 T[4];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_CALIFA_WR);
#endif//!__PSDC__
} ;

//DUMPY: 2 0
class raw_event_TIMESTAMP_CALIFA
{
public:
  DATA12 ID;
  raw_event_TIMESTAMP_CALIFA_WR
  /* {
  public:
//DUMPY: 4 0
    DATA16 T[4];
  } */ WR;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_CALIFA);
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

class raw_event_TIMESTAMP_SOFIA_WR
{
public:
//DUMPY: 4 0
  DATA16 T[4];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_SOFIA_WR);
#endif//!__PSDC__
} ;

class raw_event_TIMESTAMP_SOFIA
{
public:
  DATA12 ID;
  raw_event_TIMESTAMP_SOFIA_WR
  /* {
  public:
//DUMPY: 4 0
    DATA16 T[4];
  } */ WR;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_SOFIA);
#endif//!__PSDC__
} ;

class raw_event_TIMESTAMP
{
public:
  raw_event_TIMESTAMP_SCITWO
  /* {
  public:
    DATA12 ID;
    raw_event_TIMESTAMP_SCITWO_WR
    {
    public:
//DUMPY: 4 0
      DATA16 T[4];
    } WR;
  } */ SCITWO;
  raw_event_TIMESTAMP_SCIEIGHT
  /* {
  public:
    DATA12 ID;
    raw_event_TIMESTAMP_SCIEIGHT_WR
    {
    public:
//DUMPY: 4 0
      DATA16 T[4];
    } WR;
  } */ SCIEIGHT;
//DUMPY: 2 0
  raw_event_TIMESTAMP_CALIFA
  /* {
  public:
    DATA12 ID;
    raw_event_TIMESTAMP_CALIFA_WR
    {
    public:
//DUMPY: 4 0
      DATA16 T[4];
    } WR;
  } */ CALIFA[2];
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
  raw_event_TIMESTAMP_SOFIA
  /* {
  public:
    DATA12 ID;
    raw_event_TIMESTAMP_SOFIA_WR
    {
    public:
//DUMPY: 4 0
      DATA16 T[4];
    } WR;
  } */ SOFIA;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
  raw_event_NN
  /* {
  public:
    raw_event_NN_WR
    {
    public:
      DATA12 ID;
//DUMPY: 4 0
      DATA16 T[4];
    } WR;
//DUMPY: 16 0
    raw_event_NN_P
    {
    public:
      raw_event_NN_P_tcl
      {
      public:
//DUMPY: 2 0
        raw_event_NN_P_tcl_T
        {
        public:
//DUMPY: 50 4
          raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
        } T[2];
      } tcl;
      raw_event_NN_P_tfl
      {
      public:
//DUMPY: 2 0
        raw_event_NN_P_tfl_T
        {
        public:
//DUMPY: 50 4
          raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
        } T[2];
      } tfl;
      raw_event_NN_P_tct
      {
      public:
//DUMPY: 2 0
        raw_event_NN_P_tct_T
        {
        public:
//DUMPY: 50 4
          raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
        } T[2];
      } tct;
      raw_event_NN_P_tft
      {
      public:
//DUMPY: 2 0
        raw_event_NN_P_tft_T
        {
        public:
//DUMPY: 50 4
          raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
        } T[2];
      } tft;
    } P[16];
  } */ NN;
//DUMPY: 512 1
  raw_array_zero_suppress<DATA32,DATA32,512> SAMP;
  raw_event_MUSIC
  /* {
  public:
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,8,100> E;
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,8,100> T;
//DUMPY: 2 4
    raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,100> TREF;
  } */ MUSIC;
//DUMPY: 4 0
  raw_event_SOFSCI
  /* {
  public:
//DUMPY: 3 4
    raw_array_multi_zero_suppress<DATA12,DATA12,3,100> TF;
//DUMPY: 3 4
    raw_array_multi_zero_suppress<DATA16,DATA16,3,100> TC;
  } */ SOFSCI[4];
  raw_event_SOFTWIM
  /* {
  public:
//DUMPY: 1 0
    raw_event_SOFTWIM_S
    {
    public:
//DUMPY: 16 4
      raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,100> E;
//DUMPY: 16 4
      raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,100> T;
//DUMPY: 2 4
      raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,100> TREF;
//DUMPY: 2 4
      raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,100> TRIG;
    } S[1];
  } */ SOFTWIM;
  raw_event_SOFTOFW
  /* {
  public:
//DUMPY: 28 0
    raw_event_SOFTOFW_P
    {
    public:
//DUMPY: 2 4
      raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TF;
//DUMPY: 2 4
      raw_array_multi_zero_suppress<DATA16,DATA16,2,10> TC;
//DUMPY: 2 0
      DATA14 E[2];
    } P[28];
  } */ SOFTOFW;
//DUMPY: 4 0
  raw_event_SOFMWPC
  /* {
  public:
//DUMPY: 3 0
    raw_event_SOFMWPC_Plane
    {
    public:
//DUMPY: 288 1
      raw_array_zero_suppress<DATA12,DATA12,288> Q;
    } Plane[3];
  } */ SOFMWPC[4];
  raw_event_SOFSCALERS
  /* {
  public:
//DUMPY: 7 0
    DATA32 UPSTREAM[7];
//DUMPY: 56 0
    DATA32 TOFW[56];
  } */ SOFSCALERS;
  raw_event_CALIFA
  /* {
  public:
//DUMPY: 4861 1
    raw_array_zero_suppress<DATA16,DATA16,4861> ENE;
//DUMPY: 4861 1
    raw_array_zero_suppress<DATA16,DATA16,4861> TOT;
//DUMPY: 4861 1
    raw_array_zero_suppress<DATA32,DATA32,4861> TSLSB;
//DUMPY: 4861 1
    raw_array_zero_suppress<DATA32,DATA32,4861> TSMSB;
//DUMPY: 4861 1
    raw_array_zero_suppress<DATA16,DATA16,4861> NF;
//DUMPY: 4861 1
    raw_array_zero_suppress<DATA16,DATA16,4861> NS;
  } */ CALIFA;
  raw_event_TIMESTAMP
  /* {
  public:
    raw_event_TIMESTAMP_SCITWO
    {
    public:
      DATA12 ID;
      raw_event_TIMESTAMP_SCITWO_WR
      {
      public:
//DUMPY: 4 0
        DATA16 T[4];
      } WR;
    } SCITWO;
    raw_event_TIMESTAMP_SCIEIGHT
    {
    public:
      DATA12 ID;
      raw_event_TIMESTAMP_SCIEIGHT_WR
      {
      public:
//DUMPY: 4 0
        DATA16 T[4];
      } WR;
    } SCIEIGHT;
//DUMPY: 2 0
    raw_event_TIMESTAMP_CALIFA
    {
    public:
      DATA12 ID;
      raw_event_TIMESTAMP_CALIFA_WR
      {
      public:
//DUMPY: 4 0
        DATA16 T[4];
      } WR;
    } CALIFA[2];
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
    raw_event_TIMESTAMP_SOFIA
    {
    public:
      DATA12 ID;
      raw_event_TIMESTAMP_SOFIA_WR
      {
      public:
//DUMPY: 4 0
        DATA16 T[4];
      } WR;
    } SOFIA;
  } */ TIMESTAMP;
//DUMPY: 170 2
  raw_list_ii_zero_suppress<DATA16,DATA16,170> TPAT;

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
