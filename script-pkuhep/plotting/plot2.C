{
#include "TAxis.h"
#include "TH2.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TNtupleD.h"
#include <stdio.h>
#include <stdlib.h>
#include <vector.h>


     TFile *file1 = new TFile("./DQM_csc.root","R"); 
     file1->cd("DQMData/Run 1/Muons/Run summary/RecoMuonV/MultiTrack/standAloneMuons_UpdAtVtx");
     TH1D* h1= (TH1D*) effic->Clone();

     TFile *file2 = new TFile("./DQM_cscgem.root","R"); 
     file2->cd("DQMData/Run 1/Muons/Run summary/RecoMuonV/MultiTrack/standAloneMuons_UpdAtVtx");
     TH1D* h2= (TH1D*) effic->Clone();

     h1->SetLineColor(kRed);
     h2->SetLineColor(kBlue);
     h1->SetMaximum(float(1.2)*h1->GetMaximum());
     h1->SetMinimum(float(0.5)*h1->GetMinimum());
     h1->GetXaxis()->SetRangeUser(1.2,2.5);
     h1->GetYaxis()->SetRangeUser(0.2,1.05);

      gStyle->SetPadBorderMode(0);
      gStyle->SetOptStat(0);
      gStyle->SetPadGridX(1);
      gStyle->SetPadGridY(1);
      gStyle->SetPadTickX(1);
      gStyle->SetPadTickY(1);
      gStyle->SetPadTickX(1);
      gStyle->SetPadTickY(1);
      gStyle->SetAxisColor(1, "XYZ");
      gStyle->SetStripDecimals(kTRUE);
      gStyle->SetTickLength(0.03, "XYZ");
      gStyle->SetNdivisions(510, "XYZ");

     TCanvas *c01 = new TCanvas("c01","",700,500);

     //c01->SetLogy();
     h1->SetStats(kFALSE);
     h1->GetXaxis()->SetTitle("Muon |#eta|");
     h1->GetYaxis()->SetTitle("STAMuon Efficiency");
     h1->GetXaxis()->SetTitleSize(0.043);
     h1->GetYaxis()->SetTitleSize(0.05);
     h1->GetXaxis()->CenterTitle();
     h1->GetYaxis()->CenterTitle();
     h1->SetLineWidth(3);
     h1->Draw("HIST e");
     h2->SetLineWidth(3);
     h2->Draw("HIST e, same");
 



     TLegend *l1 = new TLegend(0.54,0.16,0.89,0.45);
     l1->SetBorderSize(2);
     l1->SetFillColor(0);
     l1->AddEntry(h1,"No seeds from ME1/1","l");
     l1->AddEntry(h2,"No seeds from ME1/1 + GEM seeding","l");
     l1->Draw();

/*     TLatex *t = new TLatex();
     t->SetNDC();
     t->SetTextAlign(22);
     t->SetTextFont(63);
     t->SetTextSizePixels(19);
     t->DrawLatex(0.5,0.85,"2016 SingleMuon Rereco, TTbar Control Region");
     t->Draw();
*/
//     c01->SaveAs("csc2-eta.png");
     c01->SaveAs("effic-s2.eps");
//     c01->SaveAs("csc2-eta.pdf");

}
