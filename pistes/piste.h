#ifndef PISTE_H
#define PISTE_H
#include "../avions/avion.h"

typedef struct Piste Piste ;
struct Piste {
    int numero;
    int longueur;
    int categorie;
    int maxEnAtt;
    Avion * avionSurPiste;
};

char* categoriePiste(int intCat);
Piste creerPiste(int numero, int categorie, int longueur);
Avion* decollage(BDD baseDeDonnee);
#endif