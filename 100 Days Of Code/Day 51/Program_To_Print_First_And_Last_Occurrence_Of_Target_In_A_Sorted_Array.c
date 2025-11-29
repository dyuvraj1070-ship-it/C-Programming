#include <stdio.h>

int main() {
    int n, i, a[200], target, first = -1, last = -1;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        if(a[i] == target) {
            first = i;
            break;
        }
    }

    for(i = n - 1; i >= 0; i--) {
        if(a[i] == target) {
            last = i;
            break;
        }
    }

    printf("%d %d", first, last);

    return 0;
}
