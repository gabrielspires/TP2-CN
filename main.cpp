#include <iostream>
#include <fstream>
#include "Ant.h"

using namespace std;

int max_interations,
    number_of_ants;

double initial_feromone_rate,
       feromone_concentration_weight,
       function_quality_weight,
       evaporation_rate;

int main(int argc, char const *argv[]){
    Ant formiguinha;
    ifstream entrada;
    ofstream saida;
 
    entrada.open(argv[1]);
    entrada.close();
    
    return 0;
}