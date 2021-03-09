/* 
 * File:   files_3.c
 * Author: petr.kozak
 * Description: Zobrazeni obsahu souboru
 * 
 * Created on 8. brezna 2021, 8:10
 */

#include <stdio.h>

#define JMENO_SOUBORU "test.txt"
#define CTENI "r"

int main() {
    FILE *fr;
    char znak;

    // otevreni souboru pro cteni
    fr = fopen(JMENO_SOUBORU, CTENI);

    // osetreni chyby pri otevirani souboru
    if (fr == NULL) {
        printf("Soubor nelze otevrit.\n");
        return(-1);
   }
    // cteni ze souboru a zobrazeni po znacich
    znak = (char) fgetc(fr);
    while (!feof(fr)) {
        printf("%c", znak);
        znak = (char) fgetc(fr);
    }
    // uzaverni souboru
    fclose(fr);
 
    return (0);
}