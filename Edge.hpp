class Edge{
public:
    double x1, y1; //ponto 1
    double x2, y2; //ponto 2
    double weight; //peso da aresta

    Edge();  //Construtor
    ~Edge(); //Destrutor

private:
    double size;
    double feromone_concentration;
};
