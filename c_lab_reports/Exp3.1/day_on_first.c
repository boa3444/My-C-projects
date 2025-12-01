#include <stdio.h>

int main() {
    int year, days = 0, i, day;
    printf("Enter the year: ");
    scanf("%d", &year);

    // Count days from year 1 to (year - 1)
    for (i = 1; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
            days += 366; // leap year
        } else {
            days += 365; // normal year
        }
    }

    // Find day of week (0 = Monday, 1 = Tuesday, ...)
    day = days % 7;

    printf("On 1st January %d, it was ", year);
    if (day == 0) printf("Monday\n");
    else if (day == 1) printf("Tuesday\n");
    else if (day == 2) printf("Wednesday\n");
    else if (day == 3) printf("Thursday\n");
    else if (day == 4) printf("Friday\n");
    else if (day == 5) printf("Saturday\n");
    else if (day == 6) printf("Sunday\n");

    return 0;
}
