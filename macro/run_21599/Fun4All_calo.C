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
  
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0000.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0001.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0002.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0003.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0004.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0005.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0006.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0007.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0008.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0009.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0010.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0011.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0012.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0013.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0014.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0015.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0016.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0017.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0018.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0019.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0020.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0021.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0022.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0023.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0024.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0025.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0026.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0027.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0028.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0029.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0030.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0031.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0032.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0033.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0034.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0035.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0036.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0037.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0038.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0039.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0040.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0041.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0042.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0043.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0044.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0045.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0046.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0047.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0048.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0049.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0050.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0051.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0052.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0053.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0054.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0055.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0056.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0057.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0058.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0059.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0060.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0061.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0062.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0063.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0064.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0065.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0066.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0067.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21599/dsts_fast/DST-00021599-0068.root");
  
  se->registerInputManager(in);

  se->run(-1);
  se->End();
  se->PrintTimer();
  gSystem->Exit(0);
  return 0;
}
