// WAP to find the number of shifts in insertion sort.

#include <stdio.h>

int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int shifts = 0;

    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
            shifts++;
        }

        arr[j+1] = key;
    }

    printf("The number of shifts in insertion sort is: %d\n", shifts);

    return 0;
}