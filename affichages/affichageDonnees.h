#ifndef AFFICHAGEDONNEES_H
#define AFFICHAGEDONNEES_H
#include "../avions/avion.h"
#include "../pistes/piste.h"
#include "../parking/parking.h"

void afficheDonneePiste(Piste piste);
void afficheDonneeAvion(Avion* avionSurPiste);
void afficheBDD(BDD baseDeDonnee);
void affichageDonnees();
void afficheCiel(Parking ciel);
#endif