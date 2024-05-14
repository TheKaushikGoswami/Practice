// Write a program to sort strings lexicographically

#include <stdio.h>
#include <string.h>

int main() {

    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char str[n][100], temp[100];

    printf("Enter the strings: ");
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]s", str[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nIn Lexographical Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}