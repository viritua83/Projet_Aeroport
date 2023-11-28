#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "affichageDonnees.h"


void affichePiste(Piste piste){
    puts("------------------------------------------------------------");
    printf("Donnees de la Piste | Numero : %d , Longueur : %d , Avions Max en attente : %d , Categorie : %s\n",piste.numero,piste.longueur,piste.maxEnAtt,categoriePiste(piste.categorie));
}

void afficheAvion(Avion* avionSurPiste){
    if (avionSurPiste != NULL)
    {
        puts("------------------------------------------------------------");
        printf("Donnees de l'Avion | ID : %d , Etat : %s , Categorie : %s\n",avionSurPiste->id,etatAvion(avionSurPiste->etat),categorieAvion(avionSurPiste->categorie));
    }
    else{
        printf("Aucun Avion selectionne");
    }
}

void affichageDonnees() {
    Piste maPiste = creerPiste();
    maPiste.avionSurPiste = creerAvion();
    affichePiste(maPiste);
    afficheAvion(maPiste.avionSurPiste);
}