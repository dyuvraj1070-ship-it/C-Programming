#include <stdio.h>

int main() {
    int n, i, a[100], x, pos;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(a[i] > x) {
            pos = i;
            break;
        }
    }

    if(i == n) {
        pos = n;
    }

    for(i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = x;

    for(i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
