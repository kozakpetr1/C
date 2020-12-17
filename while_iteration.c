#include <stdio.h>
#include <stdlib.h>

int main() {
    char znak = 'a';
    while (znak != 'n') {
        printf("Pocitam ...\n");
        printf("Chces opakovat vypocet? [a/n] ");
        do {
            znak = (char) getchar();
        } while (znak == '\n');
    }
    printf("Pápá!");
    return (EXIT_SUCCESS);
}
