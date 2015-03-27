/*
  To store user parameters for the time
  an interface to the full parameter set 
  is missing .... 
*/

// calibration factors and offsets for MWPCs
     
#define CMWTDC21A  0.312f // MW21 Anode (#ch  1 TDC V775a) 11/05/06
#define CMWTDC21XL 0.309f // MW21 XL    (#ch 21 TDC V775a)
#define CMWTDC21XR 0.310f // MW21 XR    (#ch 20 TDC V775a)
#define CMWTDC21YU 0.300f // MW21 YU    (#ch 22 TDC V775a)         
#define CMWTDC21YD 0.310f // MW21 YD    (#ch 23 TDC V775a)

#define CMWTDC22A  0.310f // MW22 Anode (#ch  2 TDC V775a) 11/05/06
#define CMWTDC22XL 0.317f // MW22 XL    (#ch 25 TDC V775a)
#define CMWTDC22XR 0.310f // MW22 XR    (#ch 24 TDC V775a)
#define CMWTDC22YU 0.307f // MW22 YU    (#ch 26 TDC V775a)         
#define CMWTDC22YD 0.307f // MW22 YD    (#ch 27 TDC V775a)

#define CMWTDC31A  0.312f // MW31 Anode (#ch  3 TDC V775a) 10/05/06
#define CMWTDC31XL 0.320f // MW31 XL    (#ch 29 TDC V775a)
#define CMWTDC31XR 0.314f // MW31 XR    (#ch 28 TDC V775a)
#define CMWTDC31YU 0.312f // MW31 YU    (#ch 30 TDC V775a)         
#define CMWTDC31YD 0.299f // MW31 YD    (#ch 31 TDC V775a)

// Skalierungsfaktor_x MW21,22,31   
#define CALFMW21X 0.25f
#define CALFMW22X 0.25f
#define CALFMW31X 0.25f

// Skalierungsfaktor_y MW21,22,31
#define CALFMW21Y 0.25f
#define CALFMW22Y 0.25f
#define CALFMW31Y 0.25f

// Offset values x
#define CALOMW21X -2.0f   // 27-MAY-2007 TESTED VALUE WITH SLITS
#define CALOMW22X -1.5f   // 27-MAY-2007 TESTED VALUE WITH SLITS
#define CALOMW31X -0.205f // MW31 10/05/06

// Offset values y
#define CALOMW21Y -14.0f  // MW21 27-MAY-2007 TESTED VALUE WITH SLITS
#define CALOMW22Y  -5.0f  // MW22 27-MAY-2007 TESTED VALUE WITH SLITS
#define CALOMW31Y  -1.0f  // MW31 18-MAY-2007

// calibration factors and offsets for TPCs
// so far only coefficients with first set of L,R,A


// Skalierungsfaktor_x TPC21,22,31   
#define CALFTPC211X 0.073171f
#define CALFTPC212X 0.071809f
#define CALFTPC221X 0.072681f
#define CALFTPC222X 0.071378f
#define CALFTPC311X 0.074064f
#define CALFTPC312X 0.072275f

// Offset values x
#define CALOTPC211X  3.41858f
#define CALOTPC212X  0.19429f
#define CALOTPC221X -1.574005f
#define CALOTPC222X  0.228932f
#define CALOTPC311X -3.64642f
#define CALOTPC312X -0.42600f

// Skalierungsfaktor_y TPC21,22,31
#define CALFTPC211Y -0.036999f
#define CALFTPC212Y -0.037660f
#define CALFTPC213Y -0.037994f
#define CALFTPC214Y -0.037469f
#define CALFTPC221Y -0.037298f
#define CALFTPC222Y -0.038253f
#define CALFTPC223Y -0.037015f
#define CALFTPC224Y -0.037582f
#define CALFTPC311Y -0.038521f
#define CALFTPC312Y -0.037647f
#define CALFTPC313Y -0.037512f
#define CALFTPC314Y -0.037343f

// Offset values y
#define CALOTPC211Y 39.46771f
#define CALOTPC212Y 39.41366f
#define CALOTPC213Y 39.65049f
#define CALOTPC214Y 39.11880f
#define CALOTPC221Y 49.76676f
#define CALOTPC222Y 50.105091f
#define CALOTPC223Y 49.571838f
#define CALOTPC224Y 49.553918f
#define CALOTPC311Y 58.76551f
#define CALOTPC312Y 56.99977f
#define CALOTPC313Y 57.27333f
#define CALOTPC314Y 57.50712f

// ToF TAC
#define TOFTACL 0.006422
#define TOFTACR 0.006729
#define TOFOFFL 0
#define TOFOFFR 0 

// B-Field
#define BFIELD 1.2967

// Charge calibration gain, offset, pedestal
// S2
#define Q2GAIN 0.123
#define Q2OFF  0.321
#define Q2PED  0
// S3
#define Q3GAIN 0.076
#define Q3OFF  6.794
#define Q3PED  0


// AoQ
#define length  19.43 
#define rho0    11.28
#define M       -0.676
#define d       1989.84

#define aoqgain 0.425532
#define aoqoff  0.32  

// Not used yet...
//
//// TPC Pedestals
//// TPC 1
//#define PEDTPC1DT1 82.97
//#define PEDTPC1DT2 63.97
//#define PEDTPC1DT3 84.26
//#define PEDTPC1DT4 80.48
//#define PEDTPC1LT1 144.46
//#define PEDTPC1RT1 91.72
//#define PEDTPC1LT2 111.27
//#define PEDTPC1RT2 148.61
//
//// TPC 2
//#define PEDTPC2DT1 121.95
//#define PEDTPC2DT2 118.00
//#define PEDTPC2DT3 125.52
//#define PEDTPC2DT4 103.25
//#define PEDTPC2LT1 165.48
//#define PEDTPC2RT1 122.48
//#define PEDTPC2LT2 136.46
//#define PEDTPC2RT2 116.98
//
//// TPC 3
//#define PEDTPC3DT1 132.62
//#define PEDTPC3DT2 135.88
//#define PEDTPC3DT3 145.73
//#define PEDTPC3DT4 101.32
//#define PEDTPC3LT1 131.29
//#define PEDTPC3RT1 140.36
//#define PEDTPC3LT2 117.30
//#define PEDTPC3RT2 143.21
//
//// Scintillator Pedestals
//// SC 1
//#define PEDSC1DEL 57.9352
//#define PEDSC1DER 58.0761
//#define PEDSC1DT  91.2362
//
//// SC 2
//#define PEDSC1DEL 142.833
//#define PEDSC1DER 86.2581
//#define PEDSC1DT  113.78
//
//// SC 3
//#define PEDSC1DEL 76.894
//#define PEDSC1DER 73.7679
//#define PEDSC1DT  103.865
//
//// TOF
//#define PEDTOF_L 59.7208
//#define PEDTOF_R 124.736
//#define PEDTOF   91.9259
//



