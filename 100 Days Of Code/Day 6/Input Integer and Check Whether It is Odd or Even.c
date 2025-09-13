#include <stdio.h>

int main() {
    int checkNumber;

    printf("Enter an integer: ");
    scanf("%d", &checkNumber);

    if(checkNumber % 2 == 0) {
        printf("%d is Even\n", checkNumber);
    } else {
        printf("%d is Odd\n", checkNumber);
    }

    return 0;
}
