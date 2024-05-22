// WAP to sort arr[] = {45, 76, 105, 21, 55} using qsort()

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){

    int arr[] = {45, 76, 105, 21, 55};
    int n = sizeof(arr)/sizeof(arr[0]);

    qsort(arr, n, sizeof(int), compare);

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}