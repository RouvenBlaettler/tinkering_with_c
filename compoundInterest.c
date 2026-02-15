#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>


int main() { // && || !

    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("How many rows: ");
    scanf("%d", &rows);
    printf("How many columns: ");
    scanf("%d", &columns);
    printf("What symbol: ");
    scanf(" %c", &symbol);

    for(int j = 1; j <= rows; j++){
        for(int i = 1; i <= columns; i++){
        printf("%c", symbol);
    }
        printf("\n");
    }

    

    return 0;
}
