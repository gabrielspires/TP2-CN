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

	number_of_ants = input.getN() - input.getP();

	Graph matrix(input.getN(), input);

	entrada.close();

	return 0;
}
