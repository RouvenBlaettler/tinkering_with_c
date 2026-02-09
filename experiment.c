#include <stdio.h>

//need to include this to use booleans
#include <stdbool.h>

int main(){

    bool isOnline = true; // 1 == true, 0 == false
    int x = 2;
    float y = 3;
    float z = 0; //you need to change values to floats to get correct result when dividing

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char fullname[30] = "";

    printf("type ur grade:\n");
    scanf("%c", &grade); //& = adress of age //scnaf can't read spaces
    printf(" %c\n", grade); // space means skipping input buffer

    getchar(); //clears input buffer
    printf("enter your full name:");
    fgets(fullname, sizeof(fullname), stdin); //sizeof = 30
    printf("%s", fullname);



    return 0;

}