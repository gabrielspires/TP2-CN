#include "Graph.hpp"

Graph::Graph(int num_points, Input input){ //Construtor
    this->graph = new Edge*[num_points];
    for (int i = 0; i < num_points; i++){
        this->graph[i] = new Edge[num_points];
    }

    
}

Graph::~Graph(){ //Destrutor

}
