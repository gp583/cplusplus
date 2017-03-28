//File: DataBufferIterator.cpp
//Project: Assignment 6
//Author: Giulio Piccinonna
//Version: 1.1 April 18th, 2015
//
//Copyright (c) Giulio Piccinonna 2015 all rights reserved
//

#include "DataBufferIterator.h"


DataBufferIterator::DataBufferIterator(IterableDataBuffer* collection) {
    this->collection = collection;
    cursor = 0;
}

void DataBufferIterator::first() {
    cursor = 0;
}

void DataBufferIterator::next() {
    cursor++;
}

int DataBufferIterator::currentItem() {
    return collection->bufferArr[cursor];
}

bool DataBufferIterator::isDone() {
    return (cursor >= collection->length);
    }
