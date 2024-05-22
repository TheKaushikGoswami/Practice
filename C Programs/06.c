// WAP to sort an array using pointers

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int *p1, *p2;
    
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            p1 = &arr[i];
            p2 = &arr[j];
            if(*p1 > *p2){
                int temp = *p1;
                *p1 = *p2;
                *p2 = temp;
            }
        }
    }

    printf("The sorted array is: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}