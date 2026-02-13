#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void hbd(char name[], int age){
    printf("Happy Birthday %s %d\n", name, age);
}

int main() { // && || !

    char name[50] = "";
    int age = 0;

    printf("type your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';
    printf("Enter your age: ");
    scanf("%d", &age);
    
    hbd(name, age);
    hbd(name, age);
    hbd(name, age);
    hbd(name, age);

    return 0;

}