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

    printf("\nDalsi radek? [a/n] ");
    do {
        local_var = (char) getchar();
    } while (local_var == '\n');
    fflush(stdin);
    return local_var;
}

int main(int argc, char *argv[], char **envp)  {

    FILE *fw;
    char text[51];
    char opakovani;


    // otevreni souboru pro zapis
    fw = fopen(argv[1], ZAPIS_NA_KONEC);

    // osetreni chyby pri otevirani souboru
    if (fw == NULL) {
        printf("Cilovy soubor %s nelze otevrit.\n", argv[1]);
        return(-1);
    }

    printf("Zapis retezce do souboru.\n---------------------------\n");
    while (opakovani != 'n') {
        printf("Zadej retezec:");
        scanf("%50[^\n]s", text);
        fprintf(fw, "%s\n", text);
        fflush(stdin);
        opakovani = doItAgain();
    }

    // uzaverni souboru
    fclose(fw);
 
    printf("\nHotovo.\n");
    return (0);
}