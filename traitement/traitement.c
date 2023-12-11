#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "traitement.h"



Piste gerePistes(Parking* parking,Parking ciel,Piste piste,int idAvion, int action) //action = 0 atterrissage, 1 décollage, 2 déplace sur piste
{
	if (action == 1)
	{
		piste = decollage(piste,&ciel);
	}
	if (action == 2)
	{
		atterrissage(parking,idAvion,&ciel);
	}
	if (action == 3)
	{
		piste = ajouteAvionSurPiste(piste, idAvion, parking);
	}
	return piste;
}

void traitement(Parking parking,Parking ciel,Piste piste1,Piste piste2,Piste piste3){
    int quitter = 0; // Condition pour arrêter la boucle while

    while (quitter != 1){
        int action = 0;
        int piste = 0;
        int avion = 0;

        printf("****************************************************\n");
        printf("Veuillez choisir une option parmi celles proposées:\n");
        printf("(1) Créer une base de données\n");
        printf("(2) Gestion de l'aéroport\n");
        printf("(3) Quitter\n");
        printf("Votre choix est: ");
        scanf("%d", &action);

        // Vérification de la saisie utilisateur pour le menu principal
        while (action < 1 || action > 3) {
            printf("Veuillez entrer une valeur correcte: ");
            scanf("%d", &action);
        }

        system("clear");

        switch (action) {
            case 1:
                creerBDD();
                break;

            case 2:
                afficheGlobal(parking, ciel);
                printf("****************************************************\n");
                printf("Veuillez choisir une option parmi celles proposées:\n");
                printf("(1) Gérer piste 1\n");
                printf("(2) Gérer piste 2\n");
                printf("(3) Gérer piste 3\n");
                printf("(4) Retour\n");
                printf("Votre choix est: ");
                scanf("%d", &piste);

                // Vérification de la saisie utilisateur pour la gestion des pistes
                while (piste < 1 || piste > 4) {
                    printf("Veuillez entrer une valeur correcte: ");
                    scanf("%d", &piste);
                }
                system("clear");
                Piste pisteChoisie={0};
            	switch(piste){
                	case 1:
                		pisteChoisie = piste1;
            			break;
                	case 2:
                		pisteChoisie = piste2;
            			break;
      
                	case 3:
                		pisteChoisie = piste3;
            			break;
                	
                	default:
                		break;
                }
                int quitterPiste = 0;
                while (quitterPiste != 1) {
                    printf("****************************************************\n");
                    printf("Veuillez choisir une option parmi celles proposées:\n");
                    printf("(1) Décoller\n");
                    printf("(2) Atterrissage\n");
                    printf("(3) Déplacer un avion sur la piste\n");
                    printf("(4) Retour\n");
                    printf("Votre choix est: ");
                    scanf("%d", &action);

                    // Vérification de la saisie utilisateur pour la gestion des actions sur les pistes
                    while (action < 1 || action > 4) {
                        printf("Veuillez entrer une valeur correcte: ");
                        scanf("%d", &action);
                    }
                    system("clear");

                    if (action == 4) {
                        quitterPiste = 1; // Quitter la boucle de gestion de la piste
                    } 
                    else {
                        printf("****************************************************\n");
                        switch(action){
                        	case 3:
                            	afficheAvionsDisponibles(parking,pisteChoisie.numero);
                                printf("Veuillez choisir l'id de l'avion souhaité:\n");
                                printf("Votre choix est: ");
                                scanf("%d", &avion);
                            	break;
                            case 2:
                            	afficheAvionsDisponibles(ciel,pisteChoisie.numero);
                                printf("Veuillez choisir l'id de l'avion souhaité:\n");
                                printf("Votre choix est: ");
                                scanf("%d", &avion);
                            	break;
                            //LISTE DE TOUS LES AVIONS POUVANTS ETRE DEPLACES SUR LA PISTE
                            // Vérification de la saisie utilisateur pour le type d'avion 
                        }
                        pisteChoisie = gerePistes(&parking,ciel,pisteChoisie, avion, action);

                    }
                }
                break;
            case 3:
                quitter = 1; // Quitter l'application
                break;
        }
    }
}

/*void menu()
{
	int action;
	int quitter = 0; // condition pour arretter la boucle while
	puts("****************************************************");
	puts("Veuillez choisir une option parmis celles proposees:");
	puts("(1) Creer une base de donnee");
	puts("(2) Afficher l'aeroport");
	puts("(3) Quitter");
	scanf("Votre choix est: %d", action);
	system(clear); b  b  

	while (quitter != 1)
	{
		switch(action)
		{
		case 1 :
			creerBDD();
			break;

		case 2 :
			quitter = 0;
			while(quitter != 2)
			{
				afficheGlobal();
				puts("****************************************************");
				puts("Veuillez choisir une option parmis celles proposees:");
				puts("(1) Gerer piste 1");
				puts("(2) Gerer piste 2");
				puts("(3) Gerer piste 3");
				puts("(4) Retour");
				scanf("Votre choix est: %d", action);
				system(clear);

				switch(action)
				{
				case 1 :
					puts("****************************************************");
					puts("Veuillez choisir une option parmis celles proposees:");
					puts("(1) Decoller");
					puts("(2) Atterrissage");
					puts("(3) Deplacer un avion sur la piste");
					puts("(4) Retour");
					scanf("Votre choix est: %d", action);
					system(clear);


					break;

				case 2 :
					puts("****************************************************");
					puts("Veuillez choisir une option parmis celles proposees:");
					puts("(1) Decoller");
					puts("(2) Atterrissage");
					puts("(3) Deplacer un avion sur la piste");
					puts("(4) Retour");
					scanf("Votre choix est: %d", action);
					system(clear);

					

	
					break;

				case 3 :
					puts("****************************************************");
					puts("Veuillez choisir une option parmis celles proposees:");
					puts("(1) Decoller");
					puts("(2) Atterrissage");
					puts("(3) Deplacer un avion sur la piste");
					puts("(4) Retour");
					scanf("Votre choix est: %d", action);
					system(clear);

					switch(action)
					{
						case 1 :
							gererPiste(3, 1);
							break;

						case 2 :
							gererPiste(3, 2);
							break;

						case 3 :
							gererPiste(3, 3);
							break;

						case 4 : // on ne fait rien pour retourner en arriere car quitter = 0 donc boucle while vrai
							break;
					}
					break;

				case 4 :
					quitter == 2
					break;
				}
			}
			break;

		case 3 :
			quitter = 1;
			break;
		}
	}
}*/

// void menu()
// {
// 	int action = 0;
// 	int piste = 0;
// 	int avion = 0;
// 	int quitter = 0; // condition pour arretter la boucle while
// 	while (quitter != 1)
// 	{
// 		puts("****************************************************");
// 		puts("Veuillez choisir une option parmis celles proposees:");
// 		puts("(1) Creer une base de donnee");
// 		puts("(2) Gestion de l'aeroport");
// 		puts("(3) Quitter");
// 		scanf("Votre choix est: %d\n", action);

// 		while(action != 1 || action != 2 || action != 3)
// 		{
// 			scanf("Veuillez entrer une valeur correcte: %d\n", action);
// 		}

// 		system(clear); 

// 		switch(action)
// 		{
// 		case 1 :
// 			creerBDD();
// 			break;

// 		case 2 :
// 			afficheGlobal();
// 			puts("****************************************************");
// 			puts("Veuillez choisir une option parmis celles proposees:");
// 			puts("(1) Gerer piste 1");
// 			puts("(2) Gerer piste 2");
// 			puts("(3) Gerer piste 3");
// 			puts("(4) Retour");
// 			scanf("Votre choix est: %d", piste);

// 			while(piste != 1 || piste != 2 || piste != 3 || piste != 4)
// 			{
// 				scanf("Veuillez entrer une valeur correcte: %d\n", piste);
// 			}
// 			system(clear);

// 			while(quitter !=2)
// 			{
// 				if (piste == 1 || piste == 2 || piste == 3)
// 				{
// 					puts("****************************************************");
// 					puts("Veuillez choisir une option parmis celles proposees:");
// 					puts("(1) Decoller");
// 					puts("(2) Atterrissage");
// 					puts("(3) Deplacer un avion sur la piste");
// 					puts("(4) Retour");
// 					scanf("Votre choix est: %d\n", action);

// 					while(action != 1 || action != 2 || action != 3 || action != 4)
// 					{
// 						scanf("Veuillez entrer une valeur correcte: %d\n", action);
// 					}
// 					system(clear);

// 					while(quitter != 3)
// 					{
// 						if (action == 2 || action == 3)
// 						{
// 							puts("****************************************************");
// 							puts("Veuillez choisir le type d'avion shouaite:");
// 							puts("(1) Leger");
// 							puts("(2) Affaire");
// 							puts("(3) Ligne");
// 							puts("(4) Retour");
// 							scanf("Votre choix est: %d\n", avion);

// 							while(avion != 1 || avion != 2 || avion != 3 || avion != 4)
// 							{
// 								scanf("Veuillez entrer une valeur correcte: %d\n", avion);
// 							}
// 							system(clear);

// 							if(avion == 1 || avion == 2 || avion == 3)
// 							{
// 								gerePistes(piste, avion, action-2);
// 							}
// 							else
// 							{
// 								quitter = 3;
// 							}
// 						}

// 						else if (action == 1)
// 						{
// 							gerePistes(piste, 0, action); // 0 pour que gerer pistes affiches les id avions si le parametre avion n'est pa à 0;
// 						}

// 						else
// 						{
// 							quitter = 3;
// 						}
// 					}

// 				}
// 				else
// 				{
// 					quitter = 2;
// 				}
// 			}
// 			break;

// 		case 3 :
// 			quitter = 1;
// 			break;
// 		}
// 	}
// }