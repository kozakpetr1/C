/* 
 * File:   pointers_2.c
 * Author: petr.kozak
 * Description: Ukazatel pro predani adresy promenne pomoci parametru funkce
 * 
 * Created on 22. dubna 2021
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZEOF(arr) (sizeof(arr) / sizeof(arr[0])) // definice makra pro vypocet poctu prvku pole
#define ASC         0       // vzestupne probublavani
#define DESC        1       // sestupne probublavani

/*
 * Function: double sectiDveCisla(double, double)
 * Descpription: Funkce vraci soucet hodnot 2 parametru.
 */
double sectiDveCisla(double c1, double c2) {
    return c1 + c2;
}

/*
 * Function: void sectiDveCisla2(double, double, double *)
 * Descpription: Funkce preda soucet 2 parametru na adresu predane promenne.
 */
void sectiDveCisla2(double c1, double c2, double *vysledek) {
    *vysledek = c1 + c2;
}

/*
 * Function: void sectiPoleCisel(double *, int, double *)
 * Descpription: Funkce secte hodnoty 
 * predaneho pole s danym poctem prvku
 * na adresu predane promenne.
 * 
 * Skutecnost:
 * void sectiPoleCisel(double *p, int pocet, double *vysledek)
 */
void sectiPoleCisel(double p[], int pocet, double *vysledek) {
    int i;

    *vysledek = 0;
    for(i = 0; i < pocet; i++) *vysledek += p[i];
}

// Ukol pro vsechny. Dopln kod funkce, ktera vypise hodnoty pole oddelene mezerou.
void vypisHodnotPole(double p[], int pocet) {
    int i;

    for(i = 0; i < pocet; i++) printf("%.1lf ", p[i]);
    printf("\n");
}

// Ukol pro vsechny. Dopln kod funkce pro vypocet prumeru vsech hodnot v poli.
void prumerHodnotPole(double p[], int pocet, double *vysledek) {
    sectiPoleCisel(p, pocet, vysledek);
    *vysledek = *vysledek / pocet;
    // *vysledek /= pocet;
}

// Ukol pro vsechny. Dopln kod pro fuknci, ktera vrati nejmensi hodnotu v poli.
double minPole(double p[], int pocet) {
    double min;
    int i;

    min = p[0];
    for(i = 1; i < pocet; i++) {
        if (min > p[i]) min = p[i];
    }
    return min;
}

// Ukol pro vsechny. Dopln kod pro fuknci, ktera vrati nejvetsi hodnotu v poli.
double maxPole(double p[], int pocet) {
    double max;
    int i;

    max = p[0];
    for(i = 1; i < pocet; i++) {
        if (max < p[i]) max = p[i];
    }
    return max;
}

// Pouze pro odvazne. Dopln kod pro funkci, ktera provede serazeni prvku v poli ASC nebo DESC.
void bubbleSort(double p[], int pocet, int smer) {

}

int main() {
    double a = 10, b = 20, c, prumer = 0, suma = 0;
    double pole[10] = {-10.1, 15.0, -21.9, 17.4, 13.6, -22.7, 31, -25.2, 29.5, -20.6};

    c = sectiDveCisla(a, b);
    printf("c = %lf\n", c);

    c = 0;
    sectiDveCisla2(a, b, &c);
    printf("c = %lf\n", c);

    vypisHodnotPole(pole, SIZEOF(pole));
    bubbleSort(pole, SIZEOF(pole), ASC);
    vypisHodnotPole(pole, SIZEOF(pole));
    bubbleSort(pole, SIZEOF(pole), DESC);
    vypisHodnotPole(pole, SIZEOF(pole));

    prumerHodnotPole(pole, SIZEOF(pole), &prumer);
    printf("Prumer hodnot pole je %lf.\n", prumer);

    printf("Minimalni hodnota pole je %lf.\n", minPole(pole, SIZEOF(pole)));
    printf("Maximalni hodnota pole je %lf.\n", maxPole(pole, SIZEOF(pole)));

    sectiPoleCisel(pole, SIZEOF(pole), &suma);
    printf("Soucet hodnot pole je %lf.\n", suma);

    return(0);
}
