#ifndef AFFICHAGEMENU_H
#define AFFICHAGEMENU_H
#include "../avions/avion.h"
#include "../parking/parking.h"
#include "../pistes/piste.h"

void afficheBienvenue();
void afficheOptions();
void afficheMenu(Parking parking,Parking ciel,Piste piste1,Piste piste2,Piste piste3);


#endif