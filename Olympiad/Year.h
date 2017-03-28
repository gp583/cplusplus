//
// File:     Year.h
//Author: Giulio Piccinonna
//Version: 1.1 January 29th, 2015
//
// Copyright (c) Giulio Piccinonna 2015 All rights reserved.
//

#pragma once

class Year
{
private:
    int yearBC;
    int yearAD;
public:
    int year; 
    int gameNumber;
    Year();
    void setYearBC(int yearBC);
    void setYearAD(int yearAD);
    void printGames();
    int getBC();
    void nextBC();
    void nextAD();
    int getYearBC();
    int getYearAD();
    string getStringBC();
    string getStringAD();
    ~Year();
};

