#pragma once
#include "Napoj.h"

class Whisky :public Napoj{
    int wiek;
    int procenty;

public:
    Whisky(char*, float, int, int);
    Whisky(Whisky&);

    ~Whisky();
    void wyswietl();
};




