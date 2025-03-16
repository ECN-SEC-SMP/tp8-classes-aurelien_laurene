#pragma once

#include "Animal.h"

class Ours : public Animal{
    private :
    public :
        Ours(int maxX, int maxY);  // Pour le placement aléatoire

        void setAttaque();
        void deplace(int maxX, int maxY);
};
