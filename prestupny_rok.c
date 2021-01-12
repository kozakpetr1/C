#include <stdio.h>
#include <stdlib.h>

int main() {
    int year;

    printf("Prestupny rok\n-----------------------\nZadej rok: ");
    scanf("%d", &year);
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("Rok %d je prestupny.", year);
            }
            else {
                printf("Rok %d neni prestupny.", year);
            }
        }
        else {
            printf("Rok %d je prestupny.", year);
        }
    }
    else {
        printf("Rok %d neni prestupny.", year);
    }
    return (EXIT_SUCCESS);
}