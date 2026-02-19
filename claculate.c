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
    float gpa;
    bool fullTime;
}Student;

int main() {
    
    Number x = 7;

    String name = "Bro Code";

    days today = WENDSDAY;

    Student peter = {"Peter", 12, 3.3, true};
    Student tim = {0};

    printf("%d\n", today);
    printf("%s\n", peter.name);
    printf("%d\n", peter.age);
    printf("%f\n", peter.gpa);
    printf("%s\n", (peter.fullTime) ? "yes" : "no");
    return 0;

    
}