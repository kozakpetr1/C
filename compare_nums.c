#include <stdio.h>
#include <stdlib.h>

int main() {
    double num_a, num_b;
    
    printf("Porovnání dvou čísel\n");
    printf("--------------------\n");

    printf("Zadej první číslo > ");
    scanf("%lf", &num_a);

    printf("Zadej druhé číslo > ");
    scanf("%lf", &num_b);

    if (num_a > num_b) {
        printf("Číslo %lf je větší než číslo %lf.", num_a, num_b);
    } else if (num_a < num_b) {
        printf("Číslo %lf je menší než číslo %lf.", num_a, num_b);
    } else {
        printf("Číslo %lf je rovno číslu %lf.", num_a, num_b);
    }
    
    return (EXIT_SUCCESS);
}
