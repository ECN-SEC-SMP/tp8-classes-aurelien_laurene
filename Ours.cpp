#include "Animal.h"
#include "Ours.h"

const int abscisse[] = {2, 1, -1, -2, -2, -1, 1, 2};
const int ordonnee[] = {1, 2, 2, 1, -1, -2, -2, -1};

Ours::Ours(int maxX, int maxY) : Animal(maxX, maxY) {
    nom = "O";
    vivant = true;
    setAttaque();
}

void Ours::setAttaque(){
    typeAttaque = 1; // Feuille
}

void Ours::deplace(int maxX, int maxY){
    int pos = rand()%8;
    x = (x + abscisse[pos])%maxX;
    y = (y + ordonnee[pos])%maxY;
}
