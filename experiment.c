#include <stdio.h>

//need to include this to use booleans
#include <stdbool.h>

int main(){

    char name[] = "Yoo i am rouven";
    printf("Hello, %s\n", name);

    bool isOnline = true; // 1 == true, 0 == false
    printf("%d\n", isOnline);

    if(isOnline){
        printf("You are ONLINE\n");
    }
    else{
        printf("you are offline\n");
    }

    return 0;

}