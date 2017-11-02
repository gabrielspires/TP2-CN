#include "Edge.hpp"
#include "Input.hpp"
#include <cstdlib>
#include <vector>

class Graph{
public:
    vector< vector<Edge> > graph;  //matriz de arestas

    Graph(int num_points, Input input); //Construtor
    ~Graph(); //Destrutor

private:
	
};
