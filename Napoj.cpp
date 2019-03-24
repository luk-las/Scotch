#include <iostream>
#include "Napoj.h"
#include <cstring>

using namespace std;

Napoj::Napoj(char* nazwa, float objetosc){
    int length = strlen(nazwa) + 1;
    this->nazwa = new char[length];
    strcpy(this->nazwa, nazwa);

    this->objetosc = objetosc;
}

Napoj::Napoj(Napoj &picie){
    int length = strlen(picie.nazwa) + 1;
    this->nazwa = new char[length];
    strcpy(this->nazwa, picie.nazwa);

    this->objetosc = picie.objetosc;
}

Napoj::~Napoj(){
    delete[] nazwa;
}

void Napoj::wyswietl(){
    cout << nazwa << ",  " << objetosc << " l,  ";
}

