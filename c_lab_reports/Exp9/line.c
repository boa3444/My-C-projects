#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[256];

    fp = fopen("new.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

    printf("\nFile closed successfully.\n");

    return 0;
}
