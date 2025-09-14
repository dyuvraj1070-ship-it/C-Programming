#include <stdio.h>

int main() {
    int firstValue, secondValue;

    printf("Enter first number: ");
    scanf("%d", &firstValue);

    printf("Enter second number: ");
    scanf("%d", &secondValue);

    firstValue = firstValue + secondValue;
    secondValue = firstValue - secondValue;
    firstValue = firstValue - secondValue;

    printf("After swapping: first = %d, second = %d\n", firstValue, secondValue);

    return 0;
}
