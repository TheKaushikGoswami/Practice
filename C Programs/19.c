// WAP to take 5 numbers from user and sort them using bubble sort.

#include <stdio.h>

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){

    int arr[5];
    printf("Enter 5 Numbers: ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, 5);

    printf("After Sorting: ");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}