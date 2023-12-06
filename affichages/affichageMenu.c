#include <stdio.h>
#include <stdlib.h>

void afficheTitre() {
    printf("********/\\************************************************/\\*********\n");
    printf("*      /  \\                The Two Towers                /  \\       *\n");
    printf("******/____\\********************************************/____\\*******\n");
}

void afficheBienvenue() {
    printf("*     |    |                                            |    |      *\n");
    printf("*     |    |            Bienvenue dans The Two Towers   |    |      *\n");
    printf("*     |    |                                            |    |      *\n");
    printf("*********************************************************************\n");
}

void afficheOptions() {
    printf("*  Options disponibles :                                            *\n");
    printf("*                                                                   *\n");
    printf("*  1. Commencer la simulation manuelle                              *\n");
    printf("*  1. Commencer la simulation automatique                           *\n");
    printf("*  2. Sauvegarder les donnees                                       *\n");
    printf("*  3. Paramètres                                                    *\n");
    printf("*  4. Quitter                                                       *\n");
    printf("*                                                                   *\n");
    printf("*********************************************************************\n");
}

void afficheMenu() {
	system("clear");
    afficheTitre();
    afficheBienvenue();
    afficheOptions();
}

int main() {
    // Affichage de l'interface
    afficheMenu();
    return 0;
}