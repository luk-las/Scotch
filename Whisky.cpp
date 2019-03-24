#include <iostream>
#include "Whisky.h"

using namespace std;

Whisky::Whisky(char* nazwa, float objetosc, int wiek, int procenty)
: Napoj(nazwa, objetosc){
    this->wiek = wiek;
    this->procenty = procenty;
}

Whisky::Whisky(Whisky &liski)
: Napoj(liski){
    this->wiek = liski.wiek;
    this->procenty = liski.procenty;
}

Whisky::~Whisky(){};

void Whisky::wyswietl(){
    Napoj::wyswietl();
    cout << wiek << "-letnia,  " << procenty << "%" << endl;
}


