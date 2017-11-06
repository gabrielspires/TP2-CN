#include <cstdlib>
#include <vector>
#include <random>

#include "Edge.hpp"
#include "Input.hpp"

class Graph{
public:
    vector< vector<Edge> > graph; //matriz de arestas
    vector<double> probabilities;

    Graph(int num_points, Input input); //Construtor
    ~Graph(); //Destrutor

    void printWeights();
    void ACO();

private:
    double best_sum;

    //Métodos do ACO
    int transition();
};
