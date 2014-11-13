

#ifndef __Projekt_2_Bioinfo_1__Edge__
#define __Projekt_2_Bioinfo_1__Edge__

#include <stdio.h>
#include "Node.h"
#include "Sequence.h"

// Forward - Declaration
class Node;
class Edge{
    
private:
     const Node& source;        // Ausgangsknoten
     const Node& target;        // Zielknoten
     const unsigned int ident;  // ID
     unsigned int weight;   // Gewicht

public:
    /*
     * Copy - Constructor
     */
    explicit Edge(const Edge& edge);
    
    /*
     *Detailed - Constructor, i:=Edge Id
     */
    Edge(const Node& source,const Node& target,unsigned int& i);
    
    /*
     * Destruktor
     */
    virtual ~Edge();
    
    //----------------------------- OPERATOREN -----------------------------------------------------
    
    
    /*
     * Equality - Operator "=="
     */
    bool operator==(const Edge& edge) const;
    
    /*
     *Inequality - Operator "!="
     */
    bool operator!=(const Edge& edge) const;
    
    
    /* TODO
     *Ausgabeoperator
     */
    friend std::ostream& operator<<(std::ostream&, const Edge&);
    
    /* TODO
     *Eingabeoperator
     */
    friend std::istream& operator>>(std::istream&, Edge&);
    
    
    //----------------------------- VERLANGTE METHODEN -----------------------------------------------------
    
    /*
     * liefert den Ausgangsknoten der Kante zurueck
     */
    const Node& getSource() const;
    
    /*
     * liefert den Zielknoten der Kante zurueck
     */
    const Node& getTarget() const;
    
    
    /*
     * liefert die Überlappung der Knoten zurueck
     */
    unsigned int getOverlap() const;
    
    
    //----------------------------- EIGENE METHODEN -----------------------------------------------------

    /*
     * liefert die ID der Kante
     */
    unsigned int getEdgeID() const;
    
    /*
     * Updatet das Kantengewicht
     */
    void updateEdgeWeight();
    
    /*
     * gibt das Kantengewicht aus
     */
    unsigned int getEdgeWeight();
};

#endif /* defined(__Projekt_2_Bioinfo_1__Edge__) */
