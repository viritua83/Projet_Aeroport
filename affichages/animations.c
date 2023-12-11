#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "animations.h"


void printSpace(int nbEspaces){
        for (int i = 0; i < nbEspaces; ++i)
        {
           printf(" ");
        }
}

void animeDLigne(){
    system("clear");
    for (int i = 0; i < 35; ++i)
    {
        system("clear");

        for (int j = 0; j < 35-i; ++j)
        {
            puts(" ");
        }
    
        printSpace(i*4);
        puts("__  _                                              ");
        printSpace(i*4);
        puts("\\ `/ |                                             ");
        printSpace(i*4);
        puts(" \\__`!                                             ");
        printSpace(i*4);
        puts(" / ,' `-.______________________________________");
        printSpace(i*4);
        puts("'-'\\_____                                    LI`-. ");
        printSpace(i*4);
        puts("   <____()-=O=O=O=O==0=0=0=0=0=0=0=0=0==O=[]====--)");
        printSpace(i*4);
        puts("     `._____________,-----,_________________...-' ");
        printSpace(i*4);
        puts("                    /    .'                       ") ;                                                  
        printSpace(i*4);
        puts("                   /   .'                        ");                                                  
        printSpace(i*4);
        puts("                  /  .'                         ");                                                   
        printSpace(i*4);
        puts("                  `-'                          ");

        for (int j = 0; j < i; ++j)
        {
            puts(" ");
        }
        usleep (80000);


    }
    puts("L'avion de Ligne a decolle");
    usleep (3000000);

}

void animeDLeger() {
    system("clear");
    for (int i = 0; i < 36; ++i)
    {
        system("clear");

        
        for (int j = 0; j < 36-i; ++j)
        {
            puts(" ");
        }
        printSpace(i*4);
        puts("                   ___");
        printSpace(i*4);
        puts("|~~~\\             /___|        |");
        printSpace(i*4);
        puts("| |  \\________  /’     \\|______:  _   ");
        printSpace(i*4);
        puts("|_|___           \\__  __/  ´´´´´´|_>");
        printSpace(i*4);
        puts("\\_|__/--.   . =========)_____/ :");
        printSpace(i*4);
        puts("         ‘---\\        /        |");
        printSpace(i*4);
        puts("             \\      |");
        printSpace(i*4);
        puts("              \\_____|");
        for (int j = 0; j < i; ++j)
        {
            puts(" ");
        }
        usleep (80000);
    }
    puts("L'avion Leger a decolle !");
    usleep (3000000);
}

void animeALeger() {
    system("clear");
    for (int i = 0; i < 36; ++i)
    {
        system("clear");

        for (int j = 0; j < i; ++j)
        {
            puts(" ");
        }
        printSpace(166-i*4);
        puts("            ____");
        printSpace(166-i*4);
        puts("  |        | ___\\         /~~~|");
        printSpace(166-i*4);
        puts(" _:_______|/'    `\\______/  | |");
        printSpace(166-i*4);
        puts("<_|  \\__  __/      ___|_|     |");
        printSpace(166-i*4);
        puts("  :\\_____(=========,   ,--\\_|_/");
        printSpace(166-i*4);
        puts("  |       \\       /---'");
        printSpace(166-i*4);
        puts("            |     /");
        printSpace(166-i*4);
        puts("            |____/");
        for (int j = 0; j < 36-i; ++j)
        {
            puts(" ");
        }
        usleep (80000);
    }
    puts("L'avion Leger a atterri !");
    usleep (3000000);
}


void animeALigne() {
    system("clear");
    for (int i = 0; i < 33; ++i)
    {
        system("clear");

        for (int j = 0; j < i; ++j)
        {
            puts(" ");
        }
        printSpace(130-i*4);
        puts("                                              _  __");
        printSpace(130-i*4);
        puts("                                             | \\’ /");
        printSpace(130-i*4);
        puts("                                             !  _/");
        printSpace(130-i*4);
        puts("    ______________________________________.-’ ’,  \\  ");
        printSpace(130-i*4);
        puts(" .-‘LI                                    _____/'-'");
        printSpace(130-i*4);
        puts("(--====[]=O=O=O=O==0=0=0=0=0=0=0=0=0==O=-()____>");
        printSpace(130-i*4);
        puts(" '-..._________________,-----,_____________. ’");
        printSpace(130-i*4);
        puts("                       '.    \\") ;                                                  
        printSpace(130-i*4);
        puts("                        '.   \\");                                                  
        printSpace(130-i*4);
        puts("                         '.  \\");                                                   
        printSpace(130-i*4);
        puts("                          `-'");
        for (int j = 0; j < 33-i; ++j)
        {
            puts(" ");
        }
        usleep (80000);
    }
    puts("L'avion de Ligne a atterri !");
    usleep (3000000);
}

void animeAAffaire() {
    system("clear");
    for (int i = 0; i < 33; ++i)
    {
        system("clear");

        for (int j = 0; j < i; ++j)
        {
            puts(" ");
        }
    
        printSpace(130-i*4);
        puts("                                          ______            ==");
        printSpace(130-i*4);
        puts("                                      ___/-~_ /_     ==== =");
        printSpace(130-i*4);
        puts("                                    (|____AA____)== ==");
        printSpace(130-i*4);
        puts("    _..-‘~~~~~~~-.___________________/_____/              ");
        printSpace(130-i*4);
        puts("  _/|  o O o o o o O O o o o o o o O        \\");
        printSpace(130-i*4);
        puts("(                  ..----..___        __.-~ ’    ===       ");
        printSpace(130-i*4);
        puts("  ´´´´´------------\\___________/~~---‘    ====    ");
        printSpace(130-i*4);
        puts("                   (|_________)===  ===== ====            ") ;  
        
        for (int j = 0; j < 33-i; ++j)
        {
            puts(" ");
        } 
        usleep(80000);
    }                                               
        
    puts("L'avion d'Affaire a atterri !");
    usleep (3000000);
}


void animeDAffaire() {
    system("clear");
    for (int i = 0; i < 36; ++i)
    {
        system("clear");

        
        for (int j = 0; j < 36-i; ++j)
        {
            puts(" ");
        }
        printSpace(i*4);
        puts("   ===        ______");
        printSpace(i*4);
        puts("   =  = ==    _\\ _~-\\___");
        printSpace(i*4);
        puts("    =  === ==(____AA____D");
        printSpace(i*4);
        puts("                \\_____\\___________________,-~~~~~~~`-.._");
        printSpace(i*4);
        puts("                /     o O o o o o O O o o o o o o O o  |\\_");
        printSpace(i*4);
        puts("      =        `~-.__        ___..----..                  )");
        printSpace(i*4);
        puts("             ====     `---~~\\___________/------------~~~~~");
        printSpace(i*4);
        puts("             ==    ===  ===(_________D") ;  
        for (int j = 0; j < i; ++j)
        {
            puts(" ");
        }
        usleep (80000);
    }
    puts("L'avion d'Affaires a decolle !");
    usleep (3000000);
}

void joueAnimation(int typeAVion, int animation) {
    // animation = 0 decollage 
    // animation = 1 atterrissage
    if (animation == 0) {
        switch (typeAVion) {
            case 0:
                animeDLeger();
                break;
            case 1:
                animeDAffaire();
                break;
            case 2:
                animeDLigne();
                break;
            default:
                break;
        }
    } else if(animation == 1) {
        switch (typeAVion) {
            case 0:
                animeALeger();
                break;
            case 1:
                animeAAffaire();
                break;
            case 2:
                animeALigne();
                break;
            default:
                break;
        }
    }
}