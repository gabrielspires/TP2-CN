#include "Graph.hpp"

Graph::Graph(int num_points, Input input){ //Construtor
    this->graph = new Edge*[num_points];
    for (int i = 0; i < num_points; i++){
        this->graph[i] = new Edge[num_points];
    }
    
    for (int i = 0; i < num_points; ++i){
    	for (int j = 0; j < num_points; ++j){
    		if(i != j){
                graph[i][j].x1 = input.getX(i);
                graph[i][j].y1 = input.getY(i);
                graph[i][j].x2 = input.getX(j);
                graph[i][j].y2 = input.getY(j);
                graph[i][j].setPheromone(0.0);
                graph[i][j].calculateWeight();

    		}else{ //Diagonal principal
                graph[i][j].x1 = 0;
                graph[i][j].y1 = 0;
                graph[i][j].x2 = 0;
                graph[i][j].y1 = 0;
                graph[i][j].calculateWeight();
                graph[i][j].setPheromone(0.0);
            }
    	}
    }
}

Graph::~Graph(){ //Destrutor
	int num_points = 0;
    for(int i = 1; this->graph[i] != NULL; i++){
        cout << graph[i][i-1].getWeight() << endl;
    }
    cout << num_points;
    
    // for (int i = 0; i < num_points; i++){
    //     free(this->graph[i]);
    // }
	// free(this->graph);
}
