/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

class raw_event_TIMESTAMP_LOS_WR
{
public:
//DUMPY: 4 0
  DATA16 T[4];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_LOS_WR);
#endif//!__PSDC__
} ;

class raw_event_TIMESTAMP_LOS
{
public:
  DATA12 ID;
  raw_event_TIMESTAMP_LOS_WR
  /* {
  public:
//DUMPY: 4 0
    DATA16 T[4];
  } */ WR;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP_LOS);
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

class raw_event_TIMESTAMP
{
public:
  raw_event_TIMESTAMP_LOS
  /* {
  public:
    DATA12 ID;
    raw_event_TIMESTAMP_LOS_WR
    {
    public:
//DUMPY: 4 0
      DATA16 T[4];
    } WR;
  } */ LOS;
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

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP);
#endif//!__PSDC__
} ;

//DUMPY: 2 0
class raw_event_LOS
{
public:
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA12,DATA12,8,32> VTF;
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA16,DATA16,8,32> VTC;
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA16,DATA16,8,32> MT;
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA12,DATA12,8,32> TTFL;
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA12,DATA12,8,32> TTFT;
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA12,DATA12,8,32> TTCL;
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA12,DATA12,8,32> TTCT;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_LOS);
#endif//!__PSDC__
} ;

class raw_event_SCITWO
{
public:
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA12,DATA12,8,32> VTF;
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA16,DATA16,8,32> VTC;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SCITWO);
#endif//!__PSDC__
} ;

class raw_event_SCIEIGHT
{
public:
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA12,DATA12,8,32> VTF;
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA16,DATA16,8,32> VTC;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SCIEIGHT);
#endif//!__PSDC__
} ;

class raw_event_FIBONEA
{
public:
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLC;
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLF;
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTC;
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTF;
//DUMPY: 1 4
  raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSLC;
//DUMPY: 1 4
  raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSLF;
//DUMPY: 1 4
  raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSTC;
//DUMPY: 1 4
  raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSTF;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_FIBONEA);
#endif//!__PSDC__
} ;

class raw_event_FIBONEB
{
public:
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLC;
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLF;
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTC;
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTF;
//DUMPY: 1 4
  raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSLC;
//DUMPY: 1 4
  raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSLF;
//DUMPY: 1 4
  raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSTC;
//DUMPY: 1 4
  raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSTF;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_FIBONEB);
#endif//!__PSDC__
} ;

class raw_event_SFIB
{
public:
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TTLC;
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> BTLC;
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TTLF;
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> BTLF;
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TTTC;
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> BTTC;
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TTTF;
//DUMPY: 256 4
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> BTTF;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SFIB);
#endif//!__PSDC__
} ;

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
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,8,10> E;
//DUMPY: 8 4
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,8,10> T;
//DUMPY: 2 4
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,10> TREF;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_MUSIC);
#endif//!__PSDC__
} ;

//DUMPY: 1 0
class raw_event_SOFSCI
{
public:
//DUMPY: 3 4
  raw_array_multi_zero_suppress<DATA12,DATA12,3,10> TF;
//DUMPY: 3 4
  raw_array_multi_zero_suppress<DATA16,DATA16,3,10> TC;

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
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,10> E;
//DUMPY: 16 4
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,10> T;
//DUMPY: 2 4
  raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,10> TREF;

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
    raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,10> E;
//DUMPY: 16 4
    raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,10> T;
//DUMPY: 2 4
    raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,10> TREF;
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

//DUMPY: 6 0
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

class raw_event_CALIFA
{
public:
//DUMPY: 2048 1
  raw_array_zero_suppress<DATA16,DATA16,2048> ENE;
//DUMPY: 2048 1
  raw_array_zero_suppress<DATA32,DATA32,2048> TSLSB;
//DUMPY: 2048 1
  raw_array_zero_suppress<DATA32,DATA32,2048> TSMSB;
//DUMPY: 2048 1
  raw_array_zero_suppress<DATA16,DATA16,2048> NF;
//DUMPY: 2048 1
  raw_array_zero_suppress<DATA16,DATA16,2048> NS;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_CALIFA);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
  raw_event_TIMESTAMP
  /* {
  public:
    raw_event_TIMESTAMP_LOS
    {
    public:
      DATA12 ID;
      raw_event_TIMESTAMP_LOS_WR
      {
      public:
//DUMPY: 4 0
        DATA16 T[4];
      } WR;
    } LOS;
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
  } */ TIMESTAMP;
//DUMPY: 2 0
  raw_event_LOS
  /* {
  public:
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA12,DATA12,8,32> VTF;
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA16,DATA16,8,32> VTC;
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA16,DATA16,8,32> MT;
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA12,DATA12,8,32> TTFL;
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA12,DATA12,8,32> TTFT;
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA12,DATA12,8,32> TTCL;
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA12,DATA12,8,32> TTCT;
  } */ LOS[2];
  raw_event_SCITWO
  /* {
  public:
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA12,DATA12,8,32> VTF;
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA16,DATA16,8,32> VTC;
  } */ SCITWO;
  raw_event_SCIEIGHT
  /* {
  public:
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA12,DATA12,8,32> VTF;
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA16,DATA16,8,32> VTC;
  } */ SCIEIGHT;
  raw_event_FIBONEA
  /* {
  public:
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLC;
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLF;
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTC;
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTF;
//DUMPY: 1 4
    raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSLC;
//DUMPY: 1 4
    raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSLF;
//DUMPY: 1 4
    raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSTC;
//DUMPY: 1 4
    raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSTF;
  } */ FIBONEA;
  raw_event_FIBONEB
  /* {
  public:
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLC;
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLF;
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTC;
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTF;
//DUMPY: 1 4
    raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSLC;
//DUMPY: 1 4
    raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSLF;
//DUMPY: 1 4
    raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSTC;
//DUMPY: 1 4
    raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSTF;
  } */ FIBONEB;
  raw_event_SFIB
  /* {
  public:
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TTLC;
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> BTLC;
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TTLF;
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> BTLF;
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TTTC;
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> BTTC;
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TTTF;
//DUMPY: 256 4
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> BTTF;
  } */ SFIB;
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
    raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,8,10> E;
//DUMPY: 8 4
    raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,8,10> T;
//DUMPY: 2 4
    raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,10> TREF;
  } */ MUSIC;
//DUMPY: 1 0
  raw_event_SOFSCI
  /* {
  public:
//DUMPY: 3 4
    raw_array_multi_zero_suppress<DATA12,DATA12,3,10> TF;
//DUMPY: 3 4
    raw_array_multi_zero_suppress<DATA16,DATA16,3,10> TC;
  } */ SOFSCI[1];
  raw_event_SOFTWIM
  /* {
  public:
//DUMPY: 1 0
    raw_event_SOFTWIM_S
    {
    public:
//DUMPY: 16 4
      raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,10> E;
//DUMPY: 16 4
      raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,10> T;
//DUMPY: 2 4
      raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,10> TREF;
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
//DUMPY: 6 0
//DUMPY: 1024 1
  raw_array_zero_suppress<raw_event_SST,raw_event_SST,1024>
  /* {
  public:
    DATA12 E;
  } */ SST[6];
  raw_event_CALIFA
  /* {
  public:
//DUMPY: 2048 1
    raw_array_zero_suppress<DATA16,DATA16,2048> ENE;
//DUMPY: 2048 1
    raw_array_zero_suppress<DATA32,DATA32,2048> TSLSB;
//DUMPY: 2048 1
    raw_array_zero_suppress<DATA32,DATA32,2048> TSMSB;
//DUMPY: 2048 1
    raw_array_zero_suppress<DATA16,DATA16,2048> NF;
//DUMPY: 2048 1
    raw_array_zero_suppress<DATA16,DATA16,2048> NS;
  } */ CALIFA;

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
