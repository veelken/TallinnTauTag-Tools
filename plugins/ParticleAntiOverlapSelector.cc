#include "TallinnTauTag/Tools/plugins/ParticleAntiOverlapSelector.h"

#include "CommonTools/UtilAlgos/interface/ObjectSelector.h" // ObjectSelector

#include "DataFormats/JetReco/interface/PFJet.h"            // reco::PFJet
#include "DataFormats/TauReco/interface/PFTau.h"            // reco::PFTau

typedef ObjectSelector<ParticleAntiOverlapSelector<reco::PFJet>> PFJetAntiOverlapSelector;
typedef ObjectSelector<ParticleAntiOverlapSelector<reco::PFTau>> PFTauAntiOverlapSelector;

#include "FWCore/Framework/interface/MakerMacros.h"         // DEFINE_FWK_MODULE()
DEFINE_FWK_MODULE(PFJetAntiOverlapSelector);
DEFINE_FWK_MODULE(PFTauAntiOverlapSelector);
