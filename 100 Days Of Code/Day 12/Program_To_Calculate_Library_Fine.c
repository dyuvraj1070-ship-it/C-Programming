#include <stdio.h>

int main() {
    int lateDays, fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 5 && lateDays > 0) {
        fine = lateDays * 2;
        printf("Fine = ₹%d\n", fine);
    }
    else if (lateDays <= 10) {
        fine = (5 * 2) + (lateDays - 5) * 4;
        printf("Fine = ₹%d\n", fine);
    }
    else if (lateDays <= 30) {
        fine = (5 * 2) + (5 * 4) + (lateDays - 10) * 6;
        printf("Fine = ₹%d\n", fine);
    }
    else if (lateDays > 30) {
        printf("Membership Cancelled.\n");
    }
    else {
        printf("Invalid input.\n");
    }

    return 0;
}
