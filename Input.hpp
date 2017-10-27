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
    int p, n;
    
    Input(ifstream &input);
    void printPoints();

    ~Input();
private:
    vector<Point> pointVector;
    
};
