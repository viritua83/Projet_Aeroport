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

Piste creerPiste(int numero){
    Piste nouvPiste;
    nouvPiste.numero = numero;
    nouvPiste.maxEnAtt = 2;
    nouvPiste.categorie = numero-1;
    nouvPiste.longueur = 0;
    nouvPiste.avionSurPiste = NULL;
    return nouvPiste;
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