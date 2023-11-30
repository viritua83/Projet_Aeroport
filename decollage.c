#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void printSpaces(int count) {
    for (int i = 0; i < count; ++i) {
        printf(" ");
    }
}

void animDecollage() {
    system("clear");

    for (int i = 0; i < 10; ++i) {
        system("clear");

        for (int j = 0; j < 10; ++j) {
            printf("\n");
        }

        printSpaces(i);
        printf("🛫\n");
        printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
        usleep(150000);
    }

    for (int i = 0; i < 10; ++i) {
        system("clear");

        for (int u = 0; u < 10 - i; ++u) {
            printf("\n");
        }

        printSpaces(i);
        printf("          ✈️\n");

        for (int k = 0; k < i; ++k) {
            printf("\n");
        }
        printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
        usleep(125000);
    }
}

int main() {
    animDecollage();
    return 0;
}
