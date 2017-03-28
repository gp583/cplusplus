//File: IterableDataBuffer.h
//Project: Assignment 6
//Author: Giulio Piccinonna
//Version: 1.1 April 18th, 2015
//
//Copyright (c) Giulio Piccinonna 2015 all rights reserved
//

#pragma once
#include "DataBuffer.h"
#include "Iterator.h"

class IterableDataBuffer : public DataBuffer
{
public:
    friend class DataBufferIterator;
    IterableDataBuffer();
    Iterator* createIterator();
};

