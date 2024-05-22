// WAP to return max of two numbers.

#include <stdio.h>

static inline int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Max: %d", max(a, b));

    return 0;
}