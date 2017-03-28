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

using namespace std;

int main() {
    const int ARR1_LEN = 10;
    int arr1[ARR1_LEN] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    FileDataBuffer file1;
    FileDataBuffer file2;
    file1.copyFromArray(arr1, ARR1_LEN);
    file1.save("giulio.txt");
    file2.recover("giulio.txt");
    return 0;
}


