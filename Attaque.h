#pragma once

#include <string>

using namespace std;

class Attaque{
    protected :
        // Attributs
        int type; // 0 :pierre, 1: Feuille,2:Ciseaux
    public :
        // Constructeur
        Attaque(); //crée une attaque random
        Attaque(int a);  //crée une attaque spécifique

        // Accesseurs
        int getTypeAttaque() const;
        string getNomAttaque() const;
        
        // Mutateurs
        bool resoudreAttaque(Attaque &a) const;
};