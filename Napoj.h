#pragma once

class Napoj{
protected:
    char* nazwa;
    float objetosc;

public:
    Napoj(char*, float);
    Napoj(Napoj&);

    virtual ~Napoj();
    virtual void wyswietl();
};
