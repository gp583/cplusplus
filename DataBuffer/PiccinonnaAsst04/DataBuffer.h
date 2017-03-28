// File:     DataBuffer.h
//Author: Giulio Piccinonna
//Version: 1.0 February 9th, 2015
//
// Copyright (c) Giulio Piccinonna 2015 All rights reserved.
//

#pragma once

class DataBuffer
{
private:
public:
    static const int BUFFER_SIZE = 256;
    int length;
    int bufferArr[BUFFER_SIZE];
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

