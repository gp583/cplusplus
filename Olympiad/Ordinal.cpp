//
// File:     Ordinal.cpp
//Author: Giulio Piccinonna
//Version: 1.1 January 29th, 2015
//
// Copyright (c) Giulio Piccinonna 2015 All rights reserved.
//

#include "Ordinal.h"
#include "Year.h"
#include <iostream>
#include <string>

Ordinal::Ordinal()
{
}

string Ordinal::getSuffix(int num){
    int lastTwo, lastOne;

    lastTwo = num % 100;
    lastOne = num % 10;

    if ((lastOne == 1) && (lastTwo != 11))
    {
        return "st";
    }
    if ((lastOne == 2) && (lastTwo != 12))
    {
        return "nd";
    }
    if ((lastOne == 3) && (lastTwo != 13))
    {
        return "rd";
    }

    return "th";
}

string Ordinal::getRoman(int num){
    string roman;

    switch (num)
    {
    case 40:
        roman += "XL";
        num -= 40;
        break;
    case 90:
        roman += "XC";
        num -= 90;
        break;
    }
    if (num >= 100){
        roman += string(num / 100, 'C');
        num %= 100;
    }
    if (num >= 50){
        roman += string(num / 50, 'L');
        num %= 50;
    }
    if (num >= 10){
        roman += string(num / 10, 'X');
        num %= 10;
    }
    if (num >= 5){
        roman += string(num / 5, 'V');
        num %= 5;
    }
    if (num = 1){
        roman += string(num / 1, 'I');
        num %= 1;
    }
    return roman;
}

Ordinal::~Ordinal()
{
}
