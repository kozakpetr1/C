/* 
 * File:   array_5.c
 * Author: petr.kozak
 * Description: Pocet prvku v poli
 * 
 * Created on 6. dubna 2021
 * .\sizeofarray.exe
 */

#include <stdio.h>

/* #define VEL 10 */

int main () {
    int pocet;
    int pole[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

/*    velikost = sizeof(pole) / sizeof(pole[0]); */
    pocet = sizeof(pole) / sizeof(int);
}