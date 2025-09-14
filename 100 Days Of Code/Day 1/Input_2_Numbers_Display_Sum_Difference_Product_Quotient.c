#include <stdio.h>

int main() {
    int number1, number2, sum, diff, prod;
    float quot;

    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);

    sum = number1 + number2;
    diff = number1 - number2;
    prod = number1 * number2;
    quot = (float)number1 / number2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);
    printf("Quotient = %.2f\n", quot);

    return 0;
}
