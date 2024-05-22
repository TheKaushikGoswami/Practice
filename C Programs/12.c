// WAP to find the element(s) that appears odd number of times in an array (strange elements)

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<n; i++){
        int c = 0;
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j]){
                c++;
            }
        }

        if(c%2 != 0){
            printf("The strange element(s) is: %d\n", arr[i]);
        }
    }

    return 0;
}