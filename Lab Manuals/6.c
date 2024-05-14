#include <stdio.h>

int gcd(int i, int j){
    if(j == 0){
        return i;
    }
    return gcd(j, i%j);
}

int main(){
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d", a, b, gcd(a, b));

    return 0;
}
