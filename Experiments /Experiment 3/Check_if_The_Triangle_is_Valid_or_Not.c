#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");

        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        else if (a != b && b != c && a != c) {
            printf("The triangle is Scalene.\n");
        }

        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
            printf("The triangle is a Right-Angle Triangle.\n");
        }
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
