//File: Iterator.h
//Project: Assignment 6
//Author: Giulio Piccinonna
//Version: 1.1 April 18th, 2015
//
//Copyright (c) Giulio Piccinonna 2015 all rights reserved
//

#pragma once
class Iterator
{
public:
    virtual void first() = 0;
    virtual void next() = 0;
    virtual int currentItem() = 0;
    virtual bool isDone() = 0;
   
};

