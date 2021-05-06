/* 
 * File:   pointers_2.c
 * Author: petr.kozak
 * Description: Uvod do ukazatelu
 * 
 * Created on 22. dubna 2021
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    double a = 10, b = 20, c;
    double *px, *py;

    c = a / b;

    px = &a; // do px vlož adresu proměnné a
    py = &b; // do py vlož adresu proměnné b
    c = *px / *py;
}
