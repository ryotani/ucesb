#include "LibPerso.C"

//This is a quick time calibrator for the NTF
//data are taken directoy from the Merging
//this avoid to loop over the tree

void ntf(TTree * t)
{

  char conditions[100];
  char graphtitle[100];
  char varitodraw[100];
  char canvatitle[100];
  TF1 *L = new TF1("L","[0]+[1]*x",150,4000);
  L->SetParameter(140,0.05);
  L->SetLineColor(2);
  L->SetLineStyle(2);
  Float_t slope, offset;

  FILE * ftcal = fopen("cal_override_tcal_ntf.hh","w");
  FILE * f = fopen("cal_tcal_ntf.hh","w");

  //PADDLES X
  TCanvas * cx[2];
  for(int pm=0;pm<2;pm++)
    {
      sprintf(canvatitle,"Tcalt_vs_TrawNtfXtPM%i",pm+1);
      cx[pm] = new TCanvas(canvatitle,canvatitle,0,0,1000,900);
      cx[pm]->Divide(3,3);
    }
  for(int pdl=0;pdl<8;pdl++)
    {
      for(int pm=1;pm<=2;pm++)
	{
	  sprintf(varitodraw,"Tcalt:Ntf%dt[%d]",pm,pdl);
	  cout << varitodraw << endl;
	  sprintf(graphtitle,"PaddleX%i_PM%i",pdl+1,pm);
	  sprintf(conditions,"Tpat==8192 && 10<Ntf%dt[%d] && Ntf%dt[%d]<4000",pm,pdl,pm,pdl);
	  t->Draw(varitodraw,conditions,"goff");
	  TGraph * gr = new TGraph(t->GetSelectedRows(),t->GetV2(),t->GetV1());
	  cx[pm-1]->cd(pdl+1);
	  gr->SetTitle(graphtitle);
	  gr->Draw("A*");
	  gr->SetMarkerStyle(7);
	  gr->Fit(L,"R");
	  slope  = L->GetParameter(1);
	  offset = L->GetParameter(0);
	  fprintf(ftcal,"TIME_CALIB(SIGNAL_ID(NTF,%02d, %i),(%f ,%f),(0.,0.,0.));\n",pdl+1,pm,offset,slope);
	  fprintf(f,"%i   %i   %f   %f\n",pdl+1,pm,slope,offset);
	}
    }
  
  //PADDLES Y
  TCanvas * cy[2];
  for(int pm=0;pm<2;pm++)
    {
      sprintf(canvatitle,"Tcalt_vs_TrawTfwYtPM%i",pm+1);
      cy[pm] = new TCanvas(canvatitle,canvatitle,0,0,1000,900);
      cy[pm]->Divide(3,3);
    }
  for(int pdl=0;pdl<8;pdl++)
    {
      for(int pm=1;pm<=2;pm++)
	{
	  sprintf(varitodraw,"Tcalt:Ntf%dt[%d]",pm,pdl+8);
	  sprintf(graphtitle,"PaddleY%i_PM%i",pdl+1,pm);
	  sprintf(conditions,"Tpat==8192 && 10<Ntf%dt[%d] && Ntf%dt[%d]<4000",pm,pdl+8,pm,pdl+8);
	  t->Draw(varitodraw,conditions,"goff");
	  TGraph * gr = new TGraph(t->GetSelectedRows(),t->GetV2(),t->GetV1());
	  cy[pm-1]->cd(pdl+1);
	  gr->SetTitle(graphtitle);
	  gr->Draw("A*");
	  gr->SetMarkerStyle(7);
	  gr->Fit(L,"R");
	  slope  = L->GetParameter(1);
	  offset = L->GetParameter(0);
	  fprintf(ftcal,"TIME_CALIB(SIGNAL_ID(NTF,%02d, %i),(%f ,%f),(0.,0.,0.));\n",pdl+9,pm,offset,slope);
	  fprintf(f,"%i   %i   %f   %f\n",pdl+9,pm,slope,offset);
	}
    }
  
  fclose(ftcal);
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
