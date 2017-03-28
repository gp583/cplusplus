//
// File: DataBuffer.cpp
// Project: Assignment 7 
// Author: Giulio Piccinonna
// Version: 1.1 April 18th, 2015
//Copyright (c) Giulio Piccinonna 2015 All rights reserved.
//

#include "DataBuffer.h"
#include <iostream>
#include <iomanip>

using namespace std;


DataBuffer::DataBuffer()
{
    length = 0;
    bufferArr[BUFFER_SIZE];
}


void DataBuffer::copyFromArray(int arr[], int length){
    for (int i = 0; i < BUFFER_SIZE; i++)
        bufferArr[i] = arr[i];
    this->length = length;
}

int DataBuffer::sum(){
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += bufferArr[i];
    return sum;
}

int DataBuffer::max(){
    int max = bufferArr[0];

    for (int i = 0; i < length; i++){
        if (max < bufferArr[i])
            max = bufferArr[i];
    }
    return max;
}

int DataBuffer::min(){
    int min = bufferArr[0];

    for (int i = 0; i < length; i++){
        if (min > bufferArr[i])
            min = bufferArr[i];
    }
    return min;
}

double DataBuffer::mean(){
    double dSum = 0;
    for (int i = 0; i < length; i++){
        dSum += bufferArr[i];
    }
    return dSum / length;
}


int DataBuffer::range(){

    int min = DataBuffer::min();
    int max = DataBuffer::max();
    return max - min;
}


void DataBuffer::print(){

    for (int i = 0; i < length; i++)
        cout << bufferArr[i] << endl;
}
