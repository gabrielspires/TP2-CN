#include "Edge.hpp"

double Edge::getPheromone(){
    return pheromone_concentration;
}
double Edge::getWeight(){
    return weight;
}

void Edge::setPheromone(double new_pheromone){
    this->pheromone_concentration = new_pheromone;
}

void Edge::updatePheromone(double delta_tau){
    this->pheromone_concentration += delta_tau;
}

void Edge::calculateWeight(){
    this->weight = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

Edge::Edge(){
    this->x1 = this->y1 = this->x2 = this->y2 = this->weight = 0;
}

Edge::~Edge(){

}