TFile* fdataT = TFile::Open("./rootfiles/dataTrue_template.root");
TFile* fdataF = TFile::Open("./rootfiles/dataFake_template.root");
TFile* fmcT = TFile::Open("./rootfiles/mcTrue_template.root");
TFile* fmcF = TFile::Open("./rootfiles/mcFake_template.root");
TFile* fdata = TFile::Open("./rootfiles/waData_template.root");
TFile* fmc = TFile::Open("./rootfiles/waMC_template.root");
void drawcom(double lowpt,double highpt){
TFile *f0 = new TFile(Form("./rootfiles/fdata_%0.f_%0.f.root",lowpt,highpt));
TTree *tree_datawa = (TTree*)f0->Get("tree_datawa");

TH1F* hdata = (TH1F*)fdata->Get(Form("hdatawa_pt%0.f-%0.f",lowpt,highpt));
TH1F* hsieie = (TH1F*)fdata->Get(Form("hsieie_pt%0.f-%0.f",lowpt,highpt));
TH1F* hfake_ = (TH1F*)fdataF->Get(Form("h3_pt%0.f-%0.f",lowpt,highpt));
TH1F* htrue_ = (TH1F*)fdataT->Get(Form("h4_pt%0.f-%0.f",lowpt,highpt));
TH1F* hmt_ = (TH1F*)fmcT->Get(Form("h2_pt%0.f-%0.f",lowpt,highpt));
TH1F* hmf_ = (TH1F*)fmcF->Get(Form("h1_pt%0.f-%0.f",lowpt,highpt));
TH1F* hmc = (TH1F*)fmc->Get(Form("hmcwa_pt%0.f-%0.f",lowpt,highpt));
/*Double_t nDataFake = hfake_->Integral();
Double_t nDataTrue = htrue_->Integral();
Double_t nMCFake = hmf_->Integral();
Double_t nMCTrue = hmt_->Integral();

cout<<lowpt<<"~"<<highpt<<": nDataFake = "<<nDataFake<<"; nMCFake"<<nMCFake<<endl;
cout<<lowpt<<"~"<<highpt<<": nDataTrue = "<<nDataTrue<<"; nMCTrue"<<nMCTrue<<endl;*/
htrue_ -> Add(hmt_,-1);
hfake_ -> Add(hmf_,-1);

TCanvas*c1 = new TCanvas("c1","",900,600);        
htrue_->Draw("hist");
hsieie->SetLineColor(kRed);
hsieie->Draw("same hist");
//c1->Print(Form("true_pt%0.f-%0.f.pdf",lowpt,highpt));
Double_t test = hsieie->GetSumOfWeights()/htrue_->GetSumOfWeights();
Double_t nReal=hsieie->Integral();
Double_t nFake=hfake_->Integral();//
Double_t nTrue=htrue_->Integral();
Double_t nBins = hfake_->GetNbinsX();
Double_t nMax = hdata->GetSumOfWeights();
Double_t nTrueStart = hmc->GetSumOfWeights();
Double_t nFakeStart = nMax - nTrueStart;
std::cout<<lowpt<<"~"<<highpt<<": nMax = "<<nMax<<"; nTrueStart = "<<nTrueStart<<"; nFakeStart = "<<nFakeStart<<"; nTrue = "<<nTrue<<"; nReal = "<<nReal<<"; nFake = "<<nFake<<std::endl;

TCanvas*can = new TCanvas("can","",900,600);        
hdata->SetLineColor(kRed);
hdata->Draw("hist");
htrue_->SetLineColor(kGreen);
htrue_->Draw("same hist");
hfake_->SetLineColor(kBlue);
hfake_->Draw("same hist");
TLegend*L1=new TLegend(0.7,0.7,0.9,0.9);
L1->AddEntry(hdata,"data","L");
L1->AddEntry(htrue_,"true","L");
L1->AddEntry(hfake_,"fake","L");
L1->Draw();
can->Print(Form("template_pt%0.f-%0.f.pdf",lowpt,highpt));
delete can;

}
int main(){
        drawcom(25,30);
        drawcom(30,35);
        drawcom(35,40);
        drawcom(40,45);
        drawcom(45,50);
        drawcom(50,60);
        drawcom(60,80);
        drawcom(80,120);
        drawcom(120,400);
}
