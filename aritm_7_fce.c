/* 
 * File:   aritm_7_fce.c
 * Author: petr.kozak
 * Description: Absolute Value of the Number
 *              Absolutni hodnota cisla
 * 
 * Created on 11. února 2021, 8:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Function: double absoluteValue(double)
 * Descpription: Funkce vraci absolutni hodnotu vstupniho parametru.
 */
double absoluteValue(double param) {
    return (param < 0) ? -param : param;
}

/*
 * Function: double getValue()
 * Descpription: Funkce vraci hodnotu nactenou ze standardniho vstupu.
 */
double getValue() {
    double myValue;

    printf("Zadej hodnotu: ");
    scanf("%lf", &myValue);
    return myValue;
}

/*
 * Function: char doItAgain()
 * Descpription: Funkce nacita znak ze standardniho vstupu.
 */
char doItAgain() {
    char local_var;

    printf("\nChces opakovat? [a/n] ");
    do {
        local_var = (char) getchar();
    } while (local_var == '\n');
    return local_var;
}

/*
 * Function: void headerInfo()
 * Descpription: Funkce vycisti konzoli a zobrazi uvodni info.
 */
void headerInfo() {
    system("cls");
    printf("Absolutni hodnota cisla\n-----------------------------\n");
}

/*
 * Function: void footerInfo()
 * Descpription: Funkce vycisti konzoli a zobrazi zaverecne info.
 */
void footerInfo() {
    system("cls");
    printf("\nDiky za pouziti meho programku!\n");
    printf("Navstiv take <https://github.com/kozakpetr1/C>.\n");
    printf("Konzultuj na <Teams | CHAT> nebo <Teams | Prispevky>.\n");
    printf("e-mail: petr.kozak@skolavdf.cz\n\n");
}

/*
 * Function: int main()
 * Descpription:    Funkci main() je spusteno provadeni programu.
 *                  Ma ji kazdy program v jazyce C.
 */
int main() {
    // definice globalni promenne opakovani typu char
    char opakovani = 'a';

    // iterace zajistujici opakovani programu
    while (opakovani != 'n') {
        // volani funkce pro zobrazeni uvodnich informaci
        headerInfo();
        // nacteni hodnoty a zobrazeni absolutni hodnoty
        printf("Absolutni hodnota zadaneho cisla je %lf.\n", absoluteValue(getValue()));
        // volani funkce pro nacteni znaku pro overeni opakovani programu
        opakovani = doItAgain();
    }
    // volani funkce pro zobrazeni zaverecnych infomaci pred ukoncenim programu
    footerInfo();
    
    return (EXIT_SUCCESS);
}