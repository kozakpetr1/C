#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VALRANGE 100
#define ATTEMPTS 10
#define NUMOFPLAYERS 5

typedef struct RobotRecords {
    int rValue[ATTEMPTS];
} Robot;

typedef struct PlayerRecords {
    int pValue[ATTEMPTS];
    int pDistance[ATTEMPTS];
    int winAttempts[ATTEMPTS];
} Player;

void getArrNumbers(int *a, int amount, int range) {
    int i;

    for (i = 0; i < amount; i++) a[i] = rand() % range + 1;
}

void getArrDistance(int *pV, int *pD, int *r, int amount) {
    int i;

    for (i = 0; i < amount; i++) pD[i] = abs(pV[i] - r[i]);
}

void showArrNumbers(int *a, int amount) {
    int i;

    for (i = 0; i < amount; i++) printf("%4i ", a[i]);
    printf("\n");
}

int getMin(Player *p, int level) {
    int i, minVal = 100;

    for (i = 0; i < NUMOFPLAYERS; i++) minVal = p[i].pDistance[level] < minVal ? p[i].pDistance[level] : minVal;
}

void setLevelWinners(Player *p, int level) {
    int i, minVal;

    minVal = getMin(p, level);
    for (i = 0; i < NUMOFPLAYERS; i++) p[i].winAttempts[level] = p[i].pDistance[level] == minVal ? 1 : 0;
}

int main () {
    int i;
    Robot robotEmil;
    Player player[NUMOFPLAYERS];
    time_t iniTime;

    srand((unsigned) time(&iniTime));
    printf("Level No.  :\n");
    for (i = 0; i < ATTEMPTS; i++) printf("%4i ", i + 1);
    getArrNumbers(robotEmil.rValue, ATTEMPTS, VALRANGE);
    printf("\nRobot Emil :\n");
    showArrNumbers(robotEmil.rValue, ATTEMPTS);
    printf("\nPlayers    :\n");
    for (i = 0; i < NUMOFPLAYERS; i++) getArrNumbers(player[i].pValue, ATTEMPTS, VALRANGE);
    for (i = 0; i < NUMOFPLAYERS; i++) showArrNumbers(player[i].pValue, ATTEMPTS);
    printf("\nDistances   :\n");
    for (i = 0; i < NUMOFPLAYERS; i++) getArrDistance(player[i].pValue, player[i].pDistance, robotEmil.rValue, ATTEMPTS);
    for (i = 0; i < NUMOFPLAYERS; i++) showArrNumbers(player[i].pDistance, ATTEMPTS);
    printf("\nWinners    :\n");
    for (i = 0; i < ATTEMPTS; i++) setLevelWinners(player, i);
    for (i = 0; i < NUMOFPLAYERS; i++) showArrNumbers(player[i].winAttempts, ATTEMPTS);
    return(0);
}