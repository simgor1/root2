#include "rootclass.h"
#include <TFile.h>
#include <TTree.h>
#include <TRandom.h>

void write() {
    // Initialize your object e.g. as a pointer
    rootclass* particle = new rootclass();

    // Create your root file here
    TFile file("tree_file.root", "RECREATE");

    // Create your TTree here
    TTree tree("tree", "Trre with rootclass objects");

    // And the associated branches underneath
    tree.Branch("particle", "rootclass", &particle);

    // Now we create our loop for filling the tree with some random data
    
    const Int_t nEvents = 50;

    for (Int_t i = 0; i<nEvents; i++) {
        // Initialize your new object below
        particle->px = gRandom->Gaus(0, 0.02);
        particle->py = gRandom->Gaus(0, 0.02);
        particle->pz = gRandom->Gaus(0, 0.02);

        // Now fill the tree
        tree.Fill();
    }

    // Remember to delete it again otherwise you will have a memory leak
    delete particle;

    // save the tree/file
    file.Write();
    file.Close();
}
