// WAP to show the use of pointers to copy content of a string to another string

#include <stdio.h>

int main(){
    char str1[100], str2[100], *p1, *p2;
    printf("Enter a string: ");
    scanf("%[^\n]s", str1);
    p1 = str1;
    p2 = str2;
    while(*p1 != '\0'){
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
    printf("The copied string is: %s", str2);
    return 0;
}