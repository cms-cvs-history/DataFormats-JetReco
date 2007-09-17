#ifndef JetReco_JetToTracksAssociation_h
#define JetReco_JetToTracksAssociation_h

/** \class JetToTracksAssociation
 *
 * \short Association between jets and float value
 *
 * \author Fedor Ratnikov, July 27, 2007
 *
 * \version   $Id: JetToTracksAssociation.h,v 1.5 2007/08/24 17:35:23 fedor Exp $
 ************************************************************/

#include "DataFormats/JetReco/interface/Jet.h"
#include "DataFormats/TrackReco/interface/TrackFwd.h"
#include "DataFormats/Common/interface/Ref.h"
#include "DataFormats/Common/interface/RefVector.h"
#include "DataFormats/Math/interface/LorentzVector.h"

namespace reco {
  namespace JetToTracksAssociation {
    typedef math::PtEtaPhiELorentzVectorF LorentzVector;
    typedef std::pair <edm::RefToBase<reco::Jet>, reco::TrackRefVector> Object;
    typedef std::vector <Object> Container;
    typedef edm::Ref <Container> Ref;
    typedef edm::RefProd <Container> RefProd;
    typedef edm::RefVector <Container> RefVector;

    /// Get number of tracks associated with jet
    int tracksNumber (const Container&, const edm::RefToBase<reco::Jet>);
    int tracksNumber (const Container&, const reco::Jet&);
    /// Get LorentzVector as sum of all tracks associated with jet.
    LorentzVector tracksP4 (const Container&, const edm::RefToBase<reco::Jet>);
    LorentzVector tracksP4 (const Container&, const reco::Jet&);

    /// associate jet with value. Returns false and associate nothing if jet is already associated
    bool setValue (Container&, const edm::RefToBase<reco::Jet>&, reco::TrackRefVector);
    bool setValue (Container*, const edm::RefToBase<reco::Jet>&, reco::TrackRefVector);
    /// get value for the association. Throw exception if no association found
    const reco::TrackRefVector& getValue (const Container&, const edm::RefToBase<reco::Jet>&);
    const reco::TrackRefVector& getValue (const Container&, const reco::Jet&);
    /// fill list of all jets associated with values. Return # of jets in the list
    std::vector<edm::RefToBase<reco::Jet> > allJets (const Container&);
    /// check if jet is associated
    bool hasJet (const Container&, const edm::RefToBase<reco::Jet>&);
  }
}

#endif