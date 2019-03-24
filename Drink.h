#pragma once
#include "Whisky.h"
#include "Cola.h"

class Drink :public Whisky, public Cola{
public:
    Drink(char*, float, int, int, std::string, bool);
    Drink(Whisky&, Cola&);
    void wyswietl();

};



