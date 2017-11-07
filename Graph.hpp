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

private:
    double best_sum;
<<<<<<< HEAD
    int num_ants, num_medians;
=======
    int num_p_medians;

>>>>>>> 59e86642c867a1a3f520f8a417ad1e35314eae80
    //Métodos do ACO
    int transition();
};
