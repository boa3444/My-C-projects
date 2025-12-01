#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("a = %d, *pInt = %d\n", a, *pInt);
    printf("b = %.2f, *pFloat = %.2f\n", b, *pFloat);
    printf("c = %c, *pChar = %c\n", c, *pChar);

    return 0;
}

