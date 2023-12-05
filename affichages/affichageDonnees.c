#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "affichageDonnees.h"


void afficheDonneePiste(Piste piste){
    puts("-------------------------------------------------------------------------------------------------");
    printf("Donnees de la Piste | Numero : %d , Longueur : %d , Avions Max en attente : %d , Categorie : %s\n",piste.numero,piste.longueur,piste.maxEnAtt,categoriePiste(piste.categorie));
}

void afficheDonneeAvion(Avion* avion){
    if (avion != NULL)
    {
        puts("-------------------------------------------------------------------------------------------------");
        printf("Donnees de l'Avion | ID : %5d , Etat : %s , Categorie : %s , nbPassagers : %d\n",avion->id,etatAvion(avion->etat),categorieAvion(avion->categorie), avion->nbPassagers);
    }
    else{
        printf("Aucun Avion selectionne\n");
    }
}

void afficheCiel(Parking ciel){
    Avion * tmp = ciel.premier;
    int i = 0;
    while(tmp != NULL){
        if (i< 5)
        {
            printf("  ✈️  ");
        }
        else{
            printf("\n");
            printf("  ✈️  ");
            i = 0;
        }
        i +=1;
        tmp = tmp->suiv;
    }
}

// void affichePistes(Piste piste1,Piste piste2,Piste piste3){
//     Avion * tmp = ciel.premier;
//     char espaceRempli[]=" ";
//     int i = 0;
//     printf("|  %s  |",espaceRempli);
// }

void afficheBDD(BDD baseDeDonnee){
    Avion* tmp = baseDeDonnee.premier;
    while(tmp != NULL){
        afficheDonneeAvion(tmp);
        tmp = tmp->suiv;
    }
}

void affichageDonnees() {
    // Piste maPiste = creerPiste();
    // affichePiste(maPiste);
    BDD baseDeDonnee = lisBDD();
    afficheBDD(baseDeDonnee);
}