#include <stdio.h>

int main() {
    int n, i, a[100][100], diag[100], k = 0, j, distinct = 1;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        diag[k++] = a[i][i];
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
    }

    if(distinct == 1) {
        printf("Distinct");
    } else {
        printf("Not Distinct");
    }

    return 0;
}
