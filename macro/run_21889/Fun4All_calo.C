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
  
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0000.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0001.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0002.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0003.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0004.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0005.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0006.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0007.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0008.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0009.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0010.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0011.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0012.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0013.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0014.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0015.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0016.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0017.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0018.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0019.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0020.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0021.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0022.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0023.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0024.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0025.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0026.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0027.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0028.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0029.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0030.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0031.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0032.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0033.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0034.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0035.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0036.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0037.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0038.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0039.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0040.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0041.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0042.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0043.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0044.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0045.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0046.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0047.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0048.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0049.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0050.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0051.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0052.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0053.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0054.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0055.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0056.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0057.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0058.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0059.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0060.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0061.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0062.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0063.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0064.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0065.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0066.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0067.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0068.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0069.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0070.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0071.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0072.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0073.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0074.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0075.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0076.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0077.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0078.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0079.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0080.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0081.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0082.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0083.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0084.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0085.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0086.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0087.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0088.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0089.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0090.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0091.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0092.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0093.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0094.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0095.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21889/dsts_fast/DST-00021889-0096.root");

  se->registerInputManager(in);

  se->run(-1);
  se->End();
  se->PrintTimer();
  gSystem->Exit(0);
  return 0;
}
