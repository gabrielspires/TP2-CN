#include <cmath>

class Edge{
public:
    double x1, y1; //ponto 1
    double x2, y2; //ponto 2
    
    Edge();  //Construtor
    ~Edge(); //Destrutor
    
    double getPheromone();
    void setPheromone(double new_pheromone);
    void updatePheromone(double delta_tau);
    void calculateWeight();

    
private:
    double pheromone_concentration;
    double weight; //peso da aresta
};
