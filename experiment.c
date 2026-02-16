#include <stdio.h>

//need to include this to use booleans
#include <stdbool.h>
void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
    int choice = 0;
    float balance = 0.0f;
    printf("\nWELCOME TO THE BANK\n");

    do{
        printf("\nSelect an option:\n");
        printf("\n1. Check balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nThank your for using the bank\n");
                break;

            default:
                printf("\nInvalid choice. Select a number between 1-4\n");
                break;
            }
    }while(choice != 4);

    return 0;
}


void checkBalance(float balance){
    printf("\nYour current balance is: $%.2f\n", balance);
}
float deposit(){
    float amount = 0.0f;
    printf("\nWhat amount would you like to deposit: ");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount\n");
        printf("Enter a valid amount: \n");
        scanf("%f", &amount);
    }
    printf("Successfully deposited $%.2f\n", amount);
    return amount;
}
float withdraw(float balance){
    float amount = 0.0f;
    printf("\nWhat amount would you like to withdraw: ");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount\n");
        printf("Enter a valid amount: \n");
        scanf("%f", &amount);
    }
    else if(amount > balance){
        printf("Invalid amount, you only have %.2f\n", balance);
        printf("Enter a valid amount: \n");
        scanf("%f", &amount);
    }
    printf("Successfully withdrew $%.2f\n", amount);
    return amount;
}