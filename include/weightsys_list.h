#include <iostream>

std::vector<TString> fakeNPlist = {
	//"fakeSF_tthML",
	//"fakeSF_origin",
	//"fakeSFNP_tthML_ptbin0_prongbin0",
	//"fakeSFNP_tthML_ptbin1_prongbin0",
	//"fakeSFNP_tthML_ptbin2_prongbin0",
	//"fakeSFNP_tthML_ptbin0_prongbin1",
	//"fakeSFNP_tthML_ptbin1_prongbin1",
	//"fakeSFNP_tthML_ptbin2_prongbin1",
	//"fakeSFNP_origin_0",
	//"fakeSFNP_origin_1",
	//"fakeSFNP_origin_2",
	//"fakeSFNP_origin_3",
	//"fakeSFNP_origin_4",
	//"fakeSFNP_origin_5",
	//"fakeSFNP_origin_6",
	//"fakeSFNP_origin_7"
	"fakeSFNP_ptbin0", //fitting stats. uncertainty, 6 parameters for OS regions in total
	"fakeSFNP_ptbin1",
	"fakeSFNP_ptbin2",
	"fakeSFNP_ptbin0_wjet",
	"fakeSFNP_ptbin1_wjet",
	"fakeSFNP_ptbin2_wjet",
	"fake_mismodelling" //mis-modelling in SS region, the data-MC difference is added to OS w-jet faking uncertainty.
};

std::vector<TString> commonNPlist = { //common NP for both tthML and xTFW
	"NOMINAL",
	"PRW_up",
	"PRW_down",
	"jvt_up",
	"jvt_down",
	"btag_B_0_up",
	"btag_B_0_down",
	"btag_B_1_up",
	"btag_B_1_down",
	"btag_B_2_up",
	"btag_B_2_down",
	"btag_B_3_up",
	"btag_B_3_down",
	"btag_B_4_up",
	"btag_B_4_down",
	"btag_B_5_up",
	"btag_B_5_down",
	"btag_B_6_up",
	"btag_B_6_down",
	"btag_B_7_up",
	"btag_B_7_down",
	"btag_B_8_up",
	"btag_B_8_down",
	"btag_C_0_up",
	"btag_C_0_down",
	"btag_C_1_up",
	"btag_C_1_down",
	"btag_C_2_up",
	"btag_C_2_down",
	"btag_C_3_up",
	"btag_C_3_down",
	"btag_Light_0_up",
	"btag_Light_0_down",
	"btag_Light_1_up",
	"btag_Light_1_down",
	"btag_Light_2_up",
	"btag_Light_2_down",
	"btag_Light_3_up",
	"btag_Light_3_down",
	"btag_Light_4_up",
	"btag_Light_4_down",
	"btag_extrapolation_up",
	"btag_extrapolation_down",
	"btag_extrapolation_from_charm_up",
	"btag_extrapolation_from_charm_down",
};

std::vector<TString> theoryNPlist = { // theory uncertainties, the recipe is changed, need to ask conveners.
	"muR=100,muF=200",
	"muR=100,muF=050",
	"muR=200,muF=100",
	"muR=050,muF=100",
	"muR=050,muF=050",
	"muR=200,muF=200",
	"muR=200,muF=050",
	"muR=050,muF=200",
	"PDFset=260001",
	"PDFset=260002",
	"PDFset=260003",
	"PDFset=260004",
	"PDFset=260005",
	"PDFset=260006",
	"PDFset=260007",
	"PDFset=260008",
	"PDFset=260009",
	"PDFset=260010",
	"PDFset=260011",
	"PDFset=260012",
	"PDFset=260013",
	"PDFset=260014",
	"PDFset=260015",
	"PDFset=260016",
	"PDFset=260017",
	"PDFset=260018",
	"PDFset=260019",
	"PDFset=260020",
	"PDFset=260021",
	"PDFset=260022",
	"PDFset=260023",
	"PDFset=260024",
	"PDFset=260025",
	"PDFset=260026",
	"PDFset=260027",
	"PDFset=260028",
	"PDFset=260029",
	"PDFset=260030",
	"PDFset=260031",
	"PDFset=260032",
	"PDFset=260033",
	"PDFset=260034",
	"PDFset=260035",
	"PDFset=260036",
	"PDFset=260037",
	"PDFset=260038",
	"PDFset=260039",
	"PDFset=260040",
	"PDFset=260041",
	"PDFset=260042",
	"PDFset=260043",
	"PDFset=260044",
	"PDFset=260045",
	"PDFset=260046",
	"PDFset=260047",
	"PDFset=260048",
	"PDFset=260049",
	"PDFset=260050",
	"PDFset=260051",
	"PDFset=260052",
	"PDFset=260053",
	"PDFset=260054",
	"PDFset=260055",
	"PDFset=260056",
	"PDFset=260057",
	"PDFset=260058",
	"PDFset=260059",
	"PDFset=260060",
	"PDFset=260061",
	"PDFset=260062",
	"PDFset=260063",
	"PDFset=260064",
	"PDFset=260065",
	"PDFset=260066",
	"PDFset=260067",
	"PDFset=260068",
	"PDFset=260069",
	"PDFset=260070",
	"PDFset=260071",
	"PDFset=260072",
	"PDFset=260073",
	"PDFset=260074",
	"PDFset=260075",
	"PDFset=260076",
	"PDFset=260077",
	"PDFset=260078",
	"PDFset=260079",
	"PDFset=260080",
	"PDFset=260081",
	"PDFset=260082",
	"PDFset=260083",
	"PDFset=260084",
	"PDFset=260085",
	"PDFset=260086",
	"PDFset=260087",
	"PDFset=260088",
	"PDFset=260089",
	"PDFset=260090",
	"PDFset=260091",
	"PDFset=260092",
	"PDFset=260093",
	"PDFset=260094",
	"PDFset=260095",
	"PDFset=260096",
	"PDFset=260097",
	"PDFset=260098",
	"PDFset=260099",
	"PDFset=260100",
	"ISR_up",
	"ISR_down",
	"FSR_up",
	"FSR_down"
};

std::vector<TString> xTFWNPlist = {
	"fjvt_up",
	"fjvt_down",
	"tauEveto_E_STATHIGHMU_up",
	"tauEveto_E_STATHIGHMU_down",
	"tauEveto_E_STATLOWMU_up",
	"tauEveto_E_STATLOWMU_down",
	"tauEveto_E_SYST_up",
	"tauEveto_E_SYST_down",
	"tauEveto_TOTAL_up",
	"tauEveto_TOTAL_down",
	"tauEveto_TOTAL_up",
	"tauEveto_TOTAL_down",
	"tauID_1P2025_up",
	"tauID_1P2025_down",
	"tauID_1P2530_up",
	"tauID_1P2530_down",
	"tauID_1P3040_up",
	"tauID_1P3040_down",
	"tauID_1PGE40_up",
	"tauID_1PGE40_down",
	"tauID_3P2030_up",
	"tauID_3P2030_down",
	"tauID_3PGE30_up",
	"tauID_3PGE30_down",
	"tauID_HIGHPT_up",
	"tauID_HIGHPT_down",
	"tauID_SYST_up",
	"tauID_SYST_down",
	"tauRecon_HIGHPT_up",
	"tauRecon_HIGHPT_down",
	"tauRecon_TOTAL_up",
	"tauRecon_TOTAL_down",
	"tauRecon_HIGHPT_up",
	"tauRecon_HIGHPT_down",
	"tauRecon_TOTAL_up",
	"tauRecon_TOTAL_down",
	"tauTrigger_STATDATA2015_up",
	"tauTrigger_STATDATA2015_down",
	"tauTrigger_STATDATA2016_up",
	"tauTrigger_STATDATA2016_down",
	"tauTrigger_STATDATA2017_up",
	"tauTrigger_STATDATA2017_down",
	"tauTrigger_STATMC2015_up",
	"tauTrigger_STATMC2015_down",
	"tauTrigger_STATMC2016_up",
	"tauTrigger_STATMC2016_down",
	"tauTrigger_STATMC2017_up",
	"tauTrigger_STATMC2017_down",
	"tauTrigger_SYST2015_up",
	"tauTrigger_SYST2015_down",
	"tauTrigger_SYST2016_up",
	"tauTrigger_SYST2016_down",
	"tauTrigger_SYST2017_up",
	"tauTrigger_SYST2017_down",
	"tauTrigger_STATDATA2015_up",
	"tauTrigger_STATDATA2015_down",
	"tauTrigger_STATDATA2016_up",
	"tauTrigger_STATDATA2016_down",
	"tauTrigger_STATDATA2017_up",
	"tauTrigger_STATDATA2017_down",
	"tauTrigger_STATMC2015_up",
	"tauTrigger_STATMC2015_down",
	"tauTrigger_STATMC2016_up",
	"tauTrigger_STATMC2016_down",
	"tauTrigger_STATMC2017_up",
	"tauTrigger_STATMC2017_down",
	"tauTrigger_SYST2015_up",
	"tauTrigger_SYST2015_down",
	"tauTrigger_SYST2016_up",
	"tauTrigger_SYST2016_down",
	"tauTrigger_SYST2017_up",
	"tauTrigger_SYST2017_down"
};
std::vector<TString> tthMLNPlist = {
	"Ele_Reco_up",
	"Ele_Reco_down",
	"Ele_ID_up",
	"Ele_ID_down",
	"Ele_Isol_up",
	"Ele_Isol_down",
	"Mu_ID_STAT_up",
	"Mu_ID_STAT_down",
	"Mu_ID_SYST_up",
	"Mu_ID_SYST_down",
	"Mu_ID_STAT_LOWPT_up",
	"Mu_ID_STAT_LOWPT_down",
	"Mu_ID_SYST_LOWPT_up",
	"Mu_ID_SYST_LOWPT_down",
	"Mu_Isol_STAT_up",
	"Mu_Isol_STAT_down",
	"Mu_Isol_SYST_up",
	"Mu_Isol_SYST_down",
	"Mu_TTVA_STAT_up",
	"Mu_TTVA_STAT_down",
	"Mu_TTVA_SYST_up",
	"Mu_TTVA_SYST_down",
	"tauEveto_TOTAL_up",
	"tauEveto_TOTAL_down",
	"tauEveto_E_TOTAL_up",
	"tauEveto_E_TOTAL_down",
	"tauID_TOTAL_up",
	"tauID_TOTAL_down",
	"tauID_HIGHPT_up",
	"tauID_HIGHPT_down",
	"tauRecon_TOTAL_up",
	"tauRecon_TOTAL_down",
	"tauRecon_HIGHPT_up",
	"tauRecon_HIGHPT_down",
};

std::vector<TString> tthMLtreeNPlist = {
	"EG_RESOLUTION_ALL__1down",
	"EG_RESOLUTION_ALL__1up",
	"EG_SCALE_AF2__1down",
	"EG_SCALE_AF2__1up",
	"EG_SCALE_ALL__1down",
	"EG_SCALE_ALL__1up",
	"JET_CategoryReduction_JET_BJES_Response__1down",
	"JET_CategoryReduction_JET_BJES_Response__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Detector1__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Detector1__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Mixed1__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Mixed1__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Mixed2__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Mixed2__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Mixed3__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Mixed3__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling1__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling1__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling2__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling2__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling3__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling3__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling4__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Modelling4__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical1__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical1__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical2__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical2__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical3__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical3__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical4__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical4__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical5__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical5__1up",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical6__1down",
	"JET_CategoryReduction_JET_EffectiveNP_Statistical6__1up",
	"JET_CategoryReduction_JET_EtaIntercalibration_Modelling__1down",
	"JET_CategoryReduction_JET_EtaIntercalibration_Modelling__1up",
	"JET_CategoryReduction_JET_EtaIntercalibration_NonClosure_highE__1down",
	"JET_CategoryReduction_JET_EtaIntercalibration_NonClosure_highE__1up",
	"JET_CategoryReduction_JET_EtaIntercalibration_NonClosure_negEta__1down",
	"JET_CategoryReduction_JET_EtaIntercalibration_NonClosure_negEta__1up",
	"JET_CategoryReduction_JET_EtaIntercalibration_NonClosure_posEta__1down",
	"JET_CategoryReduction_JET_EtaIntercalibration_NonClosure_posEta__1up",
	"JET_CategoryReduction_JET_EtaIntercalibration_TotalStat__1down",
	"JET_CategoryReduction_JET_EtaIntercalibration_TotalStat__1up",
	"JET_CategoryReduction_JET_Flavor_Composition__1down",
	"JET_CategoryReduction_JET_Flavor_Composition__1up",
	"JET_CategoryReduction_JET_Flavor_Response__1down",
	"JET_CategoryReduction_JET_Flavor_Response__1up",
	"JET_CategoryReduction_JET_Pileup_OffsetMu__1down",
	"JET_CategoryReduction_JET_Pileup_OffsetMu__1up",
	"JET_CategoryReduction_JET_Pileup_OffsetNPV__1down",
	"JET_CategoryReduction_JET_Pileup_OffsetNPV__1up",
	"JET_CategoryReduction_JET_Pileup_PtTerm__1down",
	"JET_CategoryReduction_JET_Pileup_PtTerm__1up",
	"JET_CategoryReduction_JET_Pileup_RhoTopology__1down",
	"JET_CategoryReduction_JET_Pileup_RhoTopology__1up",
	"JET_CategoryReduction_JET_PunchThrough_MC16__1down",
	"JET_CategoryReduction_JET_PunchThrough_MC16__1up",
	"JET_CategoryReduction_JET_SingleParticle_HighPt__1down",
	"JET_CategoryReduction_JET_SingleParticle_HighPt__1up",
	"JET_JER_SINGLE_NP__1up",
	"MET_SoftTrk_ResoPara",
	"MET_SoftTrk_ResoPerp",
	"MET_SoftTrk_ScaleDown",
	"MET_SoftTrk_ScaleUp",
	"MUON_ID__1down",
	"MUON_ID__1up",
	"MUON_MS__1down",
	"MUON_MS__1up",
	"MUON_SAGITTA_RESBIAS__1down",
	"MUON_SAGITTA_RESBIAS__1up",
	"MUON_SAGITTA_RHO__1down",
	"MUON_SAGITTA_RHO__1up",
	"MUON_SCALE__1down",
	"MUON_SCALE__1up",
	"TAUS_TRUEHADTAU_SME_TES_DETECTOR__1down",
	"TAUS_TRUEHADTAU_SME_TES_DETECTOR__1up",
	"TAUS_TRUEHADTAU_SME_TES_INSITU__1down",
	"TAUS_TRUEHADTAU_SME_TES_INSITU__1up",
	"TAUS_TRUEHADTAU_SME_TES_MODEL__1down",
	"TAUS_TRUEHADTAU_SME_TES_MODEL__1up"
};

std::vector<TString> xTFWtreeNPlist = {
	"TAUS_TRUEHADTAU_SME_TES_DETECTOR_1down",
	"TAUS_TRUEHADTAU_SME_TES_DETECTOR_1up",
	"TAUS_TRUEHADTAU_SME_TES_INSITU_1down",
	"TAUS_TRUEHADTAU_SME_TES_INSITU_1up",
	"TAUS_TRUEHADTAU_SME_TES_MODEL_1down",
	"TAUS_TRUEHADTAU_SME_TES_MODEL_1up",
	"JET_BJES_Response_1up",
	"JET_BJES_Response_1down",
	"JET_EffectiveNP_Detector1_1up",
	"JET_EffectiveNP_Detector1_1down",
	"JET_EffectiveNP_Detector2_1up",
	"JET_EffectiveNP_Detector2_1down",
	"JET_EffectiveNP_Mixed1_1up",
	"JET_EffectiveNP_Mixed1_1down",
	"JET_EffectiveNP_Mixed2_1up",
	"JET_EffectiveNP_Mixed2_1down",
	"JET_EffectiveNP_Mixed3_1up",
	"JET_EffectiveNP_Mixed3_1down",
	"JET_EffectiveNP_Modelling1_1up",
	"JET_EffectiveNP_Modelling1_1down",
	"JET_EffectiveNP_Modelling2_1up",
	"JET_EffectiveNP_Modelling2_1down",
	"JET_EffectiveNP_Modelling3_1up",
	"JET_EffectiveNP_Modelling3_1down",
	"JET_EffectiveNP_Modelling4_1up",
	"JET_EffectiveNP_Modelling4_1down",
	"JET_EffectiveNP_Statistical1_1up",
	"JET_EffectiveNP_Statistical1_1down",
	"JET_EffectiveNP_Statistical2_1up",
	"JET_EffectiveNP_Statistical2_1down",
	"JET_EffectiveNP_Statistical3_1up",
	"JET_EffectiveNP_Statistical3_1down",
	"JET_EffectiveNP_Statistical4_1up",
	"JET_EffectiveNP_Statistical4_1down",
	"JET_EffectiveNP_Statistical5_1up",
	"JET_EffectiveNP_Statistical5_1down",
	"JET_EffectiveNP_Statistical6_1up",
	"JET_EffectiveNP_Statistical6_1down",
	"JET_EtaIntercalibration_Modelling_1up",
	"JET_EtaIntercalibration_Modelling_1down",
	"JET_EtaIntercalibration_NonClosure_highE_1up",
	"JET_EtaIntercalibration_NonClosure_highE_1down",
	"JET_EtaIntercalibration_NonClosure_negEta_1up",
	"JET_EtaIntercalibration_NonClosure_negEta_1down",
	"JET_EtaIntercalibration_NonClosure_posEta_1up",
	"JET_EtaIntercalibration_NonClosure_posEta_1down",
	"JET_EtaIntercalibration_TotalStat_1up",
	"JET_EtaIntercalibration_TotalStat_1down",
	"JET_Flavor_Composition_1up",
	"JET_Flavor_Composition_1down",
	"JET_Flavor_Response_1up",
	"JET_Flavor_Response_1down",
	"JET_JER_DataVsMC_MC16_1up",
	"JET_JER_DataVsMC_MC16_1down",
	"JET_JER_EffectiveNP_1_1up",
	"JET_JER_EffectiveNP_1_1down",
	"JET_JER_EffectiveNP_2_1up",
	"JET_JER_EffectiveNP_2_1down",
	"JET_JER_EffectiveNP_3_1up",
	"JET_JER_EffectiveNP_3_1down",
	"JET_JER_EffectiveNP_4_1up",
	"JET_JER_EffectiveNP_4_1down",
	"JET_JER_EffectiveNP_5_1up",
	"JET_JER_EffectiveNP_5_1down",
	"JET_JER_EffectiveNP_6_1up",
	"JET_JER_EffectiveNP_6_1down",
	"JET_JER_EffectiveNP_7restTerm_1up",
	"JET_JER_EffectiveNP_7restTerm_1down",
	"JET_Pileup_OffsetMu_1up",
	"JET_Pileup_OffsetMu_1down",
	"JET_Pileup_OffsetNPV_1up",
	"JET_Pileup_OffsetNPV_1down",
	"JET_Pileup_PtTerm_1up",
	"JET_Pileup_PtTerm_1down",
	"JET_Pileup_RhoTopology_1up",
	"JET_Pileup_RhoTopology_1down",
	"JET_PunchThrough_MC16_1up",
	"JET_PunchThrough_MC16_1down",
	"JET_SingleParticle_HighPt_1up",
	"JET_SingleParticle_HighPt_1down",
	"JET_TILECORR_Uncertainty_1down",
	"JET_TILECORR_Uncertainty_1up",
	"MET_SoftTrk_ResoPara",
	"MET_SoftTrk_ResoPerp",
	"MET_SoftTrk_ScaleDown",
	"MET_SoftTrk_ScaleUp"
};

std::vector<TString> sampleNPlist = {
	"ttbarsys_frag",
	"ttbarsys_hscatter",
};

std::vector<TString> xsecNPlist = {
	"ztautauXsec_up",
	"ztautauXsec_down",
	"ttbarXsec_up",
	"ttbarXsec_down",
};

std::vector<TString> tthMLmajorNPlist = {
	"tauEveto_TOTAL_up",
	"tauEveto_TOTAL_down",
	"tauEveto_E_TOTAL_up",
	"tauEveto_E_TOTAL_down",
	"tauID_TOTAL_up",
	"tauID_TOTAL_down",
	"tauID_HIGHPT_up",
	"tauID_HIGHPT_down",
	"tauRecon_TOTAL_up",
	"tauRecon_TOTAL_down",
	"tauRecon_HIGHPT_up",
	"tauRecon_HIGHPT_down",
};

std::vector<TString> tthMLmajortreeNPlist = {
	"TAUS_TRUEHADTAU_SME_TES_DETECTOR_1down",
	"TAUS_TRUEHADTAU_SME_TES_DETECTOR_1up",
	"TAUS_TRUEHADTAU_SME_TES_INSITU_1down",
	"TAUS_TRUEHADTAU_SME_TES_INSITU_1up",
	"TAUS_TRUEHADTAU_SME_TES_MODEL_1down",
	"TAUS_TRUEHADTAU_SME_TES_MODEL_1up"
};
std::vector<TString> xTFWmajorNPlist = {};

TString findNPname(TString &dirname, int iNP = 0, TString framework = "tthML"){

	int npidx = iNP;
	std::vector<TString> *specNPlist = framework == "xTFW"?&xTFWNPlist:&tthMLNPlist;
	std::vector<TString> *treeNPlist = framework == "xTFW"?&xTFWtreeNPlist:&tthMLtreeNPlist;

	std::vector<std::vector<TString>*> nlist = {&fakeNPlist,&commonNPlist,&theoryNPlist,specNPlist,treeNPlist,&sampleNPlist};
	//17 + 44 + 108 + 34 + 83 + 3
	int totalNP = 0;
	for (int i = 0; i < nlist.size(); ++i)
	{
		if(npidx < nlist[i]->size()) {
			if(i == 4) dirname = nlist[i]->at(npidx);
			else dirname = framework == "tthML"? "nominal" : "NOMINAL";
			return nlist[i]->at(npidx);
		}
		else npidx-=nlist[i]->size();
		totalNP += nlist[i]->size();
	}
	printf("NP %d not found, %d NPs in total\n", iNP, totalNP);
	return "";
}

void printNPindex(TString framework = "tthML"){
	std::vector<TString> *specNPlist = framework == "xTFW"?&xTFWNPlist:&tthMLNPlist;
	std::vector<TString> *treeNPlist = framework == "xTFW"?&xTFWtreeNPlist:&tthMLtreeNPlist;

	std::vector<std::vector<TString>*> nlist = {&fakeNPlist,&commonNPlist,&theoryNPlist,specNPlist,treeNPlist,&sampleNPlist,&xsecNPlist};
	//17 + 44 + 108 + 34 + 83 + 3
	int iNP = 0;
	std::ofstream file;
	file.open("NPlist.txt");
	for (auto ilist : nlist)
	{
		for( auto NP : *ilist){
			file << iNP << " " << NP << std::endl;
			iNP++;
		}
	}
	file.close();
}