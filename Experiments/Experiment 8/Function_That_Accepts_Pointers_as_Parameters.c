#include <stdio.h>

void modify(int *x, int *y) {
    *x = *x + 10;
    *y = *y * 2;
}

int main() {
    int a = 5, b = 3;

    printf("Before modification: a = %d, b = %d\n", a, b);

    modify(&a, &b);

    printf("After modification: a = %d, b = %d\n", a, b);

    return 0;
}
