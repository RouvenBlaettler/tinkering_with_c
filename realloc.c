#include <stdio.h>
#include <stdlib.h>

int main(){



    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));

    if(prices == NULL){
        printf("Error");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter price number #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    int newNumber = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, sizeof(float) * newNumber);

    if(temp == NULL){
        printf("error");
    }
    else{
        prices = temp;
        temp = NULL;

        for(int i = number; i < newNumber; i++){
        printf("Enter price number #%d: ", i + 1);
        scanf("%f", &prices[i]);
         }



        for(int i = 0; i < newNumber; i++){
            printf("$%.2f ", prices[i]);
        }

   

    }

    printf("\n");
    free(prices);
    prices = NULL;
    
    return 0;
}