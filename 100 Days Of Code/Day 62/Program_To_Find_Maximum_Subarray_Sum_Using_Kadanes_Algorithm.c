#include <stdio.h>

int main() {
    int n, i, a[200];
    long long curr, best;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    curr = best = a[0];

    for(i = 1; i < n; i++) {
        if(curr + a[i] > a[i]) {
            curr = curr + a[i];
        } else {
            curr = a[i];
        }

        if(curr > best) {
            best = curr;
        }
    }

    printf("%lld", best);

    return 0;
}
