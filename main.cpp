#include <iostream>
#include <fstream>

#include "Ant.hpp"
#include "Graph.hpp"
#include "Parameters.hpp"

using namespace std;

int main(int argc, char const *argv[]){
	int num_points, num_pmedians;
	
	ifstream entrada;
	ofstream saida;
	
	entrada.open(argv[1]);
	entrada.close();
	
	Ant formiguinha;

	Graph my_graph(10);

	return 0;
}
