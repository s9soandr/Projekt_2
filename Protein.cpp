

#include "Protein.h"

/*
 *Default Constructor
 */
Protein::Protein(){
}

/*
 * Copy - Konstruktor
 */
Protein::Protein (const Protein& seq){
    setSequence(seq.sequence_);
}

/*
 * Detailed - Konstruktor
 */
Protein::Protein(const std::string& seq){
    setSequence(seq);
}

/*
 * testet, ob es sich um eine korrekte Protein - oder Nukleidsaeuresequenz handelt
 */
bool Protein::isValid() const{
    return sequence_.find_first_not_of("ACDEFGHIKLMNPQRSTVWY")==std::string::npos;
}