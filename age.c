#include <stdio.h>
#include <stdlib.h>

int main() {
    int hound_age, human_age;

    printf("Porovnani stari psa a cloveka\n-----------------------------\nZadej stari psa: ");
    scanf("%d", &hound_age);
    human_age = hound_age * 7;
    printf("Odpovidajici stari cloveka: %d", human_age);
    return (EXIT_SUCCESS);
}