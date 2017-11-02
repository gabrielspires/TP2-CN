#include <iostream>
#include <fstream>

// #include "Ant.hpp"
#include "Graph.hpp"
#include "Parameters.hpp"

//#include "Input.hpp"

using namespace std;

int main(int argc, char const *argv[]){
	ifstream entrada;
	ofstream saida;

	entrada.open(argv[1]);

	Input input(entrada);
	Graph matrix(input.getN(), input);

	for (int i = 0; i < matrix.graph.size(); i++) {
		for (int j = 0; j < matrix.graph.size(); j++) {
			cout << matrix.graph[i][j].getWeight() << " ";
		}
		cout << endl;
	}

	entrada.close();
	return 0;
}
