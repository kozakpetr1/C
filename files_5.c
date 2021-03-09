/* 
 * File:   files_5.c
 * Author: petr.kozak
 * Description: Zapis retezce do souboru
 * 
 * Created on 9. brezna 2021, 7:40
 */

#include <stdio.h>

#define ZAPIS_NA_KONEC "w+"

char doItAgain() {
    char local_var;

    printf("\nChces opakovat? [a/n] ");
    do {
        local_var = (char) getchar();
    } while (local_var == '\n');
    return local_var;
}

int main(int argc, char *argv[], char **envp)  {

    FILE *fw;
    char *text;
    char opakovani;


    // otevreni souboru pro zapis
    fw = fopen(argv[1], ZAPIS_NA_KONEC);

    // osetreni chyby pri otevirani souboru
    if (fw == NULL) {
        printf("Cilovy soubor %s nelze otevrit.\n", argv[1]);
        return(-1);
    }

    printf("Zapis retezce do souboru.\n-----------------\nZadej retezec:");
    while (opakovani != 'n') {
        printf("Zadej retezec:");
        scanf("%s", text);
        fprintf(fw, text);
        opakovani = doItAgain();
    }

    // uzaverni souboru
    fclose(fw);
 
    printf("\nHotovo.\n");
    return (0);
}