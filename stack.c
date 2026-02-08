 
#include <stdio.h>



#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void init(Stack *s){
    s->top = -1;
}

int push(Stack *s, int value){
    if (s->top == MAX_SIZE-1){
        return -1;
    }
    s->top ++;
    s->data[s->top] = value;
    return 0;

}

int pop(Stack *s, int *popped_value){
    if (s->top == -1){
        return -1;
    }
    *popped_value = s->data[s->top];
    s->top --;

}

int main(){
    Stack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);

    int value;
    pop(&s, &value);
    printf("Popped: %d\n", value);
    pop(&s, &value);
    printf("Popped: %d\n", value);

    if(pop(&s, &value) == -1){
        printf("Underflow handled\n");
    }
    return 0;
}