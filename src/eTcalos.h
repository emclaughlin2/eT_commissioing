// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef ETCALOS_H
#define ETCALOS_H

#include <fun4all/SubsysReco.h>

#include <string>
#include <TFile.h>
#include <TH3F.h>
#include <TH2F.h>
#include <cmath>

class PHCompositeNode;

class eTcalos : public SubsysReco
{
 public:

  eTcalos(const std::string &name = "eTcalos");

  ~eTcalos() override;

  /** Called during initialization.
      Typically this is where you can book histograms, and e.g.
      register them to Fun4AllServer (so they can be output to file
      using Fun4AllServer::dumpHistos() method).
   */
  int Init(PHCompositeNode *topNode) override;

  /** Called for first event when run number is known.
      Typically this is where you may want to fetch data from
      database, because you know the run number. A place
      to book histograms which have to know the run number.
   */
  int InitRun(PHCompositeNode *topNode) override;

  /** Called for each event.
      This is where you do the real work.
   */
  int process_event(PHCompositeNode *topNode) override;

  unsigned int getCaloTowerEtaBin(const unsigned int key);
  unsigned int getCaloTowerPhiBin(const unsigned int key);

  /// Clean up internals after each event.
  int ResetEvent(PHCompositeNode *topNode) override;

  /// Called at the end of each run.
  int EndRun(const int runnumber) override;

  /// Called at the end of all processing.
  int End(PHCompositeNode *topNode) override;

  /// Reset
  int Reset(PHCompositeNode * /*topNode*/) override;

  void Print(const std::string &what = "ALL") const override;

 private:
  std::string m_outputFileName = "output.root";

  TH2F *h_2D_ihcal;
  TH2F *h_2D_ohcal;
  TH1I *h_raw_time_ihcal;
  TH1I *h_raw_time_ohcal;
  TH1I *h_time_ihcal;
  TH1I *h_time_ohcal;
  TH1I *h_time_50_ihcal;
  TH1I *h_time_50_ohcal;
  TH2F *h_2D_ihcal_calib;
  TH2F *h_2D_ohcal_calib;
  TH2I *ihcal_ieta_v_time;
  TH2I *ohcal_ieta_v_time;

  TH1F *h_ihcal;
  TH1F *h_ohcal;
  TH1F *h_eT_ihcal;
  TH1F *h_eT_ohcal;
  TH1F *h_eT_ihcal_abs;
  TH1F *h_eT_ohcal_abs;
  TH1F *h_event_hcal_energy;
  TH1F *h_event_ihcal_energy;
  TH1F *h_event_ohcal_energy;
  TH2F* h_corr_ihcal_ohcal;
  TH2F* h_corr_ihcal_hcal;
  TH2F* h_corr_ohcal_hcal;

  int event;
  int eventnumber;
};

#endif // ETCALOS_H
