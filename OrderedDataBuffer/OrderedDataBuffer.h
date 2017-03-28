//
// File: OrderedDataBuffer.h
// Project: Assignment 5 
// Author: Giulio Piccinonna
// Version: 1.1 March 19, 2015
//Copyright (c) Giulio Piccinonna 2015 All rights reserved.
//

#include "DataBuffer.h"
#pragma once

class OrderedDataBuffer :public DataBuffer
{
protected:
    void shiftUpOne(int index);
public:
    OrderedDataBuffer();
    bool insert(int value);
    void copyData(int bufferArr[], int length);
};

