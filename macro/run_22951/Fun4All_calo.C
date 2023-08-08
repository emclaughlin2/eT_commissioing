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
  
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0000.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0001.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0002.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0003.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0004.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0005.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0006.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0007.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0008.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0009.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0010.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0011.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0012.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0013.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0014.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0015.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0016.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0017.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0018.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0019.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0020.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0021.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0022.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0023.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0024.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0025.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0026.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0027.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0028.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0029.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0030.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0031.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0032.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0033.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0034.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0035.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0036.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0037.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0038.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0039.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22951/dsts_fast/DST-00022951-0040.root");
 
  se->registerInputManager(in);

  se->run(-1);
  se->End();
  se->PrintTimer();
  gSystem->Exit(0);
  return 0;
}
