/* 
 * File:   bubble_sort.c
 * Author: petr.kozak
 * Description: Bubble Sort
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

#define ARRCNT      20      // pocet prvku pole
#define VALRANGE    100     // rozsah hodnot prvku od 1 do VALRANGE
#define SWAPASC     1       // vzestupne probublavani
#define SWAPDESC    1       // sestupne probublavani
#define NOSWAP      0       // zadne probublavani

int main(int argc, char *argv[], char **envp)  {
/*
 * i, j         iteratory
 * swap         pomocna promenna pro probublavani
 * swapNumsAsc  SWAPASC = probublat vzestupne, NOSWAP = neprobublavat
 * swapNUmsDesc SWAPDESC = probublat sestupne, NOSWAP = neprobublavat
 * order        "a" = vzestupne trideni, "d" = sestupne trideni
 * arrayOfNums  pole hodnot typu int o ARRCNT prvcich
 */
    int i, j, swap, swapNumsAsc = NOSWAP, swapNumsDesc = NOSWAP;
    char order = 'a';
    int arrayOfNums[ARRCNT];
    time_t iTime;

/*
 * Zjisteni hodnoty parametru a nasteveni smeru trideni.
 * Je-li hodnota parametru rovna "d", provede se trideni
 * pole sestupne, jinak vzestupne.
 */
    if (argc == 2) {
        printf("%s", argv[1]);
        order = (strcmp(argv[1], "d") == 0) ? 'd' : 'a';
        printf("%c", order);
    }

/* Vlozeni pseudonahodnych cisel o rozsahu 1..VALRANGE do pole o ARRNCT prvcich. */
    srand((unsigned) time(&iTime));
    for(i = 0; i < ARRCNT; i++) {
        arrayOfNums[i] = rand() % VALRANGE + 1;
    }

/* Vypis hodnot pole */
    for(i = 0; i < ARRCNT; i++) {
        printf("%d ", arrayOfNums[i]);
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
    for(i = 0; i < ARRCNT; i++) {
        printf("%d ", arrayOfNums[i]);
    }
    printf("\n");

    return 0;
}
