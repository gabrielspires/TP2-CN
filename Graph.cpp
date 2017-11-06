#include "Graph.hpp"

Graph::Graph(int num_points, Input input){ //Construtor
    this->graph.resize(num_points);
    for (int i = 0; i < num_points; i++){
        this->graph[i].resize(num_points);
    }

    for (int i = 0; i < num_points; ++i){
    	for (int j = 0; j < num_points; ++j){
            graph[i][j].x1 = input.getX(i);
            graph[i][j].y1 = input.getY(i);
            graph[i][j].x2 = input.getX(j);
            graph[i][j].y2 = input.getY(j);

            //Inicializa a quantidade de feromonio
            graph[i][j].setPheromone(t_max);

            //Calcula a distancia entre os dois pontos
            graph[i][j].calculateWeight();
    	}
    }
    this->best_sum = 1.0/0.0; //Infinite
}

int Graph::transition(){

    return 0;
}

void Graph::ACO(){
    int initial_node;
    double best_solution = 1.0/0.0; //infite
    double current_solution = 0.0;

    //olha todos os nós number_of_ants
    //itera e olha todos os number_of_ants
    //no final escolhe o que tme mais feromonio

    vector<int> initial_p_medians;

    for (int i = 0; i < p; i++) {
      initial_p_medians.push_back(rand()%graph.size());
    }

    //Gera numero aleatorio entre 0 e 1
    uniform_real_distribution<double> unif(0,1);
  	random_device rand_dev;
  	mt19937 rand_engine(rand_dev());

    unif(rand_engine);

    for (int i = 0; i < max_iterations; ++i){

        for (int j = 0; j < number_of_ants; ++j){

        }
        if (best_solution > current_solution){
            best_solution = current_solution;
        }
        //Atualiza as trilhas de feromonio
    }
}

void Graph::printWeights(){
    for (int i = 0; i < this->graph.size(); ++i){
		for (int j = 0; j < this->graph.size(); ++j){
			cout << this->graph[i][j].getWeight() << "\t";
		}
		cout << endl;
	}
}

Graph::~Graph(){ //Destrutor
}
