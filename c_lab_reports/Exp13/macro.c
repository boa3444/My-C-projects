#include <stdio.h>
#define ADD(x,y) ((x)+(y))
#define SUB(x,y) ((x)-(y))
#define MUL(x,y) ((x)*(y))
#define DIV(x,y) ((x)/(y))

int main() {
    printf("ADD: %d\n", ADD(5,3));
    printf("SUB: %d\n", SUB(5,3));
    printf("MUL: %d\n", MUL(5,3));
    printf("DIV: %d\n", DIV(6,3));
    return 0;
}
