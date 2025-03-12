#include "Loup.h"

void Loup::setAttaque(){
    typeAttaque = rand()%3;
}

void Loup::deplace(int maxX, int maxY){
    x = rand()%maxX;
    y = rand()%maxY;
}