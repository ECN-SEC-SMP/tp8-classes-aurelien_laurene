#include <iostream>
#include "Lion.h"
#include "Loup.h"
#include "Ours.h"
#include "Pierre.h"

using namespace std;

int maxX =  5;
int maxY = 5;

// Création de 4 animaux à des positions précises
Loup* loup = new Loup(2, 2);
Lion* lion = new Lion(4, 4);
Ours* ours = new Ours(3, 4);
Pierre* pierre = new Pierre(4, 3);

// Création d'un tableau de pointeurs d'animaux
Animal* animaux[] = {loup, lion, ours, pierre};
int nbAnimaux = 4;

// Prototypes des fonctions
void collision();
void tableaux();

int main(){
    
    collision();
    tableaux();
    return 0;
}

void collision() {
    // Vérification des collisions initiales
    cout << "=== Verification des collisions initiales ===" << endl;
    for(int i = 0; i < nbAnimaux; i++) {
        if(!animaux[i]->getVivant()) continue;
        
        for(int j = nbAnimaux-1; j >=0; j--) {
            if(!animaux[j]->getVivant() || animaux[j]->getNom()==animaux[i]->getNom()) continue;
            
            // Si deux animaux sont sur la même case
            if(animaux[i]->getX() == animaux[j]->getX() && animaux[i]->getY() == animaux[j]->getY()) {
                cout << "Combat entre " << animaux[i]->getNom() << " et " << animaux[j]->getNom() << " !" << endl;
                
                // Détermine le gagnant
                bool resultat = animaux[i]->attaque(animaux[j]);
                if(resultat) {
                    cout << animaux[i]->getNom() << " a vaincu " << animaux[j]->getNom() << " !" << endl;
                    animaux[j]->setVivant(false);
                } else {
                    cout << animaux[j]->getNom() << " a vaincu " << animaux[i]->getNom() << " !" << endl;
                    animaux[i]->setVivant(false);
                    // Comme i est vaincu, on sort de la boucle interne
                    break;
                }
            }
        }
    }
}

void tableaux() {
    
    // Allocation d'un tableau 2D de taille m x n
    int m = 5;  // Nombre de lignes
    int n = 5;  // Nombre de colonnes

    // Allocation de la mémoire
    int** tableau = new int*[m];
    for (int i = 0; i < m; i++) {
        tableau[i] = new int[n];
    }

    // Remplissage du tableau
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout<<"|----";
        }
        cout<<"|"<<endl;
        for (int j = 0; j < n; j++) {
            bool animalTrouve = false;
            for(int k = 0; k < nbAnimaux; k++) {
                if(animaux[k]->getVivant() && animaux[k]->getX() == i && animaux[k]->getY() == j) {
                    cout << "| " << animaux[k]->getNom().substr(0, 2) << "  ";
                    animalTrouve = true;
                    break;
                }
            }
            if(!animalTrouve) {
                cout << "|    ";
            }
        }
        cout<<"|"<<endl;
    }
    // Libération de la mémoire (important !)
    // for (int i = 0; i < m; i++) {
    //     delete[] tableau[i];
    // }
    delete tableau;
}
