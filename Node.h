

#ifndef __Projekt_2_Bioinfo_1__Node__
#define __Projekt_2_Bioinfo_1__Node__

#include <stdio.h>
#include <string>
#include <vector>
#include "Edge.h"
#include "Sequence.h"

// Forward - Declaration
class Edge; 


class Node{
    
private:
    const Sequence& seq;            // Sequenz
    const std::string stringID;     // string der Sequenz als ID der Kante

    
public:
    std::vector<Edge> inedges;      // Eingehende Kanten
    std::vector<Edge> outedges;     // Ausgehende Kanten
    
    /*
     * Copy - Konstruktor
     */
    Node(const Node& node);
    
    /*
     * Detailed Konstruktor
     */
    explicit Node(const Sequence& sequence);
    
    /*
     * Destruktor
     */
    ~Node();
    
    //----------------------------- OPERATOREN -----------------------------------------------------

    
    /*
     * Operator "=="
     */
    bool operator==(const Node& node) const;
    
    /*
     * Operator "!="
     */
    bool operator!=(const Node& node) const; //Node.h:54:17: error: ‘Edge’ was not declared in this scope
    
    /* TODO
     *Ausgabeoperator
     */
    friend std::ostream& operator<<(std::ostream&, const Node&);
    
    /* TODO
     *Eingabeoperator
     */
    friend std::istream& operator>>(std::istream&, Node&);

    //----------------------------- VERLANGTE METHODEN ----------------------------------------------------
    
    /*
     * Gibt die Liste aller ausgehenden Kanten zurueck
     */
    std::vector<Edge> getOutEdges() const;
    
    /*
     * Gibt die Liste aller eingehenden Kanten zurueck
     */
    std::vector<Edge> getInEdges() const;
    
    /* // TODO
     * erstellt eine Kante von diesem zum uebergebenen Knoten mit korrekten Kantengewicht
     */
    Edge buildEdgeTo(Node &node);
    
    /* //TODO
     * falls eine ausgehende Kante zu node besteht, wird diese entfernt
     */
    void removeEdgeTo(Node& node);
    
    //----------------------------- EIGENE METHODEN -----------------------------------------------------

    
    
    /*
     * gibt die Sequenz zurueck
     */
    const Sequence& getSequence() const;
    /*
     * gibt die stringID zurueck
     */
    const std::string getStringID() const;

};


#endif /* defined(__Projekt_2_Bioinfo_1__Node__) */
