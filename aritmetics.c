#include <stdio.h>
#include <stdlib.h>

int main() {
    double a = 3, b = 3, c = 5, prumer, max;

    prumer = (a + b + c) / 3;
/*    if (a > b && a > c) max = a;
    else if (b > c) max = b;
    else max = c;
*/
    max = (a > b && a > c) ? a : ((b > c) ? b : c);
    printf("%f\n", prumer);
    printf("%f", max);
}

