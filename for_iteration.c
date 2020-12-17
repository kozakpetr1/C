#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soucet = 0;
    
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) printf("%d ", i);
    }
    printf("\n");
    for (i = 2; i <= 10; i+=2) {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 1) printf("%d ", i);
    }
    for (i = 1; i <= 10; i++) {
/*
 *      if (i % 2 == 0) soucet += i;
*/        
        if (i % 2 == 1) continue;
        soucet += i;
    }
    printf("\n%d", soucet);
    return (EXIT_SUCCESS);
}
