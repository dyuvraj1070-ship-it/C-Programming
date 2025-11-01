#include <stdio.h>
#include <string.h>

union addr {
    char name[50];
    char home[100];
    char hostel[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union addr a;
    strcpy(a.hostel, "Boys Hostel, Block A, Delhi, 110001");
    printf("present address: %s\n", a.hostel);
    return 0;
}
