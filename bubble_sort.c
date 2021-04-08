/* 
 * File:   bubble_sort.c
 * Author: petr.kozak
 * Description: Bubble Sort - vzestupne nebo sestupne trideni hodnot pole
 * 
 * Created on 7. dubna 2021
 * 
 * gcc bubble_sort.c -o bsort.exe
 * 
 * ./bsort.exe      seradi pole vzestupne (Ascendent Order)
 * ./bsort.exe d    seradi pole sestupne (Descendent Order)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ARRCNT      15      // pocet prvku pole
#define VALRANGE    100     // rozsah hodnot prvku od 1 do VALRANGE
#define SWAPASC     1       // vzestupne probublavani
#define SWAPDESC    1       // sestupne probublavani
#define NOSWAP      0       // zadne probublavani

int main(int argc, char *argv[], char **envp)  {
/*
 * i, j         iteratory (pocitadla v cyklech)
 * swap         pomocna promenna pro probublavani
 * swapNumsAsc  SWAPASC = probublat vzestupne, NOSWAP = neprobublavat
 * swapNumsDesc SWAPDESC = probublat sestupne, NOSWAP = neprobublavat
 * order        'a' = vzestupne trideni, 'd' = sestupne trideni
 * arrayOfNums  pole hodnot typu int o ARRCNT prvcich
 */
    int i, j, swap, swapNumsAsc = NOSWAP, swapNumsDesc = NOSWAP;
    char order = 'a';
    int arrayOfNums[ARRCNT];
    time_t iTime;

    system("cls");
    printf("\nBUBBLE SORT ALGORITHM\n---------------------\n");
/*
 * Zjisteni hodnoty parametru a nastaveni smeru trideni.
 * Je-li hodnota parametru rovna "d", provede se trideni
 * pole sestupne, jinak vzestupne.
 */
    if (argc == 2) {
        order = (strcmp(argv[1], "d") == 0) ? 'd' : 'a';
    }

    if (order == 'a')
        printf("You asked me to sort a random array in ASCENDING order.\n\n");
    else
        printf("You asked me to sort a random array in DESCENDING order.\n\n");

/* Vlozeni pseudonahodnych cisel o rozsahu 1..VALRANGE do pole o ARRNCT prvcich. */
    srand((unsigned) time(&iTime));
    for(i = 0; i < ARRCNT; i++) {
        arrayOfNums[i] = rand() % VALRANGE + 1;
    }

/* Vypis hodnot indexu */
    printf("  INDEX|");
    for(i = 0; i < ARRCNT; i++) printf("%3d|", i); printf("\n");
    printf("-------|");
    for(i = 0; i < ARRCNT; i++) printf("---|"); printf("\n");

/* Vypis hodnot pole */
    printf(" RANDOM|");
    for(i = 0; i < ARRCNT; i++) {
        printf("%3d|", arrayOfNums[i]);
    }
    printf("\n");

/*
 * Traversovani pole hodnot a postupne prohazovani
 * hodnot sousednich prvku v poli.
 */
    for (i = 0; i < ARRCNT - 1; i++) {
        for (j = 0 ; j < ARRCNT - i - 1; j++) {
            swapNumsAsc = (order == 'a' && arrayOfNums[j] > arrayOfNums[j + 1]) ? SWAPASC : NOSWAP;   
            swapNumsDesc = (order == 'd' && arrayOfNums[j] < arrayOfNums[j + 1]) ? SWAPDESC : NOSWAP;
            if (swapNumsAsc == 1 || swapNumsDesc == 1) {
                swap = arrayOfNums[j];
                arrayOfNums[j] = arrayOfNums[j + 1];
                arrayOfNums[j + 1] = swap;
            }
        }
    }

/* Vypis hodnot pole */
    printf(" SORTED|");
    for(i = 0; i < ARRCNT; i++) {
        printf("%3d|", arrayOfNums[i]);
    }
    printf("\n\n");

    return 0;
}
