// WAP to find 2nd largest element in an array

#include <stdio.h>
#include <limits.h>

#include <stdio.h>
#include <limits.h>

int main(){

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max, max2;

    max = max2 = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max2 = max;
            max = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max){
            max2 = arr[i];
        }
    }

    printf("The second largest element is: %d\n", max2);

    return 0;
}