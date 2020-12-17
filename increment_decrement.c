#include <stdio.h>
#include <stdlib.h>

int main() {
    double cislo;
    
    printf("Zadej číslo > ");
    scanf("%lf", &cislo);
/*    
    if (cislo > 0) cislo--;
    else if (cislo < 0) cislo++;
    else cislo = 0;
*/    
    cislo = (cislo > 0) ? --cislo : ((cislo < 0) ? ++cislo : cislo);

    printf("%lf", cislo);
    return (EXIT_SUCCESS);
}
