// WAP to swap and add two numbers using pointers

#include <stdio.h>

int main(){

    int a, b;
    printf("Enter 2 Numbers (separated by space): ");
    scanf("%d %d", &a, &b);

    int *p1 = &a;
    int *p2 = &b;

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After Swapping: %d %d\n", a, b);
    printf("Sum: %d", a+b);

    return 0;
}