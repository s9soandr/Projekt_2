

#ifndef __Projekt_2_Bioinfo_1__DNA__
#define __Projekt_2_Bioinfo_1__DNA__

#include <stdio.h>
#include "NucleicAcid.h"

class DNA:NucleicAcid{
public:
    //defautl constructor
    DNA ();
    
    //copy constr
    explicit DNA  (const DNA & seq);
    
    //detailed constr
    DNA (const std::string& seq);
    
    //is Valid
    
    virtual bool isValid() const;
};

#endif /* defined(__Projekt_2_Bioinfo_1__DNA__) */

