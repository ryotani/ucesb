/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_dummy
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(dummy)::FCNCALL_NAME(dummy)
{
  FCNCALL_INIT;
  // float t0 UNIT("#ns");
  {
  FCNCALL_SUBNAME("t0");
  FCNCALL_UNIT("#ns");
  { FCNCALL_CALL_CTRL_WRAP(t0,FCNCALL_CALL_TYPE(float,t0)); }
  FCNCALL_SUBNAME_END;
  }
  // float t_off[240] UNIT("#ns");
  {
  FCNCALL_SUBNAME("t_off");
  FCNCALL_UNIT("#ns");
  FCNCALL_FOR(__i0,240)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(t_off__i0,,__i0,FCNCALL_CALL_TYPE(float,t_off[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // float t_slope UNIT("#ns/ch");
  {
  FCNCALL_SUBNAME("t_slope");
  FCNCALL_UNIT("#ns/ch");
  { FCNCALL_CALL_CTRL_WRAP(t_slope,FCNCALL_CALL_TYPE(float,t_slope)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_dummy

#ifndef USER_DEF_cal_tof
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(cal_tof)::FCNCALL_NAME(cal_tof)
{
  FCNCALL_INIT;
  // float tofgain UNIT("#ns/ch");
  {
  FCNCALL_SUBNAME("tofgain");
  FCNCALL_UNIT("#ns/ch");
  { FCNCALL_CALL_CTRL_WRAP(tofgain,FCNCALL_CALL_TYPE(float,tofgain)); }
  FCNCALL_SUBNAME_END;
  }
  // float tofoff UNIT("#ns");
  {
  FCNCALL_SUBNAME("tofoff");
  FCNCALL_UNIT("#ns");
  { FCNCALL_CALL_CTRL_WRAP(tofoff,FCNCALL_CALL_TYPE(float,tofoff)); }
  FCNCALL_SUBNAME_END;
  }
  // float pedestal UNIT("#ns");
  {
  FCNCALL_SUBNAME("pedestal");
  FCNCALL_UNIT("#ns");
  { FCNCALL_CALL_CTRL_WRAP(pedestal,FCNCALL_CALL_TYPE(float,pedestal)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_cal_tof

#ifndef USER_DEF_cal_mul
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(cal_mul)::FCNCALL_NAME(cal_mul)
{
  FCNCALL_INIT;
  // float dummy;
  {
  FCNCALL_SUBNAME("dummy");
  { FCNCALL_CALL_CTRL_WRAP(dummy,FCNCALL_CALL_TYPE(float,dummy)); }
  FCNCALL_SUBNAME_END;
  }
  // float csumxmin UNIT("#ch");
  {
  FCNCALL_SUBNAME("csumxmin");
  FCNCALL_UNIT("#ch");
  { FCNCALL_CALL_CTRL_WRAP(csumxmin,FCNCALL_CALL_TYPE(float,csumxmin)); }
  FCNCALL_SUBNAME_END;
  }
  // float csumxmax UNIT("#ch");
  {
  FCNCALL_SUBNAME("csumxmax");
  FCNCALL_UNIT("#ch");
  { FCNCALL_CALL_CTRL_WRAP(csumxmax,FCNCALL_CALL_TYPE(float,csumxmax)); }
  FCNCALL_SUBNAME_END;
  }
  // float csumymin UNIT("#ch");
  {
  FCNCALL_SUBNAME("csumymin");
  FCNCALL_UNIT("#ch");
  { FCNCALL_CALL_CTRL_WRAP(csumymin,FCNCALL_CALL_TYPE(float,csumymin)); }
  FCNCALL_SUBNAME_END;
  }
  // float csumymax UNIT("#ch");
  {
  FCNCALL_SUBNAME("csumymax");
  FCNCALL_UNIT("#ch");
  { FCNCALL_CALL_CTRL_WRAP(csumymax,FCNCALL_CALL_TYPE(float,csumymax)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_cal_mul

#ifndef USER_DEF_cal_tpc
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(cal_tpc)::FCNCALL_NAME(cal_tpc)
{
  FCNCALL_INIT;
  // float calftpcx[2] UNIT("#mm/ch");
  {
  FCNCALL_SUBNAME("calftpcx");
  FCNCALL_UNIT("#mm/ch");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(calftpcx__i0,,__i0,FCNCALL_CALL_TYPE(float,calftpcx[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // float calotpcx[2] UNIT("#mm/ch");
  {
  FCNCALL_SUBNAME("calotpcx");
  FCNCALL_UNIT("#mm/ch");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(calotpcx__i0,,__i0,FCNCALL_CALL_TYPE(float,calotpcx[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // float calftpcy UNIT("#mm/ch");
  {
  FCNCALL_SUBNAME("calftpcy");
  FCNCALL_UNIT("#mm/ch");
  { FCNCALL_CALL_CTRL_WRAP(calftpcy,FCNCALL_CALL_TYPE(float,calftpcy)); }
  FCNCALL_SUBNAME_END;
  }
  // float csumxmin[4] UNIT("#mm");
  {
  FCNCALL_SUBNAME("csumxmin");
  FCNCALL_UNIT("#mm");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(csumxmin__i0,,__i0,FCNCALL_CALL_TYPE(float,csumxmin[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // float csumxmax[4] UNIT("#mm");
  {
  FCNCALL_SUBNAME("csumxmax");
  FCNCALL_UNIT("#mm");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(csumxmax__i0,,__i0,FCNCALL_CALL_TYPE(float,csumxmax[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_cal_tpc

#ifndef USER_DEF_cal_brho
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(cal_brho)::FCNCALL_NAME(cal_brho)
{
  FCNCALL_INIT;
  // float bfield UNIT("##T");
  {
  FCNCALL_SUBNAME("bfield");
  FCNCALL_UNIT("##T");
  { FCNCALL_CALL_CTRL_WRAP(bfield,FCNCALL_CALL_TYPE(float,bfield)); }
  FCNCALL_SUBNAME_END;
  }
  // float rho0 UNIT("#mm");
  {
  FCNCALL_SUBNAME("rho0");
  FCNCALL_UNIT("#mm");
  { FCNCALL_CALL_CTRL_WRAP(rho0,FCNCALL_CALL_TYPE(float,rho0)); }
  FCNCALL_SUBNAME_END;
  }
  // float length UNIT("#mm");
  {
  FCNCALL_SUBNAME("length");
  FCNCALL_UNIT("#mm");
  { FCNCALL_CALL_CTRL_WRAP(length,FCNCALL_CALL_TYPE(float,length)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_cal_brho

#ifndef USER_DEF_hit_calib
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(hit_calib)::FCNCALL_NAME(hit_calib)
{
  FCNCALL_INIT;
  // cal_tof tof;
  {
  FCNCALL_SUBNAME("tof");
  { FCNCALL_CALL_CTRL_WRAP(tof,tof.FCNCALL_CALL(tof)); }
  FCNCALL_SUBNAME_END;
  }
  // cal_mul mw[2];
  {
  FCNCALL_SUBNAME("mw");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(mw__i0,,__i0,mw[__i0].FCNCALL_CALL(mw[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // cal_tpc tpc[3][2];
  {
  FCNCALL_SUBNAME("tpc");
  FCNCALL_FOR(__i0,3)
  {
    FCNCALL_SUBINDEX(__i0);
    FCNCALL_FOR(__i1,2)
    {
      FCNCALL_SUBINDEX(__i1);
      { FCNCALL_CALL_CTRL_WRAP_ARRAY(tpc__i0__i1,[__i0],__i1,tpc[__i0][__i1].FCNCALL_CALL(tpc[__i0][__i1])); }
      FCNCALL_SUBINDEX_END(__i1);
    }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // cal_brho brho;
  {
  FCNCALL_SUBNAME("brho");
  { FCNCALL_CALL_CTRL_WRAP(brho,brho.FCNCALL_CALL(brho)); }
  FCNCALL_SUBNAME_END;
  }
  // dummy test[2];
  {
  FCNCALL_SUBNAME("test");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(test__i0,,__i0,test[__i0].FCNCALL_CALL(test[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_hit_calib

#include "gen/default_fcncall_undef.hh"


/** END_FUNCTION_CALL_PER_MEMBER **************************************/
