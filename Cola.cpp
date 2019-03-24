#include <iostream>
#include "Cola.h"

using namespace std;

Cola::Cola(char* nazwa, float objetosc, string rodzaj, bool wygazowana)
: Napoj(nazwa, objetosc){
    this->rodzaj = rodzaj;
    this->wygazowana = wygazowana;
}

Cola::Cola(Cola &kola)
: Napoj(kola){
    this->rodzaj = kola.rodzaj;
    this->wygazowana = kola.wygazowana;
}

Cola::~Cola(){};

void Cola::wyswietl(){
    Napoj::wyswietl();
    cout << "rodzaj: " << rodzaj << ",  ";
    if(wygazowana)  cout << "wygazowana";
    else            cout << "niewygazowana";
    cout << endl;
}


