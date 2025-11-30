#include <stdio.h>

int main() {
    int n, k, i, j, a[200], temp;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("%d", a[k - 1]);

    return 0;
}
