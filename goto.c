#include <stdio.h>
#include <stdlib.h>

int main() {
    char znak = 'a';

    zacatek:
        printf("Počítám ...\n");
        printf("Chceš opakovat výpočet? [a/n] ");
        do {
            znak = (char) getchar();
        } while (znak == '\n');
        if (znak != 'n') goto zacatek;
    konec:
        printf("Pápá!");
        return (EXIT_SUCCESS);
}
