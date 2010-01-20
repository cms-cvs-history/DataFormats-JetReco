// F.R.
// $Id: PFJetCollection.h,v 1.4 2007/08/24 17:35:23 fedor Exp $
#ifndef JetReco_PFJetCollection_h
#define JetReco_PFJetCollection_h

#include <vector>
#include "DataFormats/Common/interface/Ref.h"
#include "DataFormats/Common/interface/FwdRef.h"
#include "DataFormats/Common/interface/RefVector.h"

#include "DataFormats/JetReco/interface/PFJet.h" //INCLUDECHECKER:SKIP

namespace reco {
  class PFJet;
  /// collection of PFJet objects 
  typedef std::vector<PFJet> PFJetCollection;
  /// edm references
  typedef edm::Ref<PFJetCollection> PFJetRef;
  typedef edm::FwdRef<PFJetCollection> PFJetFwdRef;
  typedef edm::RefVector<PFJetCollection> PFJetRefVector;
  typedef edm::RefProd<PFJetCollection> PFJetRefProd;
  typedef std::vector<edm::FwdRef<PFJetCollection> > PFJetFwdRefVector;
}
#endif
