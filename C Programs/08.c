// WAP to sort arr{} = {15, 12, 8, 9, 13, 2, 25} using Bubble sort

#include <stdio.h>

int main(){

    int arr[] = {15, 12, 8, 9, 13, 2, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("The sorted array is: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;

}