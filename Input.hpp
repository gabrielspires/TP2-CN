#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "Parameters.hpp"

using namespace std;

class Input {

public:
    Input(ifstream &input);
    ~Input();
    void printPoints(); //Imprime o input na tela

    //Getters Setters
    int getP(); //Retorna o numero de P medianas
    int getN(); //Retorna o numero de pontos
    int getX(int index); //Retorna a coordenada X de um ponto
    int getY(int index); //Retorna a coordenada Y de um ponto

    void updateParameters();

private:
    typedef struct Point {
        int x, y;
        int capacity, demand;
    }Point;

    int n, //Pontos
        p; //Medianas
    vector<Point> pointVector;
};
