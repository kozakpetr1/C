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
    double prom_a, prom_b, prom_c;

    printf("Kalkulacka\n-----------------------------\n");
    
    prom_a = nacti();
    prom_b = nacti();
    prom_c = nacti();

    soucet(prom_a, prom_b);
    soucet(prom_a, prom_c);
    soucet(prom_b, prom_c);

    return (EXIT_SUCCESS);
}