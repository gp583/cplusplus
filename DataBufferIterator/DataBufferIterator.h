//File: DataBufferIterator.h
//Project: Assignment 6
//Author: Giulio Piccinonna
//Version: 1.1 April 18th, 2015
//
//Copyright (c) Giulio Piccinonna 2015 all rights reserved
//

#pragma once
#include "Iterator.h"
#include "IterableDataBuffer.h"

class DataBufferIterator : public Iterator
{
protected: 
    IterableDataBuffer* collection;
    int cursor;
public:
    DataBufferIterator(IterableDataBuffer* collection);
    void first();
    void next();
    int currentItem();
    bool isDone();
};

