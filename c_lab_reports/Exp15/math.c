#include <stdio.h>
#include "operators.h"

int main() {
    int x = 12, y = 4;

    printf("Add: %d\n", add(x, y));
    printf("Subtract: %d\n", subtract(x, y));
    printf("Multiply: %d\n", multiply(x, y));
    printf("Divide: %d\n", divide(x, y));

    return 0;
}
