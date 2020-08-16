/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

//DUMPY: 3 0
//DUMPY: 35 1
class raw_event_GFI
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_GFI);
#endif//!__PSDC__
} ;

//DUMPY: 10 0
//DUMPY: 20 1
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

//DUMPY: 16 1
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
//DUMPY: 5 0
class raw_event_PSP
{
public:
  DATA12 E;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_PSP);
#endif//!__PSDC__
} ;

//DUMPY: 1 0
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

//DUMPY: 2 0
//DUMPY: 1 0
class raw_event_STR
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_STR);
#endif//!__PSDC__
} ;

//DUMPY: 32 1
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
//DUMPY: 20 1
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

//DUMPY: 162 1
//DUMPY: 2 0
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

//DUMPY: 1 0
class raw_event_XBSUM
{
public:
  DATA12 E;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_XBSUM);
#endif//!__PSDC__
} ;

//DUMPY: 2 0
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

class raw_event_MASTER
{
public:
  DATA32 ACCEPT;
  DATA32 WANTED;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_MASTER);
#endif//!__PSDC__
} ;

//DUMPY: 16 2
class raw_event_PILEUP
{
public:
  DATA16 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_PILEUP);
#endif//!__PSDC__
} ;

//DUMPY: 16 2
class raw_event_TCALMT
{
public:
  DATA16 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_TCALMT);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
//DUMPY: 3 0
//DUMPY: 35 1
  raw_array_zero_suppress<raw_event_GFI,raw_event_GFI,35>
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ GFI[3];
//DUMPY: 10 0
//DUMPY: 20 1
//DUMPY: 2 0
  raw_array_zero_suppress_1<raw_event_N,raw_event_N[2],20,2>
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ N[10];
//DUMPY: 16 1
//DUMPY: 2 0
  raw_array_zero_suppress_1<raw_event_NTF,raw_event_NTF[2],16,2>
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ NTF;
//DUMPY: 1 0
//DUMPY: 4 0
  raw_event_POS
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ POS[1][4];
//DUMPY: 2 0
//DUMPY: 5 0
  raw_event_PSP
  /* {
  public:
    DATA12 E;
  } */ PSP[2][5];
//DUMPY: 1 0
//DUMPY: 4 0
  raw_event_ROL
  /* {
  public:
    DATA12 E;
  } */ ROL[1][4];
//DUMPY: 2 0
//DUMPY: 2 0
  raw_event_SCI
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ SCI[2][2];
//DUMPY: 2 0
//DUMPY: 1 0
  raw_event_STR
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ STR[2][1];
//DUMPY: 32 1
//DUMPY: 2 0
  raw_array_zero_suppress_1<raw_event_TFW,raw_event_TFW[2],32,2>
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ TFW;
//DUMPY: 1 0
//DUMPY: 20 1
//DUMPY: 2 0
  raw_array_zero_suppress_1<raw_event_V,raw_event_V[2],20,2>
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ V[1];
//DUMPY: 162 1
//DUMPY: 2 0
  raw_array_zero_suppress_1<raw_event_XB,raw_event_XB[2],162,2>
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ XB;
//DUMPY: 1 0
  raw_event_XBSUM
  /* {
  public:
    DATA12 E;
  } */ XBSUM[1];
//DUMPY: 2 0
//DUMPY: 1024 1
  raw_array_zero_suppress<raw_event_SST,raw_event_SST,1024>
  /* {
  public:
    DATA12 E;
  } */ SST[2];
  raw_event_MASTER
  /* {
  public:
    DATA32 ACCEPT;
    DATA32 WANTED;
  } */ MASTER;
//DUMPY: 16 2
  raw_list_ii_zero_suppress<raw_event_PILEUP,raw_event_PILEUP,16>
  /* {
  public:
    DATA16 T;
  } */ PILEUP;
//DUMPY: 16 2
  raw_list_ii_zero_suppress<raw_event_TCALMT,raw_event_TCALMT,16>
  /* {
  public:
    DATA16 T;
  } */ TCALMT;
  uint16 IPED;
  float TCALT;
  float TCALE;

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
