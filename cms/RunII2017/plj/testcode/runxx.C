#include "xx.C"
#include <fstream>
void runxx() {
//gROOT->LoadMacro("xx.C");
TString dir="/eos/uscms/store/user/qliphy/andy/2017/cutlep/";
//TString dir="/eos/uscms/store/user/qliphy/andy/2017/";
//TString dir="/uscms_data/d3/qliphy/andy/CMSSW_9_4_9_cand2/small/cutla/";

ifstream infile("file");
string buffer; 
TString name;

int k=1;

while (k>0){
	getline (infile, buffer) ;
	name = buffer;
	if(name.Contains("Muon")==0) {k=-2; continue;}
	TString outname= name+"_pljnew.root";
	TString inname=/*"cutlep-out"+*/name+".root";
	cout<<inname<<endl;
	cout<<outname<<endl;
	TFile *file1;
	TTree *tree1; 
	if(name.Contains("Muon")) 
	{
		file1 =new TFile(dir+inname);
		//tree1 = (TTree*) file1->Get("treeDumper/ZPKUCandidates");
		tree1 = (TTree*) file1->Get("demo");
	}
	if(name.Contains("Ele")) 
	{
		file1 =new TFile(dir+inname);
		TDirectory *dir1 = (TDirectory*)file1->Get("treeDumper");
		tree1 = (TTree*) dir1->Get("ZPKUCandidates");
	}
xx m1(tree1,outname);
cout<<outname<<endl;
m1.Loop();
m1.endJob();
 
}
}

int main(){
	runxx();
	return 1;
}

