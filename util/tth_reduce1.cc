#include "tthmltree.h"

int main(int argc, char const *argv[])
{

	bool doplot = 1;
	TString prefix1;
	TString prefix = PACKAGE_DIR;
	ifstream fn(argv[1]);
	if(!fn) {
	  fprintf(stderr,"Error: can't open file: %s\n",argv[1]);
	  return 1;
	}
	char inputline[100];

	tthmltree *analysis = new tthmltree();
        analysis->dofcnc = 1;
	analysis->reduce = 1;
	analysis->debug = 0;
        analysis->dumptruth = 0;
	fn.getline(inputline,200);
	char filename[100];
	char cate[100];
	char title[100];
	int version;
	sscanf(inputline,"%d %s %s %s",&version,filename,cate,title);
	prefix1 ="/global/projecta/projectdirs/atlas/weiming/testareaSL5/AxAODsData/tthAnaTop/Hist/25ns_R21SkimV";
	prefix1 += char('0'+ version);
	prefix1 += "/MytthAnaSkim_";
	printf("reading list: %s as %s with name %s\n", (prefix + "/datafiles/tthML/" + filename + ".txt").Data(), cate, title);
	ifstream list(prefix + "/datafiles/tthML/" + filename + ".txt");
	analysis->version = version;
	analysis->init_hist(cate);
	analysis->init_sample(cate, title);
	while(!list.eof()){
		list.getline(inputline,200);
		if(strlen(inputline)==0) continue;
		if(inputline[0]=='#') continue;
		printf("reading Root file: %s\n", (prefix1 + inputline).Data());
		TFile inputfile(prefix1 + inputline);
		analysis->Loop( (TTree*)inputfile.Get("nominal"), cate);
		inputfile.Close();
	}
	analysis->finalise_sample();
	if(doplot) analysis->plot();
	return 0;
}