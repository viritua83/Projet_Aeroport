#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "avion.h"

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

void creerBDD(){
    Avion avions[50];
    srand(time(NULL));
    FILE *fichier;
    fichier = fopen("avions.txt", "w+");

    if (fichier == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        return;
    }

    for (int i = 0; i < 50; i++) {
        avions[i].id = i + 1;
        avions[i].categorie = rand() % (3);
        avions[i].etat = rand() % (2);
        avions[i].nbPassagers = rand() % (301) + 1;

        fprintf(fichier, "ID: %d, Type: %d, Etat: %d, NbPassagers: %d\n", avions[i].id, avions[i].categorie, avions[i].etat, avions[i].nbPassagers);
    }

    fclose(fichier);
}


BDD lisBDD(){
    FILE* fichier = fopen("avions.txt", "r");
    BDD baseDeDonnee = {0};

    if (fichier != NULL)
    {
        baseDeDonnee.premier = NULL;
        while(fgetc(fichier) != EOF){
            fseek(fichier, -1, SEEK_CUR);
            Avion* tmp = malloc(sizeof(Avion));
            if (tmp != NULL)
            {
                if (fscanf(fichier, "ID: %d, Type: %d, Etat: %d, NbPassagers: %d\n", &(tmp->id), &(tmp->categorie), &(tmp->etat), &(tmp->nbPassagers)) == 4)
                {
                    tmp->suiv = baseDeDonnee.premier;
                    baseDeDonnee.premier = tmp;
                }
                else
                    free(tmp);
            }
        }
    }

    fclose(fichier);

    return baseDeDonnee;
}

// Avion* creerAvion() {
//     Avion* nouvAvion = (Avion*)malloc(sizeof(Avion));
//     if (nouvAvion == NULL) {
//         printf("Erreur d'allocation de mémoire.\n");
//         return NULL;
//     }
//     system("clear");
//     nouvAvion->suiv = NULL;
//     printf("Entrez l'id :\n");
//     scanf("%d", &nouvAvion->id);
//     printf("Entrez le nbPassagers :\n");
//     scanf("%d", &nouvAvion->nbPassagers);
//     printf("Entrez la categorie :\n");
//     scanf("%d", &nouvAvion->categorie);
//     printf("Entrez l'etat :\n");
//     scanf("%d", &nouvAvion->etat);
//     system("clear");
//     return nouvAvion;
// }