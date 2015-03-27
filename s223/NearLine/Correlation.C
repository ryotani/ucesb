//This file is to do some correlations
// between all the detectors 

#include "LibPerso.C"
#include "ReadNtfCalib.h"


void CalibNtf(TChain * ch, CalibFileNtf NtfParam)
{
  //This routine is to look at the Calibrated Energy spectra of the NTF

  /* *** VARIABLES TO READ THE TREE *** */
  UShort_t Tpat;
  UChar_t  Trigger;
  Int_t    Ntf;                
  UChar_t  Ntfi[16];
  UShort_t Ntf_Energy_PM1[16];  
  UShort_t Ntf_Energy_PM2[16];  
  UShort_t Ntf_Time_PM1[16]; 
  UShort_t Ntf_Time_PM2[16];  

  /* *** SETBRANCHADDRESS  *** */
  ch->SetBranchAddress("Tpat",&Tpat);
  ch->SetBranchAddress("Trigger",&Trigger);
  ch->SetBranchAddress("Ntf",&Ntf);
  ch->SetBranchAddress("Ntfi", Ntfi);
  ch->SetBranchAddress("Ntf1e",Ntf_Energy_PM1);
  ch->SetBranchAddress("Ntf2e",Ntf_Energy_PM2);
  ch->SetBranchAddress("Ntf1t",Ntf_Time_PM1);
  ch->SetBranchAddress("Ntf2t",Ntf_Time_PM2);

  /* *** VARIABLES *** */
  Long64_t nentries;
  Int_t    NtfPdl;
  Float_t  NtfPdlEnergy;
  char     Name[60];


  /* *** LOOP  *** */
  nentries=ch->GetEntries();
  cout << "Number of entries for the TChain : "<< nentries << endl;

  /* *** HISTOGRAMM *** */
  TH1F * HistoEnergyNtfTot = new TH1F("TotalEnergyNTF","TotalEnergyNTF",4000,0,40);
  TH1F * HistoEnergyNtfPdl[8];
  for(int pdl=1;pdl<=8;pdl++)
    {
      sprintf(Name,"Energy_NTF_Paddle%d",pdl);
      HistoEnergyNtfPdl[pdl-1] = new TH1F(Name,Name,4000,0,40);
    }
  


  for(Int_t Entry=0;Entry<nentries;Entry++)
    {
      ch->GetEntry(Entry);
      
      for(int i=0;i<Ntf;i++)
	{
	  NtfPdl = Ntfi[i];
	  NtfPdlEnergy =  NtfParam.CalibEnerNtf(Ntf_Energy_PM1[NtfPdl-1],Ntf_Energy_PM2[NtfPdl-1],NtfPdl);
	  if(NtfPdl<=8)
	    {
	      HistoEnergyNtfTot->Fill(NtfPdlEnergy);
	      HistoEnergyNtfPdl[NtfPdl-1]->Fill(NtfPdlEnergy);
	    }
	}
    }

  TCanvas * cEnergyNtfTot = new TCanvas("TotalEnergyNTF","TotalEnergyNTF",0,0,500,500);
  cEnergyNtfTot->cd();
  HistoEnergyNtfTot->Draw("");

  TCanvas * cEnergyNtfPdl = new TCanvas("PaddleEnergyNTF","PaddleEnergyNTF",0,0,900,700);
  cEnergyNtfPdl->Divide(3,3);
  for(int pdl=1;pdl<=8;pdl++)
    {
      cEnergyNtfPdl->cd(pdl);
      HistoEnergyNtfPdl[pdl-1]->Draw();
    }
}

void CalibNtfIfIncoming(TChain * ch, CalibFileNtf NtfParam)
{
  //This routine is to look at the Calibrated Energy spectra of the NTF

  /* *** VARIABLES TO READ THE TREE *** */
  UShort_t Tpat;
  UChar_t  Trigger;
  Int_t    Ntf;                
  UChar_t  Ntfi[16];
  UShort_t Ntf_Energy_PM1[16];  
  UShort_t Ntf_Energy_PM2[16];  
  UShort_t Ntf_Time_PM1[16]; 
  UShort_t Ntf_Time_PM2[16];  
  Float_t  inz;
  Float_t  inaoverz;


  /* *** SETBRANCHADDRESS  *** */
  ch->SetBranchAddress("Tpat",&Tpat);
  ch->SetBranchAddress("Trigger",&Trigger);
  ch->SetBranchAddress("Ntf",&Ntf);
  ch->SetBranchAddress("Ntfi", Ntfi);
  ch->SetBranchAddress("Ntf1e",Ntf_Energy_PM1);
  ch->SetBranchAddress("Ntf2e",Ntf_Energy_PM2);
  ch->SetBranchAddress("Ntf1t",Ntf_Time_PM1);
  ch->SetBranchAddress("Ntf2t",Ntf_Time_PM2);
  ch->SetBranchAddress("inz",&inz);
  ch->SetBranchAddress("inaoverz",&inaoverz);


  /* *** VARIABLES *** */
  Long64_t nentries;
  Int_t    NtfPdl;
  Float_t  NtfPdlEnergy;
  char     Name[60];


  /* *** LOOP  *** */
  nentries=ch->GetEntries();
  cout << "Number of entries for the TChain : "<< nentries << endl;

  /* *** HISTOGRAMM *** */
  TH1F * HistoEnergyNtfTot = new TH1F("TotalEnergyNTF","TotalEnergyNTF",4096,0,4096);
  TH1F * HistoEnergyNtfPdl[8];
  for(int pdl=1;pdl<=8;pdl++)
    {
      sprintf(Name,"Energy_NTF_Paddle%d",pdl);
      HistoEnergyNtfPdl[pdl-1] = new TH1F(Name,Name,4096,0,4096);
    }
  
  //  TFile *fcut = new TFile("SaveMerge.root","read");
  //fcut->ls();
  //TCutG * cut = (TCutG*)fcut->Get("27P");



  for(Int_t Entry=0;Entry<nentries;Entry++)
    {
      ch->GetEntry(Entry);
      
      for(int i=0;i<Ntf;i++)
	{
	  NtfPdl = Ntfi[i];
	  NtfPdlEnergy =  NtfParam.CalibEnerNtf(Ntf_Energy_PM1[NtfPdl-1],Ntf_Energy_PM2[NtfPdl-1],NtfPdl);
	  //if((NtfPdl<=8)&&(cut->IsInside(inz,inaoverz)))
	  if(NtfPdl<=8&&12.8<inz&&inz<13.5)
	    {
	      HistoEnergyNtfTot->Fill(NtfPdlEnergy);
	      HistoEnergyNtfPdl[NtfPdl-1]->Fill(NtfPdlEnergy);
	    }
	}
    }

  TCanvas * cEnergyNtfTot = new TCanvas("TotalEnergyNTF","TotalEnergyNTF",0,0,500,500);
  cEnergyNtfTot->cd();
  HistoEnergyNtfTot->Draw("");

  TCanvas * cEnergyNtfPdl = new TCanvas("PaddleEnergyNTF","PaddleEnergyNTF",0,0,900,700);
  cEnergyNtfPdl->Divide(3,3);
  for(int pdl=1;pdl<=8;pdl++)
    {
      cEnergyNtfPdl->cd(pdl);
      HistoEnergyNtfPdl[pdl-1]->Draw();
    }
}


//
//
//void TFWinCoincWithIncomingAndOutgoing(TChain * ch)
//{
//
//  //This routine is to look at the TFW energy spectra in coincidence
//  // . incoming 27P (A/Z vs A, or cut on Z and A/Z)
//  // . outgoing 26Si fragments
//  //under the conditions that
//  // . we are under the physic trigger (Trigger==1)
//  // . we have one single hit at the TFW (Tfmul==1 i.e. 1X and 1Y - we are at the HIT level -)
//  
//
//  /* *** VARIABLES TO READ THE TREE *** */
//  UShort_t Tpat;
//  UChar_t  Trigger;
//  Int_t    Ntf;                 
//  UShort_t Ntf_Energy_PM1[16];  
//  UShort_t Ntf_Energy_PM2[16];  
//  UShort_t Ntf_Time_PM1[16]; 
//  UShort_t Ntf_Time_PM2[16];  
//  Float_t  inz;                   
//  Float_t  inaoverz;             
//  Int_t    Tfmul;              
//  Float_t  Tft[4];             
//  Float_t  Tfe[4];              
//  Float_t  Tfx[4];                
//  Float_t  Tfy[4];  
//
//  /* *** SETBRANCHADDRESS  *** */
//  ch->SetBranchAddress("Tpat",&Tpat);
//  ch->SetBranchAddress("Trigger",&Trigger);
//  ch->SetBranchAddress("Ntf",&Ntf);
//  ch->SetBranchAddress("Ntf1e",Ntf_Energy_PM1);
//  ch->SetBranchAddress("Ntf2e",Ntf_Energy_PM2);
//  ch->SetBranchAddress("Ntf1t",Ntf_Time_PM1);
//  ch->SetBranchAddress("Ntf2t",Ntf_Time_PM2);
//  ch->SetBranchAddress("inz",&inz);
//  ch->SetBranchAddress("inaoverz",&inaoverz);
//  ch->SetBranchAddress("Tfmul",&Tfmul);
//  ch->SetBranchAddress("Tft",Tft);
//  ch->SetBranchAddress("Tfe",Tfe);
//  ch->SetBranchAddress("Tfx",Tfx);
//  ch->SetBranchAddress("Tfy",Tfy);
//
//  /* *** HISTOGRAMMS *** */
//  //  TH1F NTFEnerPdl[16] = new 
//
//
//
//  /* *** CUT *** */
//  //Incoming cut : 27P
//  TCut cutP = "14.5<inz && inz<15.5 ";
//
//  /* *** VARIABLES *** */
//  Long64_t nentries;
//  Int_t    NtfPdl;
//  Float_t  NtfPdlEnergy;
//
//  /* *** LOOP  *** */
//  nentries=ch->GetEntries();
//  cout << "Number of entries for the TChain : "<< nentries << endl;
//
//  for(Int_t Entry=0;Entry<nentries;Entry++)
//    {
//      ch->GetEntry(Entry);
//      if(Trigger==1 && Tfmul==1)
//	{
//	  if(14.5<inz && inz<15.5)//we have a 27P : add the a/q or do a TCutG
//	    {
//	      for(int i=0;i<Ntf;i++)
//		{
//		  NtfPdl = Ntfi[i];
//		  NtfPdlEnergy = CalibEnerNTF(Ntf1e[NtfPdl-1],Ntf2e[NtfPdl-1],NtfPdl);
//		}
//	    }
//	}//end of if (Trigger==1)
//    }
//
//}
//
//*/
//

void run()
{

  TChain * ch = new TChain("merge");

  char nameRoot[100];
  cout << "Which file you need to analyse (if several, press enter between. At the end type ok)" << endl;
  while(cin>>nameRoot)
    {
      if(strcmp(nameRoot,"ok")==0)    break;
      else
	{
	  ch->Add(nameRoot);
	}
    }
  ch->ls();

  CalibFileNtf NtfParam;
  NtfParam.ReadPedestal();
  NtfParam.ReadCalibSync();
  NtfParam.ReadCalibEne();

  CalibNtf(ch, NtfParam);
  //CalibNtfIfIncoming(ch, NtfParam);
  

}

