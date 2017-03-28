//
// File:     Olympiad.cpp
//Author: Giulio Piccinonna
//Version: 1.1 January 29th, 2015
//
// Copyright (c) Giulio Piccinonna 2015 All rights reserved.
//

#include "Olympiad.h"
#include "Year.h"
#include "Ordinal.h"
#include <iostream>

using std::cout;
using std::endl;

Olympiad::Olympiad()
{
}

int main(){
    Olympiad ancientOlympics, modernOlympics;
    ancientOlympics.getAncientGames();
    modernOlympics.getModernGames();
}

void Olympiad::setFirstAncient(){
    const int FIRST_ANCIENT_GAMES = 776;
    year.setYearBC(FIRST_ANCIENT_GAMES);
}

void Olympiad::getAncientGames(){
    const int NUM_OF_BC = 194;
    const int NUM_OF_AD = 105;
    setFirstAncient();
    int y, game;
    for (y = NUM_OF_BC, game = 1; y > 0; y--, game++){
        string s;
        s = year.getStringBC();
        cout << s << "BC is the ";
        string suffix;
        string roman;
        suffix = ordinal.getSuffix(game);
        roman = ordinal.getRoman(game);
        cout << game << suffix << "Ancient Olympic Games " << roman << endl;
        year.nextBC();
    }
}

void Olympiad::setFirstModern(){
    const int FIRST_MODERN_GAME = 1896;
    year.setYearAD(FIRST_MODERN_GAME);
}

void Olympiad::getModernGames(){
    const int NUM_OF_MODERN = 30;
    setFirstModern();

    for (int y = 0, int game = 1; y < NUM_OF_MODERN; game++, y++){
        string s;
        s = year.getStringAD();
        cout << s << "AD is the ";
        string suffix;
        string roman;
        suffix = ordinal.getSuffix(game);
        roman = ordinal.getRoman(game);
        cout << game << suffix << "Modern Olympic Games " << roman << endl;
        year.nextAD();
    }
}
Olympiad::~Olympiad()
{
}
