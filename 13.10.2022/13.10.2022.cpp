#include <iostream>
#include "Animal.h"

using namespace std;
using namespace Animals;

int main()
{
    Animal* zoo = nullptr;

    enum
    {
        CAT,
        PARROT,
        DOG,
        PINGUIN,
        DOLPHIN,

        A_QTY
    };

    srand(time(NULL));
    switch (rand() % A_QTY)
    {
    case CAT: zoo = new Cat("Murzik", 2.1, "America"); break;
    case PARROT: zoo = new Parrot("Villy", 0.031, "Africa"); break;
    case DOG: zoo = new Dog("Volk", 17.8, "Europe"); break;
    case PINGUIN: zoo = new Pinguin("Kowalski", 6.7, "Antarctica"); break;
    case DOLPHIN: zoo = new Dolphin("Dasha", 31.1, "Europe"); break;
    }

    zoo->eat();
    zoo->move();

    Parrot* isParr = dynamic_cast<Parrot*>(zoo);
    if (isParr) isParr->fly();

    Pinguin* isPin = dynamic_cast<Pinguin*>(zoo);
    if (isPin) isPin->swim();

    Dolphin* isDol = dynamic_cast<Dolphin*>(zoo);
    if (isDol) isDol->swim();

    delete zoo;
}