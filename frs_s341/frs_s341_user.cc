#include "structures.hh"

#include <math.h>
#include "user.hh"
#include "user_params.hh"
#include "cal.hh"
#include "frs_s341_calib_struct.hh"
#define ISNUM(X) (!isnan(X) && !isinf(X))
#define ISCRAP(X) (isnan(X) or isinf(X))



void user_function(unpack_event *event,
		   raw_event    *raw_event,
		   cal_event    *cal_event,
		   hit_event    *hit)
{
 
 int i;
 int j;
 int k;
 
 //ToF S2->S3 
 
 hit->tof.s2s3 = (cal_event->TOF.L + cal_event->TOF.R)/2.0f;
 
 
 //MWPC part
 for(i=0; i<2; i++){
 //Calibration parameters should be in the calibration.hh as far as we have only linear calibration for MWPCs
     hit->mw[i].sumx = cal_event->MW[i].XL * mwtdcxl.ccal[i+1] + cal_event->MW[i].XR  *mwtdcxr.ccal[i+1];
     hit->mw[i].sumy = cal_event->MW[i].YD  *mwtdcyd.ccal[i+1] + cal_event->MW[i].YU*mwtdcyu.ccal[i+1];
     if(hit->mw[i].sumx > _calib.mw[i].csumxmin && hit->mw[i].sumx < _calib.mw[i].csumxmax){
        hit->mw[i].x = calfmwx.ccal[i+1] * (cal_event->MW[i].XL*mwtdcxl.ccal[i+1] - cal_event->MW[i].XR*mwtdcxr.ccal[i+1]) + calomwx.ccal[i+1];
        }
     if(hit->mw[i].sumy > _calib.mw[i].csumymin && hit->mw[i].sumy < _calib.mw[i].csumymax){
        hit->mw[i].y = calfmwy.ccal[i+1] * (cal_event->MW[i].YD*mwtdcyd.ccal[i+1] - cal_event->MW[i].YU*mwtdcyu.ccal[i+1]) + calomwy.ccal[i+1];
        }
    }
//TPC control sums
 for(i=0; i<3; i++){
     for(j=0; j<4; j++){
         for(k=0; k<2; k++){
	   hit->tpc[i].sumx[j][k]= (float) (raw_event->TPC[i].LT[k].value + raw_event->TPC[i].RT[k].value - 2 * raw_event->TPC[i].DT[j].value);
     }
    }
  
//Calibrated positions at TPCs with the conditions on control sums        
    if(hit->tpc[i].sumx[0][0] > _calib.tpc[i][0].csumxmin[0] && hit->tpc[i].sumx[0][0] < _calib.tpc[i][0].csumxmax[0] 
    && hit->tpc[i].sumx[1][0] > _calib.tpc[i][0].csumxmin[1] && hit->tpc[i].sumx[1][0] < _calib.tpc[i][0].csumxmax[1] && raw_event->TPC[i].LT[0].value > 1 && raw_event->TPC[i].RT[0].value > 1 ){
      hit->tpc[i].x1 = (float) (calftpc1x.ccal[i] * (float) (raw_event->TPC[i].LT[0].value - raw_event->TPC[i].RT[0].value) + calotpc1x.ccal[i]);
      }
      
   if(hit->tpc[i].sumx[2][1] > _calib.tpc[i][1].csumxmin[2] && hit->tpc[i].sumx[2][1] < _calib.tpc[i][1].csumxmax[2]  
      && hit->tpc[i].sumx[3][1] > _calib.tpc[i][1].csumxmin[3] && hit->tpc[i].sumx[3][1] < _calib.tpc[i][1].csumxmax[3]  && raw_event->TPC[i].LT[1].value > 1 && raw_event->TPC[i].RT[1].value > 1 ){
     hit->tpc[i].x2 = (float) (calftpc2x.ccal[i] * (float) (raw_event->TPC[i].LT[1].value  - raw_event->TPC[i].RT[1].value) + calotpc2x.ccal[i]);
       }
//Y-positions at TPCs, no control sum condition
       if(hit->tpc[i].sumx[2][1] > _calib.tpc[i][1].csumxmin[2] && hit->tpc[i].sumx[2][1] < _calib.tpc[i][1].csumxmax[2]  
          && hit->tpc[i].sumx[3][1] > _calib.tpc[i][1].csumxmin[3] && hit->tpc[i].sumx[3][1] < _calib.tpc[i][1].csumxmax[3]){   
          if(hit->tpc[i].sumx[0][0] > _calib.tpc[i][0].csumxmin[0] && hit->tpc[i].sumx[0][0] < _calib.tpc[i][0].csumxmax[0] 
             && hit->tpc[i].sumx[1][0] > _calib.tpc[i][0].csumxmin[1] && hit->tpc[i].sumx[1][0] < _calib.tpc[i][0].csumxmax[1]){
             if(raw_event->TPC[i].DT[0].value>0 && raw_event->TPC[i].DT[1].value>0 && raw_event->TPC[i].DT[2].value>0 && raw_event->TPC[i].DT[3].value>0){
 
	       hit->tpc[i].y = (float) (calftpcy.ccal[i] * (float) (raw_event->TPC[i].DT[0].value + raw_event->TPC[i].DT[1].value + raw_event->TPC[i].DT[2].value + raw_event->TPC[i].DT[3].value)/4 + calotpcy.ccal[i]);
	     }
          }
       }
    }
    
//Scintillator part    
 for(i=0; i<3; i++){ 
 
     hit->sc[i].de  =  (float) (sqrt(cal_event->SC[i].DEL*cal_event->SC[i].DER));
     hit->sc[i].dt = cal_event->SC[i].DT;
     }
 hit->s3.q[0] = (float) ((sqrt(hit->sc[0].de) + Q2OFF) * Q2GAIN);
 hit->s3.q[1] = (float) ((sqrt(hit->sc[1].de + hit->sc[2].de) + Q3OFF) * Q3GAIN);

//Calculation of angles at S3 and S2 (behind the target)
 hit->ang.pos[0][0]= (float) ((hit->tpc[0].x1 + hit->tpc[0].x2)/2.0);
 hit->ang.pos[0][1]= (float) ((hit->tpc[1].x1 + hit->tpc[1].x2)/2.0);
 hit->ang.pos[1][0]= (float) ((hit->tpc[2].x1 + hit->tpc[2].x2)/2.0);
 hit->ang.pos[1][1]= hit->mw[1].x;
//Debug statement 
// printf("%f  %f   %f   %f\n", hit->ang.pos[0][0], hit->ang.pos[0][1] , hit->ang.pos[1][0], hit->ang.pos[1][1]); 
 
 if(ISNUM(hit->ang.pos[0][1]) && ISNUM(hit->ang.pos[0][0])){
   hit->ang.at_s[0] = (float) ((hit->ang.pos[0][1] - hit->ang.pos[0][0])/0.800); //s[0] corresponds to S2
    }
 if(ISNUM(hit->ang.pos[1][1]) && ISNUM(hit->ang.pos[1][0])){
   hit->ang.at_s[1] = (float) ((hit->ang.pos[1][1] - hit->ang.pos[1][0] )/0.545); //s[1] corresponds to s3
    }

 
//Distances should be put as calibration parameters that are compiled in. 
 float dist[2];
 dist[0]=-0.150f; //Position of the target at S2
 dist[1]=-0.8f; //Position of the image
 
//Tracking (yet rough). Am I really tracking??
 for(i=0; i<2; i++){
     if(ISNUM(hit->ang.pos[i][0]) && ISNUM(hit->ang.at_s[i])){
        hit->s[i].xtr=hit->ang.pos[i][0] + hit->ang.at_s[i]*dist[i];
//In principle, we don't need the position at S3 tracked to the target image plane, so it simply can be put as equal to the position at TPC31
//However, if one needs it, one may have the tracked position at S3 just commenting out the line below :-)
        hit->s[1].xtr=hit->ang.pos[1][0];
	
       }
    }
   
 
//Brho calculation and AoQ


 if(ISNUM(hit->s[0].xtr) && ISNUM(hit->s[1].xtr)){
   hit->s3.rho=(float) (rho0*(1+(hit->s[1].xtr- M * hit->s[0].xtr)/d));
   //printf("our life - blood %f %f %f %f \n",hit->s[1].xtr, M, d, hit->s3.rho );
 }
 else if(ISCRAP(hit->s[0].xtr) && ISNUM(hit->s[1].xtr)){
   hit->s3.rho=(float) (rho0*(1+hit->s[1].xtr/d));
   //printf("our duty - war %f \n",hit->s3.rho);
 }
 hit->s3.brho = (float) (BFIELD * hit->s3.rho);
 hit->s3.beta = (float) (length/hit->tof.s2s3);
 hit->s3.gamma = (float) (sqrt(1.0/(1.0-hit->s3.beta*hit->s3.beta)));
 hit->s3.aoq = (float) ((hit->s3.brho / hit->s3.beta / hit->s3.gamma + aoqoff)  * aoqgain);
   
   
   
}
   
 
  


void user_init()
{

}

void user_exit()
{

}


