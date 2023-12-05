#include <stdio.h>
#include <stdlib.h>
#include "piste.h"
#include "../avions/avion.h"


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

Piste creerPiste(int numero, int categorie){
    Piste nouvPiste;
    nouvPiste.numero = numero;
    nouvPiste.maxEnAtt = 3;
    nouvPiste.categorie = categorie;
    nouvPiste.longueur = 0;
    nouvPiste.avionSurPiste = NULL;
    return nouvPiste;
}

Piste decollage(Piste piste, Parking* ciel) {
    if (piste.avionSurPiste == NULL) {
        // La piste est vide, rien à faire
        printf("la piste est vide\n");
        return piste;
    }

    Avion* tmp = piste.avionSurPiste;
    Avion* ptmp = NULL;

    while (tmp->suiv != NULL) {
        ptmp = tmp;
        tmp = tmp->suiv;
    }

    if (ptmp == NULL) {
        // Il n'y a qu'un seul élément dans la liste
        piste.avionSurPiste = NULL;
    } else {
        ptmp->suiv = NULL;
    }

    tmp->suiv = ciel->premier;
    ciel->premier = tmp;

    return piste;
}
