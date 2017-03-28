//File: IterableDataBuffer.cpp
//Project: Assignment 6
//Author: Giulio Piccinonna
//Version: 1.1 April 18th, 2015
//
//Copyright (c) Giulio Piccinonna 2015 all rights reserved
//

#include "IterableDataBuffer.h"
#include "DataBufferIterator.h"

IterableDataBuffer::IterableDataBuffer() {
}


Iterator* IterableDataBuffer::createIterator() {
    return new DataBufferIterator(this);
}