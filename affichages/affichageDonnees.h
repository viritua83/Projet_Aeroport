#ifndef AFFICHAGEDONNEES_H
#define AFFICHAGEDONNEES_H
#define MAX_PLACES 30
#include "../avions/avion.h"
#include "../pistes/piste.h"
#include "../parking/parking.h"

void afficheDonneePiste(Piste piste);
void afficheDonneeAvion(Avion* avion);
void afficheCiel(int nbAvions);
void atterrissageAffichage(int lignes, int colonnes, int positionsP[], int *nombreP);
void decollageAffichage(int lignes, int colonnes, int positionsP[], int *nombreP);
int gestionAffichageParking(int choix);
const char * verifAvion(int entier);
void afficheRangee(int piste1, int piste2, int piste3,int numRangee);
void affichePistes();
void afficheGlobal();
void decallageParking();


#endif