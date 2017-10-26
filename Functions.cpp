#include <iostream>
#include <fstream>

void read_CSV(vector< vector<double> > &dataset, ifstream &input){
    string line, cell;
    double cell_value;
    int i = 0;

    while(getline(input, line, '\n')){
        vector<double> lineVector;
        dataset.push_back(lineVector);

        stringstream line_stream(line);

        while(getline(line_stream, cell, ',')){
            stringstream cell_stream(cell);
            cell_stream >> cell_value;
            dataset[i].push_back(cell_value);
        }
        i++;
    }
    input.close();
}