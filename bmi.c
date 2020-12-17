#include <stdio.h>
#include <stdlib.h>

int main() {
    double vyska, vaha, bmi;
    
    printf("BMI\n---\n");
    printf("Zadej svou výšku v m > ");
    scanf("%lf", &vyska);
    if (vyska <=0 ) {
        printf("Výška musí být kladné číslo.\n");
        return (1);
    }
    printf("Zadej svou váhu v kg > ");
    scanf("%lf", &vaha);
    if (vaha <=0 ) {
        printf("Váha musí být kladné číslo.\n");
        return (1);
    }

    bmi = vaha / (vyska * vyska);
    printf ("Váš BMI je %lf.\n", bmi);
    
    return (EXIT_SUCCESS);
}
