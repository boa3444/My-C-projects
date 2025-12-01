#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;

    printf("Enter x1 and y1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2 and y2: ");
    scanf("%d %d", &x2, &y2);

    printf("Enter x3 and y3: ");
    scanf("%d %d", &x3, &y3);

    // Check collinearity using cross multiplication (to avoid division)
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }

    return 0;
}
