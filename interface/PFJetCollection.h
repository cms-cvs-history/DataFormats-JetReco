// F.R.
// $Id: PFJetCollection.h,v 1.3 2007/08/20 17:53:30 fedor Exp $
#ifndef JetReco_PFJetCollection_h
#define JetReco_PFJetCollection_h

#include <vector>
#include "DataFormats/Common/interface/Ref.h"
#include "DataFormats/Common/interface/RefVector.h"

#include "DataFormats/JetReco/interface/PFJet.h" //INCLUDECHECKER:SKIP

namespace reco {
  class PFJet;
  /// collection of PFJet objects 
  typedef std::vector<PFJet> PFJetCollection;
  /// edm references
  typedef edm::Ref<PFJetCollection> PFJetRef;
  typedef edm::RefVector<PFJetCollection> PFJetRefVector;
  typedef edm::RefProd<PFJetCollection> PFJetRefProd;
}
#endif