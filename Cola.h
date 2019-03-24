#pragma once

#include "Napoj.h"

class Cola: public Napoj{
    std::string rodzaj;
    bool wygazowana;

public:
    Cola(char*, float, std::string, bool);
    Cola(Cola&);

    ~Cola();
    void wyswietl();
};


