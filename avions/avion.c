#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "avion.h"


char* etatAvion(int intEtat){
    switch (intEtat)
    {
    case 0:
        return "A Terre";
        break;
    case 1:
        return "En Vol";
        break;
    default:
        return "Erreur";
    }
}

char* categorieAvion(int intCat){
    switch (intCat)
    {
    case 0:
        return "Avion Leger";
        break;
    case 1:
        return "Avion d'Affaires";
        break;
    case 2:
        return "Avion de Ligne";
        break;

    default:
        return "Erreur";
    }
}

void creerBDD(){
    Avion avions[50];
    srand(time(NULL));
    FILE *fichier;
    fichier = fopen("avions.txt", "w+");

    if (fichier == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        return;
    }

    for (int i = 0; i < 50; i++) {
        avions[i].id = i + 1;
        avions[i].categorie = rand() % (3);
        avions[i].etat = rand() % (2);
        avions[i].nbPassagers = rand() % (301) + 1;

        fprintf(fichier, "ID: %d, Type: %d, Etat: %d, NbPassagers: %d\n", avions[i].id, avions[i].categorie, avions[i].etat, avions[i].nbPassagers);
    }
    int compteur = 0;
    for (int i = 0; i < 50; ++i)
    {
        if (avions[i].etat = 0)
        {
            compteur+=1;
        }
    }
    if (compteur>30)
    {
        fclose(fichier);
        creerBDD();
    }
    fclose(fichier);
}