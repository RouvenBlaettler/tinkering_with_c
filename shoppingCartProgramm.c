#include <stdio.h>

int main() {
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    printf("What is the price for each?: ");
    scanf("%f", &price);
    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s for a total of %.2f", quantity, item, total);
    printf("%c%.2f\n",currency, total);


    return 0;
}