// WAP to implement Binary search in an array.

#include <stdio.h>

int binarySearch(int arr[], int n, int x){
    int l = 0, r = n-1;
    while(l <= r){
        int mid = (l+r)/2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] < x){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return -1;
}

int main(){

    int arr[] = {6, 12, 15, 19, 20, 21, 75, 85, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    printf("Enter the element to search: ");
    scanf("%d", &x);

    int result = binarySearch(arr, n, x);
    if(result == -1){
        printf("Element not found");
    }else{
        printf("Element found at index: %d", result);
    }

    return 0;
}