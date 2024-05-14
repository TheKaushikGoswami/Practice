#include <stdio.h>

int main(){
    int a, b;
    printf("Enter 2 Numbers (separated by space): ");
    scanf("%d %d", &a, &b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("Swapped Numbers: %d %d", a, b);

    return 0;
}