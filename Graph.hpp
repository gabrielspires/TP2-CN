#include <cstdlib>
#include <vector>
#include <random>

#include "Edge.hpp"
#include "Input.hpp"
#include "Parameters.hpp"

class Graph{
public:
    vector< vector<Edge> > graph; //matriz de arestas
    vector<double> probabilities;

    Graph(int num_points, Input input); //Construtor
    ~Graph(); //Destrutor

    void printWeights();
    void ACO();
    void buildSolution();
    void updateFeromone();
    int selectMedian(double prob);

private:
    double best_sum;
//

    int num_ants, num_medians;
    //Métodos do ACO
    int transition();
};
