#include <stdio.h>
#include <stdlib.h>
#include "parking.h"


void ajouterAvionParking(Parking *parking) {
    if (parking->longueur < MAX_PLACES) {
        parking->longueur++;
        printf("Avion ajoutée. Places occupées : %d\n", parking->longueur);
    } else {
        printf("Le parking est plein. Aucun place disponible.\n");
    }
}
// Fonction pour ajouter un avion au parking
//si place occuppees < 30 alors il y a de la place 
// il faut rajouter une foction qui enleve l'avion qui vient d'atterir de la liste d'attente atterir 
// et inversement rajouter l'avion qui vient de decoller sur la liste d'attente decoller 


// Fonction pour retirer un avion du parking
void retirerAvionParking(Parking *parking) {
    if (parking->longueur > 0) {
        parking->longueur--;
        printf("avion retirée. Places occupées : %d\n", parking->longueur);
    } else {
        printf("Le parking est vide. Aucun avion à retirer.\n");
    }
}

Parking creerParkingTest(){
    Parking parking = {0};
    parking.longueur = 0;
    parking.nbMax = 50;
    parking.premier = NULL;

    return parking;
}

void sauvegardeBDD(Parking parking,Parking ciel){
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