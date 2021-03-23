/* 
 * File:   array_1.c
 * Author: petr.kozak
 * Description: Nacteni hodnot do pole
 * 
 * Created on 22. brezna 2021, 19:40
 * .\vypispole.exe arg1 arg2 arg3
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char **envp) {
    // pole 3 hodnot typu int, 1. hodnota ma index 0
    int rada[3];
    int i;

    // kontrola poctu vrtupnich argumentu
    printf("Nacteni hodnot do pole prvku\n----------------------------\n");
    if (argc != 4) { 
        printf("Chybny pocet argumentu.\n");
        return(-1);
    }

    // vypis vsech argumentu na std. vystup
    for(i = 1; i < 4; i++) {
        printf("Hodnota %d. argumentu je pole znaku %s.\n", i, argv[i]);
    }

    // postupny prevod kazdeho argumentu na cele cislo a ulozeni do prvku pole typu int
    for(i = 1; i < 4; i++) {
        rada[i - 1] = atoi(argv[i]);
    }

    // vypis vsech prvku pole typu int
    for(i = 0; i < 3; i++) {
        printf("Hodnota %d. prvku pole je cele cislo %d.\n", i, rada[i]);
    }

    return(0);
}