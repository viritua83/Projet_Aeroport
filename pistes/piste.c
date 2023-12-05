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

Piste creerPiste(){
    Piste nouvPiste;
    nouvPiste.numero = 1;
    nouvPiste.longueur = 100;
    nouvPiste.maxEnAtt = 3;
    nouvPiste.categorie = 0;
    return nouvPiste;
}

Avion* decollage(BDD baseDeDonnee){
    Avion* tmp = baseDeDonnee.premier;
    int idCherche = 0;
    printf("Donnez l'id de l'avion a faire decoller :\n");
    scanf("%d", &idCherche);
    while (tmp->id != idCherche){
        tmp = tmp->suiv;
        if (tmp == NULL)
        {
            printf("L'avion n'existe pas\n");
            return NULL;
        }
    }
    if (tmp->etat == 1){
        printf("L'avion est deja dans les airs\n");
        return NULL;
    }
    else{
        printf("L'avion decolle\n");
        tmp->etat = 1;
    }

    return  tmp;
}