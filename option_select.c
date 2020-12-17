#include <stdio.h>
#include <stdlib.h>

int main() {
    char znak;
    double a, b, c;
    
    printf("Vyber operaci [+-*/]> ");
    znak = (char) getchar();
    printf("Zadej hodnotu a > ");
    scanf("%lf", &a);
    printf("Zadej hodnotu b > ");
    scanf("%lf", &b);
 
    switch (znak) {
        case '+': c = a + b; printf("Vybral sis sčítání. Výsledek je %lf.", c); break;
        case '-': c = a - b; printf("Vybral sis odčítání. Výsledek je %lf.", c); break;
        case '*': c = a * b; printf("Vybral sis násobení. Výsledek je %lf.", c); break;
        case '/': c = a / b; printf("Vybral sis dělení. Výsledek je %lf.", c); break;
        default: printf("Nevybral sis žádnou z nabízených operací."); 
    }
    return (EXIT_SUCCESS);
}
