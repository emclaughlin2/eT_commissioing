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

#include <allcalos/cleancalos.h>

R__LOAD_LIBRARY(libfun4all.so)
R__LOAD_LIBRARY(libcleancalos.so)
#endif

void Fun4All_calo()
{
  Fun4AllServer *se = Fun4AllServer::instance();
  recoConsts *rc = recoConsts::instance();

  cleancalos *calo = new cleancalos();
  se->registerSubsystem(calo);

  Fun4AllInputManager *in = new Fun4AllDstInputManager("DSTcalo");
  
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0000.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0001.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0002.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0003.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0004.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0005.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0006.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0007.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0008.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0009.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0010.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0011.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0012.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0013.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0014.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0015.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0016.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0017.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0018.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0019.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0020.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0021.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0022.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0023.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0024.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0025.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0026.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0027.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0028.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0029.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0030.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0031.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0032.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0033.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0034.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22982/dsts_fast/DST-00022982-0035.root");
  
  se->registerInputManager(in);

  se->run(-1);
  se->End();
  se->PrintTimer();
  gSystem->Exit(0);
  return 0;
}
