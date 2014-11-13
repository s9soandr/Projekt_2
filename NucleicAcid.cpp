

#include "NucleicAcid.h"

/*
 * Default - Konstruktor
 */
NucleicAcid::NucleicAcid (){
    
}

/*
 * Copy - Konstruktor
 */
NucleicAcid::NucleicAcid (const NucleicAcid & seq){
    setSequence(seq.sequence_);
}

/*
 * Detailed - Konstruktor
 */
NucleicAcid::NucleicAcid (const std::string& seq){
    setSequence(seq);
}

/*
 * testet, ob es sich um eine korrekte Protein - oder Nukleidsaeuresequenz handelt
 */
bool NucleicAcid::isValid() const {
    return sequence_.find_first_not_of("GCATgcat")==std::string::npos;
}
