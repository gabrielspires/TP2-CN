#include <iostream>
#include <fstream>

#include "Ant.hpp"
#include "Graph.hpp"
#include "Parameters.hpp"

using namespace std;

int main(int argc, char const *argv[]){
	Ant formiguinha;
	ifstream entrada;
	ofstream saida;
 
	entrada.open(argv[1]);
	entrada.close();
	
	Graph my_graph(10, 10);

	return 0;
}