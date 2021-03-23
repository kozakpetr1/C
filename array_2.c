/* 
 * File:   array_2.c
 * Author: petr.kozak
 * Description: Hazeni kostkou
 * 
 * Created on 22. brezna 2021, 19:40
 * .\hodkostkou.exe
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int i;
    time_t cas;
    int hody[10];

    printf("10 hodu kostkou\n----------------------------\n");
    // Inicializace generatoru nahodnych cisel
    srand((unsigned) time(&cas));

    // Vygenerovani a vypis 10 hodu kostkou
    // rand() vraci pseudo-nahodne cele cislo od 0 do RAND_MAX, tj. 32767
    for(i = 0; i < 10; i++) {
        hody[i] = rand() % 6 + 1;
        printf("%d. hod kostkou ma hodnotu %d.\n", i+1, hody[i]);
    }
   
    return(0);
}