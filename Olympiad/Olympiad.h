//
// File:     Olympiad.h
//Author: Giulio Piccinonna
//Version: 1.1 January 29th, 2015
//
// Copyright (c) Giulio Piccinonna 2015 All rights reserved.
//

#pragma once
#include "Year.h"
#include "Ordinal.h"

class Olympiad
{
public:
    void AncientGames();
    void setFirstAncient();
    void getAncientGames();
    void ModernGames();
    void setFirstModern();
    void getModernGames();
    Year year;
    Ordinal ordinal;
    Olympiad();
    ~Olympiad();
};

