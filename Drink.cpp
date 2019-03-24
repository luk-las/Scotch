#include <iostream>
#include "Drink.h"

using namespace std;

Drink::Drink(char* nazwa, float objetosc, int wiek, int procenty, string rodzaj, bool wygazowana)
:   Whisky(nazwa, objetosc, wiek, procenty),
    Cola(nazwa, objetosc, rodzaj, wygazowana){}

Drink::Drink(Whisky &liski, Cola &kola)
:   Whisky(liski),
    Cola(kola){}

void Drink::wyswietl(){
    Whisky::wyswietl();
    Cola::wyswietl();
}




