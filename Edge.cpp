
#include "Edge.h"


/*
 * Copy - Constructor
 */
Edge::Edge(const Edge& edge):source(edge.source),target(edge.target),ident(edge.ident){
    updateEdgeWeight(); // setzt das Kantengewicht
}

/*
 *Detailed - Constructor
 */
Edge::Edge(const Node& source,const Node& target, unsigned int& i):source(source),target(target),ident(i){
   
}

/*
 * Destruktor
 */
Edge::~Edge(){
    
}

//----------------------------- OPERATOREN -----------------------------------------------------


/*
 * Equality - Operator "=="
 */
bool Edge::operator==(const Edge& edge) const {
    //Vergleiche die IDs
    return (edge.ident == Edge::ident);
}

/*
 *Inequality - Operator "!="
 * vergleicht die IDs der Kanten miteinander
 */
bool Edge::operator!=(const Edge& edge) const {
    return !(edge.ident == Edge::ident);
}

/*
 *Ausgabeoperator
 */
std::ostream& operator<<(std::ostream& ostr, const Edge& edge){
    // TODO
    return ostr;
}

/*
 *Eingabeoperator
 */
std::istream& operator>>(std::istream& istr, Edge& edge){
    // TODO
    return  istr;
}


//----------------------------- VERLANGTE METHODEN -----------------------------------------------------

/*
 * liefert den Ausgangsknoten der Kante zurueck
 */
const Node& Edge::getSource() const{
    return source;
}

/*
 * liefert den Zielknoten der Kante zurueck
 */
const Node& Edge::getTarget() const{
    return target;
}


/*
 * liefert die Überlappung der Knoten zurueck
 */
unsigned int Edge::getOverlap() const{
    const Sequence& seq = Edge::source.getSequence();
    return seq.overlap(Edge::target.getSequence());
}

//----------------------------- EIGENE METHODEN -----------------------------------------------------

/*
 * liefert die ID der Kante
 */
unsigned int Edge::getEdgeID() const{
    return Edge::ident;
}

/*
 * Updatet das Kantengewicht
 */
void Edge::updateEdgeWeight(){
    Edge::weight=getOverlap();
}
/*
 * gibt das Kantengewicht aus
 */
unsigned int Edge::getEdgeWeight(){
    return Edge::weight;
}


