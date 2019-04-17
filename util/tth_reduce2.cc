#include "tthmltree.h"

int main(int argc, char const *argv[])
{
	TString prefix = PACKAGE_DIR;
	ifstream fn(argv[1]);
	if(!fn) {
	  fprintf(stderr,"Error: can't open file: %s\n",argv[1]);
	  return 1;
	}
	bool doplot = 1;
	char inputline[100];
	vector<TString> regions;
	//regions.push_back("reg1l2tau1bnj");
	//regions.push_back("reg1l1tau1b2j");
	//regions.push_back("reg1l1tau1b3j");

	//regions.push_back("reg1e1mu1tau1b");
	//regions.push_back("reg1e1mu1tau2b");
	//regions.push_back("reg1e1mu2b");
	//regions.push_back("reg1e1mu2bnj");
	regions.push_back("reg1l1tau2b1j_os");
	regions.push_back("reg1l1tau2b1j_ss");
	//regions.push_back("reg1l2b2j");

	tthmltree *analysis = new tthmltree();
	analysis->debug = 1;

	analysis->writetree = 0;
	analysis->fcnc = 1;
	analysis->reduce = 2;
	analysis->dumptruth = 1;
	analysis->readTFmeanstd("meanstddevs.txt");

	fn.getline(inputline,200);
	char cate[100];
	char title[100];
	int version;
	sscanf(inputline,"%d %s %s",&version,cate,title);
	if(doplot) analysis->init_hist(cate);
	analysis->version = version;
	analysis->init_sample(cate, title);
	TString rootfilename = prefix + "/data/reduce1/" + cate + "_tree.root";
	printf("reading Root file: %s\n", rootfilename.Data());
	TFile inputfile(rootfilename);
	for (auto i : regions)
	{
		printf("region: %s\n", i.Data());
		if(!(TTree*)inputfile.Get(i.Data())) {
			printf("TTree name not found: %s\n", i.Data());
			exit(1);
		}
		analysis->Loop( (TTree*)inputfile.Get(i.Data()), cate);
		printf("finish loop on region: %s\n", i.Data());
	}
	analysis->finalise_sample();
	inputfile.Close();
	return 0;
}
