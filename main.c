#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./avions/avion.h"
#include "./parking/parking.h"
#include "./pistes/piste.h"
#include "./affichages/affichageDonnees.h"
#include "./affichages/animations.h"
#include "./traitement/traitement.h"


int main()
{
    
    animeDLigne();
    animeALigne();
    animeDAffaire();
    animeAAffaire();
    animeDLeger();
    animeALeger();

    return 0;
}