
#ifndef hadhadtree_h
#define hadhadtree_h
#include "nominal.h"
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "TLorentzVector.h"
#include "TVector3.h"

// Fixed size dimensions of array or collections stored in the TTree if any.

class hadhadtree : public nominal{
public :
   // Declaration of leaf types
   UInt_t          HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo;
   UInt_t          HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I;
   UInt_t          HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25;
   UInt_t          HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I;
   UInt_t          HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25;
   UInt_t          HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM;
   Float_t         HTXS_Higgs_eta;
   Float_t         HTXS_Higgs_pt;
   Int_t           HTXS_Njets_pTjet25;
   Int_t           HTXS_Njets_pTjet30;
   Int_t           HTXS_Stage0_Category;
   Int_t           HTXS_Stage1_Category_pTjet25GeV;
   Int_t           HTXS_Stage1_Category_pTjet30GeV;
   Int_t           HTXS_errorMode;
   Int_t           HTXS_prodMode;
   Float_t         NOMINAL_pileup_combined_weight;
   UInt_t          NOMINAL_pileup_random_lb_number;
   UInt_t          NOMINAL_pileup_random_run_number;
   UInt_t          boson_0_truth;
   Int_t           boson_0_truth_classifierParticleOrigin;
   Int_t           boson_0_truth_classifierParticleType;
   Int_t           boson_0_truth_mother_pdgId;
   Int_t           boson_0_truth_mother_status;
   Int_t           boson_0_truth_origin;
   TLorentzVector  *boson_0_truth_p4;
   Int_t           boson_0_truth_pdgId;
   Float_t         boson_0_truth_pz;
   Float_t         boson_0_truth_q;
   Int_t           boson_0_truth_status;
   Int_t           boson_0_truth_type;
   Float_t         dijet_deta;
   Float_t         dijet_dphi;
   Float_t         dijet_dpt;
   Float_t         dijet_m;
   Double_t        dijet_prod_eta;
   Int_t           ditau;
   Float_t         ditau_CP_alphaminus_ip;
   Float_t         ditau_CP_alphaminus_ip_rho;
   Float_t         ditau_CP_alphaminus_rho_rho;
   Float_t         ditau_CP_ip_tau0_mag;
   Float_t         ditau_CP_ip_tau0_x_ip;
   Float_t         ditau_CP_ip_tau0_y_ip;
   Float_t         ditau_CP_ip_tau0_z_ip;
   Float_t         ditau_CP_ip_tau1_mag;
   Float_t         ditau_CP_ip_tau1_x_ip;
   Float_t         ditau_CP_ip_tau1_y_ip;
   Float_t         ditau_CP_ip_tau1_z_ip;
   Float_t         ditau_CP_phi_star_cp_a1_rho;
   Float_t         ditau_CP_phi_star_cp_ip_ip;
   Float_t         ditau_CP_phi_star_cp_ip_rho;
   Float_t         ditau_CP_phi_star_cp_ip_rho_opt;
   Float_t         ditau_CP_phi_star_cp_rho_ip;
   Float_t         ditau_CP_phi_star_cp_rho_rho;
   Float_t         ditau_CP_tau0_upsilon;
   Float_t         ditau_CP_tau1_upsilon;
   Int_t           ditau_coll_approx;
   Float_t         ditau_coll_approx_m;
   Float_t         ditau_coll_approx_x0;
   Float_t         ditau_coll_approx_x1;
   Float_t         ditau_cosalpha;
   Float_t         ditau_deta;
   Float_t         ditau_dphi;
   Float_t         ditau_dpt;
   Float_t         ditau_dr;
   Double_t        ditau_higgspt;
   Int_t           ditau_matched;
   Float_t         ditau_matched_CP_alphaminus_ip;
   Float_t         ditau_matched_CP_alphaminus_ip_rho;
   Float_t         ditau_matched_CP_alphaminus_rho_rho;
   Float_t         ditau_matched_CP_ip_tau0_mag;
   Float_t         ditau_matched_CP_ip_tau0_x_ip;
   Float_t         ditau_matched_CP_ip_tau0_y_ip;
   Float_t         ditau_matched_CP_ip_tau0_z_ip;
   Float_t         ditau_matched_CP_ip_tau1_mag;
   Float_t         ditau_matched_CP_ip_tau1_x_ip;
   Float_t         ditau_matched_CP_ip_tau1_y_ip;
   Float_t         ditau_matched_CP_ip_tau1_z_ip;
   Float_t         ditau_matched_CP_phi_star_cp_a1_rho;
   Float_t         ditau_matched_CP_phi_star_cp_ip_ip;
   Float_t         ditau_matched_CP_phi_star_cp_ip_rho;
   Float_t         ditau_matched_CP_phi_star_cp_ip_rho_opt;
   Float_t         ditau_matched_CP_phi_star_cp_rho_ip;
   Float_t         ditau_matched_CP_phi_star_cp_rho_rho;
   Float_t         ditau_matched_CP_tau0_upsilon;
   Float_t         ditau_matched_CP_tau1_upsilon;
   Float_t         ditau_matched_cosalpha;
   Float_t         ditau_matched_deta;
   Float_t         ditau_matched_dphi;
   Float_t         ditau_matched_dpt;
   Float_t         ditau_matched_dr;
   TLorentzVector  *ditau_matched_p4;
   Float_t         ditau_matched_qxq;
   Float_t         ditau_matched_scal_sum_pt;
   Float_t         ditau_matched_vis_cosalpha;
   Float_t         ditau_matched_vis_deta;
   Float_t         ditau_matched_vis_dphi;
   Float_t         ditau_matched_vis_dr;
   Float_t         ditau_matched_vis_mass;
   Float_t         ditau_matched_vis_scal_sum_pt;
   Float_t         ditau_matched_vis_vect_sum_pt;
   Int_t           ditau_met_bisect;
   Float_t         ditau_met_centrality;
   Float_t         ditau_met_lep0_cos_dphi;
   Float_t         ditau_met_lep1_cos_dphi;
   Float_t         ditau_met_min_dphi;
   Float_t         ditau_met_sum_cos_dphi;
   Int_t           ditau_mmc_maxw;
   Float_t         ditau_mmc_maxw_eta;
   Int_t           ditau_mmc_maxw_fit_status;
   Float_t         ditau_mmc_maxw_m;
   Float_t         ditau_mmc_maxw_met_et;
   Float_t         ditau_mmc_maxw_met_phi;
   Float_t         ditau_mmc_maxw_phi;
   Float_t         ditau_mmc_maxw_pt;
   Float_t         ditau_mmc_maxw_x0;
   Float_t         ditau_mmc_maxw_x1;
   Int_t           ditau_mmc_mlm;
   Int_t           ditau_mmc_mlm_fit_status;
   Float_t         ditau_mmc_mlm_m;
   Int_t           ditau_mmc_mlnu3p;
   Float_t         ditau_mmc_mlnu3p_eta;
   Int_t           ditau_mmc_mlnu3p_fit_status;
   Float_t         ditau_mmc_mlnu3p_m;
   Float_t         ditau_mmc_mlnu3p_met_et;
   Float_t         ditau_mmc_mlnu3p_met_phi;
   Float_t         ditau_mmc_mlnu3p_phi;
   Float_t         ditau_mmc_mlnu3p_pt;
   Float_t         ditau_mmc_mlnu3p_x0;
   Float_t         ditau_mmc_mlnu3p_x1;
   Float_t         ditau_mt_lep0_met;
   Float_t         ditau_mt_lep1_met;
   TLorentzVector  *ditau_p4;
   Float_t         ditau_qxq;
   Float_t         ditau_scal_sum_pt;
   UInt_t          event_clean_EC_LooseBad;
   UInt_t          event_clean_EC_TightBad;
   ULong64_t       event_number;
   UInt_t          is_dijet_centrality;
   UInt_t          jet_0;
   Int_t           jet_0_b_tag_quantile;
   Float_t         jet_0_b_tag_score;
   Int_t           jet_0_b_tagged;
   UInt_t          jet_0_cleanJet_EC_LooseBad;
   Float_t         jet_0_fjvt;
   Int_t           jet_0_flavorlabel;
   Int_t           jet_0_flavorlabel_cone;
   Int_t           jet_0_flavorlabel_part;
   Int_t           jet_0_is_Jvt_HS;
   Float_t         jet_0_jvt;
   Int_t           jet_0_origin;
   TLorentzVector  *jet_0_p4;
   Float_t         jet_0_q;
   Int_t           jet_0_type;
   Float_t         jet_0_width;
   TLorentzVector  *jet_0_wztruth_p4;
   Float_t         jet_0_wztruth_pdgid;
   UInt_t          jet_1;
   Int_t           jet_1_b_tag_quantile;
   Float_t         jet_1_b_tag_score;
   Int_t           jet_1_b_tagged;
   UInt_t          jet_1_cleanJet_EC_LooseBad;
   Float_t         jet_1_fjvt;
   Int_t           jet_1_flavorlabel;
   Int_t           jet_1_flavorlabel_cone;
   Int_t           jet_1_flavorlabel_part;
   Int_t           jet_1_is_Jvt_HS;
   Float_t         jet_1_jvt;
   Int_t           jet_1_origin;
   TLorentzVector  *jet_1_p4;
   Float_t         jet_1_q;
   Int_t           jet_1_type;
   Float_t         jet_1_width;
   TLorentzVector  *jet_1_wztruth_p4;
   Float_t         jet_1_wztruth_pdgid;
   UInt_t          jet_2;
   Int_t           jet_2_b_tag_quantile;
   Float_t         jet_2_b_tag_score;
   Int_t           jet_2_b_tagged;
   UInt_t          jet_2_cleanJet_EC_LooseBad;
   Float_t         jet_2_fjvt;
   Int_t           jet_2_flavorlabel;
   Int_t           jet_2_flavorlabel_cone;
   Int_t           jet_2_flavorlabel_part;
   Int_t           jet_2_is_Jvt_HS;
   Float_t         jet_2_jvt;
   Int_t           jet_2_origin;
   TLorentzVector  *jet_2_p4;
   Float_t         jet_2_q;
   Int_t           jet_2_type;
   Float_t         jet_2_width;
   TLorentzVector  *jet_2_wztruth_p4;
   Float_t         jet_2_wztruth_pdgid;
   UInt_t          jet_3;
   Int_t           jet_3_b_tag_quantile;
   Float_t         jet_3_b_tag_score;
   Int_t           jet_3_b_tagged;
   UInt_t          jet_3_cleanJet_EC_LooseBad;
   Float_t         jet_3_fjvt;
   Int_t           jet_3_flavorlabel;
   Int_t           jet_3_flavorlabel_cone;
   Int_t           jet_3_flavorlabel_part;
   Int_t           jet_3_is_Jvt_HS;
   Float_t         jet_3_jvt;
   Int_t           jet_3_origin;
   TLorentzVector  *jet_3_p4;
   Float_t         jet_3_q;
   Int_t           jet_3_type;
   Float_t         jet_3_width;
   TLorentzVector  *jet_3_wztruth_p4;
   Float_t         jet_3_wztruth_pdgid;
   UInt_t          jet_4;
   Int_t           jet_4_b_tag_quantile;
   Float_t         jet_4_b_tag_score;
   Int_t           jet_4_b_tagged;
   UInt_t          jet_4_cleanJet_EC_LooseBad;
   Float_t         jet_4_fjvt;
   Int_t           jet_4_flavorlabel;
   Int_t           jet_4_flavorlabel_cone;
   Int_t           jet_4_flavorlabel_part;
   Int_t           jet_4_is_Jvt_HS;
   Float_t         jet_4_jvt;
   Int_t           jet_4_origin;
   TLorentzVector  *jet_4_p4;
   Float_t         jet_4_q;
   Int_t           jet_4_type;
   Float_t         jet_4_width;
   TLorentzVector  *jet_4_wztruth_p4;
   Float_t         jet_4_wztruth_pdgid;
   UInt_t          jet_5;
   Int_t           jet_5_b_tag_quantile;
   Float_t         jet_5_b_tag_score;
   Int_t           jet_5_b_tagged;
   UInt_t          jet_5_cleanJet_EC_LooseBad;
   Float_t         jet_5_fjvt;
   Int_t           jet_5_flavorlabel;
   Int_t           jet_5_flavorlabel_cone;
   Int_t           jet_5_flavorlabel_part;
   Int_t           jet_5_is_Jvt_HS;
   Float_t         jet_5_jvt;
   Int_t           jet_5_origin;
   TLorentzVector  *jet_5_p4;
   Float_t         jet_5_q;
   Int_t           jet_5_type;
   Float_t         jet_5_width;
   TLorentzVector  *jet_5_wztruth_p4;
   Float_t         jet_5_wztruth_pdgid;
   UInt_t          jet_6;
   Int_t           jet_6_b_tag_quantile;
   Float_t         jet_6_b_tag_score;
   Int_t           jet_6_b_tagged;
   UInt_t          jet_6_cleanJet_EC_LooseBad;
   Float_t         jet_6_fjvt;
   Int_t           jet_6_flavorlabel;
   Int_t           jet_6_flavorlabel_cone;
   Int_t           jet_6_flavorlabel_part;
   Int_t           jet_6_is_Jvt_HS;
   Float_t         jet_6_jvt;
   Int_t           jet_6_origin;
   TLorentzVector  *jet_6_p4;
   Float_t         jet_6_q;
   Int_t           jet_6_type;
   Float_t         jet_6_width;
   TLorentzVector  *jet_6_wztruth_p4;
   Float_t         jet_6_wztruth_pdgid;
   UInt_t          jet_7;
   Int_t           jet_7_b_tag_quantile;
   Float_t         jet_7_b_tag_score;
   Int_t           jet_7_b_tagged;
   UInt_t          jet_7_cleanJet_EC_LooseBad;
   Float_t         jet_7_fjvt;
   Int_t           jet_7_flavorlabel;
   Int_t           jet_7_flavorlabel_cone;
   Int_t           jet_7_flavorlabel_part;
   Int_t           jet_7_is_Jvt_HS;
   Float_t         jet_7_jvt;
   Int_t           jet_7_origin;
   TLorentzVector  *jet_7_p4;
   Float_t         jet_7_q;
   Int_t           jet_7_type;
   Float_t         jet_7_width;
   TLorentzVector  *jet_7_wztruth_p4;
   Float_t         jet_7_wztruth_pdgid;
   Float_t         jet_NOMINAL_central_jets_global_effSF_JVT;
   Float_t         jet_NOMINAL_central_jets_global_ineffSF_JVT;
   Float_t         jet_NOMINAL_forward_jets_global_effSF_JVT;
   Float_t         jet_NOMINAL_forward_jets_global_ineffSF_JVT;
   Float_t         jet_NOMINAL_global_effSF_MV2c10;
   Float_t         jet_NOMINAL_global_ineffSF_MV2c10;
   Float_t         lepton_eta_centrality;
   UInt_t          mc_channel_number;
   TLorentzVector  *met_hpto_p4;
   Float_t         met_more_met_et_ele;
   Float_t         met_more_met_et_jet;
   Float_t         met_more_met_et_muon;
   Float_t         met_more_met_et_pho;
   Float_t         met_more_met_et_soft;
   Float_t         met_more_met_et_tau;
   Float_t         met_more_met_phi_ele;
   Float_t         met_more_met_phi_jet;
   Float_t         met_more_met_phi_muon;
   Float_t         met_more_met_phi_pho;
   Float_t         met_more_met_phi_soft;
   Float_t         met_more_met_phi_tau;
   Float_t         met_more_met_sumet_ele;
   Float_t         met_more_met_sumet_jet;
   Float_t         met_more_met_sumet_muon;
   Float_t         met_more_met_sumet_pho;
   Float_t         met_more_met_sumet_soft;
   Float_t         met_more_met_sumet_tau;
   TLorentzVector  *met_p4;
   Float_t         met_sig;
   Float_t         met_sig_tracks;
   Float_t         met_sign_met_over_sqrt_ht;
   Float_t         met_sign_met_over_sqrt_sumet;
   Float_t         met_sign_met_rho;
   Float_t         met_sign_met_rho_ttdir;
   Float_t         met_sign_met_sig_directional;
   Float_t         met_sign_met_sig_directional_ttdir;
   Float_t         met_sign_met_significance;
   Float_t         met_sign_met_significance_ttdir;
   Float_t         met_sign_met_valL;
   Float_t         met_sign_met_valL_ttdir;
   Float_t         met_sign_met_varT;
   Float_t         met_sign_met_varT_ttdir;
   Float_t         met_sumet;
   TLorentzVector  *met_truth_p4;
   Float_t         met_truth_sig;
   Float_t         met_truth_sumet;
   Double_t        mva_RRN;
   Float_t         n_actual_int;
   Float_t         n_actual_int_cor;
   Float_t         n_avg_int;
   Float_t         n_avg_int_cor;
   Int_t           n_bjets;
   Int_t           n_electrons;
   Int_t           n_jets;
   Int_t           n_jets_30;
   Int_t           n_jets_40;
   Int_t           n_jets_bad;
   Int_t           n_jets_central;
   Int_t           n_jets_central_30;
   Int_t           n_jets_central_40;
   Int_t           n_jets_forward;
   Int_t           n_jets_forward_30;
   Int_t           n_jets_forward_40;
   Int_t           n_jets_l1j25;
   Int_t           n_jets_mc_hs;
   Int_t           n_muons;
   Int_t           n_muons_bad;
   Int_t           n_muons_loose;
   Int_t           n_muons_medium;
   Int_t           n_muons_tight;
   Int_t           n_muons_veryloose;
   Int_t           n_photons;
   Int_t           n_pvx;
   Int_t           n_taus;
   Int_t           n_taus_loose;
   Int_t           n_taus_medium;
   Int_t           n_taus_tight;
   Int_t           n_taus_veryloose;
   UInt_t          n_truth_gluon_jets;
   UInt_t          n_truth_jets;
   UInt_t          n_truth_jets_pt20_eta45;
   UInt_t          n_truth_quark_jets;
   Int_t           n_vx;
   Int_t           primary_vertex;
   TVector3        *primary_vertex_v;
   Float_t         pt_total;
   UInt_t          run_number;
   Float_t         scalar_sum_pt;
   UInt_t          tau_0;
   Float_t         tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTLOOSE;
   Float_t         tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTMEDIUM;
   Float_t         tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTTIGHT;
   Float_t         tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTLOOSE;
   Float_t         tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTMEDIUM;
   Float_t         tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTTIGHT;
   Float_t         tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad;
   Float_t         tau_0_NOMINAL_TauEffSF_JetBDTloose;
   Float_t         tau_0_NOMINAL_TauEffSF_JetBDTmedium;
   Float_t         tau_0_NOMINAL_TauEffSF_JetBDTtight;
   Float_t         tau_0_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron;
   Float_t         tau_0_NOMINAL_TauEffSF_reco;
   Float_t         tau_0_NOMINAL_TauEffSF_selection;
   Float_t         tau_0_allTrk_eta;
   UInt_t          tau_0_allTrk_n;
   Float_t         tau_0_allTrk_phi;
   Float_t         tau_0_allTrk_pt;
   Float_t         tau_0_b_tag_score;
   Int_t           tau_0_b_tagged;
   TLorentzVector  *tau_0_decay_charged_p4;
   UInt_t          tau_0_decay_mode;
   TLorentzVector  *tau_0_decay_neutral_p4;
   Float_t         tau_0_ele_BDTEleScoreTrans_run2;
   Float_t         tau_0_ele_bdt_eff_sf;
   UInt_t          tau_0_ele_bdt_loose;
   UInt_t          tau_0_ele_bdt_medium;
   Float_t         tau_0_ele_bdt_score;
   UInt_t          tau_0_ele_bdt_tight;
   Float_t         tau_0_ele_match_lhscore;
   UInt_t          tau_0_ele_olr_pass;
   UInt_t          tau_0_jet_bdt_loose;
   UInt_t          tau_0_jet_bdt_medium;
   Float_t         tau_0_jet_bdt_score;
   Float_t         tau_0_jet_bdt_score_trans;
   UInt_t          tau_0_jet_bdt_tight;
   UInt_t          tau_0_jet_bdt_veryloose;
   Float_t         tau_0_jet_jvt;
   UInt_t          tau_0_jet_rnn_loose;
   UInt_t          tau_0_jet_rnn_medium;
   Float_t         tau_0_jet_rnn_score;
   Float_t         tau_0_jet_rnn_score_trans;
   UInt_t          tau_0_jet_rnn_tight;
   UInt_t          tau_0_jet_rnn_veryloose;
   Float_t         tau_0_jet_width;
   Double_t        tau_0_leadTrk_d0;
   Double_t        tau_0_leadTrk_d0_sig;
   Float_t         tau_0_leadTrk_eta;
   Float_t         tau_0_leadTrk_phi;
   Float_t         tau_0_leadTrk_pt;
   Double_t        tau_0_leadTrk_pvx_z0;
   Double_t        tau_0_leadTrk_pvx_z0_sig;
   Double_t        tau_0_leadTrk_pvx_z0_sintheta;
   TVector3        *tau_0_leadTrk_vertex_v;
   Double_t        tau_0_leadTrk_z0;
   Double_t        tau_0_leadTrk_z0_sig;
   Double_t        tau_0_leadTrk_z0_sintheta;
   UInt_t          tau_0_matched;
   Int_t           tau_0_matched_classifierParticleOrigin;
   Int_t           tau_0_matched_classifierParticleType;
   TLorentzVector  *tau_0_matched_decay_charged_p4;
   Int_t           tau_0_matched_decay_mode;
   TLorentzVector  *tau_0_matched_decay_neutral_p4;
   TLorentzVector  *tau_0_matched_decay_neutrino_p4;
   UInt_t          tau_0_matched_isEle;
   UInt_t          tau_0_matched_isHadTau;
   UInt_t          tau_0_matched_isJet;
   UInt_t          tau_0_matched_isMuon;
   UInt_t          tau_0_matched_isTau;
   UInt_t          tau_0_matched_isTruthMatch;
   Int_t           tau_0_matched_mother_pdgId;
   Int_t           tau_0_matched_mother_status;
   Int_t           tau_0_matched_n_charged;
   Int_t           tau_0_matched_n_charged_pion;
   Int_t           tau_0_matched_n_neutral;
   Int_t           tau_0_matched_n_neutral_pion;
   Int_t           tau_0_matched_origin;
   TLorentzVector  *tau_0_matched_p4;
   TLorentzVector  *tau_0_matched_p4_vis_charged_track0;
   TLorentzVector  *tau_0_matched_p4_vis_charged_track1;
   TLorentzVector  *tau_0_matched_p4_vis_charged_track2;
   Int_t           tau_0_matched_pdgId;
   Float_t         tau_0_matched_pz;
   Float_t         tau_0_matched_q;
   Int_t           tau_0_matched_status;
   Int_t           tau_0_matched_type;
   TLorentzVector  *tau_0_matched_vis_charged_p4;
   TLorentzVector  *tau_0_matched_vis_neutral_others_p4;
   TLorentzVector  *tau_0_matched_vis_neutral_p4;
   TLorentzVector  *tau_0_matched_vis_neutral_pions_p4;
   TLorentzVector  *tau_0_matched_vis_p4;
   UInt_t          tau_0_n_all_tracks;
   UInt_t          tau_0_n_charged_tracks;
   UInt_t          tau_0_n_conversion_tracks;
   UInt_t          tau_0_n_core_tracks;
   UInt_t          tau_0_n_failTrackFilter_tracks;
   UInt_t          tau_0_n_fake_tracks;
   UInt_t          tau_0_n_isolation_tracks;
   UInt_t          tau_0_n_modified_isolation_tracks;
   UInt_t          tau_0_n_old_tracks;
   UInt_t          tau_0_n_passTrkSelectionTight_tracks;
   UInt_t          tau_0_n_passTrkSelector_tracks;
   UInt_t          tau_0_n_unclassified_tracks;
   UInt_t          tau_0_n_wide_tracks;
   Int_t           tau_0_origin;
   TLorentzVector  *tau_0_p4;
   Float_t         tau_0_q;
   TLorentzVector  *tau_0_track0_p4;
   TLorentzVector  *tau_0_track1_p4;
   TLorentzVector  *tau_0_track2_p4;
   UInt_t          tau_0_trig_HLT_tau25_medium1_tracktwo;
   UInt_t          tau_0_trig_HLT_tau35_medium1_tracktwo;
   UInt_t          tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo;
   UInt_t          tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I;
   UInt_t          tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25;
   UInt_t          tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I;
   UInt_t          tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25;
   UInt_t          tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM;
   UInt_t          tau_0_trig_trigger_matched;
   Int_t           tau_0_type;
   UInt_t          tau_1;
   Float_t         tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTLOOSE;
   Float_t         tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTMEDIUM;
   Float_t         tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTTIGHT;
   Float_t         tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTLOOSE;
   Float_t         tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTMEDIUM;
   Float_t         tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTTIGHT;
   Float_t         tau_1_NOMINAL_TauEffSF_HadTauEleOLR_tauhad;
   Float_t         tau_1_NOMINAL_TauEffSF_JetBDTloose;
   Float_t         tau_1_NOMINAL_TauEffSF_JetBDTmedium;
   Float_t         tau_1_NOMINAL_TauEffSF_JetBDTtight;
   Float_t         tau_1_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron;
   Float_t         tau_1_NOMINAL_TauEffSF_reco;
   Float_t         tau_1_NOMINAL_TauEffSF_selection;
   Float_t         tau_1_allTrk_eta;
   UInt_t          tau_1_allTrk_n;
   Float_t         tau_1_allTrk_phi;
   Float_t         tau_1_allTrk_pt;
   Float_t         tau_1_b_tag_score;
   Int_t           tau_1_b_tagged;
   TLorentzVector  *tau_1_decay_charged_p4;
   UInt_t          tau_1_decay_mode;
   TLorentzVector  *tau_1_decay_neutral_p4;
   Float_t         tau_1_ele_BDTEleScoreTrans_run2;
   Float_t         tau_1_ele_bdt_eff_sf;
   UInt_t          tau_1_ele_bdt_loose;
   UInt_t          tau_1_ele_bdt_medium;
   Float_t         tau_1_ele_bdt_score;
   UInt_t          tau_1_ele_bdt_tight;
   Float_t         tau_1_ele_match_lhscore;
   UInt_t          tau_1_ele_olr_pass;
   UInt_t          tau_1_jet_bdt_loose;
   UInt_t          tau_1_jet_bdt_medium;
   Float_t         tau_1_jet_bdt_score;
   Float_t         tau_1_jet_bdt_score_trans;
   UInt_t          tau_1_jet_bdt_tight;
   UInt_t          tau_1_jet_bdt_veryloose;
   Float_t         tau_1_jet_jvt;
   UInt_t          tau_1_jet_rnn_loose;
   UInt_t          tau_1_jet_rnn_medium;
   Float_t         tau_1_jet_rnn_score;
   Float_t         tau_1_jet_rnn_score_trans;
   UInt_t          tau_1_jet_rnn_tight;
   UInt_t          tau_1_jet_rnn_veryloose;
   Float_t         tau_1_jet_width;
   Double_t        tau_1_leadTrk_d0;
   Double_t        tau_1_leadTrk_d0_sig;
   Float_t         tau_1_leadTrk_eta;
   Float_t         tau_1_leadTrk_phi;
   Float_t         tau_1_leadTrk_pt;
   Double_t        tau_1_leadTrk_pvx_z0;
   Double_t        tau_1_leadTrk_pvx_z0_sig;
   Double_t        tau_1_leadTrk_pvx_z0_sintheta;
   TVector3        *tau_1_leadTrk_vertex_v;
   Double_t        tau_1_leadTrk_z0;
   Double_t        tau_1_leadTrk_z0_sig;
   Double_t        tau_1_leadTrk_z0_sintheta;
   UInt_t          tau_1_matched;
   Int_t           tau_1_matched_classifierParticleOrigin;
   Int_t           tau_1_matched_classifierParticleType;
   TLorentzVector  *tau_1_matched_decay_charged_p4;
   Int_t           tau_1_matched_decay_mode;
   TLorentzVector  *tau_1_matched_decay_neutral_p4;
   TLorentzVector  *tau_1_matched_decay_neutrino_p4;
   UInt_t          tau_1_matched_isEle;
   UInt_t          tau_1_matched_isHadTau;
   UInt_t          tau_1_matched_isJet;
   UInt_t          tau_1_matched_isMuon;
   UInt_t          tau_1_matched_isTau;
   UInt_t          tau_1_matched_isTruthMatch;
   Int_t           tau_1_matched_mother_pdgId;
   Int_t           tau_1_matched_mother_status;
   Int_t           tau_1_matched_n_charged;
   Int_t           tau_1_matched_n_charged_pion;
   Int_t           tau_1_matched_n_neutral;
   Int_t           tau_1_matched_n_neutral_pion;
   Int_t           tau_1_matched_origin;
   TLorentzVector  *tau_1_matched_p4;
   TLorentzVector  *tau_1_matched_p4_vis_charged_track0;
   TLorentzVector  *tau_1_matched_p4_vis_charged_track1;
   TLorentzVector  *tau_1_matched_p4_vis_charged_track2;
   Int_t           tau_1_matched_pdgId;
   Float_t         tau_1_matched_pz;
   Float_t         tau_1_matched_q;
   Int_t           tau_1_matched_status;
   Int_t           tau_1_matched_type;
   TLorentzVector  *tau_1_matched_vis_charged_p4;
   TLorentzVector  *tau_1_matched_vis_neutral_others_p4;
   TLorentzVector  *tau_1_matched_vis_neutral_p4;
   TLorentzVector  *tau_1_matched_vis_neutral_pions_p4;
   TLorentzVector  *tau_1_matched_vis_p4;
   UInt_t          tau_1_n_all_tracks;
   UInt_t          tau_1_n_charged_tracks;
   UInt_t          tau_1_n_conversion_tracks;
   UInt_t          tau_1_n_core_tracks;
   UInt_t          tau_1_n_failTrackFilter_tracks;
   UInt_t          tau_1_n_fake_tracks;
   UInt_t          tau_1_n_isolation_tracks;
   UInt_t          tau_1_n_modified_isolation_tracks;
   UInt_t          tau_1_n_old_tracks;
   UInt_t          tau_1_n_passTrkSelectionTight_tracks;
   UInt_t          tau_1_n_passTrkSelector_tracks;
   UInt_t          tau_1_n_unclassified_tracks;
   UInt_t          tau_1_n_wide_tracks;
   Int_t           tau_1_origin;
   TLorentzVector  *tau_1_p4;
   Float_t         tau_1_q;
   TLorentzVector  *tau_1_track0_p4;
   TLorentzVector  *tau_1_track1_p4;
   TLorentzVector  *tau_1_track2_p4;
   UInt_t          tau_1_trig_HLT_tau25_medium1_tracktwo;
   UInt_t          tau_1_trig_HLT_tau35_medium1_tracktwo;
   UInt_t          tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo;
   UInt_t          tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I;
   UInt_t          tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25;
   UInt_t          tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I;
   UInt_t          tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25;
   UInt_t          tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM;
   UInt_t          tau_1_trig_trigger_matched;
   Int_t           tau_1_type;
   Float_t         tau_eta_centrality;
   Float_t         theory_weights_CT14_pdfset;
   Float_t         theory_weights_MMHT_pdfset;
   Double_t        theory_weights_PDF_central_value;
   Double_t        theory_weights_PDF_error_down;
   Double_t        theory_weights_PDF_error_up;
   Float_t         theory_weights_alphaS_down;
   Float_t         theory_weights_alphaS_up;
   UInt_t          truth_passedVBFFilter;
   Double_t        weight_mc;
   Double_t        weight_total;

   // List of branches
   TBranch        *b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo;   //!
   TBranch        *b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I;   //!
   TBranch        *b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25;   //!
   TBranch        *b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I;   //!
   TBranch        *b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25;   //!
   TBranch        *b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM;   //!
   TBranch        *b_HTXS_Higgs_eta;   //!
   TBranch        *b_HTXS_Higgs_pt;   //!
   TBranch        *b_HTXS_Njets_pTjet25;   //!
   TBranch        *b_HTXS_Njets_pTjet30;   //!
   TBranch        *b_HTXS_Stage0_Category;   //!
   TBranch        *b_HTXS_Stage1_Category_pTjet25GeV;   //!
   TBranch        *b_HTXS_Stage1_Category_pTjet30GeV;   //!
   TBranch        *b_HTXS_errorMode;   //!
   TBranch        *b_HTXS_prodMode;   //!
   TBranch        *b_NOMINAL_pileup_combined_weight;   //!
   TBranch        *b_NOMINAL_pileup_random_lb_number;   //!
   TBranch        *b_NOMINAL_pileup_random_run_number;   //!
   TBranch        *b_boson_0_truth;   //!
   TBranch        *b_boson_0_truth_classifierParticleOrigin;   //!
   TBranch        *b_boson_0_truth_classifierParticleType;   //!
   TBranch        *b_boson_0_truth_mother_pdgId;   //!
   TBranch        *b_boson_0_truth_mother_status;   //!
   TBranch        *b_boson_0_truth_origin;   //!
   TBranch        *b_boson_0_truth_p4;   //!
   TBranch        *b_boson_0_truth_pdgId;   //!
   TBranch        *b_boson_0_truth_pz;   //!
   TBranch        *b_boson_0_truth_q;   //!
   TBranch        *b_boson_0_truth_status;   //!
   TBranch        *b_boson_0_truth_type;   //!
   TBranch        *b_dijet_deta;   //!
   TBranch        *b_dijet_dphi;   //!
   TBranch        *b_dijet_dpt;   //!
   TBranch        *b_dijet_m;   //!
   TBranch        *b_dijet_prod_eta;   //!
   TBranch        *b_ditau;   //!
   TBranch        *b_ditau_CP_alphaminus_ip;   //!
   TBranch        *b_ditau_CP_alphaminus_ip_rho;   //!
   TBranch        *b_ditau_CP_alphaminus_rho_rho;   //!
   TBranch        *b_ditau_CP_ip_tau0_mag;   //!
   TBranch        *b_ditau_CP_ip_tau0_x_ip;   //!
   TBranch        *b_ditau_CP_ip_tau0_y_ip;   //!
   TBranch        *b_ditau_CP_ip_tau0_z_ip;   //!
   TBranch        *b_ditau_CP_ip_tau1_mag;   //!
   TBranch        *b_ditau_CP_ip_tau1_x_ip;   //!
   TBranch        *b_ditau_CP_ip_tau1_y_ip;   //!
   TBranch        *b_ditau_CP_ip_tau1_z_ip;   //!
   TBranch        *b_ditau_CP_phi_star_cp_a1_rho;   //!
   TBranch        *b_ditau_CP_phi_star_cp_ip_ip;   //!
   TBranch        *b_ditau_CP_phi_star_cp_ip_rho;   //!
   TBranch        *b_ditau_CP_phi_star_cp_ip_rho_opt;   //!
   TBranch        *b_ditau_CP_phi_star_cp_rho_ip;   //!
   TBranch        *b_ditau_CP_phi_star_cp_rho_rho;   //!
   TBranch        *b_ditau_CP_tau0_upsilon;   //!
   TBranch        *b_ditau_CP_tau1_upsilon;   //!
   TBranch        *b_ditau_coll_approx;   //!
   TBranch        *b_ditau_coll_approx_m;   //!
   TBranch        *b_ditau_coll_approx_x0;   //!
   TBranch        *b_ditau_coll_approx_x1;   //!
   TBranch        *b_ditau_cosalpha;   //!
   TBranch        *b_ditau_deta;   //!
   TBranch        *b_ditau_dphi;   //!
   TBranch        *b_ditau_dpt;   //!
   TBranch        *b_ditau_dr;   //!
   TBranch        *b_ditau_higgspt;   //!
   TBranch        *b_ditau_matched;   //!
   TBranch        *b_ditau_matched_CP_alphaminus_ip;   //!
   TBranch        *b_ditau_matched_CP_alphaminus_ip_rho;   //!
   TBranch        *b_ditau_matched_CP_alphaminus_rho_rho;   //!
   TBranch        *b_ditau_matched_CP_ip_tau0_mag;   //!
   TBranch        *b_ditau_matched_CP_ip_tau0_x_ip;   //!
   TBranch        *b_ditau_matched_CP_ip_tau0_y_ip;   //!
   TBranch        *b_ditau_matched_CP_ip_tau0_z_ip;   //!
   TBranch        *b_ditau_matched_CP_ip_tau1_mag;   //!
   TBranch        *b_ditau_matched_CP_ip_tau1_x_ip;   //!
   TBranch        *b_ditau_matched_CP_ip_tau1_y_ip;   //!
   TBranch        *b_ditau_matched_CP_ip_tau1_z_ip;   //!
   TBranch        *b_ditau_matched_CP_phi_star_cp_a1_rho;   //!
   TBranch        *b_ditau_matched_CP_phi_star_cp_ip_ip;   //!
   TBranch        *b_ditau_matched_CP_phi_star_cp_ip_rho;   //!
   TBranch        *b_ditau_matched_CP_phi_star_cp_ip_rho_opt;   //!
   TBranch        *b_ditau_matched_CP_phi_star_cp_rho_ip;   //!
   TBranch        *b_ditau_matched_CP_phi_star_cp_rho_rho;   //!
   TBranch        *b_ditau_matched_CP_tau0_upsilon;   //!
   TBranch        *b_ditau_matched_CP_tau1_upsilon;   //!
   TBranch        *b_ditau_matched_cosalpha;   //!
   TBranch        *b_ditau_matched_deta;   //!
   TBranch        *b_ditau_matched_dphi;   //!
   TBranch        *b_ditau_matched_dpt;   //!
   TBranch        *b_ditau_matched_dr;   //!
   TBranch        *b_ditau_matched_p4;   //!
   TBranch        *b_ditau_matched_qxq;   //!
   TBranch        *b_ditau_matched_scal_sum_pt;   //!
   TBranch        *b_ditau_matched_vis_cosalpha;   //!
   TBranch        *b_ditau_matched_vis_deta;   //!
   TBranch        *b_ditau_matched_vis_dphi;   //!
   TBranch        *b_ditau_matched_vis_dr;   //!
   TBranch        *b_ditau_matched_vis_mass;   //!
   TBranch        *b_ditau_matched_vis_scal_sum_pt;   //!
   TBranch        *b_ditau_matched_vis_vect_sum_pt;   //!
   TBranch        *b_ditau_met_bisect;   //!
   TBranch        *b_ditau_met_centrality;   //!
   TBranch        *b_ditau_met_lep0_cos_dphi;   //!
   TBranch        *b_ditau_met_lep1_cos_dphi;   //!
   TBranch        *b_ditau_met_min_dphi;   //!
   TBranch        *b_ditau_met_sum_cos_dphi;   //!
   TBranch        *b_ditau_mmc_maxw;   //!
   TBranch        *b_ditau_mmc_maxw_eta;   //!
   TBranch        *b_ditau_mmc_maxw_fit_status;   //!
   TBranch        *b_ditau_mmc_maxw_m;   //!
   TBranch        *b_ditau_mmc_maxw_met_et;   //!
   TBranch        *b_ditau_mmc_maxw_met_phi;   //!
   TBranch        *b_ditau_mmc_maxw_phi;   //!
   TBranch        *b_ditau_mmc_maxw_pt;   //!
   TBranch        *b_ditau_mmc_maxw_x0;   //!
   TBranch        *b_ditau_mmc_maxw_x1;   //!
   TBranch        *b_ditau_mmc_mlm;   //!
   TBranch        *b_ditau_mmc_mlm_fit_status;   //!
   TBranch        *b_ditau_mmc_mlm_m;   //!
   TBranch        *b_ditau_mmc_mlnu3p;   //!
   TBranch        *b_ditau_mmc_mlnu3p_eta;   //!
   TBranch        *b_ditau_mmc_mlnu3p_fit_status;   //!
   TBranch        *b_ditau_mmc_mlnu3p_m;   //!
   TBranch        *b_ditau_mmc_mlnu3p_met_et;   //!
   TBranch        *b_ditau_mmc_mlnu3p_met_phi;   //!
   TBranch        *b_ditau_mmc_mlnu3p_phi;   //!
   TBranch        *b_ditau_mmc_mlnu3p_pt;   //!
   TBranch        *b_ditau_mmc_mlnu3p_x0;   //!
   TBranch        *b_ditau_mmc_mlnu3p_x1;   //!
   TBranch        *b_ditau_mt_lep0_met;   //!
   TBranch        *b_ditau_mt_lep1_met;   //!
   TBranch        *b_ditau_p4;   //!
   TBranch        *b_ditau_qxq;   //!
   TBranch        *b_ditau_scal_sum_pt;   //!
   TBranch        *b_event_clean_EC_LooseBad;   //!
   TBranch        *b_event_clean_EC_TightBad;   //!
   TBranch        *b_event_number;   //!
   TBranch        *b_is_dijet_centrality;   //!
   TBranch        *b_jet_0;   //!
   TBranch        *b_jet_0_b_tag_quantile;   //!
   TBranch        *b_jet_0_b_tag_score;   //!
   TBranch        *b_jet_0_b_tagged;   //!
   TBranch        *b_jet_0_cleanJet_EC_LooseBad;   //!
   TBranch        *b_jet_0_fjvt;   //!
   TBranch        *b_jet_0_flavorlabel;   //!
   TBranch        *b_jet_0_flavorlabel_cone;   //!
   TBranch        *b_jet_0_flavorlabel_part;   //!
   TBranch        *b_jet_0_is_Jvt_HS;   //!
   TBranch        *b_jet_0_jvt;   //!
   TBranch        *b_jet_0_origin;   //!
   TBranch        *b_jet_0_p4;   //!
   TBranch        *b_jet_0_q;   //!
   TBranch        *b_jet_0_type;   //!
   TBranch        *b_jet_0_width;   //!
   TBranch        *b_jet_0_wztruth_p4;   //!
   TBranch        *b_jet_0_wztruth_pdgid;   //!
   TBranch        *b_jet_1;   //!
   TBranch        *b_jet_1_b_tag_quantile;   //!
   TBranch        *b_jet_1_b_tag_score;   //!
   TBranch        *b_jet_1_b_tagged;   //!
   TBranch        *b_jet_1_cleanJet_EC_LooseBad;   //!
   TBranch        *b_jet_1_fjvt;   //!
   TBranch        *b_jet_1_flavorlabel;   //!
   TBranch        *b_jet_1_flavorlabel_cone;   //!
   TBranch        *b_jet_1_flavorlabel_part;   //!
   TBranch        *b_jet_1_is_Jvt_HS;   //!
   TBranch        *b_jet_1_jvt;   //!
   TBranch        *b_jet_1_origin;   //!
   TBranch        *b_jet_1_p4;   //!
   TBranch        *b_jet_1_q;   //!
   TBranch        *b_jet_1_type;   //!
   TBranch        *b_jet_1_width;   //!
   TBranch        *b_jet_1_wztruth_p4;   //!
   TBranch        *b_jet_1_wztruth_pdgid;   //!
   TBranch        *b_jet_2;   //!
   TBranch        *b_jet_2_b_tag_quantile;   //!
   TBranch        *b_jet_2_b_tag_score;   //!
   TBranch        *b_jet_2_b_tagged;   //!
   TBranch        *b_jet_2_cleanJet_EC_LooseBad;   //!
   TBranch        *b_jet_2_fjvt;   //!
   TBranch        *b_jet_2_flavorlabel;   //!
   TBranch        *b_jet_2_flavorlabel_cone;   //!
   TBranch        *b_jet_2_flavorlabel_part;   //!
   TBranch        *b_jet_2_is_Jvt_HS;   //!
   TBranch        *b_jet_2_jvt;   //!
   TBranch        *b_jet_2_origin;   //!
   TBranch        *b_jet_2_p4;   //!
   TBranch        *b_jet_2_q;   //!
   TBranch        *b_jet_2_type;   //!
   TBranch        *b_jet_2_width;   //!
   TBranch        *b_jet_2_wztruth_p4;   //!
   TBranch        *b_jet_2_wztruth_pdgid;   //!
   TBranch        *b_jet_3;   //!
   TBranch        *b_jet_3_b_tag_quantile;   //!
   TBranch        *b_jet_3_b_tag_score;   //!
   TBranch        *b_jet_3_b_tagged;   //!
   TBranch        *b_jet_3_cleanJet_EC_LooseBad;   //!
   TBranch        *b_jet_3_fjvt;   //!
   TBranch        *b_jet_3_flavorlabel;   //!
   TBranch        *b_jet_3_flavorlabel_cone;   //!
   TBranch        *b_jet_3_flavorlabel_part;   //!
   TBranch        *b_jet_3_is_Jvt_HS;   //!
   TBranch        *b_jet_3_jvt;   //!
   TBranch        *b_jet_3_origin;   //!
   TBranch        *b_jet_3_p4;   //!
   TBranch        *b_jet_3_q;   //!
   TBranch        *b_jet_3_type;   //!
   TBranch        *b_jet_3_width;   //!
   TBranch        *b_jet_3_wztruth_p4;   //!
   TBranch        *b_jet_3_wztruth_pdgid;   //!
   TBranch        *b_jet_4;   //!
   TBranch        *b_jet_4_b_tag_quantile;   //!
   TBranch        *b_jet_4_b_tag_score;   //!
   TBranch        *b_jet_4_b_tagged;   //!
   TBranch        *b_jet_4_cleanJet_EC_LooseBad;   //!
   TBranch        *b_jet_4_fjvt;   //!
   TBranch        *b_jet_4_flavorlabel;   //!
   TBranch        *b_jet_4_flavorlabel_cone;   //!
   TBranch        *b_jet_4_flavorlabel_part;   //!
   TBranch        *b_jet_4_is_Jvt_HS;   //!
   TBranch        *b_jet_4_jvt;   //!
   TBranch        *b_jet_4_origin;   //!
   TBranch        *b_jet_4_p4;   //!
   TBranch        *b_jet_4_q;   //!
   TBranch        *b_jet_4_type;   //!
   TBranch        *b_jet_4_width;   //!
   TBranch        *b_jet_4_wztruth_p4;   //!
   TBranch        *b_jet_4_wztruth_pdgid;   //!
   TBranch        *b_jet_5;   //!
   TBranch        *b_jet_5_b_tag_quantile;   //!
   TBranch        *b_jet_5_b_tag_score;   //!
   TBranch        *b_jet_5_b_tagged;   //!
   TBranch        *b_jet_5_cleanJet_EC_LooseBad;   //!
   TBranch        *b_jet_5_fjvt;   //!
   TBranch        *b_jet_5_flavorlabel;   //!
   TBranch        *b_jet_5_flavorlabel_cone;   //!
   TBranch        *b_jet_5_flavorlabel_part;   //!
   TBranch        *b_jet_5_is_Jvt_HS;   //!
   TBranch        *b_jet_5_jvt;   //!
   TBranch        *b_jet_5_origin;   //!
   TBranch        *b_jet_5_p4;   //!
   TBranch        *b_jet_5_q;   //!
   TBranch        *b_jet_5_type;   //!
   TBranch        *b_jet_5_width;   //!
   TBranch        *b_jet_5_wztruth_p4;   //!
   TBranch        *b_jet_5_wztruth_pdgid;   //!
   TBranch        *b_jet_6;   //!
   TBranch        *b_jet_6_b_tag_quantile;   //!
   TBranch        *b_jet_6_b_tag_score;   //!
   TBranch        *b_jet_6_b_tagged;   //!
   TBranch        *b_jet_6_cleanJet_EC_LooseBad;   //!
   TBranch        *b_jet_6_fjvt;   //!
   TBranch        *b_jet_6_flavorlabel;   //!
   TBranch        *b_jet_6_flavorlabel_cone;   //!
   TBranch        *b_jet_6_flavorlabel_part;   //!
   TBranch        *b_jet_6_is_Jvt_HS;   //!
   TBranch        *b_jet_6_jvt;   //!
   TBranch        *b_jet_6_origin;   //!
   TBranch        *b_jet_6_p4;   //!
   TBranch        *b_jet_6_q;   //!
   TBranch        *b_jet_6_type;   //!
   TBranch        *b_jet_6_width;   //!
   TBranch        *b_jet_6_wztruth_p4;   //!
   TBranch        *b_jet_6_wztruth_pdgid;   //!
   TBranch        *b_jet_7;   //!
   TBranch        *b_jet_7_b_tag_quantile;   //!
   TBranch        *b_jet_7_b_tag_score;   //!
   TBranch        *b_jet_7_b_tagged;   //!
   TBranch        *b_jet_7_cleanJet_EC_LooseBad;   //!
   TBranch        *b_jet_7_fjvt;   //!
   TBranch        *b_jet_7_flavorlabel;   //!
   TBranch        *b_jet_7_flavorlabel_cone;   //!
   TBranch        *b_jet_7_flavorlabel_part;   //!
   TBranch        *b_jet_7_is_Jvt_HS;   //!
   TBranch        *b_jet_7_jvt;   //!
   TBranch        *b_jet_7_origin;   //!
   TBranch        *b_jet_7_p4;   //!
   TBranch        *b_jet_7_q;   //!
   TBranch        *b_jet_7_type;   //!
   TBranch        *b_jet_7_width;   //!
   TBranch        *b_jet_7_wztruth_p4;   //!
   TBranch        *b_jet_7_wztruth_pdgid;   //!
   TBranch        *b_jet_NOMINAL_central_jets_global_effSF_JVT;   //!
   TBranch        *b_jet_NOMINAL_central_jets_global_ineffSF_JVT;   //!
   TBranch        *b_jet_NOMINAL_forward_jets_global_effSF_JVT;   //!
   TBranch        *b_jet_NOMINAL_forward_jets_global_ineffSF_JVT;   //!
   TBranch        *b_jet_NOMINAL_global_effSF_MV2c10;   //!
   TBranch        *b_jet_NOMINAL_global_ineffSF_MV2c10;   //!
   TBranch        *b_lepton_eta_centrality;   //!
   TBranch        *b_mc_channel_number;   //!
   TBranch        *b_met_hpto_p4;   //!
   TBranch        *b_met_more_met_et_ele;   //!
   TBranch        *b_met_more_met_et_jet;   //!
   TBranch        *b_met_more_met_et_muon;   //!
   TBranch        *b_met_more_met_et_pho;   //!
   TBranch        *b_met_more_met_et_soft;   //!
   TBranch        *b_met_more_met_et_tau;   //!
   TBranch        *b_met_more_met_phi_ele;   //!
   TBranch        *b_met_more_met_phi_jet;   //!
   TBranch        *b_met_more_met_phi_muon;   //!
   TBranch        *b_met_more_met_phi_pho;   //!
   TBranch        *b_met_more_met_phi_soft;   //!
   TBranch        *b_met_more_met_phi_tau;   //!
   TBranch        *b_met_more_met_sumet_ele;   //!
   TBranch        *b_met_more_met_sumet_jet;   //!
   TBranch        *b_met_more_met_sumet_muon;   //!
   TBranch        *b_met_more_met_sumet_pho;   //!
   TBranch        *b_met_more_met_sumet_soft;   //!
   TBranch        *b_met_more_met_sumet_tau;   //!
   TBranch        *b_met_p4;   //!
   TBranch        *b_met_sig;   //!
   TBranch        *b_met_sig_tracks;   //!
   TBranch        *b_met_sign_met_over_sqrt_ht;   //!
   TBranch        *b_met_sign_met_over_sqrt_sumet;   //!
   TBranch        *b_met_sign_met_rho;   //!
   TBranch        *b_met_sign_met_rho_ttdir;   //!
   TBranch        *b_met_sign_met_sig_directional;   //!
   TBranch        *b_met_sign_met_sig_directional_ttdir;   //!
   TBranch        *b_met_sign_met_significance;   //!
   TBranch        *b_met_sign_met_significance_ttdir;   //!
   TBranch        *b_met_sign_met_valL;   //!
   TBranch        *b_met_sign_met_valL_ttdir;   //!
   TBranch        *b_met_sign_met_varT;   //!
   TBranch        *b_met_sign_met_varT_ttdir;   //!
   TBranch        *b_met_sumet;   //!
   TBranch        *b_met_truth_p4;   //!
   TBranch        *b_met_truth_sig;   //!
   TBranch        *b_met_truth_sumet;   //!
   TBranch        *b_mva_RRN;   //!
   TBranch        *b_n_actual_int;   //!
   TBranch        *b_n_actual_int_cor;   //!
   TBranch        *b_n_avg_int;   //!
   TBranch        *b_n_avg_int_cor;   //!
   TBranch        *b_n_bjets;   //!
   TBranch        *b_n_electrons;   //!
   TBranch        *b_n_jets;   //!
   TBranch        *b_n_jets_30;   //!
   TBranch        *b_n_jets_40;   //!
   TBranch        *b_n_jets_bad;   //!
   TBranch        *b_n_jets_central;   //!
   TBranch        *b_n_jets_central_30;   //!
   TBranch        *b_n_jets_central_40;   //!
   TBranch        *b_n_jets_forward;   //!
   TBranch        *b_n_jets_forward_30;   //!
   TBranch        *b_n_jets_forward_40;   //!
   TBranch        *b_n_jets_l1j25;   //!
   TBranch        *b_n_jets_mc_hs;   //!
   TBranch        *b_n_muons;   //!
   TBranch        *b_n_muons_bad;   //!
   TBranch        *b_n_muons_loose;   //!
   TBranch        *b_n_muons_medium;   //!
   TBranch        *b_n_muons_tight;   //!
   TBranch        *b_n_muons_veryloose;   //!
   TBranch        *b_n_photons;   //!
   TBranch        *b_n_pvx;   //!
   TBranch        *b_n_taus;   //!
   TBranch        *b_n_taus_loose;   //!
   TBranch        *b_n_taus_medium;   //!
   TBranch        *b_n_taus_tight;   //!
   TBranch        *b_n_taus_veryloose;   //!
   TBranch        *b_n_truth_gluon_jets;   //!
   TBranch        *b_n_truth_jets;   //!
   TBranch        *b_n_truth_jets_pt20_eta45;   //!
   TBranch        *b_n_truth_quark_jets;   //!
   TBranch        *b_n_vx;   //!
   TBranch        *b_primary_vertex;   //!
   TBranch        *b_primary_vertex_v;   //!
   TBranch        *b_pt_total;   //!
   TBranch        *b_run_number;   //!
   TBranch        *b_scalar_sum_pt;   //!
   TBranch        *b_tau_0;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTLOOSE;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTMEDIUM;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTTIGHT;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTLOOSE;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTMEDIUM;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTTIGHT;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_JetBDTloose;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_JetBDTmedium;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_JetBDTtight;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_reco;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_selection;   //!
   TBranch        *b_tau_0_allTrk_eta;   //!
   TBranch        *b_tau_0_allTrk_n;   //!
   TBranch        *b_tau_0_allTrk_phi;   //!
   TBranch        *b_tau_0_allTrk_pt;   //!
   TBranch        *b_tau_0_b_tag_score;   //!
   TBranch        *b_tau_0_b_tagged;   //!
   TBranch        *b_tau_0_decay_charged_p4;   //!
   TBranch        *b_tau_0_decay_mode;   //!
   TBranch        *b_tau_0_decay_neutral_p4;   //!
   TBranch        *b_tau_0_ele_BDTEleScoreTrans_run2;   //!
   TBranch        *b_tau_0_ele_bdt_eff_sf;   //!
   TBranch        *b_tau_0_ele_bdt_loose;   //!
   TBranch        *b_tau_0_ele_bdt_medium;   //!
   TBranch        *b_tau_0_ele_bdt_score;   //!
   TBranch        *b_tau_0_ele_bdt_tight;   //!
   TBranch        *b_tau_0_ele_match_lhscore;   //!
   TBranch        *b_tau_0_ele_olr_pass;   //!
   TBranch        *b_tau_0_jet_bdt_loose;   //!
   TBranch        *b_tau_0_jet_bdt_medium;   //!
   TBranch        *b_tau_0_jet_bdt_score;   //!
   TBranch        *b_tau_0_jet_bdt_score_trans;   //!
   TBranch        *b_tau_0_jet_bdt_tight;   //!
   TBranch        *b_tau_0_jet_bdt_veryloose;   //!
   TBranch        *b_tau_0_jet_jvt;   //!
   TBranch        *b_tau_0_jet_rnn_loose;   //!
   TBranch        *b_tau_0_jet_rnn_medium;   //!
   TBranch        *b_tau_0_jet_rnn_score;   //!
   TBranch        *b_tau_0_jet_rnn_score_trans;   //!
   TBranch        *b_tau_0_jet_rnn_tight;   //!
   TBranch        *b_tau_0_jet_rnn_veryloose;   //!
   TBranch        *b_tau_0_jet_width;   //!
   TBranch        *b_tau_0_leadTrk_d0;   //!
   TBranch        *b_tau_0_leadTrk_d0_sig;   //!
   TBranch        *b_tau_0_leadTrk_eta;   //!
   TBranch        *b_tau_0_leadTrk_phi;   //!
   TBranch        *b_tau_0_leadTrk_pt;   //!
   TBranch        *b_tau_0_leadTrk_pvx_z0;   //!
   TBranch        *b_tau_0_leadTrk_pvx_z0_sig;   //!
   TBranch        *b_tau_0_leadTrk_pvx_z0_sintheta;   //!
   TBranch        *b_tau_0_leadTrk_vertex_v;   //!
   TBranch        *b_tau_0_leadTrk_z0;   //!
   TBranch        *b_tau_0_leadTrk_z0_sig;   //!
   TBranch        *b_tau_0_leadTrk_z0_sintheta;   //!
   TBranch        *b_tau_0_matched;   //!
   TBranch        *b_tau_0_matched_classifierParticleOrigin;   //!
   TBranch        *b_tau_0_matched_classifierParticleType;   //!
   TBranch        *b_tau_0_matched_decay_charged_p4;   //!
   TBranch        *b_tau_0_matched_decay_mode;   //!
   TBranch        *b_tau_0_matched_decay_neutral_p4;   //!
   TBranch        *b_tau_0_matched_decay_neutrino_p4;   //!
   TBranch        *b_tau_0_matched_isEle;   //!
   TBranch        *b_tau_0_matched_isHadTau;   //!
   TBranch        *b_tau_0_matched_isJet;   //!
   TBranch        *b_tau_0_matched_isMuon;   //!
   TBranch        *b_tau_0_matched_isTau;   //!
   TBranch        *b_tau_0_matched_isTruthMatch;   //!
   TBranch        *b_tau_0_matched_mother_pdgId;   //!
   TBranch        *b_tau_0_matched_mother_status;   //!
   TBranch        *b_tau_0_matched_n_charged;   //!
   TBranch        *b_tau_0_matched_n_charged_pion;   //!
   TBranch        *b_tau_0_matched_n_neutral;   //!
   TBranch        *b_tau_0_matched_n_neutral_pion;   //!
   TBranch        *b_tau_0_matched_origin;   //!
   TBranch        *b_tau_0_matched_p4;   //!
   TBranch        *b_tau_0_matched_p4_vis_charged_track0;   //!
   TBranch        *b_tau_0_matched_p4_vis_charged_track1;   //!
   TBranch        *b_tau_0_matched_p4_vis_charged_track2;   //!
   TBranch        *b_tau_0_matched_pdgId;   //!
   TBranch        *b_tau_0_matched_pz;   //!
   TBranch        *b_tau_0_matched_q;   //!
   TBranch        *b_tau_0_matched_status;   //!
   TBranch        *b_tau_0_matched_type;   //!
   TBranch        *b_tau_0_matched_vis_charged_p4;   //!
   TBranch        *b_tau_0_matched_vis_neutral_others_p4;   //!
   TBranch        *b_tau_0_matched_vis_neutral_p4;   //!
   TBranch        *b_tau_0_matched_vis_neutral_pions_p4;   //!
   TBranch        *b_tau_0_matched_vis_p4;   //!
   TBranch        *b_tau_0_n_all_tracks;   //!
   TBranch        *b_tau_0_n_charged_tracks;   //!
   TBranch        *b_tau_0_n_conversion_tracks;   //!
   TBranch        *b_tau_0_n_core_tracks;   //!
   TBranch        *b_tau_0_n_failTrackFilter_tracks;   //!
   TBranch        *b_tau_0_n_fake_tracks;   //!
   TBranch        *b_tau_0_n_isolation_tracks;   //!
   TBranch        *b_tau_0_n_modified_isolation_tracks;   //!
   TBranch        *b_tau_0_n_old_tracks;   //!
   TBranch        *b_tau_0_n_passTrkSelectionTight_tracks;   //!
   TBranch        *b_tau_0_n_passTrkSelector_tracks;   //!
   TBranch        *b_tau_0_n_unclassified_tracks;   //!
   TBranch        *b_tau_0_n_wide_tracks;   //!
   TBranch        *b_tau_0_origin;   //!
   TBranch        *b_tau_0_p4;   //!
   TBranch        *b_tau_0_q;   //!
   TBranch        *b_tau_0_track0_p4;   //!
   TBranch        *b_tau_0_track1_p4;   //!
   TBranch        *b_tau_0_track2_p4;   //!
   TBranch        *b_tau_0_trig_HLT_tau25_medium1_tracktwo;   //!
   TBranch        *b_tau_0_trig_HLT_tau35_medium1_tracktwo;   //!
   TBranch        *b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo;   //!
   TBranch        *b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I;   //!
   TBranch        *b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25;   //!
   TBranch        *b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I;   //!
   TBranch        *b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25;   //!
   TBranch        *b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM;   //!
   TBranch        *b_tau_0_trig_trigger_matched;   //!
   TBranch        *b_tau_0_type;   //!
   TBranch        *b_tau_1;   //!
   TBranch        *b_tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTLOOSE;   //!
   TBranch        *b_tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTMEDIUM;   //!
   TBranch        *b_tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTTIGHT;   //!
   TBranch        *b_tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTLOOSE;   //!
   TBranch        *b_tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTMEDIUM;   //!
   TBranch        *b_tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTTIGHT;   //!
   TBranch        *b_tau_1_NOMINAL_TauEffSF_HadTauEleOLR_tauhad;   //!
   TBranch        *b_tau_1_NOMINAL_TauEffSF_JetBDTloose;   //!
   TBranch        *b_tau_1_NOMINAL_TauEffSF_JetBDTmedium;   //!
   TBranch        *b_tau_1_NOMINAL_TauEffSF_JetBDTtight;   //!
   TBranch        *b_tau_1_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron;   //!
   TBranch        *b_tau_1_NOMINAL_TauEffSF_reco;   //!
   TBranch        *b_tau_1_NOMINAL_TauEffSF_selection;   //!
   TBranch        *b_tau_1_allTrk_eta;   //!
   TBranch        *b_tau_1_allTrk_n;   //!
   TBranch        *b_tau_1_allTrk_phi;   //!
   TBranch        *b_tau_1_allTrk_pt;   //!
   TBranch        *b_tau_1_b_tag_score;   //!
   TBranch        *b_tau_1_b_tagged;   //!
   TBranch        *b_tau_1_decay_charged_p4;   //!
   TBranch        *b_tau_1_decay_mode;   //!
   TBranch        *b_tau_1_decay_neutral_p4;   //!
   TBranch        *b_tau_1_ele_BDTEleScoreTrans_run2;   //!
   TBranch        *b_tau_1_ele_bdt_eff_sf;   //!
   TBranch        *b_tau_1_ele_bdt_loose;   //!
   TBranch        *b_tau_1_ele_bdt_medium;   //!
   TBranch        *b_tau_1_ele_bdt_score;   //!
   TBranch        *b_tau_1_ele_bdt_tight;   //!
   TBranch        *b_tau_1_ele_match_lhscore;   //!
   TBranch        *b_tau_1_ele_olr_pass;   //!
   TBranch        *b_tau_1_jet_bdt_loose;   //!
   TBranch        *b_tau_1_jet_bdt_medium;   //!
   TBranch        *b_tau_1_jet_bdt_score;   //!
   TBranch        *b_tau_1_jet_bdt_score_trans;   //!
   TBranch        *b_tau_1_jet_bdt_tight;   //!
   TBranch        *b_tau_1_jet_bdt_veryloose;   //!
   TBranch        *b_tau_1_jet_jvt;   //!
   TBranch        *b_tau_1_jet_rnn_loose;   //!
   TBranch        *b_tau_1_jet_rnn_medium;   //!
   TBranch        *b_tau_1_jet_rnn_score;   //!
   TBranch        *b_tau_1_jet_rnn_score_trans;   //!
   TBranch        *b_tau_1_jet_rnn_tight;   //!
   TBranch        *b_tau_1_jet_rnn_veryloose;   //!
   TBranch        *b_tau_1_jet_width;   //!
   TBranch        *b_tau_1_leadTrk_d0;   //!
   TBranch        *b_tau_1_leadTrk_d0_sig;   //!
   TBranch        *b_tau_1_leadTrk_eta;   //!
   TBranch        *b_tau_1_leadTrk_phi;   //!
   TBranch        *b_tau_1_leadTrk_pt;   //!
   TBranch        *b_tau_1_leadTrk_pvx_z0;   //!
   TBranch        *b_tau_1_leadTrk_pvx_z0_sig;   //!
   TBranch        *b_tau_1_leadTrk_pvx_z0_sintheta;   //!
   TBranch        *b_tau_1_leadTrk_vertex_v;   //!
   TBranch        *b_tau_1_leadTrk_z0;   //!
   TBranch        *b_tau_1_leadTrk_z0_sig;   //!
   TBranch        *b_tau_1_leadTrk_z0_sintheta;   //!
   TBranch        *b_tau_1_matched;   //!
   TBranch        *b_tau_1_matched_classifierParticleOrigin;   //!
   TBranch        *b_tau_1_matched_classifierParticleType;   //!
   TBranch        *b_tau_1_matched_decay_charged_p4;   //!
   TBranch        *b_tau_1_matched_decay_mode;   //!
   TBranch        *b_tau_1_matched_decay_neutral_p4;   //!
   TBranch        *b_tau_1_matched_decay_neutrino_p4;   //!
   TBranch        *b_tau_1_matched_isEle;   //!
   TBranch        *b_tau_1_matched_isHadTau;   //!
   TBranch        *b_tau_1_matched_isJet;   //!
   TBranch        *b_tau_1_matched_isMuon;   //!
   TBranch        *b_tau_1_matched_isTau;   //!
   TBranch        *b_tau_1_matched_isTruthMatch;   //!
   TBranch        *b_tau_1_matched_mother_pdgId;   //!
   TBranch        *b_tau_1_matched_mother_status;   //!
   TBranch        *b_tau_1_matched_n_charged;   //!
   TBranch        *b_tau_1_matched_n_charged_pion;   //!
   TBranch        *b_tau_1_matched_n_neutral;   //!
   TBranch        *b_tau_1_matched_n_neutral_pion;   //!
   TBranch        *b_tau_1_matched_origin;   //!
   TBranch        *b_tau_1_matched_p4;   //!
   TBranch        *b_tau_1_matched_p4_vis_charged_track0;   //!
   TBranch        *b_tau_1_matched_p4_vis_charged_track1;   //!
   TBranch        *b_tau_1_matched_p4_vis_charged_track2;   //!
   TBranch        *b_tau_1_matched_pdgId;   //!
   TBranch        *b_tau_1_matched_pz;   //!
   TBranch        *b_tau_1_matched_q;   //!
   TBranch        *b_tau_1_matched_status;   //!
   TBranch        *b_tau_1_matched_type;   //!
   TBranch        *b_tau_1_matched_vis_charged_p4;   //!
   TBranch        *b_tau_1_matched_vis_neutral_others_p4;   //!
   TBranch        *b_tau_1_matched_vis_neutral_p4;   //!
   TBranch        *b_tau_1_matched_vis_neutral_pions_p4;   //!
   TBranch        *b_tau_1_matched_vis_p4;   //!
   TBranch        *b_tau_1_n_all_tracks;   //!
   TBranch        *b_tau_1_n_charged_tracks;   //!
   TBranch        *b_tau_1_n_conversion_tracks;   //!
   TBranch        *b_tau_1_n_core_tracks;   //!
   TBranch        *b_tau_1_n_failTrackFilter_tracks;   //!
   TBranch        *b_tau_1_n_fake_tracks;   //!
   TBranch        *b_tau_1_n_isolation_tracks;   //!
   TBranch        *b_tau_1_n_modified_isolation_tracks;   //!
   TBranch        *b_tau_1_n_old_tracks;   //!
   TBranch        *b_tau_1_n_passTrkSelectionTight_tracks;   //!
   TBranch        *b_tau_1_n_passTrkSelector_tracks;   //!
   TBranch        *b_tau_1_n_unclassified_tracks;   //!
   TBranch        *b_tau_1_n_wide_tracks;   //!
   TBranch        *b_tau_1_origin;   //!
   TBranch        *b_tau_1_p4;   //!
   TBranch        *b_tau_1_q;   //!
   TBranch        *b_tau_1_track0_p4;   //!
   TBranch        *b_tau_1_track1_p4;   //!
   TBranch        *b_tau_1_track2_p4;   //!
   TBranch        *b_tau_1_trig_HLT_tau25_medium1_tracktwo;   //!
   TBranch        *b_tau_1_trig_HLT_tau35_medium1_tracktwo;   //!
   TBranch        *b_tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo;   //!
   TBranch        *b_tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I;   //!
   TBranch        *b_tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25;   //!
   TBranch        *b_tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I;   //!
   TBranch        *b_tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25;   //!
   TBranch        *b_tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM;   //!
   TBranch        *b_tau_1_trig_trigger_matched;   //!
   TBranch        *b_tau_1_type;   //!
   TBranch        *b_tau_eta_centrality;   //!
   TBranch        *b_theory_weights_CT14_pdfset;   //!
   TBranch        *b_theory_weights_MMHT_pdfset;   //!
   TBranch        *b_theory_weights_PDF_central_value;   //!
   TBranch        *b_theory_weights_PDF_error_down;   //!
   TBranch        *b_theory_weights_PDF_error_up;   //!
   TBranch        *b_theory_weights_alphaS_down;   //!
   TBranch        *b_theory_weights_alphaS_up;   //!
   TBranch        *b_truth_passedVBFFilter;   //!
   TBranch        *b_weight_mc;   //!
   TBranch        *b_weight_total;   //!

   virtual void     Init(TTree *tree);
   virtual void     Loop(TTree*inputtree, TString samplename);
};

void hadhadtree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   boson_0_truth_p4 = 0;
   ditau_matched_p4 = 0;
   ditau_p4 = 0;
   jet_0_p4 = 0;
   jet_0_wztruth_p4 = 0;
   jet_1_p4 = 0;
   jet_1_wztruth_p4 = 0;
   jet_2_p4 = 0;
   jet_2_wztruth_p4 = 0;
   jet_3_p4 = 0;
   jet_3_wztruth_p4 = 0;
   jet_4_p4 = 0;
   jet_4_wztruth_p4 = 0;
   jet_5_p4 = 0;
   jet_5_wztruth_p4 = 0;
   jet_6_p4 = 0;
   jet_6_wztruth_p4 = 0;
   jet_7_p4 = 0;
   jet_7_wztruth_p4 = 0;
   met_hpto_p4 = 0;
   met_p4 = 0;
   met_truth_p4 = 0;
   primary_vertex_v = 0;
   tau_0_decay_charged_p4 = 0;
   tau_0_decay_neutral_p4 = 0;
   tau_0_leadTrk_vertex_v = 0;
   tau_0_matched_decay_charged_p4 = 0;
   tau_0_matched_decay_neutral_p4 = 0;
   tau_0_matched_decay_neutrino_p4 = 0;
   tau_0_matched_p4 = 0;
   tau_0_matched_p4_vis_charged_track0 = 0;
   tau_0_matched_p4_vis_charged_track1 = 0;
   tau_0_matched_p4_vis_charged_track2 = 0;
   tau_0_matched_vis_charged_p4 = 0;
   tau_0_matched_vis_neutral_others_p4 = 0;
   tau_0_matched_vis_neutral_p4 = 0;
   tau_0_matched_vis_neutral_pions_p4 = 0;
   tau_0_matched_vis_p4 = 0;
   tau_0_p4 = 0;
   tau_0_track0_p4 = 0;
   tau_0_track1_p4 = 0;
   tau_0_track2_p4 = 0;
   tau_1_decay_charged_p4 = 0;
   tau_1_decay_neutral_p4 = 0;
   tau_1_leadTrk_vertex_v = 0;
   tau_1_matched_decay_charged_p4 = 0;
   tau_1_matched_decay_neutral_p4 = 0;
   tau_1_matched_decay_neutrino_p4 = 0;
   tau_1_matched_p4 = 0;
   tau_1_matched_p4_vis_charged_track0 = 0;
   tau_1_matched_p4_vis_charged_track1 = 0;
   tau_1_matched_p4_vis_charged_track2 = 0;
   tau_1_matched_vis_charged_p4 = 0;
   tau_1_matched_vis_neutral_others_p4 = 0;
   tau_1_matched_vis_neutral_p4 = 0;
   tau_1_matched_vis_neutral_pions_p4 = 0;
   tau_1_matched_vis_p4 = 0;
   tau_1_p4 = 0;
   tau_1_track0_p4 = 0;
   tau_1_track1_p4 = 0;
   tau_1_track2_p4 = 0;
   // Set branch addresses and branch pointers

   tree->SetBranchAddress("HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo", &HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo, &b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo);
   tree->SetBranchAddress("HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I", &HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I, &b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I);
   tree->SetBranchAddress("HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25", &HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25, &b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25);
   tree->SetBranchAddress("HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I", &HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I, &b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I);
   tree->SetBranchAddress("HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25", &HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25, &b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25);
   tree->SetBranchAddress("HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM", &HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM, &b_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM);
   tree->SetBranchAddress("HTXS_Higgs_eta", &HTXS_Higgs_eta, &b_HTXS_Higgs_eta);
   tree->SetBranchAddress("HTXS_Higgs_pt", &HTXS_Higgs_pt, &b_HTXS_Higgs_pt);
   tree->SetBranchAddress("HTXS_Njets_pTjet25", &HTXS_Njets_pTjet25, &b_HTXS_Njets_pTjet25);
   tree->SetBranchAddress("HTXS_Njets_pTjet30", &HTXS_Njets_pTjet30, &b_HTXS_Njets_pTjet30);
   tree->SetBranchAddress("HTXS_Stage0_Category", &HTXS_Stage0_Category, &b_HTXS_Stage0_Category);
   tree->SetBranchAddress("HTXS_Stage1_Category_pTjet25GeV", &HTXS_Stage1_Category_pTjet25GeV, &b_HTXS_Stage1_Category_pTjet25GeV);
   tree->SetBranchAddress("HTXS_Stage1_Category_pTjet30GeV", &HTXS_Stage1_Category_pTjet30GeV, &b_HTXS_Stage1_Category_pTjet30GeV);
   tree->SetBranchAddress("HTXS_errorMode", &HTXS_errorMode, &b_HTXS_errorMode);
   tree->SetBranchAddress("HTXS_prodMode", &HTXS_prodMode, &b_HTXS_prodMode);
   tree->SetBranchAddress("NOMINAL_pileup_combined_weight", &NOMINAL_pileup_combined_weight, &b_NOMINAL_pileup_combined_weight);
   tree->SetBranchAddress("NOMINAL_pileup_random_lb_number", &NOMINAL_pileup_random_lb_number, &b_NOMINAL_pileup_random_lb_number);
   tree->SetBranchAddress("NOMINAL_pileup_random_run_number", &NOMINAL_pileup_random_run_number, &b_NOMINAL_pileup_random_run_number);
   tree->SetBranchAddress("boson_0_truth", &boson_0_truth, &b_boson_0_truth);
   tree->SetBranchAddress("boson_0_truth_classifierParticleOrigin", &boson_0_truth_classifierParticleOrigin, &b_boson_0_truth_classifierParticleOrigin);
   tree->SetBranchAddress("boson_0_truth_classifierParticleType", &boson_0_truth_classifierParticleType, &b_boson_0_truth_classifierParticleType);
   tree->SetBranchAddress("boson_0_truth_mother_pdgId", &boson_0_truth_mother_pdgId, &b_boson_0_truth_mother_pdgId);
   tree->SetBranchAddress("boson_0_truth_mother_status", &boson_0_truth_mother_status, &b_boson_0_truth_mother_status);
   tree->SetBranchAddress("boson_0_truth_origin", &boson_0_truth_origin, &b_boson_0_truth_origin);
   tree->SetBranchAddress("boson_0_truth_p4", &boson_0_truth_p4, &b_boson_0_truth_p4);
   tree->SetBranchAddress("boson_0_truth_pdgId", &boson_0_truth_pdgId, &b_boson_0_truth_pdgId);
   tree->SetBranchAddress("boson_0_truth_pz", &boson_0_truth_pz, &b_boson_0_truth_pz);
   tree->SetBranchAddress("boson_0_truth_q", &boson_0_truth_q, &b_boson_0_truth_q);
   tree->SetBranchAddress("boson_0_truth_status", &boson_0_truth_status, &b_boson_0_truth_status);
   tree->SetBranchAddress("boson_0_truth_type", &boson_0_truth_type, &b_boson_0_truth_type);
   tree->SetBranchAddress("dijet_deta", &dijet_deta, &b_dijet_deta);
   tree->SetBranchAddress("dijet_dphi", &dijet_dphi, &b_dijet_dphi);
   tree->SetBranchAddress("dijet_dpt", &dijet_dpt, &b_dijet_dpt);
   tree->SetBranchAddress("dijet_m", &dijet_m, &b_dijet_m);
   tree->SetBranchAddress("dijet_prod_eta", &dijet_prod_eta, &b_dijet_prod_eta);
   tree->SetBranchAddress("ditau", &ditau, &b_ditau);
   tree->SetBranchAddress("ditau_CP_alphaminus_ip", &ditau_CP_alphaminus_ip, &b_ditau_CP_alphaminus_ip);
   tree->SetBranchAddress("ditau_CP_alphaminus_ip_rho", &ditau_CP_alphaminus_ip_rho, &b_ditau_CP_alphaminus_ip_rho);
   tree->SetBranchAddress("ditau_CP_alphaminus_rho_rho", &ditau_CP_alphaminus_rho_rho, &b_ditau_CP_alphaminus_rho_rho);
   tree->SetBranchAddress("ditau_CP_ip_tau0_mag", &ditau_CP_ip_tau0_mag, &b_ditau_CP_ip_tau0_mag);
   tree->SetBranchAddress("ditau_CP_ip_tau0_x_ip", &ditau_CP_ip_tau0_x_ip, &b_ditau_CP_ip_tau0_x_ip);
   tree->SetBranchAddress("ditau_CP_ip_tau0_y_ip", &ditau_CP_ip_tau0_y_ip, &b_ditau_CP_ip_tau0_y_ip);
   tree->SetBranchAddress("ditau_CP_ip_tau0_z_ip", &ditau_CP_ip_tau0_z_ip, &b_ditau_CP_ip_tau0_z_ip);
   tree->SetBranchAddress("ditau_CP_ip_tau1_mag", &ditau_CP_ip_tau1_mag, &b_ditau_CP_ip_tau1_mag);
   tree->SetBranchAddress("ditau_CP_ip_tau1_x_ip", &ditau_CP_ip_tau1_x_ip, &b_ditau_CP_ip_tau1_x_ip);
   tree->SetBranchAddress("ditau_CP_ip_tau1_y_ip", &ditau_CP_ip_tau1_y_ip, &b_ditau_CP_ip_tau1_y_ip);
   tree->SetBranchAddress("ditau_CP_ip_tau1_z_ip", &ditau_CP_ip_tau1_z_ip, &b_ditau_CP_ip_tau1_z_ip);
   tree->SetBranchAddress("ditau_CP_phi_star_cp_a1_rho", &ditau_CP_phi_star_cp_a1_rho, &b_ditau_CP_phi_star_cp_a1_rho);
   tree->SetBranchAddress("ditau_CP_phi_star_cp_ip_ip", &ditau_CP_phi_star_cp_ip_ip, &b_ditau_CP_phi_star_cp_ip_ip);
   tree->SetBranchAddress("ditau_CP_phi_star_cp_ip_rho", &ditau_CP_phi_star_cp_ip_rho, &b_ditau_CP_phi_star_cp_ip_rho);
   tree->SetBranchAddress("ditau_CP_phi_star_cp_ip_rho_opt", &ditau_CP_phi_star_cp_ip_rho_opt, &b_ditau_CP_phi_star_cp_ip_rho_opt);
   tree->SetBranchAddress("ditau_CP_phi_star_cp_rho_ip", &ditau_CP_phi_star_cp_rho_ip, &b_ditau_CP_phi_star_cp_rho_ip);
   tree->SetBranchAddress("ditau_CP_phi_star_cp_rho_rho", &ditau_CP_phi_star_cp_rho_rho, &b_ditau_CP_phi_star_cp_rho_rho);
   tree->SetBranchAddress("ditau_CP_tau0_upsilon", &ditau_CP_tau0_upsilon, &b_ditau_CP_tau0_upsilon);
   tree->SetBranchAddress("ditau_CP_tau1_upsilon", &ditau_CP_tau1_upsilon, &b_ditau_CP_tau1_upsilon);
   tree->SetBranchAddress("ditau_coll_approx", &ditau_coll_approx, &b_ditau_coll_approx);
   tree->SetBranchAddress("ditau_coll_approx_m", &ditau_coll_approx_m, &b_ditau_coll_approx_m);
   tree->SetBranchAddress("ditau_coll_approx_x0", &ditau_coll_approx_x0, &b_ditau_coll_approx_x0);
   tree->SetBranchAddress("ditau_coll_approx_x1", &ditau_coll_approx_x1, &b_ditau_coll_approx_x1);
   tree->SetBranchAddress("ditau_cosalpha", &ditau_cosalpha, &b_ditau_cosalpha);
   tree->SetBranchAddress("ditau_deta", &ditau_deta, &b_ditau_deta);
   tree->SetBranchAddress("ditau_dphi", &ditau_dphi, &b_ditau_dphi);
   tree->SetBranchAddress("ditau_dpt", &ditau_dpt, &b_ditau_dpt);
   tree->SetBranchAddress("ditau_dr", &ditau_dr, &b_ditau_dr);
   tree->SetBranchAddress("ditau_higgspt", &ditau_higgspt, &b_ditau_higgspt);
   tree->SetBranchAddress("ditau_matched", &ditau_matched, &b_ditau_matched);
   tree->SetBranchAddress("ditau_matched_CP_alphaminus_ip", &ditau_matched_CP_alphaminus_ip, &b_ditau_matched_CP_alphaminus_ip);
   tree->SetBranchAddress("ditau_matched_CP_alphaminus_ip_rho", &ditau_matched_CP_alphaminus_ip_rho, &b_ditau_matched_CP_alphaminus_ip_rho);
   tree->SetBranchAddress("ditau_matched_CP_alphaminus_rho_rho", &ditau_matched_CP_alphaminus_rho_rho, &b_ditau_matched_CP_alphaminus_rho_rho);
   tree->SetBranchAddress("ditau_matched_CP_ip_tau0_mag", &ditau_matched_CP_ip_tau0_mag, &b_ditau_matched_CP_ip_tau0_mag);
   tree->SetBranchAddress("ditau_matched_CP_ip_tau0_x_ip", &ditau_matched_CP_ip_tau0_x_ip, &b_ditau_matched_CP_ip_tau0_x_ip);
   tree->SetBranchAddress("ditau_matched_CP_ip_tau0_y_ip", &ditau_matched_CP_ip_tau0_y_ip, &b_ditau_matched_CP_ip_tau0_y_ip);
   tree->SetBranchAddress("ditau_matched_CP_ip_tau0_z_ip", &ditau_matched_CP_ip_tau0_z_ip, &b_ditau_matched_CP_ip_tau0_z_ip);
   tree->SetBranchAddress("ditau_matched_CP_ip_tau1_mag", &ditau_matched_CP_ip_tau1_mag, &b_ditau_matched_CP_ip_tau1_mag);
   tree->SetBranchAddress("ditau_matched_CP_ip_tau1_x_ip", &ditau_matched_CP_ip_tau1_x_ip, &b_ditau_matched_CP_ip_tau1_x_ip);
   tree->SetBranchAddress("ditau_matched_CP_ip_tau1_y_ip", &ditau_matched_CP_ip_tau1_y_ip, &b_ditau_matched_CP_ip_tau1_y_ip);
   tree->SetBranchAddress("ditau_matched_CP_ip_tau1_z_ip", &ditau_matched_CP_ip_tau1_z_ip, &b_ditau_matched_CP_ip_tau1_z_ip);
   tree->SetBranchAddress("ditau_matched_CP_phi_star_cp_a1_rho", &ditau_matched_CP_phi_star_cp_a1_rho, &b_ditau_matched_CP_phi_star_cp_a1_rho);
   tree->SetBranchAddress("ditau_matched_CP_phi_star_cp_ip_ip", &ditau_matched_CP_phi_star_cp_ip_ip, &b_ditau_matched_CP_phi_star_cp_ip_ip);
   tree->SetBranchAddress("ditau_matched_CP_phi_star_cp_ip_rho", &ditau_matched_CP_phi_star_cp_ip_rho, &b_ditau_matched_CP_phi_star_cp_ip_rho);
   tree->SetBranchAddress("ditau_matched_CP_phi_star_cp_ip_rho_opt", &ditau_matched_CP_phi_star_cp_ip_rho_opt, &b_ditau_matched_CP_phi_star_cp_ip_rho_opt);
   tree->SetBranchAddress("ditau_matched_CP_phi_star_cp_rho_ip", &ditau_matched_CP_phi_star_cp_rho_ip, &b_ditau_matched_CP_phi_star_cp_rho_ip);
   tree->SetBranchAddress("ditau_matched_CP_phi_star_cp_rho_rho", &ditau_matched_CP_phi_star_cp_rho_rho, &b_ditau_matched_CP_phi_star_cp_rho_rho);
   tree->SetBranchAddress("ditau_matched_CP_tau0_upsilon", &ditau_matched_CP_tau0_upsilon, &b_ditau_matched_CP_tau0_upsilon);
   tree->SetBranchAddress("ditau_matched_CP_tau1_upsilon", &ditau_matched_CP_tau1_upsilon, &b_ditau_matched_CP_tau1_upsilon);
   tree->SetBranchAddress("ditau_matched_cosalpha", &ditau_matched_cosalpha, &b_ditau_matched_cosalpha);
   tree->SetBranchAddress("ditau_matched_deta", &ditau_matched_deta, &b_ditau_matched_deta);
   tree->SetBranchAddress("ditau_matched_dphi", &ditau_matched_dphi, &b_ditau_matched_dphi);
   tree->SetBranchAddress("ditau_matched_dpt", &ditau_matched_dpt, &b_ditau_matched_dpt);
   tree->SetBranchAddress("ditau_matched_dr", &ditau_matched_dr, &b_ditau_matched_dr);
   tree->SetBranchAddress("ditau_matched_p4", &ditau_matched_p4, &b_ditau_matched_p4);
   tree->SetBranchAddress("ditau_matched_qxq", &ditau_matched_qxq, &b_ditau_matched_qxq);
   tree->SetBranchAddress("ditau_matched_scal_sum_pt", &ditau_matched_scal_sum_pt, &b_ditau_matched_scal_sum_pt);
   tree->SetBranchAddress("ditau_matched_vis_cosalpha", &ditau_matched_vis_cosalpha, &b_ditau_matched_vis_cosalpha);
   tree->SetBranchAddress("ditau_matched_vis_deta", &ditau_matched_vis_deta, &b_ditau_matched_vis_deta);
   tree->SetBranchAddress("ditau_matched_vis_dphi", &ditau_matched_vis_dphi, &b_ditau_matched_vis_dphi);
   tree->SetBranchAddress("ditau_matched_vis_dr", &ditau_matched_vis_dr, &b_ditau_matched_vis_dr);
   tree->SetBranchAddress("ditau_matched_vis_mass", &ditau_matched_vis_mass, &b_ditau_matched_vis_mass);
   tree->SetBranchAddress("ditau_matched_vis_scal_sum_pt", &ditau_matched_vis_scal_sum_pt, &b_ditau_matched_vis_scal_sum_pt);
   tree->SetBranchAddress("ditau_matched_vis_vect_sum_pt", &ditau_matched_vis_vect_sum_pt, &b_ditau_matched_vis_vect_sum_pt);
   tree->SetBranchAddress("ditau_met_bisect", &ditau_met_bisect, &b_ditau_met_bisect);
   tree->SetBranchAddress("ditau_met_centrality", &ditau_met_centrality, &b_ditau_met_centrality);
   tree->SetBranchAddress("ditau_met_lep0_cos_dphi", &ditau_met_lep0_cos_dphi, &b_ditau_met_lep0_cos_dphi);
   tree->SetBranchAddress("ditau_met_lep1_cos_dphi", &ditau_met_lep1_cos_dphi, &b_ditau_met_lep1_cos_dphi);
   tree->SetBranchAddress("ditau_met_min_dphi", &ditau_met_min_dphi, &b_ditau_met_min_dphi);
   tree->SetBranchAddress("ditau_met_sum_cos_dphi", &ditau_met_sum_cos_dphi, &b_ditau_met_sum_cos_dphi);
   tree->SetBranchAddress("ditau_mmc_maxw", &ditau_mmc_maxw, &b_ditau_mmc_maxw);
   tree->SetBranchAddress("ditau_mmc_maxw_eta", &ditau_mmc_maxw_eta, &b_ditau_mmc_maxw_eta);
   tree->SetBranchAddress("ditau_mmc_maxw_fit_status", &ditau_mmc_maxw_fit_status, &b_ditau_mmc_maxw_fit_status);
   tree->SetBranchAddress("ditau_mmc_maxw_m", &ditau_mmc_maxw_m, &b_ditau_mmc_maxw_m);
   tree->SetBranchAddress("ditau_mmc_maxw_met_et", &ditau_mmc_maxw_met_et, &b_ditau_mmc_maxw_met_et);
   tree->SetBranchAddress("ditau_mmc_maxw_met_phi", &ditau_mmc_maxw_met_phi, &b_ditau_mmc_maxw_met_phi);
   tree->SetBranchAddress("ditau_mmc_maxw_phi", &ditau_mmc_maxw_phi, &b_ditau_mmc_maxw_phi);
   tree->SetBranchAddress("ditau_mmc_maxw_pt", &ditau_mmc_maxw_pt, &b_ditau_mmc_maxw_pt);
   tree->SetBranchAddress("ditau_mmc_maxw_x0", &ditau_mmc_maxw_x0, &b_ditau_mmc_maxw_x0);
   tree->SetBranchAddress("ditau_mmc_maxw_x1", &ditau_mmc_maxw_x1, &b_ditau_mmc_maxw_x1);
   tree->SetBranchAddress("ditau_mmc_mlm", &ditau_mmc_mlm, &b_ditau_mmc_mlm);
   tree->SetBranchAddress("ditau_mmc_mlm_fit_status", &ditau_mmc_mlm_fit_status, &b_ditau_mmc_mlm_fit_status);
   tree->SetBranchAddress("ditau_mmc_mlm_m", &ditau_mmc_mlm_m, &b_ditau_mmc_mlm_m);
   tree->SetBranchAddress("ditau_mmc_mlnu3p", &ditau_mmc_mlnu3p, &b_ditau_mmc_mlnu3p);
   tree->SetBranchAddress("ditau_mmc_mlnu3p_eta", &ditau_mmc_mlnu3p_eta, &b_ditau_mmc_mlnu3p_eta);
   tree->SetBranchAddress("ditau_mmc_mlnu3p_fit_status", &ditau_mmc_mlnu3p_fit_status, &b_ditau_mmc_mlnu3p_fit_status);
   tree->SetBranchAddress("ditau_mmc_mlnu3p_m", &ditau_mmc_mlnu3p_m, &b_ditau_mmc_mlnu3p_m);
   tree->SetBranchAddress("ditau_mmc_mlnu3p_met_et", &ditau_mmc_mlnu3p_met_et, &b_ditau_mmc_mlnu3p_met_et);
   tree->SetBranchAddress("ditau_mmc_mlnu3p_met_phi", &ditau_mmc_mlnu3p_met_phi, &b_ditau_mmc_mlnu3p_met_phi);
   tree->SetBranchAddress("ditau_mmc_mlnu3p_phi", &ditau_mmc_mlnu3p_phi, &b_ditau_mmc_mlnu3p_phi);
   tree->SetBranchAddress("ditau_mmc_mlnu3p_pt", &ditau_mmc_mlnu3p_pt, &b_ditau_mmc_mlnu3p_pt);
   tree->SetBranchAddress("ditau_mmc_mlnu3p_x0", &ditau_mmc_mlnu3p_x0, &b_ditau_mmc_mlnu3p_x0);
   tree->SetBranchAddress("ditau_mmc_mlnu3p_x1", &ditau_mmc_mlnu3p_x1, &b_ditau_mmc_mlnu3p_x1);
   tree->SetBranchAddress("ditau_mt_lep0_met", &ditau_mt_lep0_met, &b_ditau_mt_lep0_met);
   tree->SetBranchAddress("ditau_mt_lep1_met", &ditau_mt_lep1_met, &b_ditau_mt_lep1_met);
   tree->SetBranchAddress("ditau_p4", &ditau_p4, &b_ditau_p4);
   tree->SetBranchAddress("ditau_qxq", &ditau_qxq, &b_ditau_qxq);
   tree->SetBranchAddress("ditau_scal_sum_pt", &ditau_scal_sum_pt, &b_ditau_scal_sum_pt);
   tree->SetBranchAddress("event_clean_EC_LooseBad", &event_clean_EC_LooseBad, &b_event_clean_EC_LooseBad);
   tree->SetBranchAddress("event_clean_EC_TightBad", &event_clean_EC_TightBad, &b_event_clean_EC_TightBad);
   tree->SetBranchAddress("event_number", &event_number, &b_event_number);
   tree->SetBranchAddress("is_dijet_centrality", &is_dijet_centrality, &b_is_dijet_centrality);
   tree->SetBranchAddress("jet_0", &jet_0, &b_jet_0);
   tree->SetBranchAddress("jet_0_b_tag_quantile", &jet_0_b_tag_quantile, &b_jet_0_b_tag_quantile);
   tree->SetBranchAddress("jet_0_b_tag_score", &jet_0_b_tag_score, &b_jet_0_b_tag_score);
   tree->SetBranchAddress("jet_0_b_tagged", &jet_0_b_tagged, &b_jet_0_b_tagged);
   tree->SetBranchAddress("jet_0_cleanJet_EC_LooseBad", &jet_0_cleanJet_EC_LooseBad, &b_jet_0_cleanJet_EC_LooseBad);
   tree->SetBranchAddress("jet_0_fjvt", &jet_0_fjvt, &b_jet_0_fjvt);
   tree->SetBranchAddress("jet_0_flavorlabel", &jet_0_flavorlabel, &b_jet_0_flavorlabel);
   tree->SetBranchAddress("jet_0_flavorlabel_cone", &jet_0_flavorlabel_cone, &b_jet_0_flavorlabel_cone);
   tree->SetBranchAddress("jet_0_flavorlabel_part", &jet_0_flavorlabel_part, &b_jet_0_flavorlabel_part);
   tree->SetBranchAddress("jet_0_is_Jvt_HS", &jet_0_is_Jvt_HS, &b_jet_0_is_Jvt_HS);
   tree->SetBranchAddress("jet_0_jvt", &jet_0_jvt, &b_jet_0_jvt);
   tree->SetBranchAddress("jet_0_origin", &jet_0_origin, &b_jet_0_origin);
   tree->SetBranchAddress("jet_0_p4", &jet_0_p4, &b_jet_0_p4);
   tree->SetBranchAddress("jet_0_q", &jet_0_q, &b_jet_0_q);
   tree->SetBranchAddress("jet_0_type", &jet_0_type, &b_jet_0_type);
   tree->SetBranchAddress("jet_0_width", &jet_0_width, &b_jet_0_width);
   tree->SetBranchAddress("jet_0_wztruth_p4", &jet_0_wztruth_p4, &b_jet_0_wztruth_p4);
   tree->SetBranchAddress("jet_0_wztruth_pdgid", &jet_0_wztruth_pdgid, &b_jet_0_wztruth_pdgid);
   tree->SetBranchAddress("jet_1", &jet_1, &b_jet_1);
   tree->SetBranchAddress("jet_1_b_tag_quantile", &jet_1_b_tag_quantile, &b_jet_1_b_tag_quantile);
   tree->SetBranchAddress("jet_1_b_tag_score", &jet_1_b_tag_score, &b_jet_1_b_tag_score);
   tree->SetBranchAddress("jet_1_b_tagged", &jet_1_b_tagged, &b_jet_1_b_tagged);
   tree->SetBranchAddress("jet_1_cleanJet_EC_LooseBad", &jet_1_cleanJet_EC_LooseBad, &b_jet_1_cleanJet_EC_LooseBad);
   tree->SetBranchAddress("jet_1_fjvt", &jet_1_fjvt, &b_jet_1_fjvt);
   tree->SetBranchAddress("jet_1_flavorlabel", &jet_1_flavorlabel, &b_jet_1_flavorlabel);
   tree->SetBranchAddress("jet_1_flavorlabel_cone", &jet_1_flavorlabel_cone, &b_jet_1_flavorlabel_cone);
   tree->SetBranchAddress("jet_1_flavorlabel_part", &jet_1_flavorlabel_part, &b_jet_1_flavorlabel_part);
   tree->SetBranchAddress("jet_1_is_Jvt_HS", &jet_1_is_Jvt_HS, &b_jet_1_is_Jvt_HS);
   tree->SetBranchAddress("jet_1_jvt", &jet_1_jvt, &b_jet_1_jvt);
   tree->SetBranchAddress("jet_1_origin", &jet_1_origin, &b_jet_1_origin);
   tree->SetBranchAddress("jet_1_p4", &jet_1_p4, &b_jet_1_p4);
   tree->SetBranchAddress("jet_1_q", &jet_1_q, &b_jet_1_q);
   tree->SetBranchAddress("jet_1_type", &jet_1_type, &b_jet_1_type);
   tree->SetBranchAddress("jet_1_width", &jet_1_width, &b_jet_1_width);
   tree->SetBranchAddress("jet_1_wztruth_p4", &jet_1_wztruth_p4, &b_jet_1_wztruth_p4);
   tree->SetBranchAddress("jet_1_wztruth_pdgid", &jet_1_wztruth_pdgid, &b_jet_1_wztruth_pdgid);
   tree->SetBranchAddress("jet_2", &jet_2, &b_jet_2);
   tree->SetBranchAddress("jet_2_b_tag_quantile", &jet_2_b_tag_quantile, &b_jet_2_b_tag_quantile);
   tree->SetBranchAddress("jet_2_b_tag_score", &jet_2_b_tag_score, &b_jet_2_b_tag_score);
   tree->SetBranchAddress("jet_2_b_tagged", &jet_2_b_tagged, &b_jet_2_b_tagged);
   tree->SetBranchAddress("jet_2_cleanJet_EC_LooseBad", &jet_2_cleanJet_EC_LooseBad, &b_jet_2_cleanJet_EC_LooseBad);
   tree->SetBranchAddress("jet_2_fjvt", &jet_2_fjvt, &b_jet_2_fjvt);
   tree->SetBranchAddress("jet_2_flavorlabel", &jet_2_flavorlabel, &b_jet_2_flavorlabel);
   tree->SetBranchAddress("jet_2_flavorlabel_cone", &jet_2_flavorlabel_cone, &b_jet_2_flavorlabel_cone);
   tree->SetBranchAddress("jet_2_flavorlabel_part", &jet_2_flavorlabel_part, &b_jet_2_flavorlabel_part);
   tree->SetBranchAddress("jet_2_is_Jvt_HS", &jet_2_is_Jvt_HS, &b_jet_2_is_Jvt_HS);
   tree->SetBranchAddress("jet_2_jvt", &jet_2_jvt, &b_jet_2_jvt);
   tree->SetBranchAddress("jet_2_origin", &jet_2_origin, &b_jet_2_origin);
   tree->SetBranchAddress("jet_2_p4", &jet_2_p4, &b_jet_2_p4);
   tree->SetBranchAddress("jet_2_q", &jet_2_q, &b_jet_2_q);
   tree->SetBranchAddress("jet_2_type", &jet_2_type, &b_jet_2_type);
   tree->SetBranchAddress("jet_2_width", &jet_2_width, &b_jet_2_width);
   tree->SetBranchAddress("jet_2_wztruth_p4", &jet_2_wztruth_p4, &b_jet_2_wztruth_p4);
   tree->SetBranchAddress("jet_2_wztruth_pdgid", &jet_2_wztruth_pdgid, &b_jet_2_wztruth_pdgid);
   tree->SetBranchAddress("jet_3", &jet_3, &b_jet_3);
   tree->SetBranchAddress("jet_3_b_tag_quantile", &jet_3_b_tag_quantile, &b_jet_3_b_tag_quantile);
   tree->SetBranchAddress("jet_3_b_tag_score", &jet_3_b_tag_score, &b_jet_3_b_tag_score);
   tree->SetBranchAddress("jet_3_b_tagged", &jet_3_b_tagged, &b_jet_3_b_tagged);
   tree->SetBranchAddress("jet_3_cleanJet_EC_LooseBad", &jet_3_cleanJet_EC_LooseBad, &b_jet_3_cleanJet_EC_LooseBad);
   tree->SetBranchAddress("jet_3_fjvt", &jet_3_fjvt, &b_jet_3_fjvt);
   tree->SetBranchAddress("jet_3_flavorlabel", &jet_3_flavorlabel, &b_jet_3_flavorlabel);
   tree->SetBranchAddress("jet_3_flavorlabel_cone", &jet_3_flavorlabel_cone, &b_jet_3_flavorlabel_cone);
   tree->SetBranchAddress("jet_3_flavorlabel_part", &jet_3_flavorlabel_part, &b_jet_3_flavorlabel_part);
   tree->SetBranchAddress("jet_3_is_Jvt_HS", &jet_3_is_Jvt_HS, &b_jet_3_is_Jvt_HS);
   tree->SetBranchAddress("jet_3_jvt", &jet_3_jvt, &b_jet_3_jvt);
   tree->SetBranchAddress("jet_3_origin", &jet_3_origin, &b_jet_3_origin);
   tree->SetBranchAddress("jet_3_p4", &jet_3_p4, &b_jet_3_p4);
   tree->SetBranchAddress("jet_3_q", &jet_3_q, &b_jet_3_q);
   tree->SetBranchAddress("jet_3_type", &jet_3_type, &b_jet_3_type);
   tree->SetBranchAddress("jet_3_width", &jet_3_width, &b_jet_3_width);
   tree->SetBranchAddress("jet_3_wztruth_p4", &jet_3_wztruth_p4, &b_jet_3_wztruth_p4);
   tree->SetBranchAddress("jet_3_wztruth_pdgid", &jet_3_wztruth_pdgid, &b_jet_3_wztruth_pdgid);
   tree->SetBranchAddress("jet_4", &jet_4, &b_jet_4);
   tree->SetBranchAddress("jet_4_b_tag_quantile", &jet_4_b_tag_quantile, &b_jet_4_b_tag_quantile);
   tree->SetBranchAddress("jet_4_b_tag_score", &jet_4_b_tag_score, &b_jet_4_b_tag_score);
   tree->SetBranchAddress("jet_4_b_tagged", &jet_4_b_tagged, &b_jet_4_b_tagged);
   tree->SetBranchAddress("jet_4_cleanJet_EC_LooseBad", &jet_4_cleanJet_EC_LooseBad, &b_jet_4_cleanJet_EC_LooseBad);
   tree->SetBranchAddress("jet_4_fjvt", &jet_4_fjvt, &b_jet_4_fjvt);
   tree->SetBranchAddress("jet_4_flavorlabel", &jet_4_flavorlabel, &b_jet_4_flavorlabel);
   tree->SetBranchAddress("jet_4_flavorlabel_cone", &jet_4_flavorlabel_cone, &b_jet_4_flavorlabel_cone);
   tree->SetBranchAddress("jet_4_flavorlabel_part", &jet_4_flavorlabel_part, &b_jet_4_flavorlabel_part);
   tree->SetBranchAddress("jet_4_is_Jvt_HS", &jet_4_is_Jvt_HS, &b_jet_4_is_Jvt_HS);
   tree->SetBranchAddress("jet_4_jvt", &jet_4_jvt, &b_jet_4_jvt);
   tree->SetBranchAddress("jet_4_origin", &jet_4_origin, &b_jet_4_origin);
   tree->SetBranchAddress("jet_4_p4", &jet_4_p4, &b_jet_4_p4);
   tree->SetBranchAddress("jet_4_q", &jet_4_q, &b_jet_4_q);
   tree->SetBranchAddress("jet_4_type", &jet_4_type, &b_jet_4_type);
   tree->SetBranchAddress("jet_4_width", &jet_4_width, &b_jet_4_width);
   tree->SetBranchAddress("jet_4_wztruth_p4", &jet_4_wztruth_p4, &b_jet_4_wztruth_p4);
   tree->SetBranchAddress("jet_4_wztruth_pdgid", &jet_4_wztruth_pdgid, &b_jet_4_wztruth_pdgid);
   tree->SetBranchAddress("jet_5", &jet_5, &b_jet_5);
   tree->SetBranchAddress("jet_5_b_tag_quantile", &jet_5_b_tag_quantile, &b_jet_5_b_tag_quantile);
   tree->SetBranchAddress("jet_5_b_tag_score", &jet_5_b_tag_score, &b_jet_5_b_tag_score);
   tree->SetBranchAddress("jet_5_b_tagged", &jet_5_b_tagged, &b_jet_5_b_tagged);
   tree->SetBranchAddress("jet_5_cleanJet_EC_LooseBad", &jet_5_cleanJet_EC_LooseBad, &b_jet_5_cleanJet_EC_LooseBad);
   tree->SetBranchAddress("jet_5_fjvt", &jet_5_fjvt, &b_jet_5_fjvt);
   tree->SetBranchAddress("jet_5_flavorlabel", &jet_5_flavorlabel, &b_jet_5_flavorlabel);
   tree->SetBranchAddress("jet_5_flavorlabel_cone", &jet_5_flavorlabel_cone, &b_jet_5_flavorlabel_cone);
   tree->SetBranchAddress("jet_5_flavorlabel_part", &jet_5_flavorlabel_part, &b_jet_5_flavorlabel_part);
   tree->SetBranchAddress("jet_5_is_Jvt_HS", &jet_5_is_Jvt_HS, &b_jet_5_is_Jvt_HS);
   tree->SetBranchAddress("jet_5_jvt", &jet_5_jvt, &b_jet_5_jvt);
   tree->SetBranchAddress("jet_5_origin", &jet_5_origin, &b_jet_5_origin);
   tree->SetBranchAddress("jet_5_p4", &jet_5_p4, &b_jet_5_p4);
   tree->SetBranchAddress("jet_5_q", &jet_5_q, &b_jet_5_q);
   tree->SetBranchAddress("jet_5_type", &jet_5_type, &b_jet_5_type);
   tree->SetBranchAddress("jet_5_width", &jet_5_width, &b_jet_5_width);
   tree->SetBranchAddress("jet_5_wztruth_p4", &jet_5_wztruth_p4, &b_jet_5_wztruth_p4);
   tree->SetBranchAddress("jet_5_wztruth_pdgid", &jet_5_wztruth_pdgid, &b_jet_5_wztruth_pdgid);
   tree->SetBranchAddress("jet_6", &jet_6, &b_jet_6);
   tree->SetBranchAddress("jet_6_b_tag_quantile", &jet_6_b_tag_quantile, &b_jet_6_b_tag_quantile);
   tree->SetBranchAddress("jet_6_b_tag_score", &jet_6_b_tag_score, &b_jet_6_b_tag_score);
   tree->SetBranchAddress("jet_6_b_tagged", &jet_6_b_tagged, &b_jet_6_b_tagged);
   tree->SetBranchAddress("jet_6_cleanJet_EC_LooseBad", &jet_6_cleanJet_EC_LooseBad, &b_jet_6_cleanJet_EC_LooseBad);
   tree->SetBranchAddress("jet_6_fjvt", &jet_6_fjvt, &b_jet_6_fjvt);
   tree->SetBranchAddress("jet_6_flavorlabel", &jet_6_flavorlabel, &b_jet_6_flavorlabel);
   tree->SetBranchAddress("jet_6_flavorlabel_cone", &jet_6_flavorlabel_cone, &b_jet_6_flavorlabel_cone);
   tree->SetBranchAddress("jet_6_flavorlabel_part", &jet_6_flavorlabel_part, &b_jet_6_flavorlabel_part);
   tree->SetBranchAddress("jet_6_is_Jvt_HS", &jet_6_is_Jvt_HS, &b_jet_6_is_Jvt_HS);
   tree->SetBranchAddress("jet_6_jvt", &jet_6_jvt, &b_jet_6_jvt);
   tree->SetBranchAddress("jet_6_origin", &jet_6_origin, &b_jet_6_origin);
   tree->SetBranchAddress("jet_6_p4", &jet_6_p4, &b_jet_6_p4);
   tree->SetBranchAddress("jet_6_q", &jet_6_q, &b_jet_6_q);
   tree->SetBranchAddress("jet_6_type", &jet_6_type, &b_jet_6_type);
   tree->SetBranchAddress("jet_6_width", &jet_6_width, &b_jet_6_width);
   tree->SetBranchAddress("jet_6_wztruth_p4", &jet_6_wztruth_p4, &b_jet_6_wztruth_p4);
   tree->SetBranchAddress("jet_6_wztruth_pdgid", &jet_6_wztruth_pdgid, &b_jet_6_wztruth_pdgid);
   tree->SetBranchAddress("jet_7", &jet_7, &b_jet_7);
   tree->SetBranchAddress("jet_7_b_tag_quantile", &jet_7_b_tag_quantile, &b_jet_7_b_tag_quantile);
   tree->SetBranchAddress("jet_7_b_tag_score", &jet_7_b_tag_score, &b_jet_7_b_tag_score);
   tree->SetBranchAddress("jet_7_b_tagged", &jet_7_b_tagged, &b_jet_7_b_tagged);
   tree->SetBranchAddress("jet_7_cleanJet_EC_LooseBad", &jet_7_cleanJet_EC_LooseBad, &b_jet_7_cleanJet_EC_LooseBad);
   tree->SetBranchAddress("jet_7_fjvt", &jet_7_fjvt, &b_jet_7_fjvt);
   tree->SetBranchAddress("jet_7_flavorlabel", &jet_7_flavorlabel, &b_jet_7_flavorlabel);
   tree->SetBranchAddress("jet_7_flavorlabel_cone", &jet_7_flavorlabel_cone, &b_jet_7_flavorlabel_cone);
   tree->SetBranchAddress("jet_7_flavorlabel_part", &jet_7_flavorlabel_part, &b_jet_7_flavorlabel_part);
   tree->SetBranchAddress("jet_7_is_Jvt_HS", &jet_7_is_Jvt_HS, &b_jet_7_is_Jvt_HS);
   tree->SetBranchAddress("jet_7_jvt", &jet_7_jvt, &b_jet_7_jvt);
   tree->SetBranchAddress("jet_7_origin", &jet_7_origin, &b_jet_7_origin);
   tree->SetBranchAddress("jet_7_p4", &jet_7_p4, &b_jet_7_p4);
   tree->SetBranchAddress("jet_7_q", &jet_7_q, &b_jet_7_q);
   tree->SetBranchAddress("jet_7_type", &jet_7_type, &b_jet_7_type);
   tree->SetBranchAddress("jet_7_width", &jet_7_width, &b_jet_7_width);
   tree->SetBranchAddress("jet_7_wztruth_p4", &jet_7_wztruth_p4, &b_jet_7_wztruth_p4);
   tree->SetBranchAddress("jet_7_wztruth_pdgid", &jet_7_wztruth_pdgid, &b_jet_7_wztruth_pdgid);
   tree->SetBranchAddress("jet_NOMINAL_central_jets_global_effSF_JVT", &jet_NOMINAL_central_jets_global_effSF_JVT, &b_jet_NOMINAL_central_jets_global_effSF_JVT);
   tree->SetBranchAddress("jet_NOMINAL_central_jets_global_ineffSF_JVT", &jet_NOMINAL_central_jets_global_ineffSF_JVT, &b_jet_NOMINAL_central_jets_global_ineffSF_JVT);
   tree->SetBranchAddress("jet_NOMINAL_forward_jets_global_effSF_JVT", &jet_NOMINAL_forward_jets_global_effSF_JVT, &b_jet_NOMINAL_forward_jets_global_effSF_JVT);
   tree->SetBranchAddress("jet_NOMINAL_forward_jets_global_ineffSF_JVT", &jet_NOMINAL_forward_jets_global_ineffSF_JVT, &b_jet_NOMINAL_forward_jets_global_ineffSF_JVT);
   tree->SetBranchAddress("jet_NOMINAL_global_effSF_MV2c10", &jet_NOMINAL_global_effSF_MV2c10, &b_jet_NOMINAL_global_effSF_MV2c10);
   tree->SetBranchAddress("jet_NOMINAL_global_ineffSF_MV2c10", &jet_NOMINAL_global_ineffSF_MV2c10, &b_jet_NOMINAL_global_ineffSF_MV2c10);
   tree->SetBranchAddress("lepton_eta_centrality", &lepton_eta_centrality, &b_lepton_eta_centrality);
   tree->SetBranchAddress("mc_channel_number", &mc_channel_number, &b_mc_channel_number);
   tree->SetBranchAddress("met_hpto_p4", &met_hpto_p4, &b_met_hpto_p4);
   tree->SetBranchAddress("met_more_met_et_ele", &met_more_met_et_ele, &b_met_more_met_et_ele);
   tree->SetBranchAddress("met_more_met_et_jet", &met_more_met_et_jet, &b_met_more_met_et_jet);
   tree->SetBranchAddress("met_more_met_et_muon", &met_more_met_et_muon, &b_met_more_met_et_muon);
   tree->SetBranchAddress("met_more_met_et_pho", &met_more_met_et_pho, &b_met_more_met_et_pho);
   tree->SetBranchAddress("met_more_met_et_soft", &met_more_met_et_soft, &b_met_more_met_et_soft);
   tree->SetBranchAddress("met_more_met_et_tau", &met_more_met_et_tau, &b_met_more_met_et_tau);
   tree->SetBranchAddress("met_more_met_phi_ele", &met_more_met_phi_ele, &b_met_more_met_phi_ele);
   tree->SetBranchAddress("met_more_met_phi_jet", &met_more_met_phi_jet, &b_met_more_met_phi_jet);
   tree->SetBranchAddress("met_more_met_phi_muon", &met_more_met_phi_muon, &b_met_more_met_phi_muon);
   tree->SetBranchAddress("met_more_met_phi_pho", &met_more_met_phi_pho, &b_met_more_met_phi_pho);
   tree->SetBranchAddress("met_more_met_phi_soft", &met_more_met_phi_soft, &b_met_more_met_phi_soft);
   tree->SetBranchAddress("met_more_met_phi_tau", &met_more_met_phi_tau, &b_met_more_met_phi_tau);
   tree->SetBranchAddress("met_more_met_sumet_ele", &met_more_met_sumet_ele, &b_met_more_met_sumet_ele);
   tree->SetBranchAddress("met_more_met_sumet_jet", &met_more_met_sumet_jet, &b_met_more_met_sumet_jet);
   tree->SetBranchAddress("met_more_met_sumet_muon", &met_more_met_sumet_muon, &b_met_more_met_sumet_muon);
   tree->SetBranchAddress("met_more_met_sumet_pho", &met_more_met_sumet_pho, &b_met_more_met_sumet_pho);
   tree->SetBranchAddress("met_more_met_sumet_soft", &met_more_met_sumet_soft, &b_met_more_met_sumet_soft);
   tree->SetBranchAddress("met_more_met_sumet_tau", &met_more_met_sumet_tau, &b_met_more_met_sumet_tau);
   tree->SetBranchAddress("met_p4", &met_p4, &b_met_p4);
   tree->SetBranchAddress("met_sig", &met_sig, &b_met_sig);
   tree->SetBranchAddress("met_sig_tracks", &met_sig_tracks, &b_met_sig_tracks);
   tree->SetBranchAddress("met_sign_met_over_sqrt_ht", &met_sign_met_over_sqrt_ht, &b_met_sign_met_over_sqrt_ht);
   tree->SetBranchAddress("met_sign_met_over_sqrt_sumet", &met_sign_met_over_sqrt_sumet, &b_met_sign_met_over_sqrt_sumet);
   tree->SetBranchAddress("met_sign_met_rho", &met_sign_met_rho, &b_met_sign_met_rho);
   tree->SetBranchAddress("met_sign_met_rho_ttdir", &met_sign_met_rho_ttdir, &b_met_sign_met_rho_ttdir);
   tree->SetBranchAddress("met_sign_met_sig_directional", &met_sign_met_sig_directional, &b_met_sign_met_sig_directional);
   tree->SetBranchAddress("met_sign_met_sig_directional_ttdir", &met_sign_met_sig_directional_ttdir, &b_met_sign_met_sig_directional_ttdir);
   tree->SetBranchAddress("met_sign_met_significance", &met_sign_met_significance, &b_met_sign_met_significance);
   tree->SetBranchAddress("met_sign_met_significance_ttdir", &met_sign_met_significance_ttdir, &b_met_sign_met_significance_ttdir);
   tree->SetBranchAddress("met_sign_met_valL", &met_sign_met_valL, &b_met_sign_met_valL);
   tree->SetBranchAddress("met_sign_met_valL_ttdir", &met_sign_met_valL_ttdir, &b_met_sign_met_valL_ttdir);
   tree->SetBranchAddress("met_sign_met_varT", &met_sign_met_varT, &b_met_sign_met_varT);
   tree->SetBranchAddress("met_sign_met_varT_ttdir", &met_sign_met_varT_ttdir, &b_met_sign_met_varT_ttdir);
   tree->SetBranchAddress("met_sumet", &met_sumet, &b_met_sumet);
   tree->SetBranchAddress("met_truth_p4", &met_truth_p4, &b_met_truth_p4);
   tree->SetBranchAddress("met_truth_sig", &met_truth_sig, &b_met_truth_sig);
   tree->SetBranchAddress("met_truth_sumet", &met_truth_sumet, &b_met_truth_sumet);
   tree->SetBranchAddress("mva_RRN", &mva_RRN, &b_mva_RRN);
   tree->SetBranchAddress("n_actual_int", &n_actual_int, &b_n_actual_int);
   tree->SetBranchAddress("n_actual_int_cor", &n_actual_int_cor, &b_n_actual_int_cor);
   tree->SetBranchAddress("n_avg_int", &n_avg_int, &b_n_avg_int);
   tree->SetBranchAddress("n_avg_int_cor", &n_avg_int_cor, &b_n_avg_int_cor);
   tree->SetBranchAddress("n_bjets", &n_bjets, &b_n_bjets);
   tree->SetBranchAddress("n_electrons", &n_electrons, &b_n_electrons);
   tree->SetBranchAddress("n_jets", &n_jets, &b_n_jets);
   tree->SetBranchAddress("n_jets_30", &n_jets_30, &b_n_jets_30);
   tree->SetBranchAddress("n_jets_40", &n_jets_40, &b_n_jets_40);
   tree->SetBranchAddress("n_jets_bad", &n_jets_bad, &b_n_jets_bad);
   tree->SetBranchAddress("n_jets_central", &n_jets_central, &b_n_jets_central);
   tree->SetBranchAddress("n_jets_central_30", &n_jets_central_30, &b_n_jets_central_30);
   tree->SetBranchAddress("n_jets_central_40", &n_jets_central_40, &b_n_jets_central_40);
   tree->SetBranchAddress("n_jets_forward", &n_jets_forward, &b_n_jets_forward);
   tree->SetBranchAddress("n_jets_forward_30", &n_jets_forward_30, &b_n_jets_forward_30);
   tree->SetBranchAddress("n_jets_forward_40", &n_jets_forward_40, &b_n_jets_forward_40);
   tree->SetBranchAddress("n_jets_l1j25", &n_jets_l1j25, &b_n_jets_l1j25);
   tree->SetBranchAddress("n_jets_mc_hs", &n_jets_mc_hs, &b_n_jets_mc_hs);
   tree->SetBranchAddress("n_muons", &n_muons, &b_n_muons);
   tree->SetBranchAddress("n_muons_bad", &n_muons_bad, &b_n_muons_bad);
   tree->SetBranchAddress("n_muons_loose", &n_muons_loose, &b_n_muons_loose);
   tree->SetBranchAddress("n_muons_medium", &n_muons_medium, &b_n_muons_medium);
   tree->SetBranchAddress("n_muons_tight", &n_muons_tight, &b_n_muons_tight);
   tree->SetBranchAddress("n_muons_veryloose", &n_muons_veryloose, &b_n_muons_veryloose);
   tree->SetBranchAddress("n_photons", &n_photons, &b_n_photons);
   tree->SetBranchAddress("n_pvx", &n_pvx, &b_n_pvx);
   tree->SetBranchAddress("n_taus", &n_taus, &b_n_taus);
   tree->SetBranchAddress("n_taus_loose", &n_taus_loose, &b_n_taus_loose);
   tree->SetBranchAddress("n_taus_medium", &n_taus_medium, &b_n_taus_medium);
   tree->SetBranchAddress("n_taus_tight", &n_taus_tight, &b_n_taus_tight);
   tree->SetBranchAddress("n_taus_veryloose", &n_taus_veryloose, &b_n_taus_veryloose);
   tree->SetBranchAddress("n_truth_gluon_jets", &n_truth_gluon_jets, &b_n_truth_gluon_jets);
   tree->SetBranchAddress("n_truth_jets", &n_truth_jets, &b_n_truth_jets);
   tree->SetBranchAddress("n_truth_jets_pt20_eta45", &n_truth_jets_pt20_eta45, &b_n_truth_jets_pt20_eta45);
   tree->SetBranchAddress("n_truth_quark_jets", &n_truth_quark_jets, &b_n_truth_quark_jets);
   tree->SetBranchAddress("n_vx", &n_vx, &b_n_vx);
   tree->SetBranchAddress("primary_vertex", &primary_vertex, &b_primary_vertex);
   tree->SetBranchAddress("primary_vertex_v", &primary_vertex_v, &b_primary_vertex_v);
   tree->SetBranchAddress("pt_total", &pt_total, &b_pt_total);
   tree->SetBranchAddress("run_number", &run_number, &b_run_number);
   tree->SetBranchAddress("scalar_sum_pt", &scalar_sum_pt, &b_scalar_sum_pt);
   tree->SetBranchAddress("tau_0", &tau_0, &b_tau_0);
   tree->SetBranchAddress("tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTLOOSE", &tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTLOOSE, &b_tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTLOOSE);
   tree->SetBranchAddress("tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTMEDIUM", &tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTMEDIUM, &b_tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTMEDIUM);
   tree->SetBranchAddress("tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTTIGHT", &tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTTIGHT, &b_tau_0_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTTIGHT);
   tree->SetBranchAddress("tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTLOOSE", &tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTLOOSE, &b_tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTLOOSE);
   tree->SetBranchAddress("tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTMEDIUM", &tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTMEDIUM, &b_tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTMEDIUM);
   tree->SetBranchAddress("tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTTIGHT", &tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTTIGHT, &b_tau_0_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTTIGHT);
   tree->SetBranchAddress("tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad", &tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad, &b_tau_0_NOMINAL_TauEffSF_HadTauEleOLR_tauhad);
   tree->SetBranchAddress("tau_0_NOMINAL_TauEffSF_JetBDTloose", &tau_0_NOMINAL_TauEffSF_JetBDTloose, &b_tau_0_NOMINAL_TauEffSF_JetBDTloose);
   tree->SetBranchAddress("tau_0_NOMINAL_TauEffSF_JetBDTmedium", &tau_0_NOMINAL_TauEffSF_JetBDTmedium, &b_tau_0_NOMINAL_TauEffSF_JetBDTmedium);
   tree->SetBranchAddress("tau_0_NOMINAL_TauEffSF_JetBDTtight", &tau_0_NOMINAL_TauEffSF_JetBDTtight, &b_tau_0_NOMINAL_TauEffSF_JetBDTtight);
   tree->SetBranchAddress("tau_0_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron", &tau_0_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron, &b_tau_0_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron);
   tree->SetBranchAddress("tau_0_NOMINAL_TauEffSF_reco", &tau_0_NOMINAL_TauEffSF_reco, &b_tau_0_NOMINAL_TauEffSF_reco);
   tree->SetBranchAddress("tau_0_NOMINAL_TauEffSF_selection", &tau_0_NOMINAL_TauEffSF_selection, &b_tau_0_NOMINAL_TauEffSF_selection);
   tree->SetBranchAddress("tau_0_allTrk_eta", &tau_0_allTrk_eta, &b_tau_0_allTrk_eta);
   tree->SetBranchAddress("tau_0_allTrk_n", &tau_0_allTrk_n, &b_tau_0_allTrk_n);
   tree->SetBranchAddress("tau_0_allTrk_phi", &tau_0_allTrk_phi, &b_tau_0_allTrk_phi);
   tree->SetBranchAddress("tau_0_allTrk_pt", &tau_0_allTrk_pt, &b_tau_0_allTrk_pt);
   tree->SetBranchAddress("tau_0_b_tag_score", &tau_0_b_tag_score, &b_tau_0_b_tag_score);
   tree->SetBranchAddress("tau_0_b_tagged", &tau_0_b_tagged, &b_tau_0_b_tagged);
   tree->SetBranchAddress("tau_0_decay_charged_p4", &tau_0_decay_charged_p4, &b_tau_0_decay_charged_p4);
   tree->SetBranchAddress("tau_0_decay_mode", &tau_0_decay_mode, &b_tau_0_decay_mode);
   tree->SetBranchAddress("tau_0_decay_neutral_p4", &tau_0_decay_neutral_p4, &b_tau_0_decay_neutral_p4);
   tree->SetBranchAddress("tau_0_ele_BDTEleScoreTrans_run2", &tau_0_ele_BDTEleScoreTrans_run2, &b_tau_0_ele_BDTEleScoreTrans_run2);
   tree->SetBranchAddress("tau_0_ele_bdt_eff_sf", &tau_0_ele_bdt_eff_sf, &b_tau_0_ele_bdt_eff_sf);
   tree->SetBranchAddress("tau_0_ele_bdt_loose", &tau_0_ele_bdt_loose, &b_tau_0_ele_bdt_loose);
   tree->SetBranchAddress("tau_0_ele_bdt_medium", &tau_0_ele_bdt_medium, &b_tau_0_ele_bdt_medium);
   tree->SetBranchAddress("tau_0_ele_bdt_score", &tau_0_ele_bdt_score, &b_tau_0_ele_bdt_score);
   tree->SetBranchAddress("tau_0_ele_bdt_tight", &tau_0_ele_bdt_tight, &b_tau_0_ele_bdt_tight);
   tree->SetBranchAddress("tau_0_ele_match_lhscore", &tau_0_ele_match_lhscore, &b_tau_0_ele_match_lhscore);
   tree->SetBranchAddress("tau_0_ele_olr_pass", &tau_0_ele_olr_pass, &b_tau_0_ele_olr_pass);
   tree->SetBranchAddress("tau_0_jet_bdt_loose", &tau_0_jet_bdt_loose, &b_tau_0_jet_bdt_loose);
   tree->SetBranchAddress("tau_0_jet_bdt_medium", &tau_0_jet_bdt_medium, &b_tau_0_jet_bdt_medium);
   tree->SetBranchAddress("tau_0_jet_bdt_score", &tau_0_jet_bdt_score, &b_tau_0_jet_bdt_score);
   tree->SetBranchAddress("tau_0_jet_bdt_score_trans", &tau_0_jet_bdt_score_trans, &b_tau_0_jet_bdt_score_trans);
   tree->SetBranchAddress("tau_0_jet_bdt_tight", &tau_0_jet_bdt_tight, &b_tau_0_jet_bdt_tight);
   tree->SetBranchAddress("tau_0_jet_bdt_veryloose", &tau_0_jet_bdt_veryloose, &b_tau_0_jet_bdt_veryloose);
   tree->SetBranchAddress("tau_0_jet_jvt", &tau_0_jet_jvt, &b_tau_0_jet_jvt);
   tree->SetBranchAddress("tau_0_jet_rnn_loose", &tau_0_jet_rnn_loose, &b_tau_0_jet_rnn_loose);
   tree->SetBranchAddress("tau_0_jet_rnn_medium", &tau_0_jet_rnn_medium, &b_tau_0_jet_rnn_medium);
   tree->SetBranchAddress("tau_0_jet_rnn_score", &tau_0_jet_rnn_score, &b_tau_0_jet_rnn_score);
   tree->SetBranchAddress("tau_0_jet_rnn_score_trans", &tau_0_jet_rnn_score_trans, &b_tau_0_jet_rnn_score_trans);
   tree->SetBranchAddress("tau_0_jet_rnn_tight", &tau_0_jet_rnn_tight, &b_tau_0_jet_rnn_tight);
   tree->SetBranchAddress("tau_0_jet_rnn_veryloose", &tau_0_jet_rnn_veryloose, &b_tau_0_jet_rnn_veryloose);
   tree->SetBranchAddress("tau_0_jet_width", &tau_0_jet_width, &b_tau_0_jet_width);
   tree->SetBranchAddress("tau_0_leadTrk_d0", &tau_0_leadTrk_d0, &b_tau_0_leadTrk_d0);
   tree->SetBranchAddress("tau_0_leadTrk_d0_sig", &tau_0_leadTrk_d0_sig, &b_tau_0_leadTrk_d0_sig);
   tree->SetBranchAddress("tau_0_leadTrk_eta", &tau_0_leadTrk_eta, &b_tau_0_leadTrk_eta);
   tree->SetBranchAddress("tau_0_leadTrk_phi", &tau_0_leadTrk_phi, &b_tau_0_leadTrk_phi);
   tree->SetBranchAddress("tau_0_leadTrk_pt", &tau_0_leadTrk_pt, &b_tau_0_leadTrk_pt);
   tree->SetBranchAddress("tau_0_leadTrk_pvx_z0", &tau_0_leadTrk_pvx_z0, &b_tau_0_leadTrk_pvx_z0);
   tree->SetBranchAddress("tau_0_leadTrk_pvx_z0_sig", &tau_0_leadTrk_pvx_z0_sig, &b_tau_0_leadTrk_pvx_z0_sig);
   tree->SetBranchAddress("tau_0_leadTrk_pvx_z0_sintheta", &tau_0_leadTrk_pvx_z0_sintheta, &b_tau_0_leadTrk_pvx_z0_sintheta);
   tree->SetBranchAddress("tau_0_leadTrk_vertex_v", &tau_0_leadTrk_vertex_v, &b_tau_0_leadTrk_vertex_v);
   tree->SetBranchAddress("tau_0_leadTrk_z0", &tau_0_leadTrk_z0, &b_tau_0_leadTrk_z0);
   tree->SetBranchAddress("tau_0_leadTrk_z0_sig", &tau_0_leadTrk_z0_sig, &b_tau_0_leadTrk_z0_sig);
   tree->SetBranchAddress("tau_0_leadTrk_z0_sintheta", &tau_0_leadTrk_z0_sintheta, &b_tau_0_leadTrk_z0_sintheta);
   tree->SetBranchAddress("tau_0_matched", &tau_0_matched, &b_tau_0_matched);
   tree->SetBranchAddress("tau_0_matched_classifierParticleOrigin", &tau_0_matched_classifierParticleOrigin, &b_tau_0_matched_classifierParticleOrigin);
   tree->SetBranchAddress("tau_0_matched_classifierParticleType", &tau_0_matched_classifierParticleType, &b_tau_0_matched_classifierParticleType);
   tree->SetBranchAddress("tau_0_matched_decay_charged_p4", &tau_0_matched_decay_charged_p4, &b_tau_0_matched_decay_charged_p4);
   tree->SetBranchAddress("tau_0_matched_decay_mode", &tau_0_matched_decay_mode, &b_tau_0_matched_decay_mode);
   tree->SetBranchAddress("tau_0_matched_decay_neutral_p4", &tau_0_matched_decay_neutral_p4, &b_tau_0_matched_decay_neutral_p4);
   tree->SetBranchAddress("tau_0_matched_decay_neutrino_p4", &tau_0_matched_decay_neutrino_p4, &b_tau_0_matched_decay_neutrino_p4);
   tree->SetBranchAddress("tau_0_matched_isEle", &tau_0_matched_isEle, &b_tau_0_matched_isEle);
   tree->SetBranchAddress("tau_0_matched_isHadTau", &tau_0_matched_isHadTau, &b_tau_0_matched_isHadTau);
   tree->SetBranchAddress("tau_0_matched_isJet", &tau_0_matched_isJet, &b_tau_0_matched_isJet);
   tree->SetBranchAddress("tau_0_matched_isMuon", &tau_0_matched_isMuon, &b_tau_0_matched_isMuon);
   tree->SetBranchAddress("tau_0_matched_isTau", &tau_0_matched_isTau, &b_tau_0_matched_isTau);
   tree->SetBranchAddress("tau_0_matched_isTruthMatch", &tau_0_matched_isTruthMatch, &b_tau_0_matched_isTruthMatch);
   tree->SetBranchAddress("tau_0_matched_mother_pdgId", &tau_0_matched_mother_pdgId, &b_tau_0_matched_mother_pdgId);
   tree->SetBranchAddress("tau_0_matched_mother_status", &tau_0_matched_mother_status, &b_tau_0_matched_mother_status);
   tree->SetBranchAddress("tau_0_matched_n_charged", &tau_0_matched_n_charged, &b_tau_0_matched_n_charged);
   tree->SetBranchAddress("tau_0_matched_n_charged_pion", &tau_0_matched_n_charged_pion, &b_tau_0_matched_n_charged_pion);
   tree->SetBranchAddress("tau_0_matched_n_neutral", &tau_0_matched_n_neutral, &b_tau_0_matched_n_neutral);
   tree->SetBranchAddress("tau_0_matched_n_neutral_pion", &tau_0_matched_n_neutral_pion, &b_tau_0_matched_n_neutral_pion);
   tree->SetBranchAddress("tau_0_matched_origin", &tau_0_matched_origin, &b_tau_0_matched_origin);
   tree->SetBranchAddress("tau_0_matched_p4", &tau_0_matched_p4, &b_tau_0_matched_p4);
   tree->SetBranchAddress("tau_0_matched_p4_vis_charged_track0", &tau_0_matched_p4_vis_charged_track0, &b_tau_0_matched_p4_vis_charged_track0);
   tree->SetBranchAddress("tau_0_matched_p4_vis_charged_track1", &tau_0_matched_p4_vis_charged_track1, &b_tau_0_matched_p4_vis_charged_track1);
   tree->SetBranchAddress("tau_0_matched_p4_vis_charged_track2", &tau_0_matched_p4_vis_charged_track2, &b_tau_0_matched_p4_vis_charged_track2);
   tree->SetBranchAddress("tau_0_matched_pdgId", &tau_0_matched_pdgId, &b_tau_0_matched_pdgId);
   tree->SetBranchAddress("tau_0_matched_pz", &tau_0_matched_pz, &b_tau_0_matched_pz);
   tree->SetBranchAddress("tau_0_matched_q", &tau_0_matched_q, &b_tau_0_matched_q);
   tree->SetBranchAddress("tau_0_matched_status", &tau_0_matched_status, &b_tau_0_matched_status);
   tree->SetBranchAddress("tau_0_matched_type", &tau_0_matched_type, &b_tau_0_matched_type);
   tree->SetBranchAddress("tau_0_matched_vis_charged_p4", &tau_0_matched_vis_charged_p4, &b_tau_0_matched_vis_charged_p4);
   tree->SetBranchAddress("tau_0_matched_vis_neutral_others_p4", &tau_0_matched_vis_neutral_others_p4, &b_tau_0_matched_vis_neutral_others_p4);
   tree->SetBranchAddress("tau_0_matched_vis_neutral_p4", &tau_0_matched_vis_neutral_p4, &b_tau_0_matched_vis_neutral_p4);
   tree->SetBranchAddress("tau_0_matched_vis_neutral_pions_p4", &tau_0_matched_vis_neutral_pions_p4, &b_tau_0_matched_vis_neutral_pions_p4);
   tree->SetBranchAddress("tau_0_matched_vis_p4", &tau_0_matched_vis_p4, &b_tau_0_matched_vis_p4);
   tree->SetBranchAddress("tau_0_n_all_tracks", &tau_0_n_all_tracks, &b_tau_0_n_all_tracks);
   tree->SetBranchAddress("tau_0_n_charged_tracks", &tau_0_n_charged_tracks, &b_tau_0_n_charged_tracks);
   tree->SetBranchAddress("tau_0_n_conversion_tracks", &tau_0_n_conversion_tracks, &b_tau_0_n_conversion_tracks);
   tree->SetBranchAddress("tau_0_n_core_tracks", &tau_0_n_core_tracks, &b_tau_0_n_core_tracks);
   tree->SetBranchAddress("tau_0_n_failTrackFilter_tracks", &tau_0_n_failTrackFilter_tracks, &b_tau_0_n_failTrackFilter_tracks);
   tree->SetBranchAddress("tau_0_n_fake_tracks", &tau_0_n_fake_tracks, &b_tau_0_n_fake_tracks);
   tree->SetBranchAddress("tau_0_n_isolation_tracks", &tau_0_n_isolation_tracks, &b_tau_0_n_isolation_tracks);
   tree->SetBranchAddress("tau_0_n_modified_isolation_tracks", &tau_0_n_modified_isolation_tracks, &b_tau_0_n_modified_isolation_tracks);
   tree->SetBranchAddress("tau_0_n_old_tracks", &tau_0_n_old_tracks, &b_tau_0_n_old_tracks);
   tree->SetBranchAddress("tau_0_n_passTrkSelectionTight_tracks", &tau_0_n_passTrkSelectionTight_tracks, &b_tau_0_n_passTrkSelectionTight_tracks);
   tree->SetBranchAddress("tau_0_n_passTrkSelector_tracks", &tau_0_n_passTrkSelector_tracks, &b_tau_0_n_passTrkSelector_tracks);
   tree->SetBranchAddress("tau_0_n_unclassified_tracks", &tau_0_n_unclassified_tracks, &b_tau_0_n_unclassified_tracks);
   tree->SetBranchAddress("tau_0_n_wide_tracks", &tau_0_n_wide_tracks, &b_tau_0_n_wide_tracks);
   tree->SetBranchAddress("tau_0_origin", &tau_0_origin, &b_tau_0_origin);
   tree->SetBranchAddress("tau_0_p4", &tau_0_p4, &b_tau_0_p4);
   tree->SetBranchAddress("tau_0_q", &tau_0_q, &b_tau_0_q);
   tree->SetBranchAddress("tau_0_track0_p4", &tau_0_track0_p4, &b_tau_0_track0_p4);
   tree->SetBranchAddress("tau_0_track1_p4", &tau_0_track1_p4, &b_tau_0_track1_p4);
   tree->SetBranchAddress("tau_0_track2_p4", &tau_0_track2_p4, &b_tau_0_track2_p4);
   tree->SetBranchAddress("tau_0_trig_HLT_tau25_medium1_tracktwo", &tau_0_trig_HLT_tau25_medium1_tracktwo, &b_tau_0_trig_HLT_tau25_medium1_tracktwo);
   tree->SetBranchAddress("tau_0_trig_HLT_tau35_medium1_tracktwo", &tau_0_trig_HLT_tau35_medium1_tracktwo, &b_tau_0_trig_HLT_tau35_medium1_tracktwo);
   tree->SetBranchAddress("tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo", &tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo, &b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo);
   tree->SetBranchAddress("tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I", &tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I, &b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I);
   tree->SetBranchAddress("tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25", &tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25, &b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25);
   tree->SetBranchAddress("tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I", &tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I, &b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I);
   tree->SetBranchAddress("tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25", &tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25, &b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25);
   tree->SetBranchAddress("tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM", &tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM, &b_tau_0_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM);
   tree->SetBranchAddress("tau_0_trig_trigger_matched", &tau_0_trig_trigger_matched, &b_tau_0_trig_trigger_matched);
   tree->SetBranchAddress("tau_0_type", &tau_0_type, &b_tau_0_type);
   tree->SetBranchAddress("tau_1", &tau_1, &b_tau_1);
   tree->SetBranchAddress("tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTLOOSE", &tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTLOOSE, &b_tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTLOOSE);
   tree->SetBranchAddress("tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTMEDIUM", &tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTMEDIUM, &b_tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTMEDIUM);
   tree->SetBranchAddress("tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTTIGHT", &tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTTIGHT, &b_tau_1_NOMINAL_TauEffSF_HLT_tau25_medium1_tracktwo_JETIDBDTTIGHT);
   tree->SetBranchAddress("tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTLOOSE", &tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTLOOSE, &b_tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTLOOSE);
   tree->SetBranchAddress("tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTMEDIUM", &tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTMEDIUM, &b_tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTMEDIUM);
   tree->SetBranchAddress("tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTTIGHT", &tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTTIGHT, &b_tau_1_NOMINAL_TauEffSF_HLT_tau35_medium1_tracktwo_JETIDBDTTIGHT);
   tree->SetBranchAddress("tau_1_NOMINAL_TauEffSF_HadTauEleOLR_tauhad", &tau_1_NOMINAL_TauEffSF_HadTauEleOLR_tauhad, &b_tau_1_NOMINAL_TauEffSF_HadTauEleOLR_tauhad);
   tree->SetBranchAddress("tau_1_NOMINAL_TauEffSF_JetBDTloose", &tau_1_NOMINAL_TauEffSF_JetBDTloose, &b_tau_1_NOMINAL_TauEffSF_JetBDTloose);
   tree->SetBranchAddress("tau_1_NOMINAL_TauEffSF_JetBDTmedium", &tau_1_NOMINAL_TauEffSF_JetBDTmedium, &b_tau_1_NOMINAL_TauEffSF_JetBDTmedium);
   tree->SetBranchAddress("tau_1_NOMINAL_TauEffSF_JetBDTtight", &tau_1_NOMINAL_TauEffSF_JetBDTtight, &b_tau_1_NOMINAL_TauEffSF_JetBDTtight);
   tree->SetBranchAddress("tau_1_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron", &tau_1_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron, &b_tau_1_NOMINAL_TauEffSF_VeryLooseLlhEleOLR_electron);
   tree->SetBranchAddress("tau_1_NOMINAL_TauEffSF_reco", &tau_1_NOMINAL_TauEffSF_reco, &b_tau_1_NOMINAL_TauEffSF_reco);
   tree->SetBranchAddress("tau_1_NOMINAL_TauEffSF_selection", &tau_1_NOMINAL_TauEffSF_selection, &b_tau_1_NOMINAL_TauEffSF_selection);
   tree->SetBranchAddress("tau_1_allTrk_eta", &tau_1_allTrk_eta, &b_tau_1_allTrk_eta);
   tree->SetBranchAddress("tau_1_allTrk_n", &tau_1_allTrk_n, &b_tau_1_allTrk_n);
   tree->SetBranchAddress("tau_1_allTrk_phi", &tau_1_allTrk_phi, &b_tau_1_allTrk_phi);
   tree->SetBranchAddress("tau_1_allTrk_pt", &tau_1_allTrk_pt, &b_tau_1_allTrk_pt);
   tree->SetBranchAddress("tau_1_b_tag_score", &tau_1_b_tag_score, &b_tau_1_b_tag_score);
   tree->SetBranchAddress("tau_1_b_tagged", &tau_1_b_tagged, &b_tau_1_b_tagged);
   tree->SetBranchAddress("tau_1_decay_charged_p4", &tau_1_decay_charged_p4, &b_tau_1_decay_charged_p4);
   tree->SetBranchAddress("tau_1_decay_mode", &tau_1_decay_mode, &b_tau_1_decay_mode);
   tree->SetBranchAddress("tau_1_decay_neutral_p4", &tau_1_decay_neutral_p4, &b_tau_1_decay_neutral_p4);
   tree->SetBranchAddress("tau_1_ele_BDTEleScoreTrans_run2", &tau_1_ele_BDTEleScoreTrans_run2, &b_tau_1_ele_BDTEleScoreTrans_run2);
   tree->SetBranchAddress("tau_1_ele_bdt_eff_sf", &tau_1_ele_bdt_eff_sf, &b_tau_1_ele_bdt_eff_sf);
   tree->SetBranchAddress("tau_1_ele_bdt_loose", &tau_1_ele_bdt_loose, &b_tau_1_ele_bdt_loose);
   tree->SetBranchAddress("tau_1_ele_bdt_medium", &tau_1_ele_bdt_medium, &b_tau_1_ele_bdt_medium);
   tree->SetBranchAddress("tau_1_ele_bdt_score", &tau_1_ele_bdt_score, &b_tau_1_ele_bdt_score);
   tree->SetBranchAddress("tau_1_ele_bdt_tight", &tau_1_ele_bdt_tight, &b_tau_1_ele_bdt_tight);
   tree->SetBranchAddress("tau_1_ele_match_lhscore", &tau_1_ele_match_lhscore, &b_tau_1_ele_match_lhscore);
   tree->SetBranchAddress("tau_1_ele_olr_pass", &tau_1_ele_olr_pass, &b_tau_1_ele_olr_pass);
   tree->SetBranchAddress("tau_1_jet_bdt_loose", &tau_1_jet_bdt_loose, &b_tau_1_jet_bdt_loose);
   tree->SetBranchAddress("tau_1_jet_bdt_medium", &tau_1_jet_bdt_medium, &b_tau_1_jet_bdt_medium);
   tree->SetBranchAddress("tau_1_jet_bdt_score", &tau_1_jet_bdt_score, &b_tau_1_jet_bdt_score);
   tree->SetBranchAddress("tau_1_jet_bdt_score_trans", &tau_1_jet_bdt_score_trans, &b_tau_1_jet_bdt_score_trans);
   tree->SetBranchAddress("tau_1_jet_bdt_tight", &tau_1_jet_bdt_tight, &b_tau_1_jet_bdt_tight);
   tree->SetBranchAddress("tau_1_jet_bdt_veryloose", &tau_1_jet_bdt_veryloose, &b_tau_1_jet_bdt_veryloose);
   tree->SetBranchAddress("tau_1_jet_jvt", &tau_1_jet_jvt, &b_tau_1_jet_jvt);
   tree->SetBranchAddress("tau_1_jet_rnn_loose", &tau_1_jet_rnn_loose, &b_tau_1_jet_rnn_loose);
   tree->SetBranchAddress("tau_1_jet_rnn_medium", &tau_1_jet_rnn_medium, &b_tau_1_jet_rnn_medium);
   tree->SetBranchAddress("tau_1_jet_rnn_score", &tau_1_jet_rnn_score, &b_tau_1_jet_rnn_score);
   tree->SetBranchAddress("tau_1_jet_rnn_score_trans", &tau_1_jet_rnn_score_trans, &b_tau_1_jet_rnn_score_trans);
   tree->SetBranchAddress("tau_1_jet_rnn_tight", &tau_1_jet_rnn_tight, &b_tau_1_jet_rnn_tight);
   tree->SetBranchAddress("tau_1_jet_rnn_veryloose", &tau_1_jet_rnn_veryloose, &b_tau_1_jet_rnn_veryloose);
   tree->SetBranchAddress("tau_1_jet_width", &tau_1_jet_width, &b_tau_1_jet_width);
   tree->SetBranchAddress("tau_1_leadTrk_d0", &tau_1_leadTrk_d0, &b_tau_1_leadTrk_d0);
   tree->SetBranchAddress("tau_1_leadTrk_d0_sig", &tau_1_leadTrk_d0_sig, &b_tau_1_leadTrk_d0_sig);
   tree->SetBranchAddress("tau_1_leadTrk_eta", &tau_1_leadTrk_eta, &b_tau_1_leadTrk_eta);
   tree->SetBranchAddress("tau_1_leadTrk_phi", &tau_1_leadTrk_phi, &b_tau_1_leadTrk_phi);
   tree->SetBranchAddress("tau_1_leadTrk_pt", &tau_1_leadTrk_pt, &b_tau_1_leadTrk_pt);
   tree->SetBranchAddress("tau_1_leadTrk_pvx_z0", &tau_1_leadTrk_pvx_z0, &b_tau_1_leadTrk_pvx_z0);
   tree->SetBranchAddress("tau_1_leadTrk_pvx_z0_sig", &tau_1_leadTrk_pvx_z0_sig, &b_tau_1_leadTrk_pvx_z0_sig);
   tree->SetBranchAddress("tau_1_leadTrk_pvx_z0_sintheta", &tau_1_leadTrk_pvx_z0_sintheta, &b_tau_1_leadTrk_pvx_z0_sintheta);
   tree->SetBranchAddress("tau_1_leadTrk_vertex_v", &tau_1_leadTrk_vertex_v, &b_tau_1_leadTrk_vertex_v);
   tree->SetBranchAddress("tau_1_leadTrk_z0", &tau_1_leadTrk_z0, &b_tau_1_leadTrk_z0);
   tree->SetBranchAddress("tau_1_leadTrk_z0_sig", &tau_1_leadTrk_z0_sig, &b_tau_1_leadTrk_z0_sig);
   tree->SetBranchAddress("tau_1_leadTrk_z0_sintheta", &tau_1_leadTrk_z0_sintheta, &b_tau_1_leadTrk_z0_sintheta);
   tree->SetBranchAddress("tau_1_matched", &tau_1_matched, &b_tau_1_matched);
   tree->SetBranchAddress("tau_1_matched_classifierParticleOrigin", &tau_1_matched_classifierParticleOrigin, &b_tau_1_matched_classifierParticleOrigin);
   tree->SetBranchAddress("tau_1_matched_classifierParticleType", &tau_1_matched_classifierParticleType, &b_tau_1_matched_classifierParticleType);
   tree->SetBranchAddress("tau_1_matched_decay_charged_p4", &tau_1_matched_decay_charged_p4, &b_tau_1_matched_decay_charged_p4);
   tree->SetBranchAddress("tau_1_matched_decay_mode", &tau_1_matched_decay_mode, &b_tau_1_matched_decay_mode);
   tree->SetBranchAddress("tau_1_matched_decay_neutral_p4", &tau_1_matched_decay_neutral_p4, &b_tau_1_matched_decay_neutral_p4);
   tree->SetBranchAddress("tau_1_matched_decay_neutrino_p4", &tau_1_matched_decay_neutrino_p4, &b_tau_1_matched_decay_neutrino_p4);
   tree->SetBranchAddress("tau_1_matched_isEle", &tau_1_matched_isEle, &b_tau_1_matched_isEle);
   tree->SetBranchAddress("tau_1_matched_isHadTau", &tau_1_matched_isHadTau, &b_tau_1_matched_isHadTau);
   tree->SetBranchAddress("tau_1_matched_isJet", &tau_1_matched_isJet, &b_tau_1_matched_isJet);
   tree->SetBranchAddress("tau_1_matched_isMuon", &tau_1_matched_isMuon, &b_tau_1_matched_isMuon);
   tree->SetBranchAddress("tau_1_matched_isTau", &tau_1_matched_isTau, &b_tau_1_matched_isTau);
   tree->SetBranchAddress("tau_1_matched_isTruthMatch", &tau_1_matched_isTruthMatch, &b_tau_1_matched_isTruthMatch);
   tree->SetBranchAddress("tau_1_matched_mother_pdgId", &tau_1_matched_mother_pdgId, &b_tau_1_matched_mother_pdgId);
   tree->SetBranchAddress("tau_1_matched_mother_status", &tau_1_matched_mother_status, &b_tau_1_matched_mother_status);
   tree->SetBranchAddress("tau_1_matched_n_charged", &tau_1_matched_n_charged, &b_tau_1_matched_n_charged);
   tree->SetBranchAddress("tau_1_matched_n_charged_pion", &tau_1_matched_n_charged_pion, &b_tau_1_matched_n_charged_pion);
   tree->SetBranchAddress("tau_1_matched_n_neutral", &tau_1_matched_n_neutral, &b_tau_1_matched_n_neutral);
   tree->SetBranchAddress("tau_1_matched_n_neutral_pion", &tau_1_matched_n_neutral_pion, &b_tau_1_matched_n_neutral_pion);
   tree->SetBranchAddress("tau_1_matched_origin", &tau_1_matched_origin, &b_tau_1_matched_origin);
   tree->SetBranchAddress("tau_1_matched_p4", &tau_1_matched_p4, &b_tau_1_matched_p4);
   tree->SetBranchAddress("tau_1_matched_p4_vis_charged_track0", &tau_1_matched_p4_vis_charged_track0, &b_tau_1_matched_p4_vis_charged_track0);
   tree->SetBranchAddress("tau_1_matched_p4_vis_charged_track1", &tau_1_matched_p4_vis_charged_track1, &b_tau_1_matched_p4_vis_charged_track1);
   tree->SetBranchAddress("tau_1_matched_p4_vis_charged_track2", &tau_1_matched_p4_vis_charged_track2, &b_tau_1_matched_p4_vis_charged_track2);
   tree->SetBranchAddress("tau_1_matched_pdgId", &tau_1_matched_pdgId, &b_tau_1_matched_pdgId);
   tree->SetBranchAddress("tau_1_matched_pz", &tau_1_matched_pz, &b_tau_1_matched_pz);
   tree->SetBranchAddress("tau_1_matched_q", &tau_1_matched_q, &b_tau_1_matched_q);
   tree->SetBranchAddress("tau_1_matched_status", &tau_1_matched_status, &b_tau_1_matched_status);
   tree->SetBranchAddress("tau_1_matched_type", &tau_1_matched_type, &b_tau_1_matched_type);
   tree->SetBranchAddress("tau_1_matched_vis_charged_p4", &tau_1_matched_vis_charged_p4, &b_tau_1_matched_vis_charged_p4);
   tree->SetBranchAddress("tau_1_matched_vis_neutral_others_p4", &tau_1_matched_vis_neutral_others_p4, &b_tau_1_matched_vis_neutral_others_p4);
   tree->SetBranchAddress("tau_1_matched_vis_neutral_p4", &tau_1_matched_vis_neutral_p4, &b_tau_1_matched_vis_neutral_p4);
   tree->SetBranchAddress("tau_1_matched_vis_neutral_pions_p4", &tau_1_matched_vis_neutral_pions_p4, &b_tau_1_matched_vis_neutral_pions_p4);
   tree->SetBranchAddress("tau_1_matched_vis_p4", &tau_1_matched_vis_p4, &b_tau_1_matched_vis_p4);
   tree->SetBranchAddress("tau_1_n_all_tracks", &tau_1_n_all_tracks, &b_tau_1_n_all_tracks);
   tree->SetBranchAddress("tau_1_n_charged_tracks", &tau_1_n_charged_tracks, &b_tau_1_n_charged_tracks);
   tree->SetBranchAddress("tau_1_n_conversion_tracks", &tau_1_n_conversion_tracks, &b_tau_1_n_conversion_tracks);
   tree->SetBranchAddress("tau_1_n_core_tracks", &tau_1_n_core_tracks, &b_tau_1_n_core_tracks);
   tree->SetBranchAddress("tau_1_n_failTrackFilter_tracks", &tau_1_n_failTrackFilter_tracks, &b_tau_1_n_failTrackFilter_tracks);
   tree->SetBranchAddress("tau_1_n_fake_tracks", &tau_1_n_fake_tracks, &b_tau_1_n_fake_tracks);
   tree->SetBranchAddress("tau_1_n_isolation_tracks", &tau_1_n_isolation_tracks, &b_tau_1_n_isolation_tracks);
   tree->SetBranchAddress("tau_1_n_modified_isolation_tracks", &tau_1_n_modified_isolation_tracks, &b_tau_1_n_modified_isolation_tracks);
   tree->SetBranchAddress("tau_1_n_old_tracks", &tau_1_n_old_tracks, &b_tau_1_n_old_tracks);
   tree->SetBranchAddress("tau_1_n_passTrkSelectionTight_tracks", &tau_1_n_passTrkSelectionTight_tracks, &b_tau_1_n_passTrkSelectionTight_tracks);
   tree->SetBranchAddress("tau_1_n_passTrkSelector_tracks", &tau_1_n_passTrkSelector_tracks, &b_tau_1_n_passTrkSelector_tracks);
   tree->SetBranchAddress("tau_1_n_unclassified_tracks", &tau_1_n_unclassified_tracks, &b_tau_1_n_unclassified_tracks);
   tree->SetBranchAddress("tau_1_n_wide_tracks", &tau_1_n_wide_tracks, &b_tau_1_n_wide_tracks);
   tree->SetBranchAddress("tau_1_origin", &tau_1_origin, &b_tau_1_origin);
   tree->SetBranchAddress("tau_1_p4", &tau_1_p4, &b_tau_1_p4);
   tree->SetBranchAddress("tau_1_q", &tau_1_q, &b_tau_1_q);
   tree->SetBranchAddress("tau_1_track0_p4", &tau_1_track0_p4, &b_tau_1_track0_p4);
   tree->SetBranchAddress("tau_1_track1_p4", &tau_1_track1_p4, &b_tau_1_track1_p4);
   tree->SetBranchAddress("tau_1_track2_p4", &tau_1_track2_p4, &b_tau_1_track2_p4);
   tree->SetBranchAddress("tau_1_trig_HLT_tau25_medium1_tracktwo", &tau_1_trig_HLT_tau25_medium1_tracktwo, &b_tau_1_trig_HLT_tau25_medium1_tracktwo);
   tree->SetBranchAddress("tau_1_trig_HLT_tau35_medium1_tracktwo", &tau_1_trig_HLT_tau35_medium1_tracktwo, &b_tau_1_trig_HLT_tau35_medium1_tracktwo);
   tree->SetBranchAddress("tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo", &tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo, &b_tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo);
   tree->SetBranchAddress("tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I", &tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I, &b_tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I);
   tree->SetBranchAddress("tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25", &tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25, &b_tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_03dR30_L1DR_TAU20ITAU12I_J25);
   tree->SetBranchAddress("tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I", &tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I, &b_tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I);
   tree->SetBranchAddress("tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25", &tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25, &b_tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1DR_TAU20ITAU12I_J25);
   tree->SetBranchAddress("tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM", &tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM, &b_tau_1_trig_HLT_tau35_medium1_tracktwo_tau25_medium1_tracktwo_L1TAU20IM_2TAU12IM);
   tree->SetBranchAddress("tau_1_trig_trigger_matched", &tau_1_trig_trigger_matched, &b_tau_1_trig_trigger_matched);
   tree->SetBranchAddress("tau_1_type", &tau_1_type, &b_tau_1_type);
   tree->SetBranchAddress("tau_eta_centrality", &tau_eta_centrality, &b_tau_eta_centrality);
   tree->SetBranchAddress("theory_weights_CT14_pdfset", &theory_weights_CT14_pdfset, &b_theory_weights_CT14_pdfset);
   tree->SetBranchAddress("theory_weights_MMHT_pdfset", &theory_weights_MMHT_pdfset, &b_theory_weights_MMHT_pdfset);
   tree->SetBranchAddress("theory_weights_PDF_central_value", &theory_weights_PDF_central_value, &b_theory_weights_PDF_central_value);
   tree->SetBranchAddress("theory_weights_PDF_error_down", &theory_weights_PDF_error_down, &b_theory_weights_PDF_error_down);
   tree->SetBranchAddress("theory_weights_PDF_error_up", &theory_weights_PDF_error_up, &b_theory_weights_PDF_error_up);
   tree->SetBranchAddress("theory_weights_alphaS_down", &theory_weights_alphaS_down, &b_theory_weights_alphaS_down);
   tree->SetBranchAddress("theory_weights_alphaS_up", &theory_weights_alphaS_up, &b_theory_weights_alphaS_up);
   tree->SetBranchAddress("truth_passedVBFFilter", &truth_passedVBFFilter, &b_truth_passedVBFFilter);
   tree->SetBranchAddress("weight_mc", &weight_mc, &b_weight_mc);
   tree->SetBranchAddress("weight_total", &weight_total, &b_weight_total);
}
#endif // #ifdef hadhadtree_cxx
