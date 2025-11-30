#include <stdio.h>

int main() {
    int n, k, i, j, a[200], found;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    if(k > n || k <= 0) {
        return 0;
    }

    for(i = 0; i <= n - k; i++) {
        found = 0;
        for(j = i; j < i + k; j++) {
            if(a[j] < 0) {
                printf("%d ", a[j]);
                found = 1;
                break;
            }
        }
        if(!found) {
            printf("0 ");
        }
    }

    return 0;
}
