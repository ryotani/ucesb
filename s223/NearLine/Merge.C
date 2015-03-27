///////////////////////////////////////////////////////////////////
//*-- AUTHOR : Audrey Chatillon
//*-- Date: 05/2007
//*-- Last Update: 26/05/07
//
// --------------------------------------------------------------
//
// Merge.C
// This macro aims at merging the TTree coming from 
// the UCESB and the land02 unpackers
//
// --------------------------------------------------------------
// --------------------------------------------------------------
// How to run this program:
// 1 - Run the UCESB unpacker with the proper data set (unpackexps/s223 directory)
//      . cernlogin pro
//      ./s223 input_file.lmd --ntuple=UNPACK,camac_tpat,camac\\_tcal\\_info_info,vme_scaler2data,EVENTNO,TRIGGER,RAW,NTF,SST,XB,USER,CCB,run_XXX_XXXX_UCESB.ntu
//   - Run the land02 program (land02/s223 directory)
//      ./paw_ntuple input_file.lmd --paw-ntuple=HIT,TRACK,POS,PSP,GFI,TFW,SCI,ntupleland02.ntu
// 2-  Convert the PAW ntuplea in ROOT filea
//       h2root ntupleucesb.ntu
//       h2root ntupleland02.ntu
// 3 - Open a root session
//      root -l
// 4 - Run this macro inside root
//      .L Merge.C+
//      run()
//
// --------------------------------------------------------------
//////////////////////////////////////////////////////////////////

#include "LibPerso.C"
#include "ReadNtfCalib.h"

void merge(TTree * tu, TTree * tl)
{

  char nameRoot[60];
  cout << "Which name for the output root file would you like (run_XXX_XXXX.root or whatever ...)" << endl;
  cin >> nameRoot;
  TFile * fout = new TFile(nameRoot,"UPDATE");
  //Creation of the new TTree
  TTree * tout = new TTree("merge","merged trees");

  //Declaration of the general local variables
  Long64_t       nentriesu;
  Long64_t       nentriesl;
  Long64_t       nentries_min;
  CalibFileNtf * NtfParam = new CalibFileNtf();

  //Declaration of the variables for the input and outupt trees
  //---Event number
  Int_t    EventnoInUCESB;
  Int_t    EventnoInLAND02;
  Int_t    Evnt;
  //---Tpat
  UShort_t TpatternInUCESB;
  UShort_t TpatternInLAND02;
  UShort_t Tpat;
  //---Trigger
  UChar_t  Trigger;
  //Tcalt
  Int_t    camac_tcal_info_info;
  Float_t  Tcalt;       
  //---Silicon strips
  Int_t    Sst1;                 // to get what is written from the input tree and to write the output tree
  Int_t    Sst2;                 // to get what is written from the input tree and to write the output tree
  Int_t    Sst3;                 // to get what is written from the input tree and to write the output tree
  Int_t    Sst4;                 // to get what is written from the input tree and to write the output tree
  Int_t    Sst5;                 // to get what is written from the input tree and to write the output tree
  UShort_t Sst1i[1024];          // to get what is written from the input tree and to write the output tree
  UShort_t Sst1e[1024];          // to get what is written from the input tree 
  UShort_t Sst2i[1024];          // to get what is written from the input tree and to write the output tree
  UShort_t Sst2e[1024];          // to get what is written from the input tree 
  UShort_t Sst3i[1024];          // to get what is written from the input tree and to write the output tree
  UShort_t Sst3e[1024];          // to get what is written from the input tree 
  UShort_t Sst4i[1024];          // to get what is written from the input tree and to write the output tree
  UShort_t Sst4e[1024];          // to get what is written from the input tree 
  UShort_t Sst5i[1024];          // to get what is written from the input tree and to write the output tree
  UShort_t Sst5e[1024];          // to get what is written from the input tree 
  UShort_t Sst1_Energy[1024];    // variable to write the output tree
  UShort_t Sst2_Energy[1024];    // variable to write the output tree
  UShort_t Sst3_Energy[1024];    // variable to write the output tree
  UShort_t Sst4_Energy[1024];    // variable to write the output tree
  UShort_t Sst5_Energy[1024];    // variable to write the output tree
  //---New Tof Wall (small one)
  Int_t    Ntf;                  // to get what is written from the input tree and to write the ouput tree
  UChar_t  Ntfi[16];             // to get what is written from the input tree and to write the ouput tree
  UShort_t Ntf1t[16];            // to get what is written from the input tree
  UShort_t Ntf2t[16];            // to get what is written from the input tree
  UShort_t Ntf1e[16];            // to get what is written from the input tree
  UShort_t Ntf2e[16];            // to get what is written from the input tree 
  UShort_t Ntf_Energy_PM1[16];   // variable to write to the output tree
  UShort_t Ntf_Energy_PM2[16];   // variable to write to the output tree
  UShort_t Ntf_Time_PM1[16];     // variable to write to the output tree
  UShort_t Ntf_Time_PM2[16];     // variable to write to the output tree
  Float_t  Ntf_Z[8];             // variable to write to the output tree
  //---XB
  Int_t    Xb;                   // to get what is written from the input tree and to write the ouput tree
  UChar_t  Xbi[162];             // to get what is written from the input tree and to write the ouput tree
  UShort_t Xb1e[162];            // to get what is written from the input tree
  UShort_t Xb1t[162];            // to get what is written from the input tree
  UShort_t Xbe[162];             // variable to write to the output tree
  UShort_t Xbt[162];             // variable to write to the output tree
  //---DCH
  Int_t   ccb1hits;              // to get what is written from the input tree and to write the ouput tree
  UChar_t ccb1hits_wire[1024];   // to get what is written from the input tree and to write the ouput tree
  UChar_t ccb1hits_start[1024];  // to get what is written from the input tree and to write the ouput tree
  UChar_t ccb1hits_stop[1024];   // to get what is written from the input tree and to write the ouput tree
  Int_t   ccb2hits;              // to get what is written from the input tree and to write the ouput tree
  UChar_t ccb2hits_wire[1024];   // to get what is written from the input tree and to write the ouput tree
  UChar_t ccb2hits_start[1024];  // to get what is written from the input tree and to write the ouput tree
  UChar_t ccb2hits_stop[1024];   // to get what is written from the input tree and to write the ouput tree
  //---SCI : scintillators detectors in S2 and S8
  Float_t  Sc01t;                // to get what is written from the input tree and to write the output tree
  Float_t  Sc01e;                // to get what is written from the input tree and to write the output tree
  Float_t  Sc01x;                // to get what is written from the input tree and to write the output tree
  Float_t  Sc02t;                // to get what is written from the input tree and to write the output tree
  Float_t  Sc02e;                // to get what is written from the input tree and to write the output tree
  Float_t  Sc02x;                // to get what is written from the input tree and to write the output tree
  //---PSP : 2 detectors before the target and one after the target - silicon detecors
  Float_t Psp1x;                 // to get what is written from the input tree and to write the output tree
  Float_t Psp1y;                 // to get what is written from the input tree and to write the output tree
  Float_t Psp1e;                 // to get what is written from the input tree and to write the output tree
  Float_t Psp1t;                 // to get what is written from the input tree and to write the output tree
  Float_t Psp2x;                 // to get what is written from the input tree and to write the output tree
  Float_t Psp2y;                 // to get what is written from the input tree and to write the output tree
  Float_t Psp2e;                 // to get what is written from the input tree and to write the output tree
  Float_t Psp2t;                 // to get what is written from the input tree and to write the output tree
  //---POS : one detector between the first 2 PSP - plastic detector
  Float_t Post;                  // to get what is written from the input tree and to write the output tree
  Float_t Pose;                  // to get what is written from the input tree and to write the output tree
  Float_t Posx;                  // to get what is written from the input tree and to write the output tree
  Float_t Posy;                  // to get what is written from the input tree and to write the output tree
  //---INCOMING TRACKING
  Float_t T0;                    // to get what is written from the input tree and to write the output tree
  Float_t X0;                    // to get what is written from the input tree and to write the output tree
  Float_t Y0;                    // to get what is written from the input tree and to write the output tree
  Float_t inbeta;                // to get what is written from the input tree and to write the output tree
  Float_t inz;                   // to get what is written from the input tree and to write the output tree
  Float_t inbrho;                // to get what is written from the input tree and to write the output tree
  Float_t inaoverz;              // to get what is written from the input tree and to write the output tree
  //---GFI
  Float_t Gfi1e;                 // to get what is written from the input tree and to write the output tree
  Float_t Gfi1x;                 // to get what is written from the input tree and to write the output tree
  Float_t Gfi2e;                 // to get what is written from the input tree and to write the output tree
  Float_t Gfi2x;                 // to get what is written from the input tree and to write the output tree
  //---TFW
  Int_t   Tfmul;                 // to get what is written from the input tree and to write the output tree
  Float_t Tft[4];                // to get what is written from the input tree and to write the output tree
  Float_t Tfe[4];                // to get what is written from the input tree and to write the output tree
  Float_t Tfx[4];                // to get what is written from the input tree and to write the output tree
  Float_t Tfy[4];                // to get what is written from the input tree and to write the output tree
   
  //SetBranchAdress
  tu->SetBranchAddress("Eventno",&EventnoInUCESB);
  tl->SetBranchAddress("Evnt",&EventnoInLAND02);
  tu->SetBranchAddress("camac_tpat",&TpatternInUCESB);
  tl->SetBranchAddress("Tpat",&TpatternInLAND02);
  tu->SetBranchAddress("Trigger",&Trigger);
  tu->SetBranchAddress("camac_tcal_info_info",&camac_tcal_info_info);
  //---SST
  tu->SetBranchAddress("Sst1",&Sst1);
  tu->SetBranchAddress("Sst1i",Sst1i);
  tu->SetBranchAddress("Sst1e",Sst1e);
  tu->SetBranchAddress("Sst2",&Sst2);
  tu->SetBranchAddress("Sst2i",Sst2i);
  tu->SetBranchAddress("Sst2e",Sst2e);
  tu->SetBranchAddress("Sst3",&Sst3);
  tu->SetBranchAddress("Sst3i",Sst3i);
  tu->SetBranchAddress("Sst3e",Sst3e);
  tu->SetBranchAddress("Sst4",&Sst4);
  tu->SetBranchAddress("Sst4i",Sst4i);
  tu->SetBranchAddress("Sst4e",Sst5e);
  tu->SetBranchAddress("Sst5",&Sst5);
  tu->SetBranchAddress("Sst5i",Sst5i);
  tu->SetBranchAddress("Sst5e",Sst5e);
  //---NTF
  tu->SetBranchAddress("Ntf",&Ntf);
  tu->SetBranchAddress("Ntfi",Ntfi);
  tu->SetBranchAddress("Ntf1t",Ntf1t);
  tu->SetBranchAddress("Ntf2t",Ntf2t);
  tu->SetBranchAddress("Ntf1q",Ntf1e);
  tu->SetBranchAddress("Ntf2q",Ntf2e);
  //---XB
  tu->SetBranchAddress("Xb",&Xb);
  tu->SetBranchAddress("Xbi",Xbi);
  tu->SetBranchAddress("Xb1e",Xb1e);
  tu->SetBranchAddress("Xb1t",Xb1t);
  //---DCH
  tu->SetBranchAddress("ccb1hits",&ccb1hits);
  tu->SetBranchAddress("ccb1hits_wire",ccb1hits_wire);
  tu->SetBranchAddress("ccb1hits_start",ccb1hits_start);
  tu->SetBranchAddress("ccb1hits_stop",ccb1hits_stop);
  tu->SetBranchAddress("ccb2hits",&ccb2hits);
  tu->SetBranchAddress("ccb2hits_wire",ccb2hits_wire);
  tu->SetBranchAddress("ccb2hits_start",ccb2hits_start);
  tu->SetBranchAddress("ccb2hits_stop",ccb2hits_stop);
  //---SCI
  tl->SetBranchAddress("Sc01t",&Sc01t);
  tl->SetBranchAddress("Sc01e",&Sc01e);
  tl->SetBranchAddress("Sc01x",&Sc01x);
  tl->SetBranchAddress("Sc02t",&Sc02t);
  tl->SetBranchAddress("Sc02e",&Sc02e);
  tl->SetBranchAddress("Sc02x",&Sc02x);
  //---PSP
  tl->SetBranchAddress("Ps01x",&Psp1x);
  tl->SetBranchAddress("Ps01y",&Psp1y);
  tl->SetBranchAddress("Ps01e",&Psp1e);
  tl->SetBranchAddress("Ps01t",&Psp1t);
  tl->SetBranchAddress("Ps02x",&Psp2x);
  tl->SetBranchAddress("Ps02y",&Psp2y);
  tl->SetBranchAddress("Ps02e",&Psp2e);
  tl->SetBranchAddress("Ps02t",&Psp2t);
  //---POS  
  tl->SetBranchAddress("Po01t",&Post);
  tl->SetBranchAddress("Po01e",&Pose);
  tl->SetBranchAddress("Po01x",&Posx);
  tl->SetBranchAddress("Po01y",&Posy);
  //---INCOMING TRACKING
  tl->SetBranchAddress("T0",&T0);
  tl->SetBranchAddress("X0",&X0);
  tl->SetBranchAddress("Y0",&Y0);
  tl->SetBranchAddress("inbeta",&inbeta);
  tl->SetBranchAddress("inz",&inz);
  tl->SetBranchAddress("inbrho",&inbrho);
  tl->SetBranchAddress("inaoverz",&inaoverz);
  //---GFI
  tl->SetBranchAddress("Gf1_01e",&Gfi1e);
  tl->SetBranchAddress("Gf1_01x",&Gfi1x);
  tl->SetBranchAddress("Gf2_01e",&Gfi2e);
  tl->SetBranchAddress("Gf2_01x",&Gfi2x);
  //---TFW
  tl->SetBranchAddress("Tfmul",&Tfmul);
  tl->SetBranchAddress("Tft",Tft);
  tl->SetBranchAddress("Tfe",Tfe);
  tl->SetBranchAddress("Tfx",Tfx);
  tl->SetBranchAddress("Tfy",Tfy);

  
  //Branch adressing for the output Tree
  //--- Here are the different types used for the Branches
  //---   . 32 bits floating point   : Float_t  :  /F
  //---   . 32 bits signed integer   : Int_t    :  /I
  //---   . 16 bits unsigned integer : UShort_t :  /s
  //---   .  8 bits unsigned integer : UChar_t  :  /b
  tout->Branch("Evnt",&Evnt,"Evnt/I");                 // Int_t    : Event number 
  tout->Branch("Tpat",&Tpat,"Tpat/s");                 // UShort_t : Tpat
  tout->Branch("Trigger",&Trigger,"Trigger/b");        // UChar_t  : Trigger (1=physics, 2=cosmics, 3=clock, 4=tcal)
  tout->Branch("Tcalt",&Tcalt,"Tcalt/F");              // Short_t  : Tcalt in ns between 0 and 1000
  //---SST
  tout->Branch("Sst1",&Sst1,"Sst1/I");                 // Int_t    : multiplicity in det 1
  tout->Branch("Sst2",&Sst2,"Sst2/I");                 // Int_t    : multiplicity in det 2
  tout->Branch("Sst3",&Sst3,"Sst3/I");                 // Int_t    : multiplicity in det 3
  tout->Branch("Sst4",&Sst4,"Sst4/I");                 // Int_t    : multiplicity in det 4
  tout->Branch("Sst5",&Sst5,"Sst5/I");                 // Int_t    : multiplicity in det 5
  tout->Branch("Sst1i",&Sst1i,"Sst1[Sst1]/s");         // UShort_t : which strips fired from 0 to Sst1-1
  tout->Branch("Sst2i",&Sst2i,"Sst2[Sst2]/s");         // UShort_t : which strips fired from 0 to Sst2-1
  tout->Branch("Sst3i",&Sst3i,"Sst3[Sst3]/s");         // UShort_t : which strips fired from 0 to Sst3-1
  tout->Branch("Sst4i",&Sst4i,"Sst4[Sst4]/s");         // UShort_t : which strips fired from 0 to Sst4-1
  tout->Branch("Sst5i",&Sst5i,"Sst5[Sst5]/s");         // UShort_t : which strips fired from 0 to Sst5-1
  tout->Branch("Sst1e",&Sst1_Energy,"Sst1e[1024]/s");  // UShort_t : energy in det 1 - fix length i.e. Sst1_Energy[78] = Energy strip 79
  tout->Branch("Sst2e",&Sst2_Energy,"Sst2e[1024]/s");  // UShort_t : energy in det 2 - fix length i.e. Sst2_Energy[78] = Energy strip 79
  tout->Branch("Sst3e",&Sst3_Energy,"Sst3e[1024]/s");  // UShort_t : energy in det 3 - fix length i.e. Sst3_Energy[78] = Energy strip 79
  tout->Branch("Sst4e",&Sst4_Energy,"Sst4e[1024]/s");  // UShort_t : energy in det 4 - fix length i.e. Sst4_Energy[78] = Energy strip 79
  tout->Branch("Sst5e",&Sst5_Energy,"Sst5e[1024]/s");  // UShort_t : energy in det 5 - fix length i.e. Sst5_Energy[78] = Energy strip 79
  //---NTF
  tout->Branch("Ntf",&Ntf,"Ntf/I");                    // Int_t    : multiplicity in the NTF (small TofWall)
  tout->Branch("Ntfi",&Ntfi,"Ntfi[Ntf]/b");            // UChar_t  : which paddle have fired. index from 0 to Ntf-1
  tout->Branch("Ntf1e",&Ntf_Energy_PM1,"Ntf1e[16]/s"); // UShort_t : energy of the PM1 - fix length i.e. Ntf1e[5] = Energy of the Paddle 6 - PM1
  tout->Branch("Ntf2e",&Ntf_Energy_PM2,"Ntf2e[16]/s"); // UShort_t : energy of the PM2 - fix length i.e. Ntf2e[5] = Energy of the Paddle 6 - PM2
  tout->Branch("Ntf1t",&Ntf_Time_PM1,"Ntf1t[16]/s");   // UShort_t : time of the PM1 - fix length i.e. Ntf1t[5] = Energy of the Paddle 6 - PM1
  tout->Branch("Ntf2t",&Ntf_Time_PM2,"Ntf2t[16]/s");   // UShort_t : time of the PM2 - fix length i.e. Ntf2t[5] = Energy of the Paddle 6 - PM2
  tout->Branch("Ntf_Z",&Ntf_Z,"Ntf_Z[8]/F");           // Float_t  : Z identification in the NTF by a quick calibration
  //---XB
  tout->Branch("Xb",&Xb,"Xb/I");
  tout->Branch("Xbi",&Xbi,"Xbi[Xb]/b");
  tout->Branch("Xbe",&Xbe,"Xbe[162]/s");
  tout->Branch("Xbt",&Xbt,"Xbt[162]/s");
  //---DCH
  tout->Branch("ccb1hits",&ccb1hits,"ccb1hits/I");
  tout->Branch("ccb1hits_wire",&ccb1hits_wire,"ccb1hits_wire[1024]/b");
  tout->Branch("ccb1hits_start",&ccb1hits_start,"ccb1hits_start[1024]/b");
  tout->Branch("ccb1hits_stop",&ccb1hits_stop,"ccb1hits_stop[1024]/b");
  tout->Branch("ccb2hits",&ccb2hits,"ccb2hits/I");
  tout->Branch("ccb2hits_wire",&ccb2hits_wire,"ccb2hits_wire[1024]/b");
  tout->Branch("ccb2hits_start",&ccb2hits_start,"ccb2hits_start[1024]/b");
  tout->Branch("ccb2hits_stop",&ccb2hits_stop,"ccb2hits_stop[1024]/b");
  //---SCI
  tout->Branch("Sc01t",&Sc01t,"Sc01t/F");              // Float_t  : time at S2
  tout->Branch("Sc01e",&Sc01e,"Sc01e/F");              // Float_t  : energy loss in the S2 scintillator
  tout->Branch("Sc01x",&Sc01x,"Sc01x/F");              // Float_t  : x position at S2
  tout->Branch("Sc02t",&Sc02t,"Sc02t/F");              // Float_t  : time at S8
  tout->Branch("Sc02e",&Sc02e,"Sc02e/F");              // Float_t  : energy loss in the S8 scintillator 
  tout->Branch("Sc02x",&Sc02x,"Sc02x/F");              // Float_t  : x position at S8
  //---POS  
  tout->Branch("Po01t",&Post,"Po01t/F");               // Float_t  :  time at the POS detector (plastic: good for time of flight measurment)
  tout->Branch("Po01e",&Pose,"Po01e/F");               // Float_t  :  energy loss in the POS detector
  tout->Branch("Po01x",&Posx,"Po01x/F");               // Float_t  :  x position reconstructed in the POS detector
  tout->Branch("Po01y",&Posy,"Po01y/F");               // Float_t  :  y position reconstructed in the POS detector
  //---PSP
  tout->Branch("Ps01x",&Psp1x,"Ps01x/F");              // Float_t  :  x position at the first PSP - silicon detector, good for position determination  
  tout->Branch("Ps01y",&Psp1y,"Ps01y/F");              // Float_t  :  y position at the first PSP - silicon detector, good for position determination 
  tout->Branch("Ps01e",&Psp1e,"Ps01e/F");              // Float_t  :  energy loss in the first PSP - silicon detector, good for energy measurment 
  tout->Branch("Ps01t",&Psp1t,"Ps01y/F");              // Float_t  :  time at the first PSP
  tout->Branch("Ps02x",&Psp2x,"Ps02x/F");              // Float_t  :  x position at the second PSP 
  tout->Branch("Ps02y",&Psp2y,"Ps02y/F");              // Float_t  :  y position at the second PSP 
  tout->Branch("Ps02e",&Psp2e,"Ps02e/F");              // Float_t  :  energy loss in the second PSP
  tout->Branch("Ps02t",&Psp2t,"Ps02y/F");              // Float_t  :  time at the second PSP
  //---INCOMING TRACKING
  tout->Branch("T0",&T0,"T0/F");                       // Float_t  :  time on target
  tout->Branch("X0",&T0,"X0/F");                       // Float_t  :  x position on target
  tout->Branch("Y0",&T0,"Y0/F");                       // Float_t  :  y position on target
  tout->Branch("inbeta",&inbeta,"inbeta/F");           // Float_t  :  incoming beta 
  tout->Branch("inz",&inz,"inz/F");                    // Float_t  :  incoming Z
  tout->Branch("inbrho",&inbrho,"inbrho/F");           // Float_t  :  incoming brho
  tout->Branch("inaoverz",&inaoverz,"inaoverz/F");     // Float_t  :  incoming A over Z
  //---GFI
  tout->Branch("Gf1_01e",&Gfi1e,"Gf1_01e/F");          // Float_t  : energy loss in the GFI 1, not calibrated, in log
  tout->Branch("Gf1_01x",&Gfi1x,"Gf1_01x/F");          // Float_t  : position reconstructed in the GFI 1
  tout->Branch("Gf2_01e",&Gfi2e,"Gf2_01e/F");          // Float_t  : energy loss in the GFI 2, not calibrated, in log
  tout->Branch("Gf2_01x",&Gfi2x,"Gf2_01x/F");          // Float_t  : position reconstructed in the GFI 2
  //---TFW
  tout->Branch("Tfmul",&Tfmul,"Tfmul/I");              // Float_t  : number of hits in the TFW
  tout->Branch("Tft",&Tft,"Tft/F");                    // Float_t  : time at TFW
  tout->Branch("Tfe",&Tfe,"Tfe/F");                    // Float_t  : energy at TFW
  tout->Branch("Tfx",&Tfx,"Tfx/F");                    // Float_t  : x position at TFW
  tout->Branch("Tfy",&Tfy,"Tfy/F");                    // Float_t  : y position at TFW



  
  //Initialisation
  UInt_t lostInUCESB=0;
  UInt_t lostInLAND02=0;
  nentries_min=0;
  for (int i=0;i<1024;i++) 
    {
      Sst1_Energy[i]=0;
      Sst2_Energy[i]=0;
      Sst3_Energy[i]=0;
      Sst4_Energy[i]=0;
      Sst5_Energy[i]=0;
    }
  for (int i=0;i<16;i++)   
    {
      Ntf_Energy_PM1[i]=0;
      Ntf_Energy_PM2[i]=0;
      Ntf_Time_PM1[i]=0;
      Ntf_Time_PM2[i]=0;
    }
  for (int i=0;i<162;i++)   
    {
     Xbe[i]=0;
     Xbt[i]=0; 
    }
  for (int pdl=0;pdl<8;pdl++)          Ntf_Z[pdl]=0;
  
  cout << "Reading of the calibration parameter of the NTF " << endl;
  NtfParam->ReadPedestal();
  NtfParam->ReadCalibSync();
  NtfParam->ReadCalibEne();
  cout << "End of the reading of the calibration parameters " << endl;


  //Build the indexer according to Evnt branch
  //tl->BuildIndex("Evnt");
  //Build the indexer according to Eventno branch 
  // (should  be same as Evnt for previous tree)
  ///tu->BuildIndex("Eventno");

  nentriesu = tu->GetEntries();
  nentriesl = tl->GetEntries();
  
  cout << "Number of entries UCESB = "<<nentriesu<<endl;
  cout << "Number of entries LAND02 = "<<nentriesl<<endl;

  //loop over the max between nentriesu and nentriesl
  if(nentriesu<nentriesl)       nentries_min=nentriesu;
  else                          nentries_min=nentriesl;

  for (UInt_t i=0;i<nentries_min;i++)
    {
      if (i%5000==0) cout<<"Processing event "<< i <<"..."<<endl;
      if( ((i+lostInLAND02)>=nentries_min)||((i+lostInUCESB)>=nentries_min)) break;
      
      tu->GetEntry(i+lostInUCESB);
      tl->GetEntry(i+lostInLAND02);
      
      while(EventnoInUCESB<EventnoInLAND02)
	{
	  //TO DO
	  //FILL UCESB with 0 on LAND02
	  //set all LAND02 pointers contents to zero
	  //get and fill UCESB pointer contents
	  //tout->Fill();
	  cout << "ACHTUNG: Not the same event_number, Land02 ("<< EventnoInLAND02 <<") needs to wait for Ucesb ("<< EventnoInUCESB<<")" <<endl;
	  tu->GetEntry(i+lostInUCESB++);
	}
      
      while(EventnoInUCESB>EventnoInLAND02)
	{
	  //TO DO
	  //FILL LAND02 with 0's on UCESB 
	  //set all UCESB pointer contents to zero
	  //get and fill LAND02 pointer contests
	  //tout->Fill();
	  cout << "ACHTUNG: Not the same event_number, Ucesb("<< EventnoInUCESB <<") needs to wait for Land02 ("<< EventnoInLAND02<<")"<<endl;
	  tl->GetEntry(i+lostInLAND02++);
	}
      
      if(EventnoInUCESB==EventnoInLAND02)
	{
	  if(TpatternInUCESB!=TpatternInLAND02)
	    {
	      cout << "ACHTUNG : Tpat is not the same for the two trees :( MISMATCH ... CORRUPT\n" << endl;
	      break;
	    }
	  //Event number
	  Evnt = EventnoInUCESB;
	  //Tpat
	  Tpat = TpatternInUCESB;
	  //Tcalt
	  Tcalt = ((camac_tcal_info_info & 0xffff0000) >> 16)/64.;
	  //SST
	  for(int j=0;j<Sst1;j++) Sst1_Energy[Sst1i[j]-1]=Sst1e[j];
	  for(int j=0;j<Sst2;j++) Sst2_Energy[Sst2i[j]-1]=Sst2e[j];
	  for(int j=0;j<Sst3;j++) Sst3_Energy[Sst3i[j]-1]=Sst3e[j];
	  for(int j=0;j<Sst4;j++) Sst4_Energy[Sst4i[j]-1]=Sst4e[j];
	  for(int j=0;j<Sst5;j++) Sst5_Energy[Sst5i[j]-1]=Sst5e[j];
	  //NTF
	  if (Ntf>0)
	    for(int j=0;j<Ntf;j++)
	      {
		Ntf_Energy_PM1[Ntfi[j]-1]=Ntf1e[j];
		Ntf_Energy_PM2[Ntfi[j]-1]=Ntf2e[j];
		Ntf_Time_PM1[Ntfi[j]-1]=Ntf1t[j];
		Ntf_Time_PM2[Ntfi[j]-1]=Ntf2t[j];
		if (2<Ntfi[j]&&Ntfi[j]<7)
		  Ntf_Z[Ntfi[j]-1] = NtfParam->CalibEnerNtf(Ntf1e[j],Ntf2e[j],Ntfi[j]);
	      }
	  //XB
	  for(int j=0;j<Xb;j++)
	    {
	      Xbe[Xbi[j]-1]=Xb1e[j];
	      Xbt[Xbi[j]-1]=Xb1t[j];
	     } 	
	  //Fill the output Tree
	  tout->Fill();
	  
	  //initialisation of the SST for the next event
	  for(int j=0;j<Sst1;j++)  Sst1_Energy[Sst1i[j]-1]=0;
	  for(int j=0;j<Sst2;j++)  Sst2_Energy[Sst2i[j]-1]=0;
	  for(int j=0;j<Sst3;j++)  Sst3_Energy[Sst3i[j]-1]=0;
	  for(int j=0;j<Sst4;j++)  Sst4_Energy[Sst4i[j]-1]=0;
	  for(int j=0;j<Sst5;j++)  Sst5_Energy[Sst5i[j]-1]=0;
	  //initialisation of the NTF for the next event
	  for(int j=0;j<Ntf;j++)
	    {
	      Ntf_Energy_PM1[Ntfi[j]-1]=0;
	      Ntf_Energy_PM2[Ntfi[j]-1]=0;
	      Ntf_Time_PM1[Ntfi[j]-1]=0;
	      Ntf_Time_PM2[Ntfi[j]-1]=0;
	      if (2<Ntfi[j]&&Ntfi[j]<7) Ntf_Z[Ntfi[j]-1]=0;
	    }
	  //initialisation of the XB for the next event
	  for(int j=0;j<Xb;j++)
	    {
	      Xbe[Xb1e[j]-1]=0;
	      Xbt[Xb1t[j]-1]=0;
	    }
	}//end of if (event(UCESB)==event(LAND02))

    }//end of the loop over the Trees
  tout->Write(0,TObject::kOverwrite);
  fout->Close();
  cout << "Last event seen UCESB : " << EventnoInUCESB << "    LAND02 : " << EventnoInLAND02 << endl;

}

void run()
{
  char nameRoot[60];

  cout << "Name of the Root File from the UCESB: " << endl;
  cin >> nameRoot;
  TFile * fu = new TFile(nameRoot,"read");
  TTree * tu = (TTree*)fu->Get("h101")->Clone("h101");

  cout << "Name of the Root File from the LAND02: " << endl;
  cin >> nameRoot;
  TFile * fl = new TFile(nameRoot,"read");
  TTree * tl = (TTree*)fl->Get("h509")->Clone("h509");

  merge(tu,tl);
  
  cout << "MERGING ON THE TREES DONE " << endl;
  cout << "For more explanations on the format of the output Tree, do not hesitate to look "<<endl;
  cout << "at the part C of the HOW_TO_CORRELATION file you can find in this directory" << endl;
  cout << "Enjoy your analysis"<<endl;
}
