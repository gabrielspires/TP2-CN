//***************Parâmetros***************

extern int max_iterations,
           number_of_ants;

extern double initial_feromone_rate,
              feromone_concentration_weight,
              function_quality_weight,
              evaporation_rate;

//*****************************************


class Graph{
public:
    Edge **graph;  //matriz de arestas
    
    Graph(int num_points); //Construtor
    ~Graph(); //Destrutor
    
private:
    
};

class Edge{
public:
    double x1, y1; //ponto 1
    double x2, y2; //ponto 2
    double weight; //peso da aresta
    
    // Edge(Edge &&) = default;
    // Edge(const Edge &) = default;
    // Edge &operator=(Edge &&) = default;
    // Edge &operator=(const Edge &) = default;
    Edge();  //Construtor
    ~Edge(); //Destrutor

private:
    double size;
    double feromone_concentration;
};

class Ant{
public:
    Ant();
    ~Ant();

    void readFeromone();
    void writeFeromone();
    
private:

};

class Point {
public:
    int x, y;
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    ~Point();

private:
    
};

class Input {
public:
    Input();
    ~Input();

private:
    int p, n;
};
