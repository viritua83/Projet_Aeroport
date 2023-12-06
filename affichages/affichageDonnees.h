#ifndef AFFICHAGEDONNEES_H
#define AFFICHAGEDONNEES_H
#define MAX_PLACES 30
#include "../avions/avion.h"
#include "../pistes/piste.h"
#include "../parking/parking.h"

void afficheDonneePiste(Piste piste);
void afficheDonneeAvion(Avion* avionSurPiste);
void afficheBDD(BDD baseDeDonnee);
void affichageDonnees();
void afficheCiel(Parking ciel);
void atterrissageAffichage(int lignes, int colonnes, int positionsP[], int *nombreP);
void decollageAffichage(int lignes, int colonnes, int positionsP[], int *nombreP);
int gestionAffichageParking(int choix);

#endif