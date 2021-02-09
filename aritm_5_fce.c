#include <stdio.h>
#include <stdlib.h>

double nacti() {
    double hodnota;

    printf("Zadej hodnotu: ");
    scanf("%lf", &hodnota);
    return hodnota;
}

void porovnani(double param_x, double param_y) {
    printf("Vetsi cislo je %lf.\n", (param_x > param_y) ? param_x : param_y);
}

int main() {
    char opakovani = 'a';
    double prom_a, prom_b;

    while (opakovani != 'n') {
        printf("Porovnani  dvou cisel\n-----------------------------\n");
        prom_a = nacti();
        prom_b = nacti();
        porovnani(prom_a, prom_b);

        printf("\nChces znovu porovnavat? [a/n] ");

        do {
            opakovani = (char) getchar();
        } while (opakovani == '\n');

    }
    printf("\nPapa!");

    return (EXIT_SUCCESS);
}