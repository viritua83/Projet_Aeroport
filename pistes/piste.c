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

Piste creerPiste(){
    Piste nouvPiste;
    nouvPiste.numero = 1;
    nouvPiste.longueur = 100;
    nouvPiste.maxEnAtt = 3;
    nouvPiste.categorie = 0;
    return nouvPiste;
}