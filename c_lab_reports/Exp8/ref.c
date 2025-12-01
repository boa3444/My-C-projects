#include <stdio.h>

void change(int *x, int *y) {
    *x = *x + 10;
    *y = *y + 20;
}

int main() {
    int a = 5, b = 7;
    change(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
