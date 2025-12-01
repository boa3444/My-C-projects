#include <stdio.h>

int main() {
    int a = 10;
    printf("a in main = %d\n", a);

    {
        int b = 20;
        printf("b inside inner block = %d\n", b);
        printf("a inside inner block = %d\n", a);
    }

    {
        int c = 30;
        printf("c inside second block = %d\n", c);
    }

    return 0;
}
