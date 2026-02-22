#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;
    printf("enter the number of grades: ");
    scanf("%d", &number);


    char *grades = malloc(number * 4);

    if(grades == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    for(int i = 0; i<number; i++){
        printf("%c ", grades[i]);
    }

    free(grades); //returning "rented" space to the OS
    grades = NULL; // avoids dangling pointers
}