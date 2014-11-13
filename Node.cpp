

#include "Node.h"

/*
 * Copy - Konstruktor
 */
Node::Node(const Node& node):seq(node.seq),stringID(node.getStringID()){
    
}

/*
 * Detailed Konstruktor
 */
Node::Node(const Sequence& sequence):seq(sequence),stringID(sequence.getSequence()){

}

/*
 * Destruktor
 */
Node::~Node(){
}

//----------------------------- OPERATOREN -----------------------------------------------------


/*
 * Operator "=="
 */
bool Node::operator==(const Node& node) const{
    return Node::stringID==node.getStringID();
}

/*
 * Operator "!="
 */
bool Node::operator!=(const Node& node) const{
    return !(Node::stringID==node.getStringID());
}

/*
 *Ausgabeoperator
 */
std::ostream& operator<<(std::ostream& ostr, const Node& node){
    // TODO
    return ostr;
}

/*
 *Eingabeoperator
 */
std::istream& operator>>(std::istream& istr, Node& node){
    // TODO
    return istr;
}

//----------------------------- VERLANGTE METHODEN ----------------------------------------------------

/*
 * Gibt die Liste aller ausgehenden Kanten zurueck
 */
std::vector<Edge> Node::getOutEdges() const{
    return outedges;
}

/*
 * Gibt die Liste aller eingehenden Kanten zurueck
 */
std::vector<Edge> Node::getInEdges() const{
    return inedges;
}

/*
 * erstellt eine Kante von diesem zum uebergebenen Knoten mit korrekten Kantengewicht
 */

/*Edge Node::buildEdgeTo(Node &node){
    Edge edge(node,node,1);
}*/

/*
 * falls eine ausgehende Kante zu node besteht, wird diese entfernt
 */
/*void Node::removeEdgeTo(Node& node){
}*/


//----------------------------- EIGENE METHODEN -----------------------------------------------------

/*
 * gibt die Sequenz zurueck
 */
const Sequence& Node::getSequence() const{
    return Node::seq;
}

/*
 * gibt die stringID zurueck
 */
const std::string Node::getStringID() const{
    return stringID;
}



