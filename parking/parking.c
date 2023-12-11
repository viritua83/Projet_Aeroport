#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "parking.h"

void sauvegardeBDD(Parking parking,Parking ciel){
    if (parking.longueur + ciel.longueur != 50)
    {
        printf("Veuillez libérer les pistes avant de sauvegarder\n");
        usleep(3000000);
        return;
    }
    FILE *fichier;
    fichier = fopen("avions.txt", "w+");

    if (fichier == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        return;
    }
    Avion * tmp = parking.premier;
    while(tmp != NULL) {
        fprintf(fichier, "ID: %d, Type: %d, Etat: %d, NbPassagers: %d\n", tmp->id, tmp->categorie, tmp->etat, tmp->nbPassagers);
        tmp = tmp->suiv;
    }
    tmp = ciel.premier;
    while(tmp != NULL) {
        fprintf(fichier, "ID: %d, Type: %d, Etat: %d, NbPassagers: %d\n", tmp->id, tmp->categorie, tmp->etat, tmp->nbPassagers);
        tmp = tmp->suiv;
    }

    fclose(fichier);
}

Parking creerListe(int etat){
    FILE* fichier = fopen("avions.txt", "r");
    Parking liste = {0};

    if (fichier != NULL)
    {
        liste.premier = NULL;
        if(etat == 0)
            {
                liste.nbMax = 30;
            }
        while(fgetc(fichier) != EOF){
            fseek(fichier, -1, SEEK_CUR);
            Avion* tmp = malloc(sizeof(Avion));
            if (tmp != NULL)
            {
                if (fscanf(fichier, "ID: %d, Type: %d, Etat: %d, NbPassagers: %d\n", &(tmp->id), &(tmp->categorie), &(tmp->etat), &(tmp->nbPassagers)) == 4)
                {   
                    if (tmp->etat == etat)
                    {
                        tmp->suiv = liste.premier;
                        liste.premier = tmp;
                        liste.longueur++;
                    }
                }
                else
                    free(tmp);
            }
        }
    }

    fclose(fichier);

    return liste;
}