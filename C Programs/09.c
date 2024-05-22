// WAP to sort arr{} = {75, 62, 88, 56, 100, 2, 25} using Insertion sort

#include <stdio.h>

int main(){

    int arr[] = {75, 62, 88, 56, 100, 2, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    printf("The sorted array is: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}