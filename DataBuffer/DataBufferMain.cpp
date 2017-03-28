// File:     DataBufferMain.cpp
//Author: Giulio Piccinonna
//Version: 1.0 February 9th, 2015
//
// Copyright (c) Giulio Piccinonna 2015 All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "DataBuffer.h"

using std::cout;
using std::endl;

int main() {
    int testArr[10] = { 5, 7, 10, 6, 2, 0, 3, 9, 1, 4 };
    DataBuffer myBuffer;
    myBuffer.copyFromArray(testArr, 10);
    cout << "Sum: " << myBuffer.sum() << endl;
    cout << "Max: " << myBuffer.max() << endl;
    cout << "Min: " << myBuffer.min() << endl;
    cout << "Mean: " << myBuffer.mean() << endl;
    cout << "Range: " << myBuffer.range() << endl;
    cout << "\n";
    myBuffer.print();

    return 0;
}