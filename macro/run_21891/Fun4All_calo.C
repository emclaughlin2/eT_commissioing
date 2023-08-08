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
  
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0000.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0001.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0002.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0003.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0004.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0005.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0006.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0007.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0008.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0009.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0010.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0011.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0012.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0013.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0014.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0015.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0016.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0017.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0018.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0019.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0020.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0021.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0022.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0023.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0024.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0025.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0026.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0027.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0028.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0029.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0030.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0031.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0032.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0033.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0034.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0035.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0036.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0037.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0038.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0039.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0040.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0041.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0042.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0043.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0044.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0045.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0046.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0047.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0048.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0049.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0050.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0051.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0052.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0053.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0054.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0055.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0056.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0057.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21891/dsts_fast/DST-00021891-0058.root");
 
  se->registerInputManager(in);

  se->run(-1);
  se->End();
  se->PrintTimer();
  gSystem->Exit(0);
  return 0;
}
