/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

//DUMPY: 1 0
//DUMPY: 144 1
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

//DUMPY: 1 0
//DUMPY: 12 1
class raw_event_CV
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_CV);
#endif//!__PSDC__
} ;

//DUMPY: 1 0
//DUMPY: 16 1
class raw_event_FGR
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_FGR);
#endif//!__PSDC__
} ;

//DUMPY: 3 0
//DUMPY: 34 1
class raw_event_GFI
{
public:
  DATA12 E;

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

//DUMPY: 8 1
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

//DUMPY: 3 0
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

//DUMPY: 3 0
//DUMPY: 1 0
class raw_event_PIX
{
public:
  DATA12 E;
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_PIX);
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

//DUMPY: 4 0
//DUMPY: 5 0
class raw_event_ZST
{
public:
  DATA12 T;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_ZST);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
//DUMPY: 1 0
//DUMPY: 144 1
  raw_array_zero_suppress<raw_event_CS,raw_event_CS,144>
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ CS[1];
//DUMPY: 1 0
//DUMPY: 12 1
  raw_array_zero_suppress<raw_event_CV,raw_event_CV,12>
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ CV[1];
//DUMPY: 1 0
//DUMPY: 16 1
  raw_array_zero_suppress<raw_event_FGR,raw_event_FGR,16>
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ FGR[1];
//DUMPY: 3 0
//DUMPY: 34 1
  raw_array_zero_suppress<raw_event_GFI,raw_event_GFI,34>
  /* {
  public:
    DATA12 E;
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
//DUMPY: 8 1
//DUMPY: 2 0
  raw_array_zero_suppress_1<raw_event_NTF,raw_event_NTF[2],8,2>
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
//DUMPY: 3 0
//DUMPY: 5 0
  raw_event_PSP
  /* {
  public:
    DATA12 E;
  } */ PSP[3][5];
//DUMPY: 1 0
//DUMPY: 4 0
  raw_event_ROL
  /* {
  public:
    DATA12 E;
  } */ ROL[1][4];
//DUMPY: 3 0
//DUMPY: 1 0
  raw_event_PIX
  /* {
  public:
    DATA12 E;
    DATA12 T;
  } */ PIX[3][1];
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
//DUMPY: 4 0
//DUMPY: 5 0
  raw_event_ZST
  /* {
  public:
    DATA12 T;
  } */ ZST[4][5];

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
