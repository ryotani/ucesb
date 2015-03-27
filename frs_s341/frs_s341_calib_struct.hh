#ifndef __FRS_S341_CALIB_STRUCT_HH__
#define __FRS_S341_CALIB_STRUCT_HH__

// Careful.  These structures are also parsed by psdc in order to
// prepare for enumeration for ntuple writing.  I.e. only a small
// subset of C struct features are allowed!

struct dummy
{
  float t0 UNIT("#ns");
  float t_off[240] UNIT("#ns");
  float t_slope UNIT("#ns/ch");
  
  CALIB_STRUCT_FCNS_DECL;
};


struct cal_tof
{
   float tofgain UNIT("#ns/ch");
   float tofoff UNIT("#ns");
   float pedestal UNIT("#ns");
   CALIB_STRUCT_FCNS_DECL;
   
};

struct cal_mul
{
float dummy;
//   float calfmwx UNIT("#mm/ch");
//   float mwtdcxl UNIT("#mm/ch");
//   float mwtdcxr UNIT("#mm/ch");
//   float calomwx UNIT("#mm");
//   float calfmwy UNIT("#mm/ch");
//   float mwtdcyd UNIT("#mm/ch");
//   float mwtdcyu UNIT("#mm/ch");
//   float calomwy UNIT("#mm");

//Gates for MWPC sum conditions
      
   float csumxmin UNIT("#ch");
   float csumxmax UNIT("#ch");
   float csumymin UNIT("#ch");
   float csumymax UNIT("#ch");
   CALIB_STRUCT_FCNS_DECL;
};

struct cal_tpc
{
   float calftpcx[2] UNIT("#mm/ch");
   float calotpcx[2] UNIT("#mm/ch");
   float calftpcy UNIT("#mm/ch");
     
   float csumxmin[4] UNIT("#mm");
   float csumxmax[4] UNIT("#mm");
  
   
   
   CALIB_STRUCT_FCNS_DECL;
};

struct cal_brho
{
   
   float bfield UNIT("##T");
   float rho0 UNIT("#mm");
   float length UNIT ("#mm");  
   CALIB_STRUCT_FCNS_DECL;
};

struct hit_calib
{
  
  
  cal_tof tof;
  cal_mul mw[2];
  cal_tpc tpc[3][2];
  cal_brho brho;
  
  dummy test[2];
  CALIB_STRUCT_FCNS_DECL;
 
  
};



#endif//__FRS_S341_CALIB_STRUCT_HH__

