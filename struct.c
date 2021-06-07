#include <stdio.h>
#include <string.h>

typedef struct studentRecords {
    char fname[50];
    char sname[50];
    int age;
    float weight;
    float height;
} Student;

int main() {
    Student x[50];

    strcpy(x[0].fname, "Jan");
    strcpy(x[0].sname, "Novak");
    x[0].age = 22;
    x[0].weight = 80.5;
    x[0].height = 182.0;

    printf( "Jmeno    : %s\n", x[0].fname);
    printf( "Prijmeni : %s\n", x[0].sname);
    printf( "Vek      : %d\n", x[0].age);
    printf( "Vaha     : %f\n", x[0].weight);
    printf( "Vyska    : %f\n", x[0].height);
    return 0;
}