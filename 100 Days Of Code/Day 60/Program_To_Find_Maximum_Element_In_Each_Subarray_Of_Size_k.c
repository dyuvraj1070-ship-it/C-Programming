#include <stdio.h>

int main() {
    int n, k, i, j, a[200], mx;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    if(k > n || k <= 0) {
        return 0;
    }

    for(i = 0; i <= n - k; i++) {
        mx = a[i];
        for(j = i + 1; j < i + k; j++) {
            if(a[j] > mx) {
                mx = a[j];
            }
        }
        printf("%d ", mx);
    }

    return 0;
}
