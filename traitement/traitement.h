#ifndef TRAITEMENT_H
#define TRAITEMENT_H
#include "../avions/avion.h"
#include "../parking/parking.h"
#include "../pistes/piste.h"
#include "../affichages/affichageDonnees.h"
#include "../affichages/affichageMenu.h"
#include "../affichages/animations.h"

Piste gerePistes(Parking parking,Parking ciel,Piste piste,int idAvion, int action);
void traitement(Parking parking,Parking ciel,Piste piste1,Piste piste2,Piste piste3);

#endif