#include <stdio.h>
#include <string.h>

typedef struct phoneRecords {
    char Brand[20];
    char phType[60];
    int cntCPU;
    int phMEM;
} Phone;

void addPhone(Phone *x, int pos, char Brand[20], char phType[60], int cntCPU, int phMEM) {
    strcpy(x[pos].Brand, Brand);
    strcpy(x[pos].phType, phType);
    x[pos].cntCPU = cntCPU;
    x[pos].phMEM = phMEM;
}

void showPhone(Phone *x, int pos) {
    printf("Phone: %s, %s, %d, %d\n", x[pos].Brand, x[pos].phType, x[pos].cntCPU, x[pos].phMEM);
}

int main() {
    Phone p[10];

    addPhone(p, 0, "Xiaomi", "RedMi Note 8 Pro", 6, 128);
    addPhone(p, 1, "Samsung", "Galaxy S21", 8, 128);
    showPhone(p, 0);
    showPhone(p, 1);
}