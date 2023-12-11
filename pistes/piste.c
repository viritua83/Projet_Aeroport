#include <stdio.h>
#include <stdlib.h>
#include "piste.h"

char* categoriePiste(int intCat){
    switch (intCat)
    {
    case 1:
        return "Petite";
        break;
    case 2:
        return "Moyenne";
        break;
    case 3:
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
    nouvPiste.categorie = numero;
    nouvPiste.longueur = 0;
    nouvPiste.premier = NULL;
    return nouvPiste;
}

void ajouteAvionSurPiste(Piste* piste, int id, Parking* parking)
{
    Avion* tmp = parking->premier;
    Avion* ptmp = NULL;
    while(tmp != NULL && tmp->id != id){
        ptmp = tmp;
        tmp = tmp->suiv;
    }
    if (tmp == NULL)
    {
        system("clear");
        printf("id incorrect\n");
    }
    else if (verifBonnePiste(tmp, piste->numero) == 0)
    {
       system("clear");
       printf("id incorrect\n");
    }
    else{
        if(ptmp == NULL){
            parking->premier = tmp->suiv;
        }
        else{
            ptmp->suiv = tmp->suiv;
        }
        if (piste->premier == NULL)
        {
            tmp->suiv = NULL;
            piste->premier = tmp;
        }
        else{
            tmp->suiv = piste->premier;
            piste->premier = tmp;
        }
        parking->longueur--;
        piste->longueur++;
    }
}

void decollage(Piste* piste, Parking* ciel) {
    if (piste->premier == NULL) {
        printf("Aucun avion sur la piste\n");
        return;
    }

    Avion* tmp = piste->premier;
    Avion* ptmp = NULL;

    while (tmp->suiv != NULL) {
        ptmp = tmp;
        tmp = tmp->suiv;
    }

    if (ptmp == NULL) {
        piste->premier = NULL;
    } else {
        ptmp->suiv = NULL;
    }
    tmp->etat = 1;
    tmp->suiv = ciel->premier;
    ciel->premier = tmp;
    ciel->longueur++;
    piste->longueur--;
    joueAnimation(tmp->categorie,0);
    system("clear");
}

void atterrissage(Parking* parking, int id, Parking* ciel, Piste* piste){
    Avion* tmp = ciel->premier;
    Avion* ptmp = NULL;
    while(tmp != NULL && tmp->id != id){
        ptmp = tmp;
        tmp = tmp->suiv;
    }
    if (tmp == NULL)
    {
        printf("id incorrect\n");
    }
    else if (verifBonnePiste(tmp, piste->numero) == 0)
    {
       system("clear");
       printf("id incorrect\n");
    }
    else{
        if(ptmp == NULL){
            ciel->premier = tmp->suiv;
        }
        else{
            ptmp->suiv = tmp->suiv;
        }
        if (parking->premier == NULL)
        {
            tmp->suiv = NULL;
            parking->premier = tmp;
        }
        else{
            tmp->suiv = parking->premier;
            parking->premier = tmp;
        }
        tmp->etat = 0;
        ciel->longueur--;
        parking->longueur++;
        joueAnimation(tmp->categorie,1);
        system("clear");
    }
}

int verifBonnePiste(Avion* avion, int numPiste){
    switch(numPiste){
        case 1:
            if (avion->categorie == 0 || avion->categorie == 1)
            {
                return 1;
            }
            else{
                return 0;
            }
            break;
        case 2:
            if (avion->categorie == 0 || avion->categorie == 1)
            {
                return 1;
            }
            else{
                return 0;
            }
            break;
        case 3:
            if (avion->categorie == 1 || avion->categorie == 2)
            {
                return 1;
            }
            else{
                return 0;
            }
            break;
        default:
            return 0;
            break;
    }
}