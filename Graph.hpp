#include <cstdlib>
#include <vector>

#include "Edge.hpp"
#include "Input.hpp"

class Graph{
public:
    vector< vector<Edge> > graph; //matriz de arestas

    Graph(int num_points, Input input); //Construtor
    ~Graph(); //Destrutor

    void printWeights();
    void ACO();

private:
    double best_sum;
};
