#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
    float gross;
};

int main() {
    struct Employee emp[100];
    int i, n;

    printf("Enter number of employees (up to 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf("%s", emp[i].name);
        printf("Enter basic pay of %s: ", emp[i].name);
        scanf("%f", &emp[i].basic);

        emp[i].gross = emp[i].basic + (0.52 * emp[i].basic);
    }

    printf("\nEmployee Name\tGross Salary\n");
    for (i = 0; i < n; i++) {
        printf("%s\t\t%.2f\n", emp[i].name, emp[i].gross);
    }

    return 0;
}
