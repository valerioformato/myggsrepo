#include <iostream>
#include "TObject.h"

class TrCluster:public TObject{

public:
  int segm;
  double pos[2];
  double time;
  double eDep;
  double spRes;
  double tRes;
  int parID;
  int parPdg;
  int layer;

  ClassDef(TrCluster, 2)

  void Dump(){
    std::cout << "segm = " << segm << std::endl;
    std::cout << "pos = (" << pos[0] << " , " << pos[1] << ")" << std::endl;
    std::cout << "time = " << time << std::endl;
    std::cout << "eDep = " << eDep << std::endl;
    std::cout << "spRes = " << spRes << std::endl;
    std::cout << "tRes = " << tRes << std::endl;
    std::cout << "parID = " << parID << std::endl;
    std::cout << "parPdg = " << parPdg << std::endl;
    std::cout << "layer = " << layer << std::endl;
  }
};
