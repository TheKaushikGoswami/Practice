#include <stdio.h>

int power(int base, int exp){
    if(exp < 0){
        return -1;
    }
    if(exp == 0){
        return 1;
    }
    return base*power(base, exp-1);
}

int main(){
        int base, exp;
        printf("Enter Base and Exponent (separated by space): ");
        scanf("%d %d", &base, &exp);
    
        printf("%d^%d is: %d", base, exp, power(base, exp));
    
        return 0;
}