

#include "Sequence.h"
#include <string.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>

/*
 * Default - Constructor
 */
Sequence::Sequence(){
}

/*
 * Copy - Constructor
 */
Sequence::Sequence(const Sequence& seq){
    sequence_=seq.sequence_;
}

/*
 *Detailed - Constructor
 */
Sequence::Sequence(const std::string& seq){
    sequence_ = seq;
}

/*
 * Destruktor
 */
Sequence::~ Sequence (){
}

//----------------------------- OPERATOREN -----------------------------------------------------

/*
 * Operator "="
 */
Sequence& Sequence::operator=(const Sequence& seq)
{
    sequence_ = seq.sequence_;
    return *this;
}

/*
 * Operator "=="
 */
bool Sequence::operator==(const Sequence& seq) const
{
    return sequence_ == seq.sequence_;
}

/*
 *Ausgabeoperator
 */
//operator "<<"
std::ostream& operator<<(std::ostream& ostr, const Sequence& seq)
{
    ostr << seq.sequence_<< ' ';
    return ostr;
}

/*
 *Eingabeoperator
 */
std::istream& operator>>(std::istream& istr, Sequence& seq){
    if (istr.good()){
        char first = istr.get(); //first char
        if (!isspace(first)){ //space
            //       istr.putback(c);
            istr >> seq.sequence_;
            first = istr.peek(); //Returns the next character in the input sequence, without extracting it: The character is left as the next character to be extracted from the stream.
            if (istr.good() && isspace(first)){
                first = istr.get();
            }
            return istr;
        }
    }
    return istr;
}

/*
 * Getter fuer die Sequenz
 */
const std::string Sequence::getSequence() const{
    return sequence_;
}

/*
 * Setter fuer die Sequenz
 */
void Sequence::setSequence(const std::string& seq){
    sequence_=seq;
}

//----------------------------- VERLANGTE METHODEN -----------------------------------------------------

/*
 * Testet, ob die Sequenz ab der Stelle i gleich der uebergebenen Sequenz 'seq' ist. Position startet ab der Sequenz 0
 */
bool Sequence::compare(const Sequence& seq, unsigned int i) const{
    // startpoint
    int begin = sequence_.length()-i;
    
    // empty sequence
    if (begin <1) {
        return false;
    }
    else {
        if ( memcmp(sequence_.c_str() + i, seq.sequence_.c_str(), begin) == 0)
        { return true;}
        else
        {return false;}
    }

}

/*
 * berechnet die maximale Ueberlappung des Endes der Sequenz mit dem Anfang der übergebenen Sequenz
 *'seq'
 */
unsigned int Sequence::overlap(const Sequence& seq) const{
    /*unsigned int max=0;
    // Empty seq
    if (seq.sequence_.length()==0) {
        return max;
    }
    
    // Empty sequence_
    if (sequence_.length()==0) {
        return max;
    }
    // Same length, just compare
    if (compare(seq,0)) {
        return (seq.sequence_.length());
    }
    
    unsigned int position_sequence_=sequence_.length()-1;
    unsigned int position_seq =0;*/
    
    
    return 0;

    
}

//----------------------------- EIGENE METHODEN -----------------------------------------------------


