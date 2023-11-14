#include "rootclass.h"
#include <TClass.h>
#include <TMath.h>
#include "write.cxx"


ClassImp(rootclass);

rootclass::rootclass() : 
    px(0.0), py(0.0), pz(0.0)
{ 
}



rootclass::rootclass(Int_t x) : 
    px(0.0), py(0.0), pz(0.0)
{
}


rootclass::~rootclass(){
}

Double_t rootclass::CalculateMagnitude() {
    return TMath::Sqrt(px * px + py * py + pz * pz);
}