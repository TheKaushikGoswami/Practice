// Write a program to search sorted element in a rotated sorted array.

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

    int a;
    printf("Enter the element to search: ");
    scanf("%d", &a);

    int l = 0, r = n-1, result = -1;

    while(l<=r){
        int m = (l+r)/2;

        if(arr[m] == a){
            result = m;
            break;
        }

        if(arr[m] < a){
            l = m+1;
        }

        else{
            r = m-1;
        }
    }

    if(result == -1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index %d\n", result);
    }

    return 0;
}