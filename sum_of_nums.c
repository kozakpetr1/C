#include <stdio.h>
#include <stdlib.h>

int main() {
    double num_a, num_b, num_c;
    
    printf("Kalkulátor pro součet dvou reálných čísel\n");
    printf("=========================================\n");
    printf("Zadej první číslo:");
    scanf("%lf", &num_a);
    
    printf("Zadej druhé číslo:");
    scanf("%lf", &num_b);

    num_c = num_a + num_b;
    printf("%lf + %lf = %lf\n", num_a, num_b, num_c);
    
    return (EXIT_SUCCESS);
}
