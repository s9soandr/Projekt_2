

#ifndef __Projekt_2_Bioinfo_1__Protein__
#define __Projekt_2_Bioinfo_1__Protein__

#include <stdio.h>
#include "Sequence.h"

class Protein:Sequence{
    
public:
    /*
     *Default Constructor
     */
    Protein();
    
    /*
     * Copy - Konstruktor
     */
    explicit Protein (const Protein& seq);
    
    /*
     * Detailed - Konstruktor
     */
    Protein(const std::string& seq);
    
    /*
     * testet, ob es sich um eine korrekte Protein - oder Nukleidsaeuresequenz handelt
     */
    virtual bool isValid() const;

};


#endif /* defined(__Projekt_2_Bioinfo_1__Protein__) */
