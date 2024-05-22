// WAP to change the value of a variable to which a pointer points

#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    printf("The value of a is: %d\n", a);
    *p = 20;
    printf("The value of a is: %d", a);
    return 0;
}