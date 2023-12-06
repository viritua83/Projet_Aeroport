#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "affichageDonnees.h"


void afficheDonneePiste(Piste piste){
    puts("-------------------------------------------------------------------------------------------------");
    Avion* tmp = piste.avionSurPiste;
    printf("Donnees de la Piste | Numero : %d , Longueur : %d , Avions Max en attente : %d , Categorie : %s\n",piste.numero,piste.longueur,piste.maxEnAtt,categoriePiste(piste.categorie));
    while(tmp != NULL){
        afficheDonneeAvion(tmp);
        tmp = tmp->suiv;
    }
}

void afficheDonneeAvion(Avion* avion){
    if (avion != NULL)
    {
        puts("-------------------------------------------------------------------------------------------------");
        printf("Donnees de l'Avion | ID : %d , Etat : %s , Categorie : %s , nbPassagers : %d\n",avion->id,etatAvion(avion->etat),categorieAvion(avion->categorie), avion->nbPassagers);
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
void affiche_parking(int lignes, int colonnes, int positionsP[], int nombreP) {

    for (int i = 0; i < colonnes; i++) {
        printf("+---");
    }
    printf("+\n");

    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            int position = i * colonnes + j;
            int pPresent = 0;

            for (int k = 0; k < nombreP; k++) {
                if (positionsP[k] == position) {
                    pPresent = 1;
                    break;
                }
            }

            if (pPresent) {
                printf("| ✈️ ");
            } else {
                printf("|   ");
            }
        }
        printf("|\n");

        for (int j = 0; j < colonnes; j++) {
            printf("+---");
        }
        printf("+\n");
    }
}

void atterrissageAffichage(int lignes, int colonnes, int positionsP[], int *nombreP) {

    if (*nombreP == MAX_PLACES ){
        printf("Le parking est plein\n");
                        }
    else{
    // Ajouter la nouvelle position du P dans le tableau
    positionsP[*nombreP] = (*nombreP) % (lignes * colonnes);
    (*nombreP)++;
     int a = MAX_PLACES - *nombreP;

    printf("Il reste %d places \n", a );}

    // Appeler la fonction pour afficher le parking
    affiche_parking(lignes, colonnes, positionsP, *nombreP);
}

void decollageAffichage(int lignes, int colonnes, int positionsP[], int *nombreP) {
    if (*nombreP == 0)
    {
        printf("Le parking est vide , rien a faire decoller \n");
    }
    else{
    // Ajouter la nouvelle position du P dans le tableau
    positionsP[*nombreP] = (*nombreP) % (lignes * colonnes);
    (*nombreP)--;

    int a = MAX_PLACES - *nombreP;

    printf("Il reste %d places \n", a );}

    // Appeler la fonction pour afficher le parking
    affiche_parking(lignes, colonnes, positionsP, *nombreP);
}

int gestionAffichageParking(int choix) {
    int lignes = 6;
    int colonnes = 5;
    int positionsP[MAX_PLACES];
    int nombreP = 0;

        switch (choix) {
            case 1: {
                printf("un avion decolle \n");
               decollageAffichage(lignes, colonnes, positionsP, &nombreP);
                break;
            }
            case 2:
                printf("atterrissageAffichage\n");
               atterrissageAffichage(lignes, colonnes, positionsP, &nombreP);
                break;

             case 3:
                break;

            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
 
    return 0;
}