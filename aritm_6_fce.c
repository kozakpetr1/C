#include <stdio.h>
#include <stdlib.h>

double vypoctiPrumer(double p_a, double p_b, double p_c) {
    return (p_a + p_b + p_c) / 3;
}

int main() {
    double a = 5, b = 3, c = 4, d = 11, prumer;

    prumer = vypoctiPrumer(a, b, c);
    prumer = vypoctiPrumer(3.14, 27.25, -11);
    prumer = vypoctiPrumer(2, 3, 5);
    prumer = vypoctiPrumer(c, a, d);
    prumer = vypoctiPrumer(25, 7, d);
    
    return (EXIT_SUCCESS);
}