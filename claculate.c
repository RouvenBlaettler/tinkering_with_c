#include<stdio.h>
#include<math.h>
#include<stdbool.h>

typedef int Number;
typedef char String[50];
typedef enum{
    MONDAY, TUESDAY, WENDSDAY, THURSDAY, FRIDAY, SATURDAY, SUNNDAY
}days;
typedef struct{
    char name[50];
    int age;
    float price;
}Car;

int main() {
    
    Number x = 7;

    String name = "Bro Code";

    days today = WENDSDAY;

    Car cars[] = {{"turbo", 2025, 1000.00}, {"cleano", 2020, 10500.00}};

    int number = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < number; i++){
        printf("%s, %d, %f\n", cars[i].name, cars[i].age, cars[i].price);
    }


    

    return 0;

    
}