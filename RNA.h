

#ifndef __Projekt_2_Bioinfo_1__RNA__
#define __Projekt_2_Bioinfo_1__RNA__

#include <stdio.h>
#include "NucleicAcid.h"

class RNA:NucleicAcid{
public:
    //defautl constructor
    RNA ();
    
    //copy constr
    explicit RNA  (const RNA & seq);
    
    //detailed constr
    RNA (const std::string& seq);
    
    //is Valid
    
    virtual bool isValid() const;
};
#endif /* defined(__Projekt_2_Bioinfo_1__RNA__) */
