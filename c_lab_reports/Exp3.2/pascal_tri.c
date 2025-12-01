#include <stdio.h>

int main() {
    int rows, i, j, num, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (space = 0; space < rows - i - 1; space++) {
            printf("  "); 
        }
        num = 1;
        for (j = 0; j <= i; j++) {
            printf("%4d", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
