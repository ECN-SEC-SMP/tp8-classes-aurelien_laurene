#include "Animal.h"
#include "Attaque.h"
#include "stdlib.h"


// ---------- Constructeurs ----------

// maxX : Abscisse max de la grille
// maxY : Ordonnee max de la grille
// a : Abscisse
// b : Ordonnee

Animal::Animal(int maxX, int maxY):x(rand()%maxX),y(rand()%maxY){} // Placement aleatoire

Animal::Animal(int maxX, int maxY, int a, int b):x(a%maxX),y(b%maxY){} // Placement en fonction de a et b

// -----------------------------------

// ---------- Accesseurs ----------

string Animal::getNom() const { return nom;}

int Animal::getX() const {return x;}

int Animal::getY() const {return y;}

bool Animal::getVivant() const {return vivant;}

Attaque Animal::getAttaque() const{ return typeAttaque;}

// --------------------------------

// ---------- Mutateurs ----------

void Animal::setVivant(bool v){vivant = v;}

bool Animal::attaque(Animal *a){
    return this->typeAttaque.resoudreAttaque(a->typeAttaque);
}

// -------------------------------