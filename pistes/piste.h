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
    Avion * premier;
};

char* categoriePiste(int intCat);
Piste creerPiste(int numero);
void ajouteAvionSurPiste(Piste* piste, int id, Parking* parking);
void decollage(Piste* piste, Parking* ciel);
void atterrissage(Parking* parking, int id, Parking* ciel);
#endif