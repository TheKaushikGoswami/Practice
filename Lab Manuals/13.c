// Write a program to implement STACK operations using Array

#include <stdio.h>
#include <string.h>

#define MAX 100
int stack[MAX];
int top = -1;

void push(int data){
    if(top == MAX - 1){
        printf("\nStack Overflow\n");
    }
    else{
        top++;
        stack[top] = data;
    }
}

void pop(){
    if(top == -1){
        printf("\nStack Underflow\n");
        return;
    }
    else{
        int data = stack[top];
        top--;
        printf("\nThe popped element is: %d\n", data);
        return;
    }
}

void display(){
    if(top == -1){
        printf("\nStack is Empty\n");
        return;
    }
    else{
        printf("\nThe elements in the stack are:\n");
        for(int i = top; i>=0 ;i--){
            printf("%d\n", stack[i]);
        }
        printf("\n");
    }
}

int main(){

    int choice, data;
    while(1){
        printf("-------------\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("\nInvalid Choice\n");
        }
    }

    return 0;
}



