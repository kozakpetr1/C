#include <stdio.h>
#include <stdlib.h>

double soucet(double param_x, double param_y) {
    return param_x + param_y;
}

double nacti() {
    double hodnota;

    printf("Zadej hodnotu: ");
    scanf("%lf", &hodnota);
    return hodnota;
}

int main() {
    double prom_a, prom_b, prom_c, soucet_ab, soucet_ac, soucet_bc;

    printf("Kalkulacka\n-----------------------------\n");
    
    prom_a = nacti();
    prom_b = nacti();
    prom_c = nacti();

    soucet_ab = soucet(prom_a, prom_b);
    printf("%lf + %lf = %lf\n", prom_a, prom_b, soucet_ab);

    soucet_ac = soucet(prom_a, prom_c);
    printf("%lf + %lf = %lf\n", prom_a, prom_c, soucet_ac);

    soucet_bc = soucet(prom_b, prom_c);
    printf("%lf + %lf = %lf\n", prom_b, prom_c, soucet_bc);
    return (EXIT_SUCCESS);
}