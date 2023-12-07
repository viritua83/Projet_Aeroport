#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./avions/avion.h"
#include "./parking/parking.h"
#include "./pistes/piste.h"
#include "./affichages/affichageDonnees.h"
#include "./affichages/animations.h"
#include "./traitement/traitement.h"


int main()
{
	Parking parking = creerListe(0);
	Parking ciel = creerListe(1);
	Piste piste1 = creerPiste(1);
	Piste piste2 = creerPiste(2);
	Piste piste3 = creerPiste(3);

    return 0;
}