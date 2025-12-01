#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("Address: %p, Value: %d\n", p, *p);
    p++;
    printf("After increment: %p, Value: %d\n", p, *p);
    p--;
    printf("After decrement: %p, Value: %d\n", p, *p);

    return 0;
}
