#include <stdio.h>

int main() {
    int n, i, j, a[200], next;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        next = -1;
        for(j = i + 1; j < n; j++) {
            if(a[j] > a[i]) {
                next = a[j];
                break;
            }
        }
        printf("%d", next);
        if(i != n - 1) {
            printf(",");
        }
    }

    return 0;
}
