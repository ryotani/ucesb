/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_hit_mul
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(hit_mul)::FCNCALL_NAME(hit_mul)
{
  FCNCALL_INIT;
  // float x;
  {
  FCNCALL_SUBNAME("x");
  { FCNCALL_CALL_CTRL_WRAP(x,FCNCALL_CALL_TYPE(float,x)); }
  FCNCALL_SUBNAME_END;
  }
  // float y;
  {
  FCNCALL_SUBNAME("y");
  { FCNCALL_CALL_CTRL_WRAP(y,FCNCALL_CALL_TYPE(float,y)); }
  FCNCALL_SUBNAME_END;
  }
  // float sumx;
  {
  FCNCALL_SUBNAME("sumx");
  { FCNCALL_CALL_CTRL_WRAP(sumx,FCNCALL_CALL_TYPE(float,sumx)); }
  FCNCALL_SUBNAME_END;
  }
  // float sumy;
  {
  FCNCALL_SUBNAME("sumy");
  { FCNCALL_CALL_CTRL_WRAP(sumy,FCNCALL_CALL_TYPE(float,sumy)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_hit_mul

#ifndef USER_DEF_hit_tpc
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(hit_tpc)::FCNCALL_NAME(hit_tpc)
{
  FCNCALL_INIT;
  // float x1;
  {
  FCNCALL_SUBNAME("x1");
  { FCNCALL_CALL_CTRL_WRAP(x1,FCNCALL_CALL_TYPE(float,x1)); }
  FCNCALL_SUBNAME_END;
  }
  // float x2;
  {
  FCNCALL_SUBNAME("x2");
  { FCNCALL_CALL_CTRL_WRAP(x2,FCNCALL_CALL_TYPE(float,x2)); }
  FCNCALL_SUBNAME_END;
  }
  // float y;
  {
  FCNCALL_SUBNAME("y");
  { FCNCALL_CALL_CTRL_WRAP(y,FCNCALL_CALL_TYPE(float,y)); }
  FCNCALL_SUBNAME_END;
  }
  // float sumx[4][2];
  {
  FCNCALL_SUBNAME("sumx");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    FCNCALL_FOR(__i1,2)
    {
      FCNCALL_SUBINDEX(__i1);
      { FCNCALL_CALL_CTRL_WRAP_ARRAY(sumx__i0__i1,[__i0],__i1,FCNCALL_CALL_TYPE(float,sumx[__i0][__i1])); }
      FCNCALL_SUBINDEX_END(__i1);
    }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_hit_tpc

#ifndef USER_DEF_hit_sci
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(hit_sci)::FCNCALL_NAME(hit_sci)
{
  FCNCALL_INIT;
  // float de;
  {
  FCNCALL_SUBNAME("de");
  { FCNCALL_CALL_CTRL_WRAP(de,FCNCALL_CALL_TYPE(float,de)); }
  FCNCALL_SUBNAME_END;
  }
  // float dt;
  {
  FCNCALL_SUBNAME("dt");
  { FCNCALL_CALL_CTRL_WRAP(dt,FCNCALL_CALL_TYPE(float,dt)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_hit_sci

#ifndef USER_DEF_hit_tof
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(hit_tof)::FCNCALL_NAME(hit_tof)
{
  FCNCALL_INIT;
  // float s2s3;
  {
  FCNCALL_SUBNAME("s2s3");
  { FCNCALL_CALL_CTRL_WRAP(s2s3,FCNCALL_CALL_TYPE(float,s2s3)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_hit_tof

#ifndef USER_DEF_hit_angle
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(hit_angle)::FCNCALL_NAME(hit_angle)
{
  FCNCALL_INIT;
  // float pos[2][2];
  {
  FCNCALL_SUBNAME("pos");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    FCNCALL_FOR(__i1,2)
    {
      FCNCALL_SUBINDEX(__i1);
      { FCNCALL_CALL_CTRL_WRAP_ARRAY(pos__i0__i1,[__i0],__i1,FCNCALL_CALL_TYPE(float,pos[__i0][__i1])); }
      FCNCALL_SUBINDEX_END(__i1);
    }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // float at_s[2];
  {
  FCNCALL_SUBNAME("at_s");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(at_s__i0,,__i0,FCNCALL_CALL_TYPE(float,at_s[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_hit_angle

#ifndef USER_DEF_hit_track
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(hit_track)::FCNCALL_NAME(hit_track)
{
  FCNCALL_INIT;
  // float xtr;
  {
  FCNCALL_SUBNAME("xtr");
  { FCNCALL_CALL_CTRL_WRAP(xtr,FCNCALL_CALL_TYPE(float,xtr)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_hit_track

#ifndef USER_DEF_hit_id
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(hit_id)::FCNCALL_NAME(hit_id)
{
  FCNCALL_INIT;
  // float q[2];
  {
  FCNCALL_SUBNAME("q");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(q__i0,,__i0,FCNCALL_CALL_TYPE(float,q[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // float rho;
  {
  FCNCALL_SUBNAME("rho");
  { FCNCALL_CALL_CTRL_WRAP(rho,FCNCALL_CALL_TYPE(float,rho)); }
  FCNCALL_SUBNAME_END;
  }
  // float brho;
  {
  FCNCALL_SUBNAME("brho");
  { FCNCALL_CALL_CTRL_WRAP(brho,FCNCALL_CALL_TYPE(float,brho)); }
  FCNCALL_SUBNAME_END;
  }
  // float beta;
  {
  FCNCALL_SUBNAME("beta");
  { FCNCALL_CALL_CTRL_WRAP(beta,FCNCALL_CALL_TYPE(float,beta)); }
  FCNCALL_SUBNAME_END;
  }
  // float gamma;
  {
  FCNCALL_SUBNAME("gamma");
  { FCNCALL_CALL_CTRL_WRAP(gamma,FCNCALL_CALL_TYPE(float,gamma)); }
  FCNCALL_SUBNAME_END;
  }
  // float aoq;
  {
  FCNCALL_SUBNAME("aoq");
  { FCNCALL_CALL_CTRL_WRAP(aoq,FCNCALL_CALL_TYPE(float,aoq)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_hit_id

#ifndef USER_DEF_hit_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(hit_event)::FCNCALL_NAME(hit_event)
{
  FCNCALL_INIT;
  // hit_sci sc[3];
  {
  FCNCALL_SUBNAME("sc");
  FCNCALL_FOR(__i0,3)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(sc__i0,,__i0,sc[__i0].FCNCALL_CALL(sc[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // hit_tof tof;
  {
  FCNCALL_SUBNAME("tof");
  { FCNCALL_CALL_CTRL_WRAP(tof,tof.FCNCALL_CALL(tof)); }
  FCNCALL_SUBNAME_END;
  }
  // hit_mul mw[2];
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
  // hit_tpc tpc[3];
  {
  FCNCALL_SUBNAME("tpc");
  FCNCALL_FOR(__i0,3)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(tpc__i0,,__i0,tpc[__i0].FCNCALL_CALL(tpc[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // hit_angle ang;
  {
  FCNCALL_SUBNAME("ang");
  { FCNCALL_CALL_CTRL_WRAP(ang,ang.FCNCALL_CALL(ang)); }
  FCNCALL_SUBNAME_END;
  }
  // hit_track s[2];
  {
  FCNCALL_SUBNAME("s");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(s__i0,,__i0,s[__i0].FCNCALL_CALL(s[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // hit_id s3;
  {
  FCNCALL_SUBNAME("s3");
  { FCNCALL_CALL_CTRL_WRAP(s3,s3.FCNCALL_CALL(s3)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_hit_event

#include "gen/default_fcncall_undef.hh"


/** END_FUNCTION_CALL_PER_MEMBER **************************************/
