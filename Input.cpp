#include "Input.hpp"

int Input::getP(){ return p; }

int Input::getN(){ return n; }

int Input::getX(int index){ return pointVector[index].x; }

int Input::getY(int index){ return pointVector[index].y; }

void Input::updateParameters(){
    max_iterations = 100,
    number_of_ants = this->getN() - this->getP();

    t_max = number_of_ants,
    t_min = 0.2,
    initial_feromone_rate         = t_max,
    feromone_concentration_weight = 0.0, //alpha
    function_quality_weight       = 0.0, //beta
    evaporation_rate              = 0.2; //ro
}

Input::Input(std::ifstream &input) {
    string line, field;
    Point point;

    getline(input, line, '\n');
    stringstream line_stream(line);

    line_stream >> n;
    line_stream >> p;

    while(getline(input, line, '\n')) {
		if(line == "  ") continue; //fim do arquivo
		line_stream.str(string("")); //Limpa a string pra ler a proxima
		line_stream.clear(); //Apaga o buffer da string

		line_stream << line;

		line_stream >> point.x;
		line_stream >> point.y;
		line_stream >> point.capacity;
		line_stream >> point.demand;

		pointVector.push_back(point);
    }
}

void Input::printPoints(){
	cout << p << " " << n << endl;
	for (int i = 0; i < pointVector.size(); ++i){
		cout << pointVector[i].x << " ";
		cout << pointVector[i].y << " ";
		cout << pointVector[i].capacity << " ";
		cout << pointVector[i].demand << endl;
	}
}

Input::~Input(){
}
