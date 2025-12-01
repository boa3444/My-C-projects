#include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3;
    int maxPerimeter;
    int rectNumber;

    // Input for 3 rectangles
    printf("Enter length and breadth of rectangle 1: ");
    scanf("%d %d", &l1, &b1);

    printf("Enter length and breadth of rectangle 2: ");
    scanf("%d %d", &l2, &b2);

    printf("Enter length and breadth of rectangle 3: ");
    scanf("%d %d", &l3, &b3);

    // Calculate perimeters
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    // Use ternary operator to find max perimeter
    maxPerimeter = (p1 > p2) ? p1 : p2;
    rectNumber   = (p1 > p2) ? 1   : 2;

    maxPerimeter = (maxPerimeter > p3) ? maxPerimeter : p3;
    rectNumber   = (maxPerimeter > p3) ? rectNumber   : 3;

    // Output result
    printf("Rectangle %d has the highest perimeter: %d\n", rectNumber, maxPerimeter);

    return 0;
}
