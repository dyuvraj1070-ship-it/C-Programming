#include <stdio.h>

int main() {
    int percent;

    printf("Enter your percentage (0-100): ");
    scanf("%d", &percent);

    if (percent >= 90 && percent <= 100)
        printf("Grade A\n");
    else if (percent >= 80 && percent <= 89)
        printf("Grade B\n");
    else if (percent >= 70 && percent <= 79)
        printf("Grade C\n");
    else if (percent >= 60 && percent <= 69)
        printf("Grade D\n");
    else if (percent >= 0 && percent < 60)
        printf("Grade F\n");
    else
        printf("Invalid Percentage\n");

    return 0;
}
