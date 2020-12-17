#include <stdio.h>
#include <stdlib.h>

void getMyChar(char *zn) {
    do {
        *zn = (char) getchar();
    } while (*zn == '\n');
}

int main() {
    char znak = 'a';
    
    while (znak != 'n') {
        printf("Počítám ...\n");
        printf("Chceš opakovat výpočet? [a/n] ");
        getMyChar(&znak);
    }
    printf("\Pápá!");
    return (EXIT_SUCCESS);
}
