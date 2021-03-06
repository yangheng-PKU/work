#define ppac_cxx
#include "ppac.h"
#include <TH2.h>
#include <TF1.h>
#include <TFile.h>
#include <TStyle.h>
#include <TCanvas.h>
using namespace std;
void ppac::Loop()
{
//   In a ROOT session, you can do:
//      root> .L ppac.C
//      root> ppac t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//
//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();
   std::cout<<"nentries = "<<nentries<<std::endl;
//    nentries=1000;

   fChain->SetBranchStatus("*",0);
   fChain->SetBranchStatus("PPACF8",1);

   TFile *f=new TFile("test0410.root","RECREATE");
   TTree *tr1=new TTree("tr1","tr1");
   TTree *tr2=new TTree("tr2","tr2");

   tr1->Branch("targetX",&targetX,"targetX/F");  
   tr1->Branch("targetY",&targetY,"targetY/F");
   tr1->Branch("chi2x",&chi2x,"chi2x/F");
   tr1->Branch("chi2y",&chi2y,"chi2y/F");
   tr2->Branch("x",&x,"x[5]/F");
   tr2->Branch("zx",&zx,"zx[5]/F");
   tr2->Branch("y",&y,"y[5]/F");
   tr2->Branch("zy",&zy,"zy[5]/F");
   TGraph* gx =new  TGraph();
   TGraph* gy =new  TGraph();
   TF1* fx=new  TF1("fx","[0]*x+[1]",-2000,2000);
   TF1* fy=new  TF1("fy","[0]*x+[1]",-2000,2000);
   fx->SetParameters(0,1);
   fy->SetParameters(1,1);
   Long64_t nbytes = 0, nb = 0;
   Float_t ZZ=0;
   Int_t mx=0,my=0,m=0;
   Float_t ax,bx,ay,by;
   Double_t ppac1ax=0,ppac1ay=0,ppac1axy=0,ppac1bx=0,ppac1by=0,ppac1bxy=0,ppac2ax=0,ppac2ay=0,ppac2axy=0,ppac2bx=0,ppac2by=0,ppac2bxy=0,ppac3x=0,ppac3y=0,ppac3xy=0;
//   Double_t Eppac1ax,Eppac1ay,Eppac1axy,Eppac1bxy,Eppac1bx,Eppac1by,Eppac2ax,Eppac2ay,Eppac2axy,Eppac2bxy,Eppac2bx,Eppac2by,Eppac3x,Eppac3y;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      if(jentry%1000==0) std::cout<<jentry<<std::endl;
      ResetVal();
      select();
 for(Int_t k=0;k<5;k++){
    if( numberx>2 && Goodx[k]==true  ){
      gx->SetPoint(p,zx[k],x[k]);//zx是横坐标
      p=p+1;
      case1x=true;}
    if( numberx == 2 && Goodx[k]==true && (!(countx[0]==1&&countx[1]==1) || !(countx[2]==1&&countx[3]==1))){
      gx->SetPoint(p,zx[k],x[k]);
      p=p+1;
      case2x=true; }

    if( numbery>2 && Goody[k]==true  ){
      gy->SetPoint(p,zy[k],y[k]);
      p=p+1;
      case1y=true;}
    if( numbery == 2 && Goody[k]==true && (!(county[0]==1&&county[1]==1) || !(county[2]==1&&county[3]==1))){
      gy->SetPoint(p,zy[k],y[k]);
      p=p+1;
      case2y=true; }
     }
    if(Goody[4]==true){ppac3y++;}
    if(Goodx[4]==true){ppac3x++;}
    if(Goody[4]==true&&Goodx[0]==true) {ppac1ax++;}
    if(Goody[4]==true&&Goody[0]==true) {ppac1ay++;}
    if(Goody[4]==true&&Goodx[0]==true&&Goody[0]==true) {ppac1axy++;}    

    if(Goody[4]==true&&Goodx[1]==true) {ppac1bx++;}
    if(Goody[4]==true&&Goody[1]==true) {ppac1by++;}
    if(Goody[4]==true&&Goodx[1]==true&&Goody[1]==true) {ppac1bxy++;}    

    if(Goody[4]==true&&Goodx[2]==true) {ppac2ax++;}
    if(Goody[4]==true&&Goody[2]==true) {ppac2ay++;}
    if(Goody[4]==true&&Goodx[2]==true&&Goody[2]==true) {ppac2axy++;}    

    if(Goody[4]==true&&Goodx[3]==true) {ppac2bx++;}
    if(Goody[4]==true&&Goody[3]==true) {ppac2by++;}
    if(Goody[4]==true&&Goodx[3]==true&&Goody[3]==true) {ppac2bxy++;}    

    if(Goody[4]==true&&Goodx[4]==true) {ppac3xy++;}
    

    if(case1x==false&&case2x==false&&case1y==false&&case2y==false)
       continue;
    m++;
//    if ((case1x==true  || case2x==true) && (case1y==true  || case2y==true) ){
//    mxy++;
    if(case1x==true||case2x==true)
    mx++;
    gx->Fit(fx);
    ax=fx->GetParameter(0);
    bx=fx->GetParameter(1);
    chi2x = fx->GetChisquare();
    targetX=ax*ZZ+bx;//公式这样写意味着拟合时候横坐标是z
    if(case1y==true||case2y==true)
    my++;
    gy->Fit(fy);
    ay=fy->GetParameter(0);
    by=fy->GetParameter(1);
    chi2y = fy->GetChisquare();
    targetY=ay*ZZ+by;//公式这样写意味着拟合时候横坐标是z
    tr1->Fill();
    tr2->Fill();
  }
 std::cout<<"mx = "<<mx<<endl;
 std::cout<<"my = "<<my<<endl;
 std::cout<<"m = "<<m<<endl;
 cout<<"ppac1ax = "<<ppac1ax<<endl;
 cout<<"ppac1ay = "<<ppac1ay<<endl;
 cout<<"ppac1bx = "<<ppac1bx<<endl;
 cout<<"ppac1bx = "<<ppac1bx<<endl;
 cout<<"ppac2ax = "<<ppac2ax<<endl;
 cout<<"ppac2ay = "<<ppac2ax<<endl;
 cout<<"ppac2bx = "<<ppac2bx<<endl;
 cout<<"ppac2by = "<<ppac2bx<<endl;
 cout<<"ppac3x = "<<ppac3x<<endl;
 cout<<"ppac3y = "<<ppac3y<<endl;
 cout<<"ppac3xy = "<<ppac3xy<<endl;
 cout<<"Eppac1ax = "<<ppac1ax/ppac3y<<endl<<"Eppac1ay = "<<ppac1ay/ppac3y<<endl<<"Eppac1axy = "<<ppac1axy/ppac3y<<endl;
 cout<<"Eppac1bx = "<<ppac1bx/ppac3y<<endl<<"Eppac1by = "<<ppac1by/ppac3y<<endl<<"Eppac1bxy = "<<ppac1bxy/ppac3y<<endl;
 cout<<"Eppac2ax = "<<ppac2ax/ppac3y<<endl<<"Eppac2ay = "<<ppac2ay/ppac3y<<endl<<"Eppac2axy = "<<ppac2axy/ppac3y<<endl;
 cout<<"Eppac2bx = "<<ppac2bx/ppac3y<<endl<<"Eppac2by = "<<ppac2by/ppac3y<<endl<<"Eppac2bxy = "<<ppac2bxy/ppac3y<<endl;
 cout<<"Eppac3x = "<<ppac3xy/ppac3y<<endl<<"Eppac3y = "<<ppac3xy/ppac3x<<endl;
 tr1->Write();
 tr2->Write();
 f->Close(); 
 }
//void ppac::BranchOpt(TTree *opt)
//{
//  opt->Branch("targetX",&targetX,"targetX/F");
//  opt->Branch("targetY",&targetY,"targetY/F");
//}

void ppac::select()
{
  for(Int_t i=0;i<5;i++){
        Ta = PPACF8[i][4]>0;
        conditionx[i]= abs(PPACF8[i][0])<=120;
        conditionx[i] =conditionx[i]*Ta;
        conditiony[i]= abs(PPACF8[i][1])<=75;
        conditiony[i] =conditiony[i]*Ta;
        Goodx[i]=false;
        Goody[i]=false;
        countx[i]=0;
        county[i]=0;
         x[i]  = PPACF8[i][0];  
        zx[i]  = PPACF8[i][2];  
         y[i]  = PPACF8[i][1];  
        zy[i]  = PPACF8[i][3];  
        if(conditionx[i]) {
           Goodx[i]=true;
           countx[i]=1;
           numberx +=countx[i]; 
           }
        if(conditiony[i]) {
           Goody[i]=true;
           county[i]=1;
           numbery +=county[i]; 
           }
       } 
    std::cout<<"number in the X direction = "<<numberx<<endl;
    std::cout<<"number in the Y direction = "<<numbery<<endl;
}
void ppac::ResetVal()
{
for(Int_t i=0;i<5;i++){
   x[i]  = -999; 
   zx[i] = -999; 
   y[i]  = -999; 
   zy[i] = -999; 
  }
   targetX=-999;
   targetY=-999;
   case1x=false;
   case2x=false;
   case1y=false;
   case2y=false;
   p=0;
   numberx=0;
   numbery=0;
}


//void ppac::fit()
//{
//   TGraph* gx =new  TGraph();
//   TGraph* gy =new  TGraph();
//   TF1* fx=new  TF1("fx","[0]*x+[1]",-2000,2000);
//   TF1* fy=new  TF1("fy","[0]*x+[1]",-2000,2000);
// for(Int_t k=0;k<5;k++){
//    if( numberx>2 && Goodx[k]==true  ){
//      gx->SetPoint(p,zx[k],x[k]);//zx是横坐标
//      p=p+1;
//      n1++; 
//      case1x=true;}
//
//    if( numberx == 2 && Goodx[k]==true && (!(countx[0]==1&&countx[1]==1) || !(countx[2]==1&&countx[3]==1))){
//      gx->SetPoint(p,zx[k],x[k]);
//      p=p+1;
//      case2x=true; }
//    
//    if( numbery>2 && Goody[k]==true  ){
//      gy->SetPoint(p,zy[k],y[k]);
//      p=p+1;
//      n1++; 
//      case1y=true;}
//
//    if( numbery == 2 && Goody[k]==true && (!(county[0]==1&&county[1]==1) || !(county[2]==1&&county[3]==1))){
//      gy->SetPoint(p,zy[k],y[k]);
//      p=p+1;
//      case2y=true; }
//   
//  }
// delete fx;
// delete fy;
// delete gx;
// delete gy;
//}
