#ifndef PARKING_H
#define PARKING_H
#define MAX_PLACES 30 //parking de 30 places amx 
#include "../avions/avion.h"

typedef struct Parking Parking;
struct Parking
{
	int nbMax;
	int longueur; //nb d'avions en attente dans la file parking
	Avion* premier;
};

Parking creerListe(int etat);
void sauvegardeBDD(Parking parking,Parking ciel);
#endif