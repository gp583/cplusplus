/*
File: Assignment07.cpp
Project: Assignment 7 
Author: Giulio Piccinonna
Version: 1.1 April 26th, 2015
Copyright (c) Giulio Piccinonna 2015 All rights reserved.
*/

#include "FileDataBuffer.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

FileDataBuffer::FileDataBuffer() {
    length = 0;
}

FileDataBuffer::~FileDataBuffer() {
}

bool FileDataBuffer::save(string filename) {
    try {
        ofstream myOutput;
        myOutput.open(filename);
        if (myOutput.fail())
            throw 20;
        for (int i = 0; i < length; i++)
            myOutput << bufferArr[i] << endl;
        myOutput.close();
        return true;
    }
    catch (int x) {
        cout << "Filename does not exist." << endl;
        return false;
    }
}
   

bool FileDataBuffer::recover(string filename) {
    try {
        string inputString;
        ifstream myInput;
        myInput.open(filename);
        if (myInput.fail())
            throw 20;
        getline(myInput, inputString);
        cout << inputString << endl;
        while (getline(myInput, inputString)) {
            stringstream ss(inputString);
            cout << inputString << endl;
        }
        myInput.close();
        return true;
    }
    catch (int x) {
        cout << "Filename does not exist." << endl;
        return false;
    }
}

int FileDataBuffer::add(int value) {
    bufferArr[length] = value;
    length++;
    return value;
}