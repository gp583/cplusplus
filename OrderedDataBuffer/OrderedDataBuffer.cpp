//
// File: OrderedDataBuffer.cpp
// Project: Assignment 5 
// Author: Giulio Piccinonna
// Version: 1.1 March 19, 2015
//Copyright (c) Giulio Piccinonna 2015 All rights reserved.
//

#include "OrderedDataBuffer.h"


OrderedDataBuffer::OrderedDataBuffer()
{
}

bool OrderedDataBuffer::insert(int value){
    int i;
    if (length >= BUFFER_SIZE)
        return false;
    for (i = 0; i < length && value > bufferArr[i]; i++);
    shiftUpOne(i);
    bufferArr[i] = value;
    return true;
}

void OrderedDataBuffer::shiftUpOne(int index){
    int temp = 0;
    for (int i = length; i > index; i--)
    {
        bufferArr[i] = bufferArr[i - 1];
    }
    length++;
}

void OrderedDataBuffer::copyData(int arr[], int length){
    for (int i = 0; i < length; i++){
        insert(arr[i]);
    }
}