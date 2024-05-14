#include <stdio.h>

// Write a program to find two strange elements

int main(){

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count%2!=0){
            printf("The strange element(s) is: %d\n", arr[i]);
        }
    }

    return 0;
}