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
  
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0000.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0001.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0002.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0003.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0004.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0005.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0006.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0007.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0008.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0009.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0010.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0011.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0012.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0013.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0014.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0015.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0016.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0017.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0018.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0019.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0020.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0021.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0022.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0023.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0024.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0025.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0026.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0027.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0028.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0029.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0030.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0031.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0032.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0033.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0034.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0035.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0036.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0037.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0038.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0039.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0040.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0041.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0042.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0043.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0044.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0045.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0046.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0047.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0048.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0049.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0050.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0051.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0052.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0053.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0054.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0055.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0056.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0057.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0058.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0059.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0060.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0061.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0062.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0063.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0064.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0065.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0066.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0067.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0068.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0069.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21615/dsts_fast/DST-00021615-0070.root");
  
  se->registerInputManager(in);

  se->run(-1);
  se->End();
  se->PrintTimer();
  gSystem->Exit(0);
  return 0;
}
