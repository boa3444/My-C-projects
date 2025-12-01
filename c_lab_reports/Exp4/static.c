#include <stdio.h>

void demo() {
    static int count = 0;  
    count++;
    printf("count = %d\n", count);
}

int main() {
    demo();
    demo();
    return 0;
}
