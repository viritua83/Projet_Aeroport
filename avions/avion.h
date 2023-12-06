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

// Avion* creerAvion();
char* etatAvion(int intEtat);
char* categorieAvion(int intCat);
void creerBDD();
#endif