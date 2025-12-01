#include <stdio.h>

int main() {
    int n, i, arr[100], num, freq = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find frequency: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            freq++;
        }
    }

    printf("Frequency of %d = %d\n", num, freq);

    return 0;
}
