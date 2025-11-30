#include <stdio.h>

int main() {
    int n, i, a[200], seen[10000] = {0};
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(seen[a[i]] == 1) {
            printf("%d", a[i]);
            return 0;
        }
        seen[a[i]] = 1;
    }

    return 0;
}
