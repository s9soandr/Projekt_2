

#ifndef __Projekt_2_Bioinfo_1__NucleicAcid__
#define __Projekt_2_Bioinfo_1__NucleicAcid__

#include <stdio.h>
#include "Sequence.h"

class NucleicAcid:Sequence{
    
public:
    /*
     * Default - Konstruktor
     */
    NucleicAcid ();
    
    /*
     * Copy - Konstruktor
     */
    explicit NucleicAcid  (const NucleicAcid & seq);
    
    /*
     * Detailed - Konstruktor
     */
    NucleicAcid (const std::string& seq);
    
    /*
     * testet, ob es sich um eine korrekte Protein - oder Nukleidsaeuresequenz handelt
     */
    virtual bool isValid() const;
};



#endif /* defined(__Projekt_2_Bioinfo_1__NucleicAcid__) */
