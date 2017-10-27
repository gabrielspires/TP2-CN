#include "Input.hpp"

Input::Input(std::ifstream &input) {
    string line, field;
    Point point;

    getline(input, line, '\n');
    stringstream line_stream(line);

    line_stream >> p;
    line_stream >> n;

    while(getline(input, line, '\n')) {
		if(line == "  ") continue; //fim do arquivo
  		// line_stream.str(string("")); //Limpa a string pra ler a proxima
		// line_stream.clear(); //Apaga o buffer da string
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
