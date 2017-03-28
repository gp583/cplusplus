/*
File: Assignment07.cpp
Project: Assignment 7 
Author: Giulio Piccinonna
Version: 1.1 April 26th, 2015
Copyright (c) Giulio Piccinonna 2015 All rights reserved.
*/

#include <iostream>
#include <iomanip>
#include "DataBuffer.h"
#include "FileDataBuffer.h"

using std::cout;
using std::endl;

void testDataBuffer(int arr[], int length);

/*
most of the contents of the arrays were from a previous project involving iterators.
I left the data in to read and write some of it to a file
*/

int main() {
    const int ARR0_LEN = 2;
    int arr0[ARR0_LEN] = { -2, -1 };
    const int ARR1_LEN = 10;
    int arr1[ARR1_LEN] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    const int ARR2_LEN = 25;
    int arr2[ARR2_LEN] = { 2, 4, 6, 8, 10, 12, 14, 16, 7, 6, 22, 8,
        9, 16, 5, 2, 7, 8, 12, 2, 0, 14, 17, 19, 22 };
    testDataBuffer(arr0, ARR0_LEN);
    testDataBuffer(arr1, ARR1_LEN);
    testDataBuffer(arr2, ARR2_LEN);

    /*
    FileDataBuffer objects must be compared in SameAs() to verify that each data element matches
    once you write the file using one FileDataBuffer object to the other.
    */
    FileDataBuffer file1;
    FileDataBuffer file2;
    file1.save("giulio.txt");
    file2.save("jeremy.txt");

    return 0;
}

/*
testDataBuffer was a method from a previous project of which FileDataBuffer is a subclass of.
*/
void testDataBuffer(int arr[], int length) {
    DataBuffer data;
    data.copyFromArray(arr, length);
    cout << endl;
    data.print();
    cout << " Sum " << data.sum() << endl;
    cout << "Min " << data.min() << endl;
    cout << "Max " << data.max() << endl;
    cout << "Range " << data.range() << endl;
    cout << "Mean " << data.mean() << endl;
}
