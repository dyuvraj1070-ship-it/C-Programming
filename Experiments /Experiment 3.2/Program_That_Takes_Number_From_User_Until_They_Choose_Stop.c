#include <stdio.h>

int main() {
    int num, pos = 0, neg = 0, zero = 0;
    char ch;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &ch);

    } while (ch == 'y' || ch == 'Y');

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeroes: %d\n", zero);

    return 0;
}
