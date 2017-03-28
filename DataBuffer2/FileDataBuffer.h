/*
File: Assignment07.cpp
Project: Assignment 7 
Author: Giulio Piccinonna
Version: 1.1 April 26th, 2015
Copyright (c) Giulio Piccinonna 2015 All rights reserved.
*/

#include <string>
#include <iostream>
#include <fstream>
#include "DataBuffer.h"
#pragma once

using namespace std;

class FileDataBuffer : public DataBuffer
{
public:
    FileDataBuffer();
    bool save(string filename);
    bool recover(string filename);
    int add(int value);
    bool sameAs(FileDataBuffer object);
    ~FileDataBuffer();
};

