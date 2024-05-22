// WAP to find the sum of diagonal elements of a 2D array.

#include <stdio.h>

int main(){
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;

    for(int i = 0; i < 3; i++){
        sum += a[i][i];
    }

    printf("Sum of diagonal elements: %d", sum);

    return 0;
}