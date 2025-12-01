#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home[100];
    char hostel[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    // Store present address (hostel address in this case)
    strcpy(addr.hostel, "UPES Hostel, Bidholi, Dehradun");

    printf("Present Address: %s\n", addr.hostel);

    return 0;
}
