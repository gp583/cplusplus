//
// File:     Ordinal.h
//Author: Giulio Piccinonna
//Version: 1.1 January 29th, 2015
//
// Copyright (c) Giulio Piccinonna 2015 All rights reserved.
//

#pragma once
#include <string>

using namespace std;

class Ordinal
{
private:
public:
    Ordinal();
    string getSuffix(int);
    string getRoman(int);



    ~Ordinal();
};

