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

    int frequency = 0;
    int element = 0;

    for(int i=0; i<n; i++){
        int count = 1;
        for(int j=1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > frequency){
            frequency = count;
            element = arr[i];
        }
    }

    printf("The most frequent element is: %d with frquency %d", element, frequency);

    return 0;
}