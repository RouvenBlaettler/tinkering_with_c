#include <stdio.h>

int main() {
    
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double res = 0.0;

    printf("THIS IS A CALCULATOR\n");

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator); //clear \n from input buffer

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            res = num1 + num2;
            break;

        case '-':
            res = num1 - num2;
            break;

        case '*':
            res = num1 * num2;
            break;

        case '/':
            if(num2 == 0){
                printf("Can't divide by zero!\n");
            }
            else{
            res = num1 / num2;
            }
            break;

        default:
        printf("Invalid operator\n");
        

    }

    printf("Result: %.4lf\n", res);
    

    return 0;
}