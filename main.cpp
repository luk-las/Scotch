#include <iostream>
#include "Napoj.h"
#include "Whisky.h"
#include "Cola.h"
#include "Drink.h"
#include "Chlodziarka.h"

using namespace std;

int main()
{

    Whisky JD("Jack Daniel's", 0.7, 18, 40);
    JD.wyswietl();
    Whisky* JD2 = new Whisky(JD);
    JD2->wyswietl();
    Cola CC("Coca-Cola", 1.75, "light", false);
    CC.wyswietl();
    cout << endl;

    Drink* drin2 = new Drink(JD, CC);
    drin2->wyswietl();
    cout << endl;

    Drink* drin = new Drink("Whisky z cola", 0.2, 18, 40, "z lodem", true);
    drin -> wyswietl();
    cout << endl;

    cout << "=======================================================" << endl;

    Chlodziarka<Napoj>* chlodziarka = new Chlodziarka<Napoj>();

    chlodziarka->dodaj(JD2);
    chlodziarka->dodaj((Whisky*)drin);
    chlodziarka->dodaj((Cola*)drin2);
    chlodziarka->wyswietl();

    return 0;
}
