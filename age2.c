#include <stdio.h>
#include <stdlib.h>

int main() {
    int hound_age, human_age;
    printf("Porovnani stari psa a cloveka\n-----------------------------\nZadej stari psa: ");
    scanf("%d", &hound_age);

    if (hound_age == 1) human_age = 16;
    else if (hound_age == 2) human_age = 24;
    else {
        human_age = 24 + (hound_age - 2) * 4;
    }

    /* human_age = (hound_age == 1) ? 16 : ((hound_age == 2) ? 24 : (hound_age - 2) * 4); */
    printf("Odpovidajici stari cloveka: %d", human_age);
    return (EXIT_SUCCESS);
}