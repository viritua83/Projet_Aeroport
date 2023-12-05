#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "affichageDonnees.h"


void affichePiste(Piste piste){
    puts("-------------------------------------------------------------------------------------------------");
    Avion* tmp = piste.avionSurPiste;
    printf("Donnees de la Piste | Numero : %d , Longueur : %d , Avions Max en attente : %d , Categorie : %s\n",piste.numero,piste.longueur,piste.maxEnAtt,categoriePiste(piste.categorie));
    while(tmp != NULL){
        afficheAvion(tmp);
        tmp = tmp->suiv;
    }
}

void afficheAvion(Avion* avionSurPiste){
    if (avionSurPiste != NULL)
    {
        puts("-------------------------------------------------------------------------------------------------");
        printf("Donnees de l'Avion | ID : %d , Etat : %s , Categorie : %s , nbPassagers : %d\n",avionSurPiste->id,etatAvion(avionSurPiste->etat),categorieAvion(avionSurPiste->categorie), avionSurPiste->nbPassagers);
    }
    else{
        printf("Aucun Avion selectionne\n");
    }
}

void afficheBDD(BDD baseDeDonnee){
    Avion* tmp = baseDeDonnee.premier;
    while(tmp != NULL){
        afficheAvion(tmp);
        tmp = tmp->suiv;
    }
}

void affichageDonnees() {
    // Piste maPiste = creerPiste();
    // affichePiste(maPiste);
    BDD baseDeDonnee = lisBDD();
    afficheBDD(baseDeDonnee);
}