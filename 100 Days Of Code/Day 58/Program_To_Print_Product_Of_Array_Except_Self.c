#include <stdio.h>

int main() {
    int n, i, j, a[200];
    long long ans;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        ans = 1;
        for(j = 0; j < n; j++) {
            if(j != i) {
                ans *= a[j];
            }
        }
        printf("%lld ", ans);
    }

    return 0;
}
