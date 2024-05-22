// WAP to check if 3 numbers are consecutive or not.

#include <stdio.h>

int consecutive(int a, int b, int c){
    if((a-b == 1 && b-c == 1) || (b-a == 1 && c-b == 1) || (a-c == 1 && c-b == 1) || (c-a == 1 && b-c == 1)){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    int a, b, c;
    printf("Enter 3 Numbers (separated by space): ");
    scanf("%d %d %d", &a, &b, &c);

    if(consecutive(a, b, c)){
        printf("The numbers are consecutive");
    }else{
        printf("The numbers are not consecutive");
    }

    return 0;

}