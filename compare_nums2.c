#include <stdio.h>
#include <stdlib.h>

int main() {
    double num_a, num_b, num_c;
    
    printf("Výběr většího čísla\n");
    printf("-------------------\n");

    printf("Zadej první číslo > ");
    scanf("%lf", &num_a);

    printf("Zadej druhé číslo > ");
    scanf("%lf", &num_b);
/*
    if (num_a > num_b)
        num_c = num_a;
    else
        num_c = num_b;
*/    
    num_c = (num_a > num_b) ? num_a : num_b;
    
    printf("Větší číslo je %lf.\n", num_c);
    return (EXIT_SUCCESS);
}
