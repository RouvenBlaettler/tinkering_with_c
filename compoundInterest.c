#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); //function prototype
bool ageCheck(int age);

int main() { // && || !

    hello("Spongebob", 30);

    return 0;
}


void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){
    if(age >= 16){
        return true;
    }
    else{
        return false;
    }
    
}
