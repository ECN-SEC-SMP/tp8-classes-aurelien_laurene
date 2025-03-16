#include "Animal.h"

class Pierre : public Animal{
private :
public :
    Pierre(int maxX, int maxY);  // Pour le placement aléatoire

    void setAttaque();
    void deplace(int maxX, int maxY);
};
