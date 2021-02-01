#include <stdio.h>
#include <stdlib.h>

int main() {
    double prom_a, prom_b, prom_c, soucet_ab, soucet_ac, soucet_bc;

    printf("Kalkulacka\n-----------------------------\n");
    
    printf("Zadej promennou a: ");
    scanf("%lf", &prom_a);

    printf("Zadej promennou b: ");
    scanf("%lf", &prom_b);

    printf("Zadej promennou c: ");
    scanf("%lf", &prom_c);

    soucet_ab = prom_a + prom_b;
    printf("%lf + %lf = %lf\n", prom_a, prom_b, soucet_ab);

    soucet_ac = prom_a + prom_c;
    printf("%lf + %lf = %lf\n", prom_a, prom_c, soucet_ac);

    soucet_bc = prom_b + prom_c;
    printf("%lf + %lf = %lf\n", prom_b, prom_c, soucet_bc);
    return (EXIT_SUCCESS);
}