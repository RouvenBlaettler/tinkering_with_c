#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>


int main() { // && || !

    srand(time(NULL));
    int min = 50;
    int max = 100;

    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;

    printf("\n%d, %d, %d\n", randomNum1, randomNum2, randomNum3);
    

    return 0;
}
