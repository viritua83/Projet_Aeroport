#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLACES 30 //parking de 30 places amx 

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
	int longueur; //nb d'avions en attente dans la file piste
	int catégoriePiste; // 0:Petite 1:Moyenne 2:Grande
	int nbMax;
	Avion* suiv;
};

typedef struct Parking Parking;

struct Parking
{
	int nbMax;
	int longueur; //nb d'avions en attente dans la file parking
	Avion* suiv;
};


void ajouterAvionParking(Parking *parking);
void retirerAvionParking(Parking *parking);


int main(int argc, char const *argv[])
{
	printf("Y sont ou mes cramptés ou koa la");
	return 0;
}


// Fonction pour ajouter un avion au parking
//si place occuppees < 30 alors il y a de la place 
// il faut rajouter une foction qui enleve l'avion qui vient d'atterir de la liste d'attente atterir 
// et inversement rajouter l'avion qui vient de decoller sur la liste d'attente decoller 
void ajouterAvionParking(Parking *parking) {
    if (parking->longueur < MAX_PLACES) {
        parking->longueur++;
        printf("Avion ajoutée. Places occupées : %d\n", parking->longueur);
    } else {
        printf("Le parking est plein. Aucun place disponible.\n");
    }
}


// Fonction pour retirer un avion du parking
void retirerAvionParking(Parking *parking) {
    if (parking->longueur > 0) {
        parking->longueur--;
        printf("avion retirée. Places occupées : %d\n", parking->longueur);
    } else {
        printf("Le parking est vide. Aucun avion à retirer.\n");
    }
}
