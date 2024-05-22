// WAP to open a file, write "Welcome in Geeta University" in it and close the file

#include <stdio.h>

int main(){

    FILE *fp = fopen("file.txt", "w");

    if(fp == NULL){
        printf("File not found!");
        return 1;
    }

    fprintf(fp, "Welcome in Geeta University");

    fclose(fp);

    return 0;
}