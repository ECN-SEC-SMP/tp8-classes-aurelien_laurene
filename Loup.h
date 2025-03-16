#pragma once

#include "Animal.h"

class Loup : public Animal{
    private :
    public :
        Loup(int maxX, int maxY);  // Pour le placement aléatoire

        void setAttaque();
        void deplace(int maxX, int maxY);
};