#include "Graph.hpp"

Graph::Graph(int num_points, Input input){ //Construtor
    this->graph = new Edge*[num_points];
    for (int i = 0; i < num_points; i++){
        this->graph[i] = new Edge[num_points];
    }
    /*
    for (int i = 0; i < num_points; ++i){
    	for (int j = 0; j < num_points; ++j){
    		if(i != j){
    			graph[i][j].x1 = pointVector[i].x;
    		}
    	}
    }*/
}

Graph::~Graph(){ //Destrutor
	int num_points;
	num_points = sizeof(this->graph)/sizeof(this->graph);
    for (int i = 0; i < num_points; i++){
        delete(this->graph[i]);
    }
	delete(this->graph);
}
