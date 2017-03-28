//
// File: FileIOInClass.cpp
// Project: Assignment 7 | in class 
// Author: Giulio Piccinonna
// Version: 1.0 March 19, 2015
//
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ofstream myOutput;
    myOutput.open("datafile.txt");
    myOutput << "Hello World" << endl;
    myOutput << 1 << " " << 2 << " " << 3 << endl;
    myOutput.close();
    /*
    string inputString;
    int x, y, z;
    ifstream myInput("datafile.txt");
    while (getline(myInput, inputString)) {
        cout << myInput.gcount() << ": " << inputString << endl;
        getline(myInput, inputString);
        cout << "Length: " << inputString.length() << endl;
        stringstream ss(inputString);
        ss >> x >> y >> z;
        cout << x <<  ", " << y << ", " << z << endl;
    }
    myInput.close();
    */

    string inputString;
    ifstream myInput;
    myInput.exceptions(ifstream::failbit);
    try {
        myInput.open("foo.txt");
        getline(myInput, inputString);
        cout << "Got: " << inputString << endl;
        myInput.close();
    }
    catch (ifstream::failure e){
        cout << "Sorry, no file " << endl;
        cout << e.what() << endl;
    }
    return 0;
}
