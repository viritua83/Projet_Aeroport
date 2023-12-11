#ifndef AFFICHAGEDONNEES_H
#define AFFICHAGEDONNEES_H
#define MAX_PLACES 30
#include "../avions/avion.h"
#include "../pistes/piste.h"
#include "../parking/parking.h"

void afficheDonneePiste(Piste* piste);
void afficheDonneeAvion(Avion* avion);
void afficheDonneeParking(Parking liste);
void afficheCiel(int nbAvions);
void atterrissageAffichage(int lignes, int colonnes, int positionsP[], int *nombreP);
void decollageAffichage(int lignes, int colonnes, int positionsP[], int *nombreP);
void affiche_parking(int lignes, int colonnes, int nombreP);
const char * verifAvion(int entier);
void afficheRangee(int piste1, int piste2, int piste3,int numRangee);
void affichePistes(Piste piste1,Piste piste2,Piste piste3);
void afficheGlobal(Parking parking, Parking ciel,Piste piste1,Piste piste2,Piste piste3);
void decallageParking();
void afficheAvionsDisponibles(Parking parking,int numPiste);


#endif