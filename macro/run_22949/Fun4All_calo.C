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
  
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0000.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0001.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0002.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0003.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0004.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0005.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0006.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0007.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0008.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0009.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0010.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0011.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0012.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0013.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0014.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0015.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0016.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0017.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0018.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0019.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0020.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0021.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0022.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0023.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0024.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0025.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0026.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0027.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0028.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0029.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0030.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0031.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0032.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0033.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0034.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0035.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0036.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0037.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0038.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0039.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_22949/dsts_fast/DST-00022949-0040.root");
  
  se->registerInputManager(in);

  se->run(-1);
  se->End();
  se->PrintTimer();
  gSystem->Exit(0);
  return 0;
}
