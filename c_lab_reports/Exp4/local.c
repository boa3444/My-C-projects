#include <stdio.h>

int g = 10;

void showLocal() {
    int local = 5;
    printf("Inside function, local = %d\n", local);
    printf("Inside function, global = %d\n", g);
}

int main() {
    showLocal();
    printf("In main, global = %d\n", g);
    return 0;
}
