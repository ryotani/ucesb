#ifndef __ReadNtfCalib_H__
#define __ReadNtfCalib_H__

#include <fstream>

class CalibFileNtf
{
 public :
  Float_t ** PedestalNTF;
  Float_t ** CalibSyncNTF;
  Float_t ** CalibEneNTF;
 public :
  CalibFileNtf();
 public :
  void    ReadPedestal();
  void    ReadCalibSync();
  void    ReadCalibEne();
  Float_t CalibEnerNtf(UShort_t, UShort_t, Int_t);
};

CalibFileNtf::CalibFileNtf()
{
  //Initialisation of the calibration parameter

  //Pedestal
  PedestalNTF = new Float_t*[16];
  for(int i=0; i<16;i++) 
    {
      PedestalNTF[i] = new Float_t[2];
    }

  for(int i=0;i<16;i++)
    {
      PedestalNTF[i][0] = 0;  //PM1
      PedestalNTF[i][1] = 0 ; //PM2
    }

  //Energy gain matching of the PM
  CalibSyncNTF = new Float_t*[16];
  for(int i=0; i<16; i++)
    {
      CalibSyncNTF[i] = new Float_t[2];
    }
  for(int i=0;i<16;i++)
    {
      CalibSyncNTF[i][0] = 1; //PM1
      CalibSyncNTF[i][1] = 1; //PM2
    }


  //Rough calibration energy
  CalibEneNTF = new Float_t*[16];
  for(int i=0; i<16; i++)
    {
      CalibEneNTF[i] = new Float_t[2];
    }
  for(int i=0;i<16;i++)
    {
      CalibEneNTF[i][0] = 0; //offset
      CalibEneNTF[i][1] = 1; //slope
    }
}

void CalibFileNtf::ReadPedestal()
{

  cout << "Entering in the ReadPedestal routine ..." << endl;

  //variables to read the parameter from the calibration file
  Int_t   Paddle;
  Int_t   Pm;
  Float_t Pedestal;
  Float_t Dum;

  //calibration file
  FILE * fped = fopen("calib/cal_clock_ntf.hh","r");

  //reading the calibration file
  while(fscanf(fped,"%d %d %f %f",&Paddle,&Pm,&Pedestal,&Dum)==4)
    PedestalNTF[Paddle-1][Pm-1] = Pedestal;

  //ifstream* fped = new ifstream("calib/cal_clock_ntf.hh");
  //cout << "File open " << endl;
  
  //  while(!fped->eof()) 
  //  {
  //    *fped >> Paddle >> Pm >> Pedestal >> Dum;  
  //    cout << "POINTER " << PedestalNTF << endl;
  //    //PedestalNTF[Paddle-1][Pm-1] = Pedestal; 
  //  }
}


void CalibFileNtf::ReadCalibSync()
{
  cout << "Entering in the ReadCalibSync routine ..." << endl;
  Int_t   Paddle;
  Int_t   Pm;
  Float_t Sync;

  //calibration file
  FILE * fsyn = fopen("calib/cal_sync_ntf.hh","r");
 
  //reading the calibration file
  while(fscanf(fsyn,"%d %d %f",&Paddle,&Pm,&Sync)==3)
    {
      CalibSyncNTF[Paddle-1][Pm-1] = Sync;
    }
  //while(!fsyn->eof()) 
  //  {
  //    fsyn >> Paddle >> Pm >> Sync;
  //    CalibSyncNTF[Paddle-1][Pm-1] = ; 
  //  }
  
}

void CalibFileNtf::ReadCalibEne()
{
  cout << "Entering in the ReadCalibEne routine ..." << endl;

  Int_t Paddle;
  Float_t Offset;
  Float_t Slope;

  //calibration file
  FILE * fene = fopen("calib/cal_energy_ntf.hh","r");
  while(fscanf(fene,"%d %f %f",&Paddle,&Offset,&Slope)==3)
    {
      CalibEneNTF[Paddle-1][0]=Offset;
      CalibEneNTF[Paddle-1][1]=Slope;
    }
}


Float_t CalibFileNtf::CalibEnerNtf(UShort_t EnerRawPm1, UShort_t EnerRawPm2, Int_t Paddle)
{

  //ReadPedestal();
  //ReadCalibSync();
  //ReadCalibEne();


  Float_t Energy=0;
  Float_t EnerPm1;
  Float_t EnerPm2;

  EnerPm1 = (EnerRawPm1 - PedestalNTF[Paddle-1][0]) * CalibSyncNTF[Paddle-1][0];
  EnerPm2 = (EnerRawPm2 - PedestalNTF[Paddle-1][1]) * CalibSyncNTF[Paddle-1][1];
  
  
  if((CalibEneNTF[Paddle-1][0] + CalibEneNTF[Paddle-1][1]*sqrt(EnerPm1*EnerPm2))>0)
    Energy = sqrt(CalibEneNTF[Paddle-1][0] + CalibEneNTF[Paddle-1][1]*sqrt(EnerPm1*EnerPm2));

  return Energy;
}



#endif // __ReadNtfCalib_H__
