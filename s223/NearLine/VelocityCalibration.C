#include <math.h>   // include the math headder to get the fabs function

#include "Defines.h"
#include "THStack.h"
#include "TSpectrum.h"
#include <vector>

void VelocityCalibration()
{

  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(1001111);
  gStyle->SetOptFit();
  gStyle->SetStatH(0.1);
  gStyle->SetOptDate(12);
  
  TFile *ftof=new TFile("vel_cal.root","RECREATE");
  TFile *fi;
  
  TTree *tr;

  //  TH1F *hTOF ;
  THStack *hTOF_Stack = new THStack("TOF_Stack","keep TOFs");

  TGraphErrors *mgr[6];
  TAxis *ax = new TAxis();

  Float_t par[6][3];
  Float_t lin_fit_slope[6];
  Float_t lin_fit_offset[6];
  Float_t lin_fit_slope_err[6];
  Float_t lin_fit_offset_err[6];
  Float_t er[6][3];
  Float_t beta[6][3];
  Float_t y[6][3];
  Int_t u=4*(4-1)/2;
  Int_t d;

  char filename[3][200];
  char dirname[200];
  char variables[200];
  char selection[200];
  //  char detector[4][200];
  vector<char*> detector;
  char histname[200];
  char dt[200];
  char gr[200];


  Float_t xptemp;
  Float_t yptemp;
  Float_t xpmax;
  Float_t ypmax;
  Float_t xp ;
  Float_t yp; 
  Float_t Xmin_hTOF;
  Float_t Xmax_hTOF;

//     beta[0][0]=0.7348506;
//     beta[0][1]=0.7752520;
//     beta[0][2]=0.8064078;

//     beta[1][0]=0.732946;
//     beta[1][1]=0.7739276;
//     beta[1][2]=0.8054298;

//   for(int j=2;j<4;j++){
//     beta[j][0]=(0.732946 *8514.290712
// 		+0.7310414*5395.696156)/(8514.290712+5395.696156);
//     beta[j][1]=(0.7739276*8514.290712
// 		+0.7726032*5395.696156)/(8514.290712+5395.696156);
//     beta[j][2]=(0.8054298*8514.290712
// 		+0.8044518*5395.696156)/(8514.290712+5395.696156);
//   }
//   beta[4][0]=0.732946; 
//   beta[4][1]=0.7739276;
//   beta[4][2]=0.8054298;  

//   beta[5][0]=0.7310414;
//   beta[5][1]=0.7726032;
//   beta[5][2]=0.8044518; 
  
  
  const float speed_of_light = 29.9792458;   // cm/ns

  char name[60];

  cout << endl;
  cout <<"File ?" << endl;
  Int_t i=0;
  while(cin>>name)
    {
      if( (strcmp(name,"OK")==0)||(strcmp(name,"Ok")==0)||(strcmp(name,"ok")==0) ) break;

	  cout << "" << endl;
	  sprintf(filename[i],"%s",name);
	  cout << endl ;
	  cout << "Beta S2S8" << endl;
	  if( (strcmp(name,"OK")==0)||(strcmp(name,"Ok")==0)||(strcmp(name,"ok")==0) ) break;
	  cin>>beta[0][i];
	  cout << "Beta S8POS" << endl;
	  if( (strcmp(name,"OK")==0)||(strcmp(name,"Ok")==0)||(strcmp(name,"ok")==0) ) break;
	  cin>>beta[2][i];
	  beta[1][i] = (beta[0][i]+beta[2][i])/2.;
	  cout << "File ok. Next file please ? " <<endl;
	  i++;

    }


  //  canvas_vector c_v;
  TCanvas *c[3];
  TPad *pad[3];

  detector.push_back("Sc01t");
  detector.push_back("Sc02t");
  detector.push_back("Po01t");

  cout << detector[0] << endl;

  //  sprintf(filename[0],"run_026_1130");
  //  sprintf(filename[1],"run_026_1114");
  //  sprintf(filename[2],"run_026_1119");


  for(int i=0; i<3;i++){

    sprintf(dirname,"/d/land/land/spaschal/analysis/vel_cal/%s.root",filename[i]);

    cout << dirname <<  endl;    

    fi=new TFile(dirname);
    
    if(fi->IsZombie())
      {
	cout << "Error openning the file" << endl;
	exit(-1);
      }
    
    //fi->ls();
    
    tr = (TTree*)fi->Get("h509")->Clone(filename[i]);

    c[i]=new TCanvas(filename[i],"TOF");
    pad[i]= new TPad(filename[i],"TOF",0,0.03,1,1);
    pad[i]->Draw(); 
    pad[i]->Divide(1,3);
    d=0;
    for(int j=0; j<detector.size()-1; j++){
      for(int k=j+1; k<detector.size(); k++){
	cout << detector[k] << endl;
	d++;
	pad[i]->cd(d);
	gPad->SetLogy();
	sprintf(histname,"%s_%s_%s",detector[j],detector[k],filename[i]);
	sprintf(variables,"(%s-%s)>>%s(4096)",detector[j],detector[k],histname);
	sprintf(selection,"Tpat==1");
	cout << histname << endl;
	cout << variables << endl;
	tr->Draw(variables,selection,"", tr->GetEntriesFast(), 0); 
 
	TH1F *hTOF = (TH1F*)gDirectory->Get(histname)->Clone(histname);
	cout <<	hTOF->GetName() << endl;
	hTOF_Stack->Add(hTOF);
	
	//---------Find peaks in hTOF
	TSpectrum *sea = new TSpectrum(1);
	Int_t nfound = sea->Search(hTOF,1,"new",0.7);
	Float_t *xpeak = sea->GetPositionX();
	printf("Found %d candidate peaks to fit \n",nfound);
	yptemp = 0.;
	xptemp = 0.;
	xpmax  = 0.;
	ypmax  = 0.;

	//Find the highest peak
	for (Int_t p=0; p<nfound; p++){
	  xp = xpeak[p];
	  Int_t bin = hTOF->GetXaxis()->FindBin(xp);
	  yp = hTOF->GetBinContent(bin);
	  
	  if (yp>yptemp){
	    yptemp=yp;
	    xptemp=xp;
	  }
	  ypmax=yptemp;
	  xpmax=xptemp;
	  
	}
	
	
	TF1 *g1 = new TF1("fit","gaus",xpmax-1.,xpmax+1.);
	cout << ypmax << endl;
	cout << "max peak found at " << xptemp << endl;
	
	hTOF->Fit(g1,"R+");
	
	Xmin_hTOF=xpmax-2;
	Xmax_hTOF=xpmax+2;
	
	par[d-1][i]=g1->GetParameter(1);
	er[d-1][i]=g1->GetParError(1);
	y[d-1][i]=par[d-1][i]*beta[d-1][i];
	//  beta1[0]=0.731049;
	
	
	ftof->cd();
	
	//	hTOF->Draw();
	hTOF->GetXaxis()->SetRangeUser(Xmin_hTOF,Xmax_hTOF);
	hTOF->GetXaxis()->SetTitle("time (ns)");
	
	hTOF->Write(histname);
	//	delete hTOF;	
	//  c1->Write();
	//  pad1->cd(1)->Write("pad1");
	
	//  delete hS8POSTOF;
	//  delete hS2S8TOF;
	//  delete hS2POSTOF;
	//  delete hFGRS8TOF;
	//  delete hS2FGRTOF;
	
	//fi->Close();
	
	//  ftof->Close();
	
      }
    }
    c[i]->Write();
    delete tr;
    fi->Close();
    delete fi;
  }
  hTOF_Stack->Write();
  
  TCanvas *mgr_can=new TCanvas("mgr_can");    
  mgr_can->Divide(1,3);
  d=0;

  for(int j=0; j<detector.size()-1; j++){
    for(int k=j+1; k<detector.size(); k++){
      d++;

      TF1 *lin = new TF1("lin","pol1");
      mgr_can->cd(d);
      
      mgr[d-1]=new TGraphErrors(3,beta[d-1],y[d-1],0,er[d-1]);
      sprintf(gr,"%s_%s",detector[j],detector[k]);
      mgr[d-1]->SetName(gr);
      mgr[d-1]->SetTitle(gr);
      mgr[d-1]->Draw("A*");
      ax=(TAxis*)mgr[d-1]->GetXaxis();
      ax->SetTitle("beta");
      ax=(TAxis*)mgr[d-1]->GetYaxis();
      ax->SetTitle("TOF*beta");
      
      mgr[d-1]->Fit(lin);
      lin_fit_slope[d-1]=lin->GetParameter(1);
      lin_fit_offset[d-1]=lin->GetParameter(0);
      lin_fit_offset_err[d-1]=lin->GetParError(0);
      ftof->cd();
      mgr[d-1]->Write();
    }
  }

  mgr_can->Write();
  d=0;
  for(int j=0; j<detector.size()-1; j++){
    for(int k=j+1; k<detector.size(); k++){
      d++;
      sprintf(gr,"%s_%s",detector[j],detector[k]);
      TGraph *gr_temp=(TGraph*)mgr_can->cd(d)->FindObject(gr)->Clone(gr);
      printf("time offsets from %20s is: %f +- %f\n",gr_temp->GetTitle(),lin_fit_slope[d-1],lin_fit_slope_err[d-1]);
      printf("distance from %20s is: %f +- %f\tcm\n\n",gr_temp->GetTitle(),lin_fit_offset[d-1]*speed_of_light,lin_fit_offset_err[d-1]*speed_of_light);
    }
  }

  
  cout << "you can find the new file :vel_cal.root"<< endl;
  
}
  
