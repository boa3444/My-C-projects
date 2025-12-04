#include <stdio.h>

int main() {
    FILE *fp;  
    char ch;    

    fp = fopen("new.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1; 
    }


    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch); 
    }

    fclose(fp);

    printf("\nFile closed successfully.\n");

    return 0;
}
