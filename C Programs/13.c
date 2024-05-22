// WAP to implement PUSH, POP and DISPLAY operations on a stack.

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

void DISPLAY(){
    if(top == -1){
        printf("Stack is empty\n");
        return;
    }

    printf("The elements in the stack are:\n");
    for(int i = 0; i <= top; i++){
        printf("%d\n", stack[i]);
    }
    printf("\n");
}

int main(){
    
    int choice;
    while(1){
        printf("1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\nEnter your choice:");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                int n;
                printf("Enter the element to be pushed: ");
                scanf("%d", &n);
                PUSH(n);
                break;
            case 2:
                POP();
                break;
            case 3:
                DISPLAY();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}