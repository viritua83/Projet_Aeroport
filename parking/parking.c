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