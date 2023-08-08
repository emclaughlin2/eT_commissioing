#pragma once
#if ROOT_VERSION_CODE >= ROOT_VERSION(6,00,0)
#include <fun4all/SubsysReco.h>
#include <fun4all/Fun4AllServer.h>
#include <fun4all/Fun4AllInputManager.h>
#include <fun4all/Fun4AllDstInputManager.h>

#include <fun4all/Fun4AllDstOutputManager.h>
#include <fun4all/Fun4AllOutputManager.h>
#include <fun4all/Fun4AllServer.h>

#include <phool/PHRandomSeed.h>
#include <phool/recoConsts.h>

#include <allcalos/eTcalos.h>

R__LOAD_LIBRARY(libfun4all.so)
R__LOAD_LIBRARY(libeTcalos.so)
#endif

void Fun4All_calo()
{
  Fun4AllServer *se = Fun4AllServer::instance();
  recoConsts *rc = recoConsts::instance();

  eTcalos *calo = new eTcalos();
  se->registerSubsystem(calo);

  Fun4AllInputManager *in = new Fun4AllDstInputManager("DSTcalo");
  
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0000.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0001.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0002.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0003.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0004.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0005.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0006.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0007.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0008.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0009.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0010.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0011.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0012.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0013.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0014.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0015.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0016.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21520/dsts_fast/DST-00021520-0017.root");
  
  se->registerInputManager(in);

  se->run(-1);
  se->End();
  se->PrintTimer();
  gSystem->Exit(0);
  return 0;
}
