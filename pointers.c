/* 
 * File:   pointers.c
 * Author: petr.kozak
 * Description: Uvod do ukazatelu
 * 
 * Created on 22. dubna 2021
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int var_a = 5, var_b = 0;
    int *p_b;


    system("cls");
    printf("Uvod do ukazatelu\n-----------------\n");

    p_b = &var_a; // do pointeru p_b vlož adresu proměnné var_a

    printf("\e[1;32mint var_a = 5, var_b = 0;\e[0m\n");
    printf("\e[1;32mint *p_b;\e[0m\n\n");

    printf("\e[1;33mp_b = &var_a;\e[0m\n");
    printf("Adresa ulozena v pointeru \e[1;32mp_b\e[0m:                   %#010x\n", p_b);
    printf("Hodnota lezici na adrese ulozene v pointeru \e[1;32mp_b\e[0m: %d\n", *p_b);
    printf("Promenna \e[1;32mvar_a\e[0m lezi na adrese:                   %#010x\n", &var_a);
    printf("Hodnota ulozena v promenne \e[1;32mvar_a\e[0m:                %d\n", var_a);

    var_b = (int) p_b;

    printf("\n\e[1;33mvar_b = (int) p_b;\n\e[0m");
    printf("Hodnota ulozena v promenne \e[1;32mvar_b\e[0m:                %d\n\n", var_b);

    p_b = &var_b; // do pointeru p_b vlož adresu proměnné var_b

    printf("\e[1;33mp_b = &var_b;\e[0m\n");
    printf("Adresa ulozena v pointeru \e[1;32mp_b\e[0m:                   %#010x\n", p_b);
    printf("Hodnota lezici na adrese ulozene v pointeru \e[1;32mp_b\e[0m: %d\n", *p_b);
    printf("Promenna \e[1;32mvar_b\e[0m lezi na adrese:                   %#010x\n", &var_b);
    printf("Hodnota ulozena v promenne \e[1;32mvar_b\e[0m:                %d\n", var_b);

    return(0);
}