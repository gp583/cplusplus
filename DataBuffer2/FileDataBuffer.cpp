/*
File: Assignment07.cpp
Project: Assignment 7 
Author: Giulio Piccinonna
Version: 1.1 April 26th, 2015
Copyright (c) Giulio Piccinonna 2015 All rights reserved.
*/

#include "FileDataBuffer.h"
#include <iostream>
#include <fstream>

/*
if you open an empty file, data should show 0
also needs to check if data file has more space in the buffer 
& does not go over
*/

FileDataBuffer::FileDataBuffer() {
    length = 0;
}

FileDataBuffer::~FileDataBuffer() {
}

/*
save method should create an output object, open the file.
believe I am supposed to try to copy contents of bufferArr
into the text file and return true if successful, false if not.
I need to be able to handle
exceptions (i.e. file does not exist, no write permission)
*/

bool FileDataBuffer::save(string filename) {
    ofstream myOutput; 
    myOutput.open(filename);
    for (int i = 0; i < length; i++) 
    myOutput << bufferArr[i] << endl; 
    myOutput.close();  //
    return true;
    }

/*
recover(filename) recovers data by reading values in from text file (not binary)
did not get to recover method yet.
*/

bool FileDataBuffer::recover(string filename) {
  
}

/*
add is supposed to simplify my save method but not quite getting how
I understand I do not need to know where I am in the buffer by calling add
but confusing me in the save function
*/

/*
sameAs(fileDataBuffer object) compares two FileDataBuffer objects and returns a boolean 
if they match in each and every data element. have not set this up yet, either.
*/
bool FileDataBuffer::sameAs(FileDataBuffer object){
}

/*
add saves me the frustration of not having to know where I am in the buffer.
supposed to call add in my Save method to avoid running off the end.
*/


int FileDataBuffer::add(int value) {
    bufferArr[length] = value;
    length++;
    return value;
}