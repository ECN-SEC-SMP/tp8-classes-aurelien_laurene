#include "Attaque.h"
#include "stdlib.h"
#include <iostream>

// ---------- Constructeurs ----------

Attaque::Attaque():type(rand()%3){}

Attaque::Attaque(int a):type(a){}

// ---------- Accesseurs ----------

int Attaque::getTypeAttaque() const{
    return type;
}

string Attaque::getNomAttaque() const{
    switch (type){
        case 0 : return "Pierre";
        case 1 : return "Feuille";
        case 2 : return "Ciseaux";
    }
    return "";
}

// -------- Mutateurs---------------

bool Attaque::resoudreAttaque(Attaque &a) const{
    string attaqueAdverse = a.getNomAttaque();
    string monAttaque =  this->getNomAttaque();
    if (attaqueAdverse == "Feuille" && monAttaque == "Ciseaux") return 1;
    if (attaqueAdverse == "Pierre" && monAttaque == "Feuille") return 1;
    if (attaqueAdverse == "Ciseaux" && monAttaque == "Pierre") return 1;
    if (attaqueAdverse == monAttaque) return rand() % 2;
    else return 0;
}