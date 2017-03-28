//
// File:     Year.cpp
//Author: Giulio Piccinonna
//Version: 1.1 January 29th, 2015
//
// Copyright (c) Giulio Piccinonna 2015 All rights reserved.
//

#include "Year.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;
Year::Year()
{
}

void Year::setYearBC(int yearBC){
    this->yearBC = yearBC;
}

int Year::getYearBC(){
    return this->yearBC;
}

void Year::setYearAD(int yearAD){
    this->yearAD = yearAD;
}

int Year::getYearAD(){
    return this->yearAD;
}

void Year::nextBC(){
    if (this->yearBC > 4){
        this->yearBC = this->yearBC - 4;
    }
    else{
        setYearAD(1);
    }
}
void Year::nextAD(){
    if (this->yearAD < 2012){
        this->yearAD = this->yearAD + 4;
    }
}


string Year::getStringBC(){
    int year = this->yearBC;
    stringstream ss;
    ss << year;
    std::string str = ss.str();
    return std::string(str);
}

string Year::getStringAD(){
    int year = this->yearAD;
    stringstream ss;
    ss << year;
    std::string str = ss.str();
    return std::string(str);
}

void Year::printGames(){
    const int NUM_OF_BC = 194;
    const int NUM_OF_AD = 95;

    for (int i = 0; i <= NUM_OF_BC; i++){
        string printBC;
        printBC = getStringBC();
        cout << printBC << "BC" << endl;
        nextBC();
    }
    for (int i = 0; i <= NUM_OF_AD; i++){
    string printAD;
    printAD = getStringAD();
    cout << printAD << "AD" << endl;
    nextAD();
}
}


Year::~Year()
{
}
