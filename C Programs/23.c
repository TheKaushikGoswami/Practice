// WAP to reverse a string.

#include <stdio.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    int i = 0;
    while(str[i] != '\0'){
        i++;
    }

    i--;

    char temp[100];
    int j = 0;
    while(i >= 0){
        temp[j] = str[i];
        i--;
        j++;
    }

    i = 0;
    
    while(temp[i] != '\0'){
        str[i] = temp[i];
        i++;
    }

    i=0;

    printf("Reversed String: ");
    while(str[i] != '\0'){
        printf("%c", str[i]);
        i++;
    }

    return 0;
}
