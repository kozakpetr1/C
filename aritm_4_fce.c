#include <stdio.h>
#include <stdlib.h>

void soucet(double param_x, double param_y) {
    printf("%lf + %lf = %lf\n", param_x, param_y, param_x + param_y);
}

double nacti() {
    double hodnota;

    printf("Zadej hodnotu: ");
    scanf("%lf", &hodnota);
    return hodnota;
}

int main() {
    char opakovani = 'a';
    double prom_a, prom_b;

    while (opakovani != 'n') {
        printf("Kalkulacka\n-----------------------------\n");
        prom_a = nacti();
        prom_b = nacti();
        soucet(prom_a, prom_b);

        printf("\nChces opakovat vypocet? [a/n] ");

        do {
            opakovani = (char) getchar();
        } while (opakovani == '\n');

    }
    printf("\nPapa!");

    return (EXIT_SUCCESS);
}