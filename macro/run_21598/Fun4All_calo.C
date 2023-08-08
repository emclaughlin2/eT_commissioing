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
  
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0000.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0001.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0002.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0003.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0004.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0005.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0006.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0007.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0008.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0009.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0010.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0011.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0012.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0013.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0014.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0015.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0016.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0017.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0018.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0019.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0020.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0021.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0022.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0023.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0024.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0025.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0026.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0027.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0028.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0029.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0030.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0031.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0032.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0033.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0034.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0035.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0036.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0037.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0038.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0039.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0040.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0041.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0042.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0043.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0044.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0045.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0046.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0047.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0048.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0049.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0050.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0051.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0052.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0053.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0054.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0055.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0056.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0057.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0058.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0059.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0060.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0061.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0062.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0063.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0064.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0065.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21598/dsts_fast/DST-00021598-0066.root");
  
  se->registerInputManager(in);

  se->run(-1);
  se->End();
  se->PrintTimer();
  gSystem->Exit(0);
  return 0;
}
