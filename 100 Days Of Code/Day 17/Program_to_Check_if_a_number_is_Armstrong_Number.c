#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, n = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (original > 0) {
        original = original / 10;
        n++;
    }

    original = num;

    while (original > 0) {
        digit = original % 10;
        sum = sum + pow(digit, n);
        original = original / 10;
    }

    if (sum == num)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
