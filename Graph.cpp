#include "Graph.h"

/*
 * Copy - Konstruktor
 */
Graph::Graph(const Graph& graph):nodelist(graph.nodelist),edgelist(graph.edgelist){
    
}


/*
 * Destruktor
 */
Graph::~Graph(){
    
}


//----------------------------- OPERATOREN -----------------------------------------------------

/*
 * Operator "=="
 */
bool Graph::operator==(const Graph& graph) const{
    return (graph.edgelist==Graph::edgelist)&&(graph.nodelist==graph.nodelist);
}

/*
 * Operator "!="
 */
bool Graph::operator!=(const Graph& graph) const{
    return (!(graph.edgelist==Graph::edgelist)&&(graph.nodelist==graph.nodelist));
}

//----------------------------- VERLANGTE METHODEN ----------------------------------------------------

/*
 * gibt 'true' zurueck, falls eine Knoten fuer die gegebene Sequenz existiert
 */
bool Graph::hasNode(const Sequence& seq) const{
    
    bool node_exists=false; // noch nicht nach Knoten gesucht
    
    for (std::vector<Node>::const_iterator node=nodelist.begin(); node != nodelist.end(); node++){
        if(node->getSequence()==seq){
            node_exists=true;
        }
    }
    return node_exists;
}

/*
 * gibt den Knoten für die übergebene Sequenz zurueck. Existiert kein Knoten fuer die Sequenz, wird ein
 * neuer Knoten erstellt.
 */
/*Node& Graph::getNode(const Sequence& seq){
   if(hasNode(seq)) {
        for (std::vector<Node>::iterator node=nodelist.begin(); node != nodelist.end(); node++){
            if(node->getSequence()==seq){
                return node.;
            }
        }
        
        }
    
    
}*/
