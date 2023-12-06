#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "affichageDonnees.h"

// <<<<<<< HEAD
// =======

const char * verifAvion(int entier){
    switch(entier){
        case 1:
            return "✈️";
        default:
            return " ";
    }
}

void afficheRangee(int piste1, int piste2, int piste3,int numRangee){
    const char *espace1 = verifAvion(piste1);
    const char *espace2 = verifAvion(piste2);
    const char *espace3 = verifAvion(piste3);
    if (numRangee < 2)
    {
        printf("    |     |    |     |    |     |\n");
        printf("    |  %s  |    |  %s  |    |  %s  |\n", espace1, espace2, espace3);
    }
    else if (1 < numRangee && numRangee < 3)
    {
        printf("    |     |    |     |\n");
        printf("    |  %s  |    |  %s  |\n", espace1, espace2);
    }
    else {
        printf("    |     |\n");
        printf("    |  %s  |\n", espace1);
    }
}

void affichePistes(){
    afficheRangee(1, 0, 0, 3);
    afficheRangee(1, 1, 0, 2);
    afficheRangee(0, 1, 1, 1);
    afficheRangee(0, 0, 0, 0);
}


// >>>>>>> ea227b3583f0b3f5c18c0c46cb38e988c49f2b10
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

void afficheCiel(int nbAvions){
    int tmp = 0;
    int i = 0;
    while(tmp != nbAvions){
        if (i< 10)
        {
            printf("  ✈️  ");
        }
        else{
            printf("\n");
            printf("\n");
            printf("  ✈️  ");
            i = 0;
        }
        tmp+=1;
        i +=1;
    }
// <<<<<<< HEAD
// =======
    printf("\n");
}

// void affichePistes(Piste piste1,Piste piste2,Piste piste3){
//     Avion * tmp = ciel.premier;
//     char espaceRempli[]=" ";
//     int i = 0;
//     printf("|  %s  |",espaceRempli);
// }

void decallageParking() {
    printf("        ");
}

void affiche_parking(int lignes, int colonnes, int positionsP[], int nombreP) {
    decallageParking();
    for (int i = 0; i < colonnes; i++) {
        printf("+---");
    }
    printf("+\n");

    for (int i = 0; i < lignes; i++) {
        decallageParking();
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
        decallageParking();
        for (int j = 0; j < colonnes; j++) {
            printf("+---");
        }
        printf("+\n");
    }
}

void atterrissageAffichage(int lignes, int colonnes, int positionsP[], int *nombreP) {

    if (*nombreP == MAX_PLACES ){
        // printf("Le parking est plein\n");
                        }
    else{
    // Ajouter la nouvelle position du P dans le tableau
    positionsP[*nombreP] = (*nombreP) % (lignes * colonnes);
    (*nombreP)++;
     int a = MAX_PLACES - *nombreP;

    // printf("Il reste %d places \n", a );}

    // Appeler la fonction pour afficher le parking
    affiche_parking(lignes, colonnes, positionsP, *nombreP);
}
}

void decollageAffichage(int lignes, int colonnes, int positionsP[], int *nombreP) {
    if (*nombreP == 0)
    {
        // printf("Le parking est vide , rien a faire decoller \n");
    }
    else{
    // Ajouter la nouvelle position du P dans le tableau
    positionsP[*nombreP] = (*nombreP) % (lignes * colonnes);
    (*nombreP)--;

    int a = MAX_PLACES - *nombreP;

    // printf("Il reste %d places \n", a );}

    // Appeler la fonction pour afficher le parking
    affiche_parking(lignes, colonnes, positionsP, *nombreP);
}
}

int gestionAffichageParking(int choix) {
    int lignes = 6;
    int colonnes = 5;
    int positionsP[MAX_PLACES];
    int nombreP = 0;

        switch (choix) {
            case 1: {
                // printf("un avion decolle \n");
               decollageAffichage(lignes, colonnes, positionsP, &nombreP);
                break;
            }
            case 2:
                // printf("atterrissageAffichage\n");
               atterrissageAffichage(lignes, colonnes, positionsP, &nombreP);
                break;

             case 3:
                break;

            default:
                // printf("Choix invalide. Veuillez réessayer.\n");
        }
 
    return 0;
}

void afficheGlobal()
{
    afficheCiel(50);
    puts("");
    puts("");
    puts("");
    puts("");
    affichePistes();
    gestionAffichageParking(2);
// >>>>>>> ea227b3583f0b3f5c18c0c46cb38e988c49f2b10
}