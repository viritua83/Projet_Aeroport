#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./avions/avion.h"
#include "./pistes/piste.h"
#include "./affichages/affichageDonnees.h"

int main(int argc, char const *argv[])
{
	// creerBDD();
	Piste piste1 = creerPiste(1, 0, 200);
	afficheDonneePiste(piste1);
	Piste piste2 = creerPiste(2, 1, 600);
	afficheDonneePiste(piste2);
	Piste piste3 = creerPiste(3, 2, 1000);
	afficheDonneePiste(piste3);
	return 0;
}