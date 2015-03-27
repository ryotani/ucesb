#include "user_params.hh"

struct cal
{
   float ccal[3];
   cal(float,float,float);
};

cal::cal(float a, float b, float c)
{ 
   ccal[0]=a;
   ccal[1]=b;
   ccal[2]=c;
}

cal mwtdca(CMWTDC21A, CMWTDC22A, CMWTDC31A);
cal mwtdcxl(CMWTDC21XL, CMWTDC22XL, CMWTDC31XL);
cal mwtdcxr(CMWTDC21XR, CMWTDC22XR, CMWTDC31XR);
cal mwtdcyu(CMWTDC21YU, CMWTDC22YU, CMWTDC31YU);
cal mwtdcyd(CMWTDC21YD, CMWTDC22YD, CMWTDC31YD);

cal calfmwx(CALFMW21X, CALFMW22X, CALFMW31X);
cal calfmwy(CALFMW21Y, CALFMW22Y, CALFMW31Y);
cal calomwx(CALOMW21X, CALOMW22X, CALOMW31X);
cal calomwy(CALOMW21X, CALOMW22X, CALOMW31X);

cal calftpc1x(CALFTPC211X, CALFTPC221X, CALFTPC311X);
cal calftpc2x(CALFTPC212X, CALFTPC222X, CALFTPC312X);
cal calotpc1x(CALOTPC211X, CALOTPC221X, CALOTPC311X);
cal calotpc2x(CALOTPC212X, CALOTPC222X, CALOTPC312X);
cal calftpcy(CALFTPC211Y, CALFTPC221Y, CALFTPC311Y);
cal calotpcy(CALOTPC211Y, CALOTPC221Y, CALOTPC311Y);

