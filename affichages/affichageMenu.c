#include <stdio.h>
#include <stdlib.h>
#include "affichageMenu.h"

void afficheBienvenue() {
    printf(" _____ _            _____                  _____                           \n");
    printf("/__   \\ |__   ___  /__   \\__      _____   /__   \\_____      _____ _ __ ___ \n");
    printf("  / /\\/ '_ \\ / _ \\   / /\\/\\ \\ /\\ / / _ \\    / /\\/ _ \\ \\ /\\ / / _ \\ '__/ __|\n");
    printf(" / /  | | | |  __/  / /    \\ V  V / (_) |  / / | (_) \\ V  V /  __/ |  \\__ \\\n");
    printf(" \\/   |_| |_|\\___|  \\/      \\_/\\_/ \\___/   \\/   \\___/ \\_/\\_/ \\___|_|  |___/\n");
    printf("   ********/\\************************************************/\\*********\n");
    printf("   *      /  \\                The Two Towers                /  \\       *\n");
    printf("   ******/____\\********************************************/____\\*******\n");
    printf("   *     |    |                                            |    |      *\n");
    printf("   *     |    |            Bienvenue dans The Two Towers   |    |      *\n");
    printf("   *     |    |                                            |    |      *\n");
    printf("   *********************************************************************\n");
}

void afficheOptions() {
    printf("   *  Options disponibles :                                            *\n");
    printf("   *                                                                   *\n");
    printf("   *  1. Commencer la simulation manuelle                              *\n");
    printf("   *  2. Commencer la simulation automatique                           *\n");
    printf("   *  3. Sauvegarder les donnees                                       *\n");
    printf("   *  4. Quitter                                                       *\n");
    printf("   *                                                                   *\n");
    printf("   *********************************************************************\n");
}

void afficheMenu(Parking parking,Parking ciel,Piste piste1,Piste piste2,Piste piste3) {
    int choix = 0;
	system("clear");
    afficheBienvenue();
    afficheOptions();
    printf("Votre choix est: ");
    scanf("%d", &choix);
    if (choix == 1)
    {
        traitement(parking,ciel,piste1,piste2,piste3);
    }
}
