// File: DataBuffer.h
// Project: Assignment 6 
// Author: Giulio Piccinonna
// Version: 1.1 April 18th, 2015
//Copyright (c) Giulio Piccinonna 2015 All rights reserved.
//

#pragma once

class DataBuffer
{
protected:
    const static int BUFFER_SIZE = 256;
    int length;
    int bufferArr[BUFFER_SIZE];
public:
    DataBuffer();
    void copyFromArray(int bufferArr[], int length);
    int sum();
    int max();
    int min();
    double mean();
    int range();
    void print();
    static void testDataBuffer(int arr[], int);
};


