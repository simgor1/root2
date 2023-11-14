#ifndef __ROOTCLASS_H__
#define __ROOTCLASS_H__

#include <TObject.h>

class rootclass : public TObject {
public:
    rootclass();               
    rootclass(Int_t x);  
    virtual ~rootclass();   
    
    Double_t px;
    Double_t py;
    Double_t pz;
    

    Double_t CalculateMagnitude();
     
 ClassDef(rootclass, 1);  
};


#endif // __ROOTCLASS_H__
