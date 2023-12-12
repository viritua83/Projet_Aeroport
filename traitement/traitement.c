#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "traitement.h"



void gerePistes(Parking* parking,Parking* ciel,Piste* piste,int idAvion, int action)
{
	if (action == 1)
	{
		decollage(piste,ciel);
	}
	if (action == 2)
	{
		atterrissage(parking,idAvion,ciel, piste);
	}
	if (action == 3)
	{
		ajouteAvionSurPiste(piste, idAvion, parking);
	}
}

void traitement(Parking parking,Parking ciel,Piste piste1,Piste piste2,Piste piste3){
    int quitter = 0; // Condition pour arrêter la boucle while

    while (quitter != 1){
        int action = 0;
        int piste = 0;
        int avion = 0;
        afficheGlobal(parking, ciel, piste1,piste2,piste3);

        printf("****************************************************\n");
        printf("Veuillez choisir une option parmi celles proposees:\n");
        printf("(1) Creer une base de donnees\n");
        printf("(2) Gestion de l'aeroport\n");
        printf("(3) Quitter\n");
        printf("Votre choix est: ");
        scanf("%d", &action);
        // Verification de la saisie utilisateur pour le menu principal
        while (action < 1 || action > 3) {
            printf("Veuillez entrer une valeur correcte: ");
            scanf("%d", &action);
        }
        switch (action) {
            case 1:
                creerBDD();
                system("clear");
                printf("Nouvelle base de donnee crée\n");
                piste1 = creerPiste(1);
				piste2 = creerPiste(2);
				piste3 = creerPiste(3);
                parking = creerListe(0);
                ciel = creerListe(1);
                break;

            case 2:
            	system("clear");
        		afficheGlobal(parking, ciel, piste1,piste2,piste3);
                printf("****************************************************\n");
                printf("Veuillez choisir une option parmi celles proposees:\n");
                printf("(1) Gerer petite piste\n");
                printf("(2) Gerer moyenne piste\n");
                printf("(3) Gerer grande piste\n");
                printf("(4) Retour\n");
                printf("Votre choix est: ");
                scanf("%d", &piste);

                // Verification de la saisie utilisateur pour la gestion des pistes
                while (piste < 1 || piste > 4) {
                    printf("Veuillez entrer une valeur correcte: ");
                    scanf("%d", &piste);
                }
                system("clear");
                int quitterPiste = 0;
                if (piste == 4)
                {
                	quitterPiste = 1;
                }
               	Piste* pisteChoisie = malloc(sizeof(Piste));
            	switch(piste){
                	case 1:
                		pisteChoisie = &piste1;
            			break;
                	case 2:
                		pisteChoisie = &piste2;
            			break;
      
                	case 3:
                		pisteChoisie = &piste3;
            			break;
                	
                	default:
                		break;
                }
                while (quitterPiste != 1) {
                	afficheGlobal(parking, ciel,piste1,piste2,piste3);
                    printf("****************************************************\n");
                    printf("Veuillez choisir une option parmi celles proposees:\n");
                    printf("(1) Decoller\n");
                    printf("(2) Atterrissage\n");
                    printf("(3) Deplacer un avion sur la piste\n");
                    printf("(4) Afficher les donnees de la piste\n");
                    printf("(5) Annuler\n");
                    printf("Votre choix est: ");
                    scanf("%d", &action);

                    // Verification de la saisie utilisateur pour la gestion des actions sur les pistes
                    while (action < 1 || action > 5) {
                        printf("Veuillez entrer une valeur correcte: ");
                        scanf("%d", &action);
                    }
                    system("clear");

                    if (action == 5) {
                        quitterPiste = 1; // Quitter la boucle de gestion de la piste
                    } 
                    else {
                        switch(action){
                        	case 4:
                        		afficheDonneePiste(pisteChoisie);
                        		break;
                        	case 3:
                            	afficheAvionsDisponibles(parking,pisteChoisie->numero);
                                printf("Veuillez choisir l'id de l'avion souhaite:\n");
                                printf("Votre choix est: ");
                                scanf("%d", &avion);
                            	break;
                            case 2:
                            	if (pisteChoisie->longueur > 0)
		                        {
		                        	printf("La piste est occupe\n");
		                        	action = 0;
		                        }
		                        else if (parking.longueur == 30)
		                        {
		                        	printf("Parking plein\n");
		                        	action = 0;
		                        }
		                        else{
		                        	afficheAvionsDisponibles(ciel,pisteChoisie->numero);
                              	  	printf("Veuillez choisir l'id de l'avion souhaite:\n");
                                	printf("Votre choix est: ");
                                	scanf("%d", &avion);
                                	system("clear");
		                        }
                            	break;
                        }
                        if (pisteChoisie->longueur == 2 && action == 3)
                        {
                        	system("clear");
                        	printf("La piste est pleine\n");
                        }
                        else if(action != 4 && action != 0)
                        {
                        	system("clear");
                        	gerePistes(&parking,&ciel,pisteChoisie, avion, action);
                        }
                    }
                }
                break;
            case 3:
                quitter = 1;
                afficheMenu(parking,ciel,piste1,piste2,piste3); // Quitter l'application
                break;
        }
    }
}