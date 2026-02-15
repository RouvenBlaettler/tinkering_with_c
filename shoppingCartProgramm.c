#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main() {
    //NUMBER GUESSING GAME

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max -min + 1)) + min;

    printf("NUMBER GUESSING GAME\n");
    do{
        printf("Make a guess between %d - %d: ", min, max);
        scanf(" %d", &guess);
        tries ++;
        if(guess > answer){
            printf("TOO HIGH!");
        }
        else if(guess < answer){
            printf("TOO LOW!");
        }
        else{
            printf("CORRECT");
        }
        printf("\n");

    }
    while(guess != answer);

    printf("\nThe answer is %d\n", answer);
    printf("You needed %d tries\n", tries);

    



    return 0;
}