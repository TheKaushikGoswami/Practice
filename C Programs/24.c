// WAP to open a file, write in it and close the file

#include <stdio.h>

int main(){
    FILE *file = fopen("file.txt", "w");

    if(file == NULL){
        printf("File not found!");
        return 1;
    }

    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    fprintf(file, "%s", str);

    fclose(file);

    return 0;
}