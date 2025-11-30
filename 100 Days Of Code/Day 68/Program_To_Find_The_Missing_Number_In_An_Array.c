#include <stdio.h>

int main() {
    int n, i, a[200], total, sum = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    total = (n * (n + 1)) / 2;

    printf("%d", total - sum);

    return 0;
}
