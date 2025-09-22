#include <stdio.h>

int fact(int n) {
    int f = 1, i;
    for (i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int i, j, n = 5;

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            int val = fact(i) / (fact(j) * fact(i - j));
            printf("%d ", val);
        }
        printf("\n");
    }

    return 0;
}