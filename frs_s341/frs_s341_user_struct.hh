
#ifndef __FRS_S341_USER_STRUCT_HH__
#define __FRS_S341_USER_STRUCT_HH__

// Careful.  These structures are also parsed by psdc in order to
// prepare for enumeration for ntuple writing.  I.e. only a small
// subset of C struct features are allowed!



struct hit_mul
{
   float x;
   float y;
   float sumx;
   float sumy;
   USER_STRUCT_FCNS_DECL;
};

struct hit_tpc
{
   float x1;
   float x2;
   float y;
   
   float sumx[4][2];
   
   USER_STRUCT_FCNS_DECL;
};

struct hit_sci
{
   float de;
   float dt;
   USER_STRUCT_FCNS_DECL;
};

struct hit_tof
{
   float s2s3;
   USER_STRUCT_FCNS_DECL;
};

struct hit_angle
{
   float pos[2][2];
   float at_s[2];
   
   USER_STRUCT_FCNS_DECL;
};

struct hit_track
{
   
   
   float xtr; 
   USER_STRUCT_FCNS_DECL;
};

struct hit_id
{
   float q[2];
   float rho;
   float brho;
   float beta;
   float gamma;
   float aoq;
   USER_STRUCT_FCNS_DECL;
};

struct hit_event
{
  
  hit_sci sc[3];
  hit_tof tof;
  hit_mul mw[2];
  hit_tpc tpc[3];
//  hit_track S[3]; properties for S1,S2,S3
  hit_angle ang;
  hit_track s[2];
  hit_id s3; 
  USER_STRUCT_FCNS_DECL;
 
  
};


#endif//__FRS_S341_USER_STRUCT_HH__

