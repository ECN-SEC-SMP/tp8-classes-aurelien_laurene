#include "Lion.h"

const int abscisse[] = {1,1,-1,-1};
const int ordonnée[] = {1,-1,-1,1};

Lion::Lion(int maxX, int maxY) : Animal(maxX, maxY) {
    nom = "L";
    vivant = true;
    setAttaque();
}

void Lion::deplace(int maxX, int maxY){
    int pos = rand() % 4;
    x = (x + abscisse[pos]) % maxX;
    y = (y + ordonnée[pos]) % maxY;
}

void Lion::setAttaque(){
    typeAttaque = rand() % 2 +1; // Feuille ou ciseaux
}