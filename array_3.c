/* 
 * File:   array_3.c
 * Author: petr.kozak
 * Description: Pole prvocisel
 * 
 * Created on 22. brezna 2021, 19:40
 * .\prvocisla.exe
 */

#include <stdio.h>

int main () {
    int i;
    int prvocisla[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

    for(i = 0; i < 10; i++) {
        printf("%d. prvocislo je %d.\n", i+1, prvocisla[i]);
    }
   
    return(0);
}