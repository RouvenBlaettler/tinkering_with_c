 
#include <stdio.h>

int stack(void);

int main(void){
    printf("HEllo\n");
    stack();
    return 0;
}

int stack(void){
    int x = 5;
    int* p = &x;
    printf("%d\n", x);
    printf("%p\n", &x);
    *p = 10;
    printf("%d\n", x);
    printf("%p\n", &x);

    return 0;  
}

