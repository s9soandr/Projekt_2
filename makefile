all: se

se: main.o Sequence.o NucleicAcid.o Protein.o Edge.o Node.o Graph.o
	g++ main.o Sequence.o NucleicAcid.o Protein.o Edge.o Node.o Graph.o -o se

main.o: main.cpp
	g++ -c main.cpp
Sequence.o : Sequence.cpp
	g++ -c Sequence.cpp
NucleicAcid.o: NucleicAcid.cpp
	g++ -c NucleicAcid.cpp
Protein.o: Protein.cpp
	g++ -c Protein.cpp
Edge.o: Edge.cpp
	g++ -c Edge.cpp
Node.o: Node.cpp
	g++ -c Node.cpp
Graph.o:Graph.cpp
	g++ -c Graph.cpp

clean:
	rm -rf *o se





