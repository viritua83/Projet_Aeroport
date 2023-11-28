#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Avion Avion ;
struct Avion {
    int id;
    int categorie;
    int etat;
    int nbPassagers;
    Avion * suiv ;
};

typedef struct Piste Piste ;
struct Piste {
    int numero;
    int longueur;
    int categorie;
    int maxEnAtt;
    Avion * avionSurPiste;
};

char* etatAvion(int intEtat){
    switch (intEtat)
    {
    case 0:
        return "A Terre";
        break;
    case 1:
        return "En Vol";
        break;
    default:
        return "Erreur";
    }
}

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

char* categorieAvion(int intCat){
    switch (intCat)
    {
    case 0:
        return "Avion Leger";
        break;
    case 1:
        return "Avion d'Affaires";
        break;
    case 2:
        return "Avion de Ligne";
        break;

    default:
        return "Erreur";
    }
}

void affichePiste(Piste piste){
    puts("------------------------------------------------------------");
    printf("Donnees de la Piste | Numero : %d , Longueur : %d , Avions Max en attente : %d , Categorie : %s\n",piste.numero,piste.longueur,piste.maxEnAtt,categoriePiste(piste.categorie));
}

void afficheAvion(Avion* avionSurPiste){
    if (avionSurPiste != NULL)
    {
        puts("------------------------------------------------------------");
        printf("Donnees de l'Avion | ID : %d , Etat : %s , Categorie : %s\n",avionSurPiste->id,etatAvion(avionSurPiste->etat),categorieAvion(avionSurPiste->categorie));
    }
    else{
        printf("Aucun Avion selectionne");
    }
}

Avion* creerAvion() {
    Avion* nouvAvion = (Avion*)malloc(sizeof(Avion));
    if (nouvAvion == NULL) {
        printf("Erreur d'allocation de mémoire.\n");
        return NULL;
    }
    system("clear");
    nouvAvion->suiv = NULL;
    printf("Entrez l'id :\n");
    scanf("%d", &nouvAvion->id);
    printf("Entrez le nbPassagers :\n");
    scanf("%d", &nouvAvion->nbPassagers);
    printf("Entrez la categorie :\n");
    scanf("%d", &nouvAvion->categorie);
    printf("Entrez l'etat' :\n");
    scanf("%d", &nouvAvion->etat);
    system("clear");
    return nouvAvion;
}

Piste creerPiste(){
    Piste nouvPiste;
    nouvPiste.numero = 1;
    nouvPiste.longueur = 3;
    nouvPiste.maxEnAtt = 4;
    nouvPiste.categorie = 0;
    return nouvPiste;
}

int main(int argc, char const *argv[]) {
    Piste maPiste = creerPiste();
    maPiste.avionSurPiste = creerAvion();
    affichePiste(maPiste);
    afficheAvion(maPiste.avionSurPiste);
    return 0;
}
