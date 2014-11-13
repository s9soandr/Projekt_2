

#ifndef __Projekt_2_Bioinfo_1__Sequence__
#define __Projekt_2_Bioinfo_1__Sequence__

#include <string>


class Sequence{
    
protected:
    //Sequenz
    std::string sequence_;

public:
    
    /*
     * Default - Constructor
     */
    Sequence();
    
    /*
     * Copy - Constructor
     */
    explicit Sequence(const Sequence& seq);
    
    /*
     *Detailed - Constructor
     */
    Sequence(const std::string& seq);
    
    /*
     * Destruktor
     */
    virtual ~Sequence();
    
    //----------------------------- OPERATOREN -----------------------------------------------------
    
    /*
     *Assignment - Operator "="
     */
     Sequence& operator=(const Sequence& seq);
    
    /*
     * Equality - Operator "=="
     */
    bool operator==(const Sequence& seq) const;
    
    /*
     *Inequality - Operator "!="
     */
    bool operator!=(const Sequence& seq) const;
    

    /*
     *Ausgabeoperator
     */
    friend std::ostream& operator<<(std::ostream&, const Sequence&);
    
    /*
     *Eingabeoperator
     */
    friend std::istream& operator>>(std::istream&, Sequence&);
    
    
    //----------------------------- VERLANGTE METHODEN -----------------------------------------------------

    
    /*
     * Testet, ob die Sequenz ab der Stelle i gleich der uebergebenen Sequenz 'seq' ist. Position startet ab der Sequenz 0
     */
    bool compare(const Sequence& seq, unsigned int i) const;
    
    
    /*
     * berechnet die maximale Ueberlappung des Endes der Sequenz mit dem Anfang der übergebenen Sequenz
     *'seq'
     */
    unsigned int overlap(const Sequence& seq) const;
    
    /*
     * testet, ob es sich um eine korrekte Protein - oder Nukleidsaeuresequenz handelt 
     */
    bool isValid() const;
    
    //----------------------------- EIGENE METHODEN -----------------------------------------------------

    
    /*
     * Getter fuer die Sequenz
     */
    const std::string getSequence() const;
    
    /*
     * Setter fuer die Sequenz
     */
    void setSequence(const std::string& seq);
    
    
    
};



#endif /* defined(__Projekt_2_Bioinfo_1__Sequence__) */
