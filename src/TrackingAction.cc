//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
/// \file electromagnetic/TestEm7/src/TrackingAction.cc
/// \brief Implementation of the TrackingAction class
//
// $Id: TrackingAction.cc 67268 2013-02-13 11:38:40Z ihrivnac $
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#include "TrackingAction.hh"
#include "DetectorConstruction.hh"
#include "RunAction.hh"
#include "G4Track.hh"
#include "G4UnitsTable.hh"
#include "G4ios.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

TrackingAction::TrackingAction(DetectorConstruction* det, RunAction* run)
:G4UserTrackingAction(),fDetector(det), fRunAction(run)
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

TrackingAction::~TrackingAction()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void TrackingAction::PostUserTrackingAction(const G4Track* track)
{
  // // extract Projected Range of primary particle
  // if (track->GetTrackID() == 1) {
  //   G4double x = track->GetPosition().x() ;//+ 0.5*fDetector->GetAbsorSizeX();
  //   G4double y = track->GetPosition().y() ;//+ 0.5*fDetector->GetAbsorSizeX();
  //   G4double z = track->GetPosition().z() ;//+ 0.5*fDetector->GetAbsorSizeX();
  //   if(x > 0.0) fRunAction->AddProjRange(x);
  //   fRunAction->AddOrtRange(std::sqrt(y*y + z*z));
  //   G4double range = std::sqrt(x*x + y*y + z*z);
  //   fRunAction->AddRange(range);
  //   // G4AnalysisManager::Instance()->FillH1(3, x);

  //   G4double tl =  track->GetTrackLength();
    
  //   // G4cout << "TrackingAction::PostUserTrackingAction track length "
  //   // 	   << tl/CLHEP::mm << " mm"  << G4endl;
    
    
  //   // fRunAction->AddTotalRange(track->GetTrackLength());
  //   // G4double y = track->GetPosition().y();
  //   // G4double z = track->GetPosition().z();    
  //   // G4double s = x*x + y*y + z*z;
  //   // if (s>0.)
  //   //   {
  //   // 	s = std::sqrt(s);
  //   // 	fRunAction->AddTotalRange(s);
  //   //   }
  //   fRunAction->AddTotalRange(tl);
  // }  
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

