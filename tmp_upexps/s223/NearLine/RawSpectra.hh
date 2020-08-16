#ifndef __RAWSPECTRA_HH__
#define __RAWSPECTRA_HH__

#include "LibPerso.C"

class RawSpectra
{
public:
  TTree * inT;
  Int_t   Tpat;

  RawSpectra()
  {
    Init();
  }

public:
  void Init();
  void DrawSpectra();
  void DrawTfwXSpectra();
  void DrawTfwYSpectra();
  void DrawNtfXSpectra();
  void DrawNtfYSpectra();
  void DrawXbSpectra();
  void DrawPosSpectra();
  void DrawGfiSpectra();
  void DrawPspSpectra();
  void DrawSciSpectra();
  void DrawDetSpectra(char *det);
  void DrawDetiSpectra(char *det,Int_t i,bool type, bool highragne);
  char filename[100];
};




void RawSpectra::Init()
{
  gROOT->SetStyle("Plain");
  gStyle->SetOptDate(12);
  gStyle->SetOptFit(1111111);

  char name[100];
 tryagain:
  cout << "What is the name of the root file you want to read ?" << endl ;
  cin>>name;
  
  TFile * f = new TFile(name,"READ");
  
  if(f->IsZombie())
    {
      cout << "Error openning the file, please try again!" << endl;
      goto tryagain;
      //      exit(-1);
    }
  sprintf(filename,"%s",name);
  cout << filename << endl;
  f->ls();
  
  inT = (TTree*)f->Get("h101");
  inT->ls();


  Tpat = 1 ;
}

void RawSpectra::DrawSpectra()
{

  char name[60];

  cout << endl;
  cout <<"Which detectors you want to check ?" <<endl << "XB, TFW, NTF, GFI, PSP, POS, SCI (use OK if you want to quit)" << endl ;
  while(cin>>name)
    {
      if( (strcmp(name,"OK")==0)||(strcmp(name,"Ok")==0)||(strcmp(name,"ok")==0) ) break;

      if( (strcmp(name,"TFW")==0)||(strcmp(name,"tfw")==0)||(strcmp(name,"Tfw")==0) )
	{  
	  cout << endl ;
	  cout << "Which Tpat for the TFW ? " << endl;
	  cin >> Tpat;
	  cout << "Please wait ... ... " << endl;
	  DrawTfwXSpectra();
	  DrawTfwYSpectra();
	  cout << endl ;
	  cout << "TFW done. Next detector please ? " <<endl;
	}
      else if( (strcmp(name,"NTF")==0)||(strcmp(name,"ntf")==0)||(strcmp(name,"Ntf")==0) ) 
	{
	  cout << endl ;
	  cout << "Which Tpat for the NTF ? " << endl;
	  cin >> Tpat;
	  cout << "Please wait ... ... " << endl;
	  DrawNtfXSpectra();
	  DrawNtfYSpectra();
	  cout << endl ;
	  cout << "NTF done. Next detector please ?" << endl;
	}
      else if( (strcmp(name,"XB")==0)||(strcmp(name,"xb")==0)||(strcmp(name,"Xb")==0) ) 
	{
	  cout << endl ;
	  cout << "Which Tpat for the XB ? " << endl;
	  cin >> Tpat;
	  cout << "Please wait ... ... " << endl;
	  DrawXbSpectra();
	  cout << endl ;
	  cout << "XB done. Next detector please ?" << endl;	
	}

      else if( (strcmp(name,"pos")==0)||(strcmp(name,"POS")==0)||(strcmp(name,"Pos")==0) ) 
	{
	  cout << endl ;
	  cout << "Which Tpat for the Pos ? " << endl;
	  cin >> Tpat;
	  cout << "Please wait ... ... " << endl;
	  DrawPosSpectra();
	  cout << endl ;
	  cout << "POS done. Next detector please ?" << endl;	
	}
      else if( (strcmp(name,"gfi")==0)||(strcmp(name,"GFI")==0)||(strcmp(name,"Gfi")==0) ) 
	{
	  cout << endl ;
	  cout << "Which Tpat for the Gfi ? " << endl;
	  cin >> Tpat;
	  cout << "Please wait ... ... " << endl;
	  DrawGfiSpectra();
	  cout << endl ;
	  cout << "GFI done. Next detector please ?" << endl;	
	}
      else if( (strcmp(name,"psp")==0)||(strcmp(name,"PSP")==0)||(strcmp(name,"Psp")==0) ) 
	{
	  cout << endl ;
	  cout << "Which Tpat for the Psp ? " << endl;
	  cin >> Tpat;
	  cout << "Please wait ... ... " << endl;
	  DrawPspSpectra();
	  cout << endl ;
	  cout << "PSP done. Next detector please ?" << endl;	
	}
      else if( (strcmp(name,"sci")==0)||(strcmp(name,"SCI")==0)||(strcmp(name,"Sci")==0) ) 
	{
	  cout << endl ;
	  cout << "Which Tpat for the Sci ? " << endl;
	  cin >> Tpat;
	  cout << "Please wait ... ... " << endl;
	  DrawSciSpectra();
	  cout << endl ;
	  cout << "SCI done. Next detector please ?" << endl;	
	}
      else
	printf("Detector %s is not known, try another detector please\n",name);
    }

}


void RawSpectra::DrawSciSpectra()
{
  char det[60];

  vector<char*> det_spec_names;

  TCanvas * csci1 = new TCanvas("RawEnergySci1","RawEnergySci1",0,0,1100,900);
  TPad *psci1 = new TPad("RawEnergySci1","RawEnergySci1",0,0.03,1,1);
  psci1->Draw();
  psci1->Divide(2,2);

  TCanvas * csci2 = new TCanvas("RawEnergySci2","RawEnergySci2",0,0,1100,900);
  TPad *psci2 = new TPad("RawEnergySci2","RawEnergySci2",0,0.03,1,1);
  psci2->Draw();
  psci2->Divide(2,2);

  for(int i=1;i<=8;i++)
    {
      if(i<=4){ 
	psci1->cd(i);
	if(i<3)sprintf(det,"Sci1_%it",i);
	else   sprintf(det,"Sci1_%ie",i-2);
      }
      else {    
	psci2->cd(i-4);
	if(i<7)sprintf(det,"Sci2_%it",i-4);
	else   sprintf(det,"Sci2_%ie",i-6);
      }
      DrawDetSpectra(det);

    }
}

void RawSpectra::DrawPspSpectra()
{
  char det[60];

  TCanvas * cpsp1 = new TCanvas("RawEnergyPsp1","RawEnergyPsp1",0,0,1100,900);
  TPad *ppsp1 = new TPad("RawEnergyPsp1","RawEnergyPsp1",0,0.03,1,1);
  ppsp1->Draw();
  ppsp1->Divide(1,2);
  ppsp1->cd(1)->Divide(2,2);

  TCanvas * cpsp2 = new TCanvas("RawEnergyPsp2","RawEnergyPsp2",0,0,1100,900);
  TPad *ppsp2 = new TPad("RawEnergyPsp2","RawEnergyPsp2",0,0.03,1,1);
  ppsp2->Draw();
  ppsp2->Divide(1,2);
  ppsp2->cd(1)->Divide(2,2);

  for(int i=1;i<=10;i++)
    {
      if(i<=5){
	sprintf(det,"Psp1_%ie",i);
	if(i<5)ppsp1->cd(1)->cd(i);
	else ppsp1->cd(2);
      }
      else{
	sprintf(det,"Psp2_%ie",i-5);
	if(i<10)ppsp2->cd(1)->cd(i-5);
	else ppsp2->cd(2);
      }
      DrawDetSpectra(det);
    }
}

void RawSpectra::DrawPosSpectra()
{
  char det[60];

  TCanvas *cpos1 = new TCanvas("RawTimePos","RawTimePos",0,0,1100,900);
  TPad *ppos1 = new TPad("RawTimePos","RawTimePos",0,0.03,1,1);
  ppos1->Draw();
  ppos1->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  ppos1->Divide(2,2);

  TCanvas *cpos2 = new TCanvas("RawEnergyPos","RawEnergyPos",0,0,1100,900);
  TPad *ppos2 = new TPad("RawEnergyPos","RawEnergyPos",0,0.03,1,1);
  ppos2->Draw();
  ppos2->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  ppos2->Divide(2,2);

  for(int i=1;i<=8;i++)
    {
      if(i<=4) {
	cpos1->cd();
	ppos1->cd(i);
	sprintf(det,"Pos1_%it",i);
      }
      else {
	cpos2->cd();
	ppos2->cd(i-4);
	sprintf(det,"Pos1_%ie",i-4);
      }
      DrawDetSpectra(det);

    }

}

void RawSpectra::DrawGfiSpectra()
{
  char det[60];
  char name[60];
  char cond[60];

  TCanvas *cgfi1e = new TCanvas("RawEnergyGfi1","RawEnergyGfi1",0,0,1100,900);
  TPad *pgfi1e = new TPad("RawEnergyGfi1","RawEnergyTimeGfi1",0,0.03,1,1);
  pgfi1e->Draw();
  pgfi1e->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  pgfi1e->Divide(6,6);

//   TCanvas *cgfi1t = new TCanvas("RawTimeGfi1","RawTimeGfi1",0,0,1100,900);
//   TPad *pgfi1t = new TPad("RawTimeGfi1","RawTimeGfi1",0,0.03,1,1);
//   pgfi1t->Draw();
//   pgfi1t->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
//   pgfi1t->Divide(6,6);

  TCanvas *cgfi2e = new TCanvas("RawEnergyGfi2","RawEnergyGfi2",0,0,1100,900);
  TPad *pgfi2e = new TPad("RawEnergyGfi2","RawEnergyGfi2",0,0.03,1,1);
  pgfi2e->Draw();
  pgfi2e->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  pgfi2e->Divide(6,6);

//   TCanvas *cgfi2t = new TCanvas("RawTimeGfi2","RawTimeGfi2",0,0,1100,900);
//   TPad *pgfi2t = new TPad("RawTimeGfi2","RawTimeGfi2",0,0.03,1,1);
//   pgfi2t->Draw();
//   pgfi2t->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
//   pgfi2t->Divide(6,6);

  for(int i=1;i<=35;i++)
    { 
      pgfi1e->cd(i);
      sprintf(det,"Gfi1");
      DrawDetiSpectra(det,i,0,1);

//       pgfi1t->cd(i);
//       sprintf(det,"Gfi1");
//       DrawDetiSpectra(det,i,1);

      pgfi2e->cd(i);
      sprintf(det,"Gfi2");
      DrawDetiSpectra(det,i,0,1);

//       pgfi2t->cd(i);
//       sprintf(det,"Gfi2");
//       DrawDetiSpectra(det,i,1);
    }
}

void RawSpectra::DrawXbSpectra()
{
  char  name[60];
  char  cond[150];

  TCanvas *ctXb1 = new TCanvas("RawTimeXb1_1_32","RawTimeXb1_1_32",0,0,1100,900);
  ctXb1->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  ctXb1->Divide(4,8);
  for(int i=1;i<=32;i++)
    {
      ctXb1->cd(i);
      gPad->SetLogy();
      sprintf(name,"Xb1t>>hXb%i_1t(4096,4096,8192)",i);
      sprintf(cond,"camac_tpat==%i&&Xbi==%i",Tpat,i);
      inT->Draw(name,cond);
    }

  TCanvas *ctXb2 = new TCanvas("RawTimeXb1_33_64","RawTimeXb1_33_64",0,0,1100,900);
  ctXb2->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  ctXb2->Divide(4,8);
  for(int i=1;i<=32;i++)
    {
      ctXb2->cd(i);
      gPad->SetLogy();
      sprintf(name,"Xb1t>>hXb%i_1t(4096,4096,8192)",i+32);
      sprintf(cond,"camac_tpat==%i&&Xbi==%i",Tpat,i+32);
      inT->Draw(name,cond);
    }

  TCanvas *ctXb3 = new TCanvas("RawTimeXb1_65_98","RawTimeXb1_65_98",0,0,1100,900);
  ctXb3->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  ctXb3->Divide(4,8);
  for(int i=1;i<=16;i++)
    {
      ctXb3->cd(i);
      gPad->SetLogy();
      sprintf(name,"Xb1t>>hXb%i_1t(4096,4096,8192)",i+64);
      sprintf(cond,"camac_tpat==%i&&Xbi==%i",Tpat,i+64);
      inT->Draw(name,cond);
    }

  for(int i=19;i<=34;i++)
    {
      ctXb3->cd(i-2);
      gPad->SetLogy();
      sprintf(name,"Xb1t>>hXb%i_1t(4096,4096,8192)",i+64);
      sprintf(cond,"camac_tpat==%i&&Xbi==%i",Tpat,i+64);
      inT->Draw(name,cond);
    }

  TCanvas *ctXb4 = new TCanvas("RawTimeXb1_99_130","RawTimeXb1_99_130",0,0,1100,900);
  ctXb4->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  ctXb4->Divide(4,8);
  for(int i=1;i<=32;i++)
    {
      ctXb4->cd(i);
      gPad->SetLogy();
      sprintf(name,"Xb1t>>hXb%i_1t(4096,4096,8192)",i+98);
      sprintf(cond,"camac_tpat==%i&&Xbi==%i",Tpat,i+98);
      inT->Draw(name,cond);
    }

  TCanvas *ctXb5 = new TCanvas("RawTimeXb1_131_162","RawTimeXb1_131_162",0,0,1100,900);
  ctXb5->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  ctXb5->Divide(4,8);
  for(int i=1;i<=32;i++)
    {
      ctXb5->cd(i);
      gPad->SetLogy();
      sprintf(name,"Xb1t>>hXb%i_1t(4096,4096,8192)",i+130);
      sprintf(cond,"camac_tpat==%i&&Xbi==%i",Tpat,i+130);
      inT->Draw(name,cond);
    }
}


void RawSpectra::DrawTfwXSpectra()
{

  char name[60];
  char cond[150];

  TCanvas *c1 = new TCanvas("RawTimeXTfwPM1","RawTimeXTfwPM1",0,0,1200,900);
  c1->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  c1->Divide(4,5);
  TCanvas *c2 = new TCanvas("RawTimeXTfwPM2","RawTimeXTfwPM2",0,0,1200,900);
  c2->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  c2->Divide(4,5);
  TCanvas *c3 = new TCanvas("RawEnergyXTfwPM1","RawEnergyXTfwPM1",0,0,1200,900);
  c3->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  c3->Divide(4,5);
  TCanvas *c4 = new TCanvas("RawEnergyXTfwPM2","RawEnergyXTfwPM2",0,0,1200,900);
  c4->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  c4->Divide(4,5);

  for(int i=1;i<=18;i++)
    {
      c1->cd(i);
      gPad->SetLogy();
      sprintf(name,"Tfw1t");
      sprintf(cond,"camac_tpat==%i&&Tfwi==%i",Tpat,i);
      inT->Draw(name,cond);

      c2->cd(i);
      gPad->SetLogy();
      sprintf(name,"Tfw2t");
      sprintf(cond,"camac_tpat==%i&&Tfwi==%i",Tpat,i);
      inT->Draw(name,cond);

      c3->cd(i);
      gPad->SetLogy();
      sprintf(name,"Tfw1e");
      sprintf(cond,"camac_tpat==%i&&Tfwi==%i",Tpat,i);
      inT->Draw(name,cond);

      c4->cd(i);
      gPad->SetLogy();
      sprintf(name,"Tfw2e");
      sprintf(cond,"camac_tpat==%i&&Tfwi==%i",Tpat,i);
      inT->Draw(name,cond);
    }
}

void RawSpectra::DrawTfwYSpectra()
{

  char name[60];
  char cond[150];

  
  TCanvas *ctfwy1 = new TCanvas("RawTimeYTfwPM1","RawTimeYTfwPM1",0,0,1200,900);
  ctfwy1->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  TCanvas *ctfwy2 = new TCanvas("RawTimeYTfwPM2","RawTimeYTfwPM2",0,0,1200,900);
  ctfwy2->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  TCanvas *ctfwy3 = new TCanvas("RawEnergyYTfwPM1","RawenergyYTfwPM1",0,0,1200,900);
  ctfwy3->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  TCanvas *ctfwy4 = new TCanvas("RawEnergyYTfwPM2","RawEnergyYTfwPM2",0,0,1200,900);
  ctfwy4->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  ctfwy1->Divide(4,4);
  ctfwy2->Divide(4,4);
  ctfwy3->Divide(4,4);
  ctfwy4->Divide(4,4);
  for(int i=1;i<=14;i++)
    {
      ctfwy1->cd(i);
      gPad->SetLogy();
      sprintf(name,"Tfw1t");
      sprintf(cond,"camac_tpat==%i&&Tfwi==%i",Tpat,i+18);
      //sprintf(cond,"Tfwi==%i",i+18);
      inT->Draw(name,cond);

      ctfwy2->cd(i);
      gPad->SetLogy();
      sprintf(name,"Tfw2t");
      sprintf(cond,"camac_tpat==%i&&Tfwi==%i",Tpat,i+18);
      //sprintf(cond,"Tfwi==%i",i+18);
      inT->Draw(name,cond);

      ctfwy3->cd(i);
      gPad->SetLogy();
      sprintf(name,"Tfw1e");
      sprintf(cond,"camac_tpat==%i&&Tfwi==%i",Tpat,i+18);
      //sprintf(cond,"Tfwi==%i",i+18);
      inT->Draw(name,cond);

      ctfwy4->cd(i);
      gPad->SetLogy();
      sprintf(name,"Tfw2e");
      sprintf(cond,"camac_tpat==%i&&Tfwi==%i",Tpat,i+18);
      //sprintf(cond,"Tfwi==%i",i+18);
      inT->Draw(name,cond);

    }
}


void RawSpectra::DrawNtfXSpectra()
{

  char name[60];
  char cond[150];

  TCanvas *cntfx1 = new TCanvas("RawTimeXNtfPM1","RawTimeXNtfPM1",0,0,1200,900);
  cntfx1->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  cntfx1->Divide(3,3);
  TCanvas *cntfx2 = new TCanvas("RawTimeXNtfPM2","RawTimeXNtfPM2",0,0,1200,900);
  cntfx2->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  cntfx2->Divide(3,3);
  TCanvas *cntfx3 = new TCanvas("RawEnergyXNtfPM1","RawEnergyXNtfPM1",0,0,1200,900);
  cntfx3->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  cntfx3->Divide(3,3);
  TCanvas *cntfx4 = new TCanvas("RawEnergyXNtfPM2","RawEnergyXNtfPM2",0,0,1200,900);
  cntfx4->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  cntfx4->Divide(3,3);
  for(int i=1;i<=8;i++)
    {
      cntfx1->cd(i);
      gPad->SetLogy();
      sprintf(name,"Ntf1t>>hNtfX%i_1t(4096,0,4096)",i);
      sprintf(cond,"camac_tpat==%i&&Ntfi==%i",Tpat,i);
      //sprintf(cond,"Ntfi==%i",i);
      inT->Draw(name,cond);

      cntfx2->cd(i);
      gPad->SetLogy();
      sprintf(name,"Ntf2t>>hNtfX%i_2t(4096,0,4096)",i);
      sprintf(cond,"camac_tpat==%i&&Ntfi==%i",Tpat,i);
      //sprintf(cond,"Ntfi==%i",i+9);
      inT->Draw(name,cond);

      cntfx3->cd(i);
      gPad->SetLogy();
      sprintf(name,"Ntf1q>>hNtfX%i_1e(4096,0,4096)",i);
      sprintf(cond,"camac_tpat==%i&&Ntfi==%i",Tpat,i);
      //sprintf(cond,"Ntfi==%i",i);
      inT->Draw(name,cond);

      cntfx4->cd(i);
      gPad->SetLogy();
      sprintf(name,"Ntf2q>>hNtfX%i_2e(4096,0,4096)",i);
      sprintf(cond,"camac_tpat==%i&&Ntfi==%i",Tpat,i);
      //sprintf(cond,"Ntfi==%i",i);
      inT->Draw(name,cond);
    }
}


void RawSpectra::DrawNtfYSpectra()
{

  char name[60];
  char cond[150];
  
  TCanvas *cntfy1 = new TCanvas("RawTimeYNtfPM1","RawTimeYNtfPM1",0,0,1200,900);
  cntfy1->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  cntfy1->Divide(3,3);
  TCanvas *cntfy2 = new TCanvas("RawTimeYNtfPM2","RawTimeYNtfPM2",0,0,1200,900);
  cntfy2->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  cntfy2->Divide(3,3);
  TCanvas *cntfy3 = new TCanvas("RawEnergyYNtfPM1","RawEnergyYNtfPM1",0,0,1200,900);
  cntfy3->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  cntfy3->Divide(3,3);
  TCanvas *cntfy4 = new TCanvas("RawEnergyYNtfPM2","RawEnergyYNtfPM2",0,0,1200,900);
  cntfy4->Connect("ProcessedEvent(Int_t,Int_t,Int_t,TObject*)",0,0,"ProcEvent(Int_t,Int_t,Int_t,TObject*)");
  cntfy4->Divide(3,3);

  for(int i=1;i<=8;i++)
    {
      cntfy1->cd(i);
      gPad->SetLogy();
      sprintf(name,"Ntf1t>>hNtfy%i_1t(4096,0,4096)",i+9);
      sprintf(cond,"camac_tpat==%i&&Ntfi==%i",Tpat,i+9);
      //sprintf(cond,"Ntfi==%i",i+9);
      inT->Draw(name,cond);
  
      cntfy2->cd(i);
      gPad->SetLogy();
      sprintf(name,"Ntf2t>>hNtfy%i_2t(4096,0,4096)",i+9);
      sprintf(cond,"camac_tpat==%i&&Ntfi==%i",Tpat,i+9);
      //sprintf(cond,"Ntfi==%i",i+9);
      inT->Draw(name,cond);

      cntfy3->cd(i);
      gPad->SetLogy();
      sprintf(name,"Ntf1q>>hNtfy%i_1e(4096,0,4096)",i+9);
      sprintf(cond,"camac_tpat==%i&&Ntfi==%i",Tpat,i+9);
      //sprintf(cond,"Ntfi==%i",i+9);
      inT->Draw(name,cond);

      cntfy4->cd(i);
      gPad->SetLogy();
      sprintf(name,"Ntf2q>>hNtfy%i_2e(4096,0,4096)",i+9);
      sprintf(cond,"camac_tpat==%i&&Ntfi==%i",Tpat,i+9);
      //sprintf(cond,"Ntfi==%i",i+9);
      inT->Draw(name,cond);
    }
}

void RawSpectra::DrawDetSpectra(char *det){
  
  char histname[60];
  char histtitle[60];
  char name[60];
  char cond[60];
  
  gPad->SetLogy();
  sprintf(histname,"h%s",det);
  sprintf(name,"%s>>%s(4096,0,4096)",det,histname);
  sprintf(cond,"camac_tpat==%i",Tpat);
  sprintf(histtitle,"%s, %s, %s",det,cond,filename);
  inT->Draw(name,cond);
  TH1F *hi = (TH1F*)gPad->FindObject(histname)->Clone(histname);
  hi->SetTitle(histtitle);
  hi->SetXTitle(det);
  hi->Draw();
  
}


void RawSpectra::DrawDetiSpectra(char *det,Int_t i,bool type, bool highrange){
  
  char histname[60];
  char histtitle[60];
  char name[60];
  char cond[60];
  char detname[60];
  char deti[60];  

  //  gPad->SetLogy();
  if(type==0) sprintf(detname,"%se",det) ;
  else       sprintf(detname,"%st",det) ;
  sprintf(deti,"%si",det);
  sprintf(histname,"h%s_%i",detname,i);
  if(highrange)  sprintf(name,"%s>>%s(4096,0,4096)",detname,histname);
  if(highrange)  sprintf(name,"%s>>%s(4096,4096,8192)",detname,histname);
  sprintf(cond,"%s==%i && camac_tpat==%i",deti,i,Tpat);
  sprintf(histtitle,"%s, %s, %s",detname,cond,filename);
  inT->Draw(name,cond);
  TH1F *hi = (TH1F*)gPad->FindObject(histname)->Clone(histname);
  hi->SetTitle(histtitle);
  hi->SetXTitle(histname);
  hi->Draw();
  
}

#endif //end of __RAWSPECTRA_HH__
