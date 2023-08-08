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
  
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0000.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0001.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0002.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0003.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0004.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0005.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0006.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0007.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0008.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0009.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0010.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0011.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0012.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0013.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0014.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0015.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0016.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0017.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0018.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0019.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0020.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0021.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0022.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0023.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0024.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0025.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0026.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0027.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0028.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0029.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0030.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0031.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0032.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0033.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0034.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0035.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0036.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0037.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0038.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0039.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0040.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0041.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0042.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0043.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0044.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0045.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0046.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0047.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0048.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0049.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0050.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0051.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0052.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0053.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0054.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0055.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0056.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0057.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0058.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0059.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0060.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0061.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0062.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0063.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0064.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0065.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0066.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0067.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0068.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0069.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0070.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0071.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0072.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0073.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0074.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0075.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0076.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21796/dsts_fast/DST-00021796-0077.root");
  
  se->registerInputManager(in);

  se->run(-1);
  se->End();
  se->PrintTimer();
  gSystem->Exit(0);
  return 0;
}
