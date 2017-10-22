#include "Graph.hpp"

Graph::Graph(int lines, int columns){ //Construtor
    this->graph = new Edge*[lines];
    for (int i = 0; i < columns; i++){
        this->graph[i] = new Edge[columns];
    }
}

Graph::~Graph(){ //Destrutor

}