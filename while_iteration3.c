#include <stdio.h>
#include <stdlib.h>

int main() {
    char znak = 'a';
    while (znak != 'n') {
        printf("Počítám ...\n");
        printf("Chceš opakovat výpočet? [a/n] ");
        znak = (char) getchar();
/*        fflush(stdin);*/
    }
    printf("Pápá!");
    return (EXIT_SUCCESS);
}
