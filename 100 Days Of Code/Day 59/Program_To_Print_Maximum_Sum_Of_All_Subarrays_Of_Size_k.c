#include <stdio.h>

int main() {
    int n, k, i;
    long long a[200], sum = 0, maxsum = -9223372036854775807LL;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("0");
        return 0;
    }

    for(i = 0; i < k; i++) {
        sum += a[i];
    }

    maxsum = sum;

    for(i = k; i < n; i++) {
        sum = sum + a[i] - a[i - k];
        if(sum > maxsum) {
            maxsum = sum;
        }
    }

    printf("%lld", maxsum);

    return 0;
}
