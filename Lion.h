#pragma once
#include "Animal.h"

class Lion : public Animal{
private :
public :
    Lion(int maxX, int maxY);  // Pour le placement aléatoire

    void setAttaque();
    void deplace(int maxX, int maxY);
};

