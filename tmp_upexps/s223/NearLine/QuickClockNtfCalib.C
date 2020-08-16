#include "LibPerso.C"

//This is a quick pedestal calculation for the NTF
//data are taken directoy from the Merging

void ntf(TTree * t)
{

  char conditions[100];
  char graphtitle[100];
  char varitodraw[100];
  char canvatitle[100];
  char nameofhist[100];
  Float_t pedestal;

  TF1 *G = new TF1("G","gaus",5,100);
  G->SetLineColor(2);
  G->SetLineStyle(2);

  FILE * fclock = fopen("cal_override_clock_ntf.hh","w");
  FILE * f = fopen("cal_clock_ntf.hh","w");

  //PADDLES X
  TCanvas * cx[2];
  for(int pm=0;pm<2;pm++)
    {
      sprintf(canvatitle,"Eraw_clock_NtfXtPM%i",pm+1);
      cx[pm] = new TCanvas(canvatitle,canvatitle,0,0,1000,900);
      cx[pm]->Divide(3,3);
    }
  for(int pdl=0;pdl<8;pdl++)
    {
      for(int pm=1;pm<=2;pm++)
	{
	  sprintf(varitodraw,"Ntf%de[%d]>>h_%d_%d(100,0,100)",pm,pdl,pdl+1,pm);
	  sprintf(graphtitle,"PaddleX%i_PM%i",pdl+1,pm);
	  sprintf(conditions,"Tpat==4096");
	  cx[pm-1]->cd(pdl+1);
	  t->Draw(varitodraw,conditions);
	  sprintf(nameofhist,"h_%d_%d",pdl+1,pm);
	  TH1F *h = (TH1F*)gPad->FindObject(nameofhist);
	  h->Fit(G,"R");
	  pedestal=G->GetParameter(1);
	  fprintf(fclock,"ENERGY_ZERO_NOISE(SIGNAL_ID(NTF,%02d, %i),(%f),(0.));\n",pdl+1,pm,pedestal);
	  fprintf(f,"%i   %i   %f   %f\n",pdl+1,pm,pedestal);
	}
    }

  //PADDLES Y
  TCanvas * cy[2];
  for(int pm=0;pm<2;pm++)
    {
      sprintf(canvatitle,"Eraw_clock_NtfYtPM%i",pm+1);
      cy[pm] = new TCanvas(canvatitle,canvatitle,0,0,1000,900);
      cy[pm]->Divide(3,3);
    }
  for(int pdl=0;pdl<8;pdl++)
    {
      for(int pm=1;pm<=2;pm++)
	{
	  sprintf(varitodraw,"Ntf%de[%d]>>hY_%d_%d(100,0,100)",pm,pdl+8,pdl+9,pm);
	  sprintf(graphtitle,"PaddleY%i_PM%i",pdl+1,pm);
	  sprintf(conditions,"Tpat==4096");
	  cy[pm-1]->cd(pdl+1);
	  t->Draw(varitodraw,conditions);
	  sprintf(nameofhist,"hY_%d_%d",pdl+9,pm);
	  TH1F *h = (TH1F*)gPad->FindObject(nameofhist);
	  h->Fit(G,"R");
	  pedestal=G->GetParameter(1);
	  fprintf(fclock,"ENERGY_ZERO_NOISE(SIGNAL_ID(NTF,%02d, %i),(%f),(0.));\n",pdl+9,pm,pedestal);
	  fprintf(f,"%i   %i   %f   %f\n",pdl+9,pm,pedestal);
	}
    }
  
  fclose(fclock);
  fclose(f);
}

void run()
{
  SetStyle();

  //open file
  char nameRoot[100];
  cout << "which is the input root file ? " << endl;
  cin >> nameRoot;
  TFile * fi = new TFile(nameRoot,"read");
  fi->ls();
  
  //open the Tree h101 (tree from the UCESB)
  TTree * t = (TTree *)fi-> Get("merge");
  t->ls();

  ntf(t);  
}
