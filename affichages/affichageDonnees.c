#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "affichageDonnees.h"

// <<<<<<< HEAD
// =======

const char * verifAvion(int entier){
    if (entier > 0) {
        return "✈️";
    } else {
        return " ";
    }
}

void afficheRangee(int piste3, int piste2, int piste1,int numRangee){
    const char *espace1 = verifAvion(piste1);
    const char *espace2 = verifAvion(piste2);
    const char *espace3 = verifAvion(piste3);
    if (numRangee < 2)
    {
        printf("    |     |    |     |    |     |\n");
        printf("    |     |    |  %s  |    |  %s  |\n" , espace2, espace1);
    }
    else if (1 < numRangee && numRangee < 3)
    {
        printf("    |     |    |     |\n");
        printf("    |  %s  |    |  %s  |\n", espace3, espace2);
    }
    else {
        printf("    |     |\n");
        printf("    |  %s  |\n", espace3);
    }
}

void affichePistes(Piste piste1,Piste piste2,Piste piste3){
    afficheRangee(piste3.longueur, 0, 0, 3);
    afficheRangee(piste3.longueur-1, piste2.longueur, 0, 2);
    afficheRangee(0, piste2.longueur-1, piste1.longueur, 1);
    afficheRangee(0, 0, piste1.longueur-1, 0);
}


// >>>>>>> ea227b3583f0b3f5c18c0c46cb38e988c49f2b10
void afficheDonneePiste(Piste* piste){
    puts("-------------------------------------------------------------------------------------------------");
    Avion* tmp = piste->premier;
    printf("Donnees de la Piste | Numero : %d , Avion sur piste : %d , Avions Max en attente : %d , Categorie : %s\n",piste->numero,piste->longueur,piste->maxEnAtt,categoriePiste(piste->categorie));
    if (tmp == NULL)
    {
        printf("Aucun avion n'est sur la piste\n");
    }
    else{
        while(tmp != NULL){
            afficheDonneeAvion(tmp);
            tmp = tmp->suiv;
        }
    }
}

void afficheDonneeParking(Parking liste){
    Avion* tmp = liste.premier;
    if (tmp == NULL)
    {
        printf("le parking est vide\n");
    }
    else{
        while(tmp != NULL){
            afficheDonneeAvion(tmp);
            tmp = tmp->suiv;
        }
        printf("\n");
        printf("Nombre de places maximum : %d , Nombre d'avions dans le parking : %d\n", liste.nbMax, liste.longueur);
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


void afficheAvionsDisponibles(Parking parking,int numPiste){
    Avion* tmp = parking.premier;
    int cpt = 0;
    switch(numPiste){
    case 1:
        printf("Avions pouvants aller sur la petite piste :\n");
        while(tmp != NULL){
            if (tmp->categorie == 0 || tmp->categorie == 1)
            {
                if (cpt< 5)
                {
                    printf("| ID : %2d , Type : %s ",tmp->id,categorieAvion(tmp->categorie));

                }
                else{
                    printf("\n");
                    printf("\n");
                    printf("| ID : %2d , Type : %s ",tmp->id,categorieAvion(tmp->categorie));
                    cpt = 0;
                }
                cpt +=1;
            }
            tmp = tmp->suiv;
        }
        printf("\n");
        break;

    case 2:
        printf("Avions pouvants aller sur la moyenne piste :\n");
        while(tmp != NULL){
            if (tmp->categorie == 0 || tmp->categorie == 1)
            {
                if (cpt< 5)
                {
                    printf("| ID : %2d , Type : %s ",tmp->id,categorieAvion(tmp->categorie));


                }
                else{
                    printf("\n");
                    printf("\n");
                    printf("| ID : %2d , Type : %s ",tmp->id,categorieAvion(tmp->categorie));
                    cpt = 0;
                }
                cpt +=1;
            }
            tmp = tmp->suiv;
        }
        printf("\n");
        break;
    case 3:
        printf("Avions pouvants aller sur la grande piste :\n");
        while(tmp != NULL){
            if (tmp->categorie == 1 || tmp->categorie == 2)
            {
                if (cpt< 5)
                {
                    printf("| ID : %2d , Type : %s ",tmp->id,categorieAvion(tmp->categorie));

                }
                else{
                    printf("\n");
                    printf("\n");
                    printf("| ID : %2d , Type : %s ",tmp->id,categorieAvion(tmp->categorie));
                    cpt = 0;
                }
                cpt +=1;
            }
            tmp = tmp->suiv;
        }
        printf("\n");
        break;
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

void affiche_parking(int lignes, int colonnes, int nombreP) {
    decallageParking();
    for (int i = 0; i < colonnes; i++) {
        printf("+---");
    }
    printf("+\n");
    int cpt = 0;
    for (int i = 0; i < lignes; i++) {
        decallageParking();
        for (int j = 0; j < colonnes; j++) {
            if (nombreP-cpt > 0) {
                printf("| ✈️ ");
            } else {
                printf("|   ");
            }
            cpt++;
        }
        printf("|\n");
        decallageParking();
        for (int j = 0; j < colonnes; j++) {
            printf("+---");
        }
        printf("+\n");
    }
}

void afficheGlobal(Parking parking, Parking ciel,Piste piste1,Piste piste2,Piste piste3)
{
    puts("******************************************************");
    afficheCiel(ciel.longueur);
    puts("");
    puts("");
    puts("");
    puts("");
    affichePistes(piste1,piste2,piste3);
    affiche_parking(6, 5, parking.longueur);
// >>>>>>> ea227b3583f0b3f5c18c0c46cb38e988c49f2b10
}