/* 
 * File:   array_param.c
 * Author: petr.kozak
 * Description: Pole jako parametr ve funkcich
 * 
 * Created on 20. dubna 2021
 */

#include <stdio.h>

void priradHodnotu(double p[], int pozice, double hodnota) {
    p[pozice] = hodnota;
}

int main() {
    double pole[5] = {0, 1, 2, 3, 4};

    // pole[3] = 7.1;
    priradHodnotu(pole, 3, 7.1);
    printf ("%lf", pole[3]);

    return(0);
}