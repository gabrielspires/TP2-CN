#include <iostream>

#include "Individual.h"

using namespace std;

int main(int argc, char const *argv[]){
    Individual test;
    Individual test2;
    cout << "Test size: " << test.getSize() << endl;
    cout << "Test2 size: " << test2.getSize() << endl;
    test.setSize(15);

    test2 = test;
    
    test.setSize(20);
    cout << "Test size: " << test.getSize() << endl;
    cout << "Test2 size: " << test2.getSize() << endl;
    
    return 0;
}