// WAP to implement PUSH and POP operations on a stack.

#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void PUSH(int n){
    if(top == MAX - 1){
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = n;
}

void POP(){
    if(top == -1){
        printf("Stack Underflow\n");
        return;
    }

    printf("Popped element: %d\n", stack[top--]);
}

int main(){
    
    PUSH(10);
    PUSH(20);
    PUSH(30);

    POP();

    return 0;
}