// WAP to sort arr{} = {88, 56, 100, 2, 25} using selection sort

#include <stdio.h>

int main(){
    int arr[] = {88, 56, 100, 2, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min])
                min = j;
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        
    }

    printf("The sorted array is: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}