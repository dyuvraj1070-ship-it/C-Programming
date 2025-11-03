#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Value of a = %d, Pointer p1 = %p\n", a, p1);
    printf("Value pointed by p1 = %d\n", *p1);

    printf("Value of b = %.2f, Pointer p2 = %p\n", b, p2);
    printf("Value pointed by p2 = %.2f\n", *p2);

    printf("Value of c = %c, Pointer p3 = %p\n", c, p3);
    printf("Value pointed by p3 = %c\n", *p3);

    return 0;
}
