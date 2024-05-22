// WAP to count the number of not a constant (i.e. vowels) in a string

#include <stdio.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    int i = 0;
    int count = 0;

    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
        }
        i++;
    }

    printf("Number of vowels: %d", count);

    return 0;
}