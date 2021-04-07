/* 
 * File:   array_4.c
 * Author: petr.kozak
 * Description: Manipulace s prvky pole
 * 
 * Created on 25. brezna 2021, 12:55
 * .\pole.exe
 */

#include <stdio.h>

int main () {
    int i;
    int pole[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int kopie[10];

//    i = pole[1];
//    i = pole[2] + pole[3];

//    i = pole[0];
//    pole[0] = pole[9];
//    pole[9] = i; 

    kopie[0] = pole[0];
    kopie[1] = pole[1];
    kopie[2] = pole[2];
    kopie[3] = pole[3];
    kopie[4] = pole[4];
    kopie[5] = pole[5];
    kopie[6] = pole[6];
    kopie[7] = pole[7];
    kopie[8] = pole[8];
    kopie[9] = pole[9];

    for(i = 0; i < 10; i++) {
        kopie[i] = pole[i];
    }

    return(0);
}