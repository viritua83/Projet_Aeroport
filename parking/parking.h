#ifndef PARKING_H
#define PARKING_H
#define MAX_PLACES 30 //parking de 30 places amx 

typedef struct Parking Parking;
struct Parking
{
	int nbMax;
	int longueur; //nb d'avions en attente dans la file parking
	Avion* suiv;
};

void ajouterAvionParking(Parking *parking);
void retirerAvionParking(Parking *parking);
#endif