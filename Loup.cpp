#include "Loup.h"

Loup::Loup(int maxX, int maxY) : Animal(maxX, maxY) {
    nom = "W";
    vivant = true;
    setAttaque();
}

void Loup::setAttaque(){
    typeAttaque = rand()%3;
}

void Loup::deplace(int maxX, int maxY){
    x = rand()%maxX;
    y = rand()%maxY;
}