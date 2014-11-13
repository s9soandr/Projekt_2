

#ifndef __Projekt_2_Bioinfo_1__Graph__
#define __Projekt_2_Bioinfo_1__Graph__

#include <stdio.h>
#include <vector>
#include <list>
#include "Node.h"
#include "Edge.h"
#include "Sequence.h"


class Graph{
    
private:
     std::vector<Node> nodelist; // Liste der Knoten
     std::vector<Edge> edgelist; // Vektor mit den Kanten
public:
    /*
     * Copy - Konstruktor
     */
    Graph(const Graph& graph);
    
    
    /*
     * Destruktor
     */
    ~Graph();

    
    //----------------------------- OPERATOREN -----------------------------------------------------
    
    /*
     * Operator "=="
     */
    bool operator==(const Graph& graph) const;
    
    /*
     * Operator "!="
     */
    bool operator!=(const Graph& graph) const;
    
    /* TODO
     *Ausgabeoperator
     * gibt den Graphen in Graphviz Format aus
     */
    friend std::ostream& operator<<(std::ostream&, const Graph&);
    
    /* TODO
     *Eingabeoperator
     *liest Beispieldatei fragments.fta ein und legt fuer jede Sequenz einen Knoten an. Desweiteren soll
     *einge gerichtete Kante zwischen zwei Kanten erzeugt werden, wenn die Sequenzen eine maximale 
     * Ueberlappung haben. Speichern Sie die Ueberlappung im Graphen. Verwenden Sie 'overlap' Ihrer
     * Sequenzklasse
     */
    friend std::istream& operator>>(std::istream&, Graph&);
    
    //----------------------------- VERLANGTE METHODEN ----------------------------------------------------

     /*
      * gibt 'true' zurueck, falls eine Knoten fuer die gegebene Sequenz existiert
      */
    bool hasNode(const Sequence& seq) const;
    
    /*
     * gibt den Knoten für die übergebene Sequenz zurueck. Existiert kein Knoten fuer die Sequenz, wird ein
     * neuer Knoten erstellt.
     */
    Node& getNode(const Sequence& seq);
    
    /*
     * loescht den angegebenen Knoten
     */
    void removeNode(Node& node);
    
    /*
     * gibt die Kante zwischen Ausgangsknoten source und Zielknoten target zurueck. Existiert keine Kante
     * zwischen source und target, so wird diese erstellt.
     */
    Edge getEdge(Node& src, Node& target);
    
    /*
     * identifieziert, die zu den uebergebenen Sequenzen gehoerenden Knoten un verbindet diese mittels
     * Edge getEdge(Node& src, Node& target). Existieren eine oder beide Knoten nicht, so werden sie erzeugt.
     */
    Edge getEdge(const Sequence& src, const Sequence& target);
};

#endif /* defined(__Projekt_2_Bioinfo_1__Graph__) */
