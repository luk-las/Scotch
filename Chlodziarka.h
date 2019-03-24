#pragma once
#include "Napoj.h"

template <typename T>
class Chlodziarka{
    T* tab[5];
    int licznik;
public:
    Chlodziarka();
    void dodaj(T*);
    void wyswietl();
};

template <typename T>
Chlodziarka<T>::Chlodziarka(){
    licznik = 0;
}

template <typename T>
void Chlodziarka<T>::dodaj(T* napoj){
    tab[licznik] = napoj;
    licznik++;
}

template <typename T>
void Chlodziarka<T>::wyswietl(){
    std::cout << std::endl;
    for(int i=0; i<licznik; i++){
        std::cout << i+1 << ". ";
        tab[i]->wyswietl();
    }

}




