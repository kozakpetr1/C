/* 
 * File:   files_4.c
 * Author: petr.kozak
 * Description: Kopirovani souboru
 * 
 * Created on 8. brezna 2021, 8:10
 */

#include <stdio.h>

#define ZAPIS "w"
#define CTENI "r"

int main(int argc, char *argv[], char **envp)  {

    FILE *fr, *fw;
    char znak;

    if (argc != 3) { 
        printf("Chybny pocet argumentu.\nPRIKAZ arg1 arg2\narg1 ... zdrojovy soubor\narg2 ... cilovy soubor.\n");
        return(-1);
    }

    // otevreni souboru pro cteni
    fr = fopen(argv[1], CTENI);

    // osetreni chyby pri otevirani souboru
    if (fr == NULL) {
        printf("Zdrojovy soubor %s nelze otevrit.\n", argv[1]);
        return(-1);
    }

    // otevreni souboru pro zapis
    fw = fopen(argv[2], ZAPIS);

    // osetreni chyby pri otevirani souboru
    if (fw == NULL) {
        printf("Cilovy soubor %s nelze otevrit.\n", argv[2]);
        return(-1);
    }

    printf("Kopiruji ze souboru %s do souboru %s.\n", argv[1], argv[2]);

    // cteni ze souboru a zapis po znacich do souboru
    znak = (char) fgetc(fr);
    while (!feof(fr)) {
        fputc(znak, fw);
        znak = (char) fgetc(fr);
    }

    // uzaverni souboru
    fclose(fr);
    fclose(fw);
 
    printf("Kopirovani probehlo uspesne.\n");
    return (0);
}