/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

class raw_event_TIMESTAMP_MASTER_WR
{
public:
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
    DATA16 T[4];
  } */ WR;
  DATA32 HI;
  DATA32 LO;

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
      DATA16 T[4];
    } WR;
    DATA32 HI;
    DATA32 LO;
  } */ MASTER;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TIMESTAMP);
#endif//!__PSDC__
} ;

class raw_event_LOS
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,8,10> VTF;
  raw_array_multi_zero_suppress<DATA16,DATA16,8,10> VTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,8,10> TTFL;
  raw_array_multi_zero_suppress<DATA12,DATA12,8,10> TTFT;
  raw_array_multi_zero_suppress<DATA12,DATA12,8,10> TTCL;
  raw_array_multi_zero_suppress<DATA12,DATA12,8,10> TTCT;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_LOS);
#endif//!__PSDC__
} ;

class raw_event_ROLU
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,4,10> VTF;
  raw_array_multi_zero_suppress<DATA16,DATA16,4,10> VTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,10> TTFL;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,10> TTFT;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,10> TTCL;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,10> TTCT;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_ROLU);
#endif//!__PSDC__
} ;

class raw_event_S
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,2,10> VTF;
  raw_array_multi_zero_suppress<DATA16,DATA16,2,10> VTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TTFL;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TTFT;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TTCL;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TTCT;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_S);
#endif//!__PSDC__
} ;

class raw_event_SST
{
public:
  DATA12 E;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_SST);
#endif//!__PSDC__
} ;

class raw_event_FIBTEN
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTF;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_FIBTEN);
#endif//!__PSDC__
} ;

class raw_event_FIBELEVEN
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTF;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_FIBELEVEN);
#endif//!__PSDC__
} ;

class raw_event_FIBTWELVE
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTF;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_FIBTWELVE);
#endif//!__PSDC__
} ;

class raw_event_FIBTHIRTEEN
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTF;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_FIBTHIRTEEN);
#endif//!__PSDC__
} ;

class raw_event_FIBTHREEA
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTF;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSTF;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_FIBTHREEA);
#endif//!__PSDC__
} ;

class raw_event_FIBTHREEB
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTF;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSLC;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSLF;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSTC;
  raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSTF;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_FIBTHREEB);
#endif//!__PSDC__
} ;

class raw_event_TOFD_P_T
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TFL;
  raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TFT;
  raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TCL;
  raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TCT;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TOFD_P_T);
#endif//!__PSDC__
} ;

class raw_event_TOFD_P
{
public:
  raw_event_TOFD_P_T
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TFL;
    raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TFT;
    raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TCL;
    raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TCT;
  } */ T[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TOFD_P);
#endif//!__PSDC__
} ;

class raw_event_TOFD
{
public:
  raw_event_TOFD_P
  /* {
  public:
    raw_event_TOFD_P_T
    {
    public:
      raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TFL;
      raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TFT;
      raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TCL;
      raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TCT;
    } T[2];
  } */ P[4];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TOFD);
#endif//!__PSDC__
} ;

class raw_event_CALIFA
{
public:
  raw_array_zero_suppress<DATA16,DATA16,6912> ENE;
  raw_array_zero_suppress<DATA32,DATA32,6912> TSLSB;
  raw_array_zero_suppress<DATA32,DATA32,6912> TSMSB;
  raw_array_zero_suppress<DATA16,DATA16,6912> NF;
  raw_array_zero_suppress<DATA16,DATA16,6912> NS;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_CALIFA);
#endif//!__PSDC__
} ;

class raw_event_NN_P_tcl_T
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tcl_T);
#endif//!__PSDC__
} ;

class raw_event_NN_P_tcl
{
public:
  raw_event_NN_P_tcl_T
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  } */ T[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tcl);
#endif//!__PSDC__
} ;

class raw_event_NN_P_tfl_T
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tfl_T);
#endif//!__PSDC__
} ;

class raw_event_NN_P_tfl
{
public:
  raw_event_NN_P_tfl_T
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  } */ T[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tfl);
#endif//!__PSDC__
} ;

class raw_event_NN_P_tct_T
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tct_T);
#endif//!__PSDC__
} ;

class raw_event_NN_P_tct
{
public:
  raw_event_NN_P_tct_T
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  } */ T[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tct);
#endif//!__PSDC__
} ;

class raw_event_NN_P_tft_T
{
public:
  raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tft_T);
#endif//!__PSDC__
} ;

class raw_event_NN_P_tft
{
public:
  raw_event_NN_P_tft_T
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  } */ T[2];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN_P_tft);
#endif//!__PSDC__
} ;

class raw_event_NN_P
{
public:
  raw_event_NN_P_tcl
  /* {
  public:
    raw_event_NN_P_tcl_T
    {
    public:
      raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
    } T[2];
  } */ tcl;
  raw_event_NN_P_tfl
  /* {
  public:
    raw_event_NN_P_tfl_T
    {
    public:
      raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
    } T[2];
  } */ tfl;
  raw_event_NN_P_tct
  /* {
  public:
    raw_event_NN_P_tct_T
    {
    public:
      raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
    } T[2];
  } */ tct;
  raw_event_NN_P_tft
  /* {
  public:
    raw_event_NN_P_tft_T
    {
    public:
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
  raw_event_NN_P
  /* {
  public:
    raw_event_NN_P_tcl
    {
    public:
      raw_event_NN_P_tcl_T
      {
      public:
        raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
      } T[2];
    } tcl;
    raw_event_NN_P_tfl
    {
    public:
      raw_event_NN_P_tfl_T
      {
      public:
        raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
      } T[2];
    } tfl;
    raw_event_NN_P_tct
    {
    public:
      raw_event_NN_P_tct_T
      {
      public:
        raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
      } T[2];
    } tct;
    raw_event_NN_P_tft
    {
    public:
      raw_event_NN_P_tft_T
      {
      public:
        raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
      } T[2];
    } tft;
  } */ P[16];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_NN);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
  raw_list_ii_zero_suppress<DATA16,DATA16,170> TPAT;
  raw_array_zero_suppress<DATA32,DATA32,512> SAMPLOSH;
  raw_array_zero_suppress<DATA32,DATA32,512> SAMPLOSL;
  raw_array_zero_suppress<DATA32,DATA32,512> SAMPMSH;
  raw_array_zero_suppress<DATA32,DATA32,512> SAMPMSL;
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
        DATA16 T[4];
      } WR;
      DATA32 HI;
      DATA32 LO;
    } MASTER;
  } */ TIMESTAMP;
  raw_event_LOS
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,8,10> VTF;
    raw_array_multi_zero_suppress<DATA16,DATA16,8,10> VTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,8,10> TTFL;
    raw_array_multi_zero_suppress<DATA12,DATA12,8,10> TTFT;
    raw_array_multi_zero_suppress<DATA12,DATA12,8,10> TTCL;
    raw_array_multi_zero_suppress<DATA12,DATA12,8,10> TTCT;
  } */ LOS[1];
  raw_event_ROLU
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,4,10> VTF;
    raw_array_multi_zero_suppress<DATA16,DATA16,4,10> VTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,10> TTFL;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,10> TTFT;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,10> TTCL;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,10> TTCT;
  } */ ROLU[1];
  raw_event_S
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,2,10> VTF;
    raw_array_multi_zero_suppress<DATA16,DATA16,2,10> VTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TTFL;
    raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TTFT;
    raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TTCL;
    raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TTCT;
  } */ S[8];
  raw_array_zero_suppress<raw_event_SST,raw_event_SST,1024>
  /* {
  public:
    DATA12 E;
  } */ SST[4];
  raw_event_FIBTEN
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLC;
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLF;
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTF;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLC;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLF;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTF;
  } */ FIBTEN;
  raw_event_FIBELEVEN
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLC;
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLF;
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTF;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLC;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLF;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTF;
  } */ FIBELEVEN;
  raw_event_FIBTWELVE
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLC;
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLF;
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTF;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLC;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLF;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTF;
  } */ FIBTWELVE;
  raw_event_FIBTHIRTEEN
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLC;
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMLF;
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,512,64> TMTF;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLC;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSLF;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,4,64> TSTF;
  } */ FIBTHIRTEEN;
  raw_event_FIBTHREEA
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLC;
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLF;
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTF;
    raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSLC;
    raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSLF;
    raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSTF;
  } */ FIBTHREEA;
  raw_event_FIBTHREEB
  /* {
  public:
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLC;
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLF;
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTF;
    raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSLC;
    raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSLF;
    raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSTC;
    raw_array_multi_zero_suppress<DATA12,DATA12,2,64> TSTF;
  } */ FIBTHREEB;
  raw_event_TOFD
  /* {
  public:
    raw_event_TOFD_P
    {
    public:
      raw_event_TOFD_P_T
      {
      public:
        raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TFL;
        raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TFT;
        raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TCL;
        raw_array_multi_zero_suppress<DATA12,DATA12,48,64> TCT;
      } T[2];
    } P[4];
  } */ TOFD;
  raw_event_CALIFA
  /* {
  public:
    raw_array_zero_suppress<DATA16,DATA16,6912> ENE;
    raw_array_zero_suppress<DATA32,DATA32,6912> TSLSB;
    raw_array_zero_suppress<DATA32,DATA32,6912> TSMSB;
    raw_array_zero_suppress<DATA16,DATA16,6912> NF;
    raw_array_zero_suppress<DATA16,DATA16,6912> NS;
  } */ CALIFA;
  raw_array_multi_zero_suppress<DATA32,DATA32,128,20> PSPX[6];
  raw_event_NN
  /* {
  public:
    raw_event_NN_P
    {
    public:
      raw_event_NN_P_tcl
      {
      public:
        raw_event_NN_P_tcl_T
        {
        public:
          raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
        } T[2];
      } tcl;
      raw_event_NN_P_tfl
      {
      public:
        raw_event_NN_P_tfl_T
        {
        public:
          raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
        } T[2];
      } tfl;
      raw_event_NN_P_tct
      {
      public:
        raw_event_NN_P_tct_T
        {
        public:
          raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
        } T[2];
      } tct;
      raw_event_NN_P_tft
      {
      public:
        raw_event_NN_P_tft_T
        {
        public:
          raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
        } T[2];
      } tft;
    } P[16];
  } */ NN;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event);
#endif//!__PSDC__
} ;

/** END_EVENT_RAW_STRUCTURE *******************************************/
