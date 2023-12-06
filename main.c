#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./avions/avion.h"
#include "./parking/parking.h"
#include "./pistes/piste.h"
#include "./affichages/affichageDonnees.h"

int main(int argc, char const *argv[])
{
	// creerBDD();
	// Piste piste1 = creerPiste(1, 0);
	// Avion* avionTest = malloc(sizeof(Avion));
	// avionTest->id = 3;
	// avionTest->categorie = 2;
	// avionTest->etat = 0;
	// avionTest->nbPassagers = 100;
	// piste1.avionSurPiste = avionTest;
	//afficheDonneePiste(piste1);
	//Parking ciel = creerParkingTest();
	//piste1 = decollage(piste1, &ciel);
	//afficheDonneePiste(piste1);
	// Piste piste2 = creerPiste(2, 1, 600);
	// affichePiste(piste2);
	// Piste piste3 = creerPiste(3, 2, 1000);
	// affichePiste(piste3);
	afficheGlobal();
	return 0;
}