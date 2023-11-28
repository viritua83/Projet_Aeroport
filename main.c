#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Avion Avion;

struct Avion
{
	int id;
	int catégoriePiste; // 0:leger 1:affaire 2:ligne
	int etat; //0:sol 1:vol
	int nbPassager;
};

typedef struct Piste Piste;

struct Piste
{
	int numPiste;
	int longueur;
	int catégoriePiste; // 0:Petite 1:Moyenne 2:Grande
	int nbMax;
	Avion* suiv;
};


int main(int argc, char const *argv[])
{
	printf("Y sont ou mes cramptés");
	return 0;
}
