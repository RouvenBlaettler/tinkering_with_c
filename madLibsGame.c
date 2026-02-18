#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char questions[][100] = {"What is the largest planet in the solar system",
                            "What is the hottest planet?",
                            "What planet has the most moons?"};
    
    char options[][100] = {"A. Jupyter\nB. Saturn\nC. Uranus\nD. Neptune\n", 
                            "A. Jupyter\nB. Venus\nC. Uranus\nD. Neptune\n",
                            "A. Jupyter\nB. Earth\nC. Uranus\nD. Saturn\n"};

    char answerKey[] = {'A', 'B', 'D'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';

    int score = 0;


    printf("QUIZ GAME");

    for(int i = 0; i  < questionCount; i++){
        printf("%s\n", questions[i]);
        printf("%s", options[i]);
        printf("Enter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answerKey[i]){
            printf("Correct\n");
            score++;
        }
        else{
            printf("Wrong\n");
        }
    }
    printf("\nYour score is %d out of %d\n", score, questionCount);
    

    return 0;
}