//
// File: DataBuffer.h
// Project: Assignment 6 
// Author: Giulio Piccinonna
// Version: 1.1 March 19, 2015
//Copyright (c) Giulio Piccinonna 2015 All rights reserved.
//

#pragma once

class DataBuffer
{
protected:
    static const int BUFFER_SIZE = 256;
    int length;
    int bufferArr[BUFFER_SIZE];
public:
    DataBuffer();
    ~DataBuffer();
    void copyFromArray(int bufferArr[], int length);
    int sum();
    int max();
    int min();
    double mean();
    int range();
    void print();
};
