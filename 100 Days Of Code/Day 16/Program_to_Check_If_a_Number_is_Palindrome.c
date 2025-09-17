#include <stdio.h>

int main() {
    int num, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (original == rev)
        printf("The number is a Palindrome\n");
    else
        printf("The number is Not a Palindrome\n");

    return 0;
}
