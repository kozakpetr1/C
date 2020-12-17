#include <stdio.h>
#include <stdlib.h>

int main() {
    double num;
    
    printf("Kladné číslo\n");
    printf("------------\n");
    printf("Zadej číslo > ");
    scanf("%lf", &num);
    if (num > 0) {
        printf("Číslo %lf je kladné.\n", num);
    }
    else if (num < 0) {
        printf("Číslo %lf je záporné.\n", num);        
    }
    else {
        printf("Číslo je %lf.\n", num);                
    }
    return (EXIT_SUCCESS);
}
