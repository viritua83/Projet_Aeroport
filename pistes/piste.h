#ifndef PISTE_H
#define PISTE_H
#include "../avions/avion.h"
#include "../parking/parking.h"

typedef struct Piste Piste ;
struct Piste {
    int numero;
    int longueur;
    int categorie;
    int maxEnAtt;
    Avion * avionSurPiste;
};

char* categoriePiste(int intCat);
Piste creerPiste(int numero);
Piste decollage(Piste piste, Parking* ciel);
#endif