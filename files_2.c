/* 
 * File:   files_2.c
 * Author: petr.kozak
 * Description: Manipulace se soubory
 * 
 * Created on 11. února 2021, 8:10
 */

#include <stdio.h>

// deifinice symbolickych konstant
#define JMENO_SOUBORU "test.txt"
#define ZAPIS "w"

int main() {
    // definice ukazatele (pointeru) na objekt typu FILE
    FILE *fw;

    // otevreni souboru pro zapis
    fw = fopen(JMENO_SOUBORU, ZAPIS);
    // formatovany zapis do souboru
    fprintf(fw, "Ahoj bando!\nJak se vede?\n");
    // uzaverni souboru
    fclose(fw);
 
    return (0);
}