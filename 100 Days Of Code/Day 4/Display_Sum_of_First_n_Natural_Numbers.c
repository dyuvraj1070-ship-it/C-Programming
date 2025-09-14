#include <stdio.h>

int main() {
    int limitValue, i, totalSum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &limitValue);

    for(i = 1; i <= limitValue; i++) {
        totalSum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", limitValue, totalSum);

    return 0;
}
