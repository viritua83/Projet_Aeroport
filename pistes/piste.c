#include <stdio.h>
#include <stdlib.h>
#include "piste.h"


char* categoriePiste(int intCat){
    switch (intCat)
    {
    case 0:
        return "Petite";
        break;
    case 1:
        return "Moyenne";
        break;
    case 2:
        return "Grande";
        break;

    default:
        return "Erreur";
    }
}

Piste decollage(Piste piste, Parking* ciel) {
    if (piste.avionSurPiste == NULL) {
        printf("Aucun avion ne doit décoller\n");
        return piste;
    }

    Avion* tmp = piste.avionSurPiste;
    Avion* ptmp = NULL;

    while (tmp->suiv != NULL) {
        ptmp = tmp;
        tmp = tmp->suiv;
    }

    if (ptmp == NULL) {
        piste.avionSurPiste = NULL;
    } else {
        ptmp->suiv = NULL;
    }

    tmp->suiv = ciel->premier;
    ciel->premier = tmp;
    ciel->longueur++;
    return piste;
}