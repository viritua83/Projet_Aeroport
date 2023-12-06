#ifndef AVION_H
#define AVION_H



typedef struct Avion Avion ;
struct Avion {
    int id;
    int categorie;
    int etat;
    int nbPassagers;
    Avion * suiv ;
};

typedef struct BDD BDD;
struct BDD
{
	Avion* premier;
};

// Avion* creerAvion();
char* etatAvion(int intEtat);
char* categorieAvion(int intCat);
void creerBDD();
BDD lisBDD();
#endif