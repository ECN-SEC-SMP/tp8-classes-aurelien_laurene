#include "Pierre.h"

Pierre::Pierre(int maxX, int maxY) : Animal(maxX, maxY) {
    nom = "P";
    vivant = true;
    setAttaque();
}

void Pierre::setAttaque(){
    typeAttaque = 0;
}

void Pierre::deplace(int maxX, int maxY){
}