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
  
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0000.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0001.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0002.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0003.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0004.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0005.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0006.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0007.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0008.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0009.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0010.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0011.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0012.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0013.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0014.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0015.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0016.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0017.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0018.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0019.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0020.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0021.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0022.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0023.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0024.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0025.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0026.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0027.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0028.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0029.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0030.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0031.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0032.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0033.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0034.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0035.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0036.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0037.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0038.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0039.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0040.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0041.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0042.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0043.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0044.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0045.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0046.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0047.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0048.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0049.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0050.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0051.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0052.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0053.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0054.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0055.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0056.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0057.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0058.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0059.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0060.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0061.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0062.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0063.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0064.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0065.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0066.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0067.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0068.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0069.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0070.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0071.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0072.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0073.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0074.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0075.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0076.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0077.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0078.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0079.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0080.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0081.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0082.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0083.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0084.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0085.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0086.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0087.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0088.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0089.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0090.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0091.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0092.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0093.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0094.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0095.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0096.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0097.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0098.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0099.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0100.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0101.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0102.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0103.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0104.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0105.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0106.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0107.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0108.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0109.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0110.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0111.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0112.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0113.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0114.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0115.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0116.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0117.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0118.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0119.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0120.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0121.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0122.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0123.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0124.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0125.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0126.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0127.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0128.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0129.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0130.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0131.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0132.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0133.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0134.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0135.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0136.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0137.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0138.root");
  in->AddFile("/sphenix/lustre01/sphnxpro/commissioning/DST/run_21813/dsts_fast/DST-00021813-0139.root");
  
  se->registerInputManager(in);

  se->run(-1);
  se->End();
  se->PrintTimer();
  gSystem->Exit(0);
  return 0;
}
