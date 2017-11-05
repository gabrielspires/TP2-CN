#include <iostream>
#include <fstream>

// #include "Ant.hpp"
#include "Graph.hpp"
#include "Parameters.hpp"

using namespace std;

int main(int argc, char const *argv[]){
	srand(time(NULL));

	ifstream entrada;
	ofstream saida;

	//Abre o arquivo de entrada
	entrada.open(argv[1]);

	//Pega os dados do arquivo e cria um objeto de input
	Input input(entrada);
	input.updateParameters();

	//Popula a matriz de adjacencias com os dados da entrada
	Graph matrix(input.getN(), input);

	// matrix.printWeights();

	//Roda o algoritmo de ACO
	matrix.ACO();

	//Fecha o arquivo de entrada
	entrada.close();

	return 0;
}
