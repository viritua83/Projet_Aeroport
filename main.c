#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./avions/avion.h"
#include "./pistes/piste.h"
#include "./affichages/affichageDonnees.h"

int main(int argc, char const *argv[])
{
	// creerBDD();
	BDD baseDeDonnee = lisBDD();
	afficheAvion(decollage(baseDeDonnee));
	return 0;
}