#include <stdio.h>
#include <stdlib.h>

void afficheTitre() {
    printf(" _____ _            _____                  _____                           \n");
    printf("/__   \\ |__   ___  /__   \\__      _____   /__   \\_____      _____ _ __ ___ \n");
    printf("  / /\\/ '_ \\ / _ \\   / /\\/\\ \\ /\\ / / _ \\    / /\\/ _ \\ \\ /\\ / / _ \\ '__/ __|\n");
    printf(" / /  | | | |  __/  / /    \\ V  V / (_) |  / / | (_) \\ V  V /  __/ |  \\__ \\\n");
    printf(" \\/   |_| |_|\\___|  \\/      \\_/\\_/ \\___/   \\/   \\___/ \\_/\\_/ \\___|_|  |___/\n");
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