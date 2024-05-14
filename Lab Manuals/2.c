#include <stdio.h>

int main(){
    int n;
    printf("Enter an number: ");
    scanf("%d", &n);

    printf("The Prime Factors of the number are: ");
    for(int i = 2; i <= n; i++){
        if(n%i == 0){
            int flag = 0;
            for(int j = 2; j <= i/2; j++){
                if(i%j == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                printf("%d ", i);
            }
        }
    }
    
    return 0;
}