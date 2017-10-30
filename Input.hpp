#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class Input {
typedef struct Point {
    int x, y;
    int capacity, demand;
}Point;

public:
    Input(ifstream &input);
    ~Input();
    void printPoints();

    //Getters Setters
    int getP();
    int getN();

private:
    int n, //Pontos
        p; //Medianas
    vector<Point> pointVector;

};
