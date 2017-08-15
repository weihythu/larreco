////////////////////////////////////////////////////////////////////////
//
//  Cosmic removal tools
//
//  Tingjun Yang (tjyang@fnal.gov)
//
////////////////////////////////////////////////////////////////////////
#ifndef TRAJCLUSTERTCCR_H
#define TRAJCLUSTERTCCR_H

#include "larreco/RecoAlg/TCAlg/DataStructs.h"

namespace tca {
  void SaveCRInfo(TjStuff& tjs, MatchStruct& ms, bool prt, bool fIsRealData);
  int  GetOrigin(TjStuff& tjs, MatchStruct& ms);
  void ClearCRInfo(TjStuff& tjs);
}

#endif