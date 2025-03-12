#pragma once
#include <string>
#include "Attaque.h"
using namespace std;

class Animal{

    protected :
        // Attributs
        string nom;
        int x; // Abscisse de l'animal
        int y; // Ordonnee de l'animal
        bool vivant;
        Attaque typeAttaque;

    public :
        // Constructeur
        Animal(int maxX, int maxY);
        Animal(int maxX, int maxY, int a, int b);

        // Accesseurs
        string getNom() const;
        int getX() const;
        int getY() const;
        bool getVivant() const;
        Attaque getAttaque() const;
        
        // Mutateurs
        void setVivant(bool y);
        bool attaque(Animal *a);
        virtual void setAttaque() = 0; // Virtuelle pure
        virtual void deplace(int maxX, int maxY) = 0; // Virtuelle pure
};