#include "eTcalos.h"

#include <fun4all/Fun4AllReturnCodes.h>
#include <fun4all/PHTFileServer.h>

#include <phool/getClass.h>
#include <phool/PHCompositeNode.h>

#include <calobase/TowerInfoContainer.h>
#include <calobase/TowerInfo.h>

#include <vector>

#include <TFile.h>
#include <TH3F.h>
#include <TVector3.h>
#include <map>
#include <set>
#include <tuple>

#include <cassert>

const float sin_theta[] = {0.62149, 0.666629, 0.712377, 0.758023, 0.802707, 0.845435, 0.885107,
0.920563, 0.950652, 0.974304, 0.990621, 0.998951, 0.998951, 0.990621,0.974304, 0.950652, 0.920563, 
0.885107, 0.845435, 0.802707, 0.758023,0.712377, 0.666629, 0.62149};
const float eta[] = {-1.05417,-0.9625,-0.870833,-0.779167,-0.6875,-0.595833,-0.504167,-0.4125,-0.320833,-0.229167,
-0.1375,-0.0458333,0.0458333,0.1375,0.229167,0.320833,0.4125,0.504167,0.595833,0.6875,0.779167,0.870833,0.9625,1.05417};

//____________________________________________________________________________..
eTcalos::eTcalos(const std::string &name):
 SubsysReco(name)
{
  std::cout << "eTcalos::eTcalos(const std::string &name) Calling ctor" << std::endl;
}

//____________________________________________________________________________..
eTcalos::~eTcalos()
{
  std::cout << "eTcalos::~eTcalos() Calling dtor" << std::endl;
}

//____________________________________________________________________________..
int eTcalos::Init(PHCompositeNode *topNode)
{
  std::cout << "eTcalos::Init(PHCompositeNode *topNode) Initializing" << std::endl;
  PHTFileServer::get().open(m_outputFileName, "RECREATE");
  h_2D_ihcal = new TH2F("h_2D_ihcal","",24,0.,24.,64,0.,64.);
  h_2D_ohcal = new TH2F("h_2D_ohcal","",24,0.,24.,64,0.,64.);
  
  h_2D_ihcal_calib = new TH2F("h_2D_ihcal_calib","",24,0.,24.,64,0.,64.);
  h_2D_ohcal_calib = new TH2F("h_2D_ohcal_calib","",24,0.,24.,64,0.,64.);

  h_raw_time_ihcal = new TH1I("h_raw_time_ihcal","",31,0,31);
  h_raw_time_ohcal = new TH1I("h_raw_time_ohcal","",31,0,31);

  h_time_ihcal = new TH1I("h_time_ihcal","",31,0,31);
  h_time_ohcal = new TH1I("h_time_ohcal","",31,0,31);

  h_time_50_ihcal = new TH1I("h_time_50_ihcal","",31,0,31);
  h_time_50_ohcal = new TH1I("h_time_50_ohcal","",31,0,31);

  ihcal_ieta_v_time = new TH2I("ihcal_ieta_v_time","",31,0,31,24,0,24);
  ohcal_ieta_v_time = new TH2I("ohcal_ieta_v_time","",31,0,31,24,0,24);

  h_ihcal = new TH1F("h_ihcal","",1000,0,10);
  h_ohcal = new TH1F("h_ohcal","",1000,0,10);

  h_eT_ihcal = new TH1F("h_eT_ihcal","",24,-1.10001,1.10001);
  h_eT_ohcal = new TH1F("h_eT_ohcal","",24,-1.10001,1.10001);

  h_eT_ihcal_abs = new TH1F("h_eT_ihcal_abs","",24,-1.10001,1.10001);
  h_eT_ohcal_abs = new TH1F("h_eT_ohcal_abs","",24,-1.10001,1.10001);

  h_event_hcal_energy = new TH1F("h_event_hcal_energy","",20000,0,20000);
  h_event_ihcal_energy = new TH1F("h_event_ihcal_energy","",20000,0,20000);
  h_event_ohcal_energy = new TH1F("h_event_ohcal_energy","",20000,0,20000);

  h_corr_ihcal_ohcal = new TH2F("h_corr_ihcal_ohcal","", 1000,0,1000,1000,0,1000);
  h_corr_ihcal_hcal = new TH2F("h_corr_ihcal_hcal","", 1000,0,1000,5000,0,5000);
  h_corr_ohcal_hcal = new TH2F("h_corr_ohcal_hcal","", 1000,0,1000,5000,0,5000);

  maxem = 0;
  maxih = 0;
  maxoh = 0;
  return Fun4AllReturnCodes::EVENT_OK;
}

//____________________________________________________________________________..
int eTcalos::InitRun(PHCompositeNode *topNode)
{
  std::cout << "eTcalos::InitRun(PHCompositeNode *topNode) Initializing for Run XXX" << std::endl;
  event = 0;
  eventnumber = 0;
  return Fun4AllReturnCodes::EVENT_OK;
}

//____________________________________________________________________________..
int eTcalos::process_event(PHCompositeNode *topNode)
{
  //if (event > 1) return Fun4AllReturnCodes::EVENT_OK;
  if (event % 1000 == 0) std::cout << "eTcalos::process_event(PHCompositeNode *topNode) Processing Event " << event << std::endl;
  TowerInfoContainer *towerinfosIH3 = findNode::getClass<TowerInfoContainer>(topNode, "TOWERS_HCALIN");
  TowerInfoContainer *towerinfosOH3 = findNode::getClass<TowerInfoContainer>(topNode, "TOWERS_HCALOUT");
 
  if (!towerinfosIH3 || !towerinfosOH3)
    {
      std::cout <<  PHWHERE << "missing tower info object, doing nothing" << std::endl;
      return Fun4AllReturnCodes::ABORTRUN;
    }

  // ihcal dead towers:
  // (8,32), (7, 51)
  // ihcal hot towers:
  // (3,15) (16,33) (19,1) (22,2)
  // ohcal hot towers:
  // (7,54), (22,26) 
  float E_ihcal[24] = {0};
  float E_ohcal[24] = {0};

  float totalihcal = 0;
  float totalohcal = 0;

  float delta_eta = 0.09167;

  float ihcal_scale = 1966.26;
  float ohcal_scale = 311.6;

  unsigned int nchannels_ih = towerinfosIH3->size();
  for (unsigned int channel = 0; channel < nchannels_ih; channel++) {
    unsigned int towerkey = towerinfosIH3->encode_key(channel);
    unsigned int ieta = getCaloTowerEtaBin(towerkey);
    unsigned int iphi = getCaloTowerPhiBin(towerkey);
    float this_E = towerinfosIH3->get_tower_at_channel(channel)->get_energy();
    short this_t = towerinfosIH3->get_tower_at_channel(channel)->get_time();
    h_2D_ihcal->Fill(ieta, iphi, this_E);
    h_raw_time_ihcal->Fill(this_t);
    if (this_E > 10) {
      h_time_ihcal->Fill(this_t);
      ihcal_ieta_v_time->Fill(this_t, ieta);
      if (this_E > 50) h_time_50_ihcal->Fill(this_t);
    }
    //if (ieta == 0 || ieta == 23) continue;
    if (ieta == 3 && iphi == 15) continue;
    if (ieta == 16 && iphi == 33) continue;
    if (ieta == 19 && iphi == 1) continue;
    if (ieta == 22 && iphi == 2) continue;
    if (ieta == 22 && iphi == 3) continue;
    if (this_E > 50 && this_t >= 4 && this_t <= 7) {
      h_2D_ihcal_calib->Fill(ieta, iphi, this_E);
      E_ihcal[ieta] += this_E / ihcal_scale;
      totalihcal += (this_E / ihcal_scale) / cosh(eta[ieta]);
      h_eT_ihcal_abs->Fill(eta[ieta], (this_E / ihcal_scale) / cosh(eta[ieta]));
    }
  }

  unsigned int nchannels_oh = towerinfosOH3->size();
  for (unsigned int channel = 0; channel < nchannels_oh; channel++) {
    unsigned int towerkey = towerinfosOH3->encode_key(channel);
    unsigned int ieta = getCaloTowerEtaBin(towerkey);
    unsigned int iphi = getCaloTowerPhiBin(towerkey);
    float this_E = towerinfosOH3->get_tower_at_channel(channel)->get_energy();
    short this_t = towerinfosOH3->get_tower_at_channel(channel)->get_time();
    h_2D_ohcal->Fill(ieta, iphi, this_E);
    h_raw_time_ohcal->Fill(this_t);
    if (this_E > 10) {
      h_time_ohcal->Fill(this_t);
      ohcal_ieta_v_time->Fill(this_t, ieta);
      if (this_E > 50) h_time_50_ohcal->Fill(this_t);
    }
    //if (ieta == 0 || ieta == 23) continue;
    if (ieta == 23 && iphi == 2) continue;
    if (ieta == 7 && iphi == 54) continue;
    if (ieta == 22 && iphi == 26) continue;
    //if (iphi >= 14 && iphi <= 19 && ((ieta >= 1 && ieta <= 4) || ieta == 21 ||ieta == 22)) continue;
    if (this_E > 50 && this_t >= 5 && this_t <= 8) {
      h_2D_ohcal_calib->Fill(ieta, iphi, this_E);
      E_ohcal[ieta] += this_E / ohcal_scale;
      totalohcal += (this_E / ohcal_scale) / cosh(eta[ieta]);
      h_eT_ohcal_abs->Fill(eta[ieta], (this_E / ohcal_scale) / cosh(eta[ieta]));
    }
  }

  if (totalihcal + totalohcal > 1) { 
    h_event_hcal_energy->Fill(totalihcal + totalohcal); 
    h_event_ihcal_energy->Fill(totalihcal);
    h_event_ohcal_energy->Fill(totalohcal);
    h_corr_ihcal_ohcal->Fill(totalihcal, totalohcal);
    h_corr_ihcal_hcal->Fill(totalihcal, totalihcal + totalohcal);
    h_corr_ohcal_hcal->Fill(totalohcal, totalihcal + totalohcal);
  }
  for (int i = 0; i < 24; i++) {
    h_eT_ihcal->Fill(eta[i],E_ihcal[i]/(delta_eta*cosh(eta[i])));
    h_eT_ohcal->Fill(eta[i],E_ohcal[i]/(delta_eta*cosh(eta[i])));
  }

  h_eT_ihcal_abs->Scale(1.0 / delta_eta);
  h_eT_ohcal_abs->Scale(1.0 / delta_eta);

  eventnumber++;
  event++;

  return Fun4AllReturnCodes::EVENT_OK;
}

//____________________________________________________________________________..
// convert from calorimeter key to phi bin
unsigned int eTcalos::getCaloTowerPhiBin(const unsigned int key)
{
  unsigned int etabin = key >> 16U;
  unsigned int phibin = key - (etabin << 16U);
  return phibin;
}

//____________________________________________________________________________..
// convert from calorimeter key to eta bin
unsigned int eTcalos::getCaloTowerEtaBin(const unsigned int key)
{
  unsigned int etabin = key >> 16U;
  return etabin;
}

//____________________________________________________________________________..
int eTcalos::ResetEvent(PHCompositeNode *topNode)
{
  //std::cout << "eTcalos::ResetEvent(PHCompositeNode *topNode) Resetting internal structures, prepare for next event" << std::endl;
  return Fun4AllReturnCodes::EVENT_OK;
}

//____________________________________________________________________________..
int eTcalos::EndRun(const int runnumber)
{
  std::cout << "eTcalos::EndRun(const int runnumber) Ending Run for Run " << runnumber << std::endl;
  return Fun4AllReturnCodes::EVENT_OK;
}

//____________________________________________________________________________..
int eTcalos::End(PHCompositeNode *topNode)
{
  std::cout << "eTcalos::End(PHCompositeNode *topNode) This is the End..." << std::endl;
  PHTFileServer::get().cd(m_outputFileName);

  std::cout << eventnumber << std::endl;

  h_eT_ihcal->Scale(1.0/eventnumber);
  h_eT_ohcal->Scale(1.0/eventnumber);
  h_eT_ihcal_abs->Scale(1.0/eventnumber);
  h_eT_ohcal_abs->Scale(1.0/eventnumber);
  
  h_2D_ihcal->Write();
  h_2D_ohcal->Write();
  h_raw_time_ihcal->Write();
  h_raw_time_ohcal->Write();
  h_time_ihcal->Write();
  h_time_ohcal->Write();
  h_time_50_ihcal->Write();
  h_time_50_ohcal->Write();
  h_2D_ihcal_calib->Write();
  h_2D_ohcal_calib->Write();
  ihcal_ieta_v_time->Write();
  ohcal_ieta_v_time->Write();

  h_ihcal->Write();
  h_ohcal->Write();
  h_eT_ihcal->Write();
  h_eT_ohcal->Write();
  h_eT_ihcal_abs->Write();
  h_eT_ohcal_abs->Write();
  h_event_hcal_energy->Write();
  h_event_ihcal_energy->Write();
  h_event_ohcal_energy->Write();
  h_corr_ihcal_ohcal->Write();
  h_corr_ihcal_hcal->Write();
  h_corr_ohcal_hcal->Write();

  std::cout<<"Calos have max energy "<< maxem <<" "<<maxih<<" "<<maxoh<<std::endl;
  return Fun4AllReturnCodes::EVENT_OK;
}

//____________________________________________________________________________..
int eTcalos::Reset(PHCompositeNode *topNode)
{
 std::cout << "eTcalos::Reset(PHCompositeNode *topNode) being Reset" << std::endl;
  return Fun4AllReturnCodes::EVENT_OK;
}

//____________________________________________________________________________..
void eTcalos::Print(const std::string &what) const
{
  std::cout << "eTcalos::Print(const std::string &what) const Printing info for " << what << std::endl;
}
