#include <stdio.h>

int main(){

int numbers[] = {10, 20, 30, 40, 50};
char grades[] = {'A', 'B', 'C', 'D', 'F', 'G', 'J'};
char name[] = "Bro Code";

int size = sizeof(grades) / sizeof(grades[0]);


for(int i = 0; i < size; i++){
    printf("%c\n", grades[i]);
}




    return 0;
}