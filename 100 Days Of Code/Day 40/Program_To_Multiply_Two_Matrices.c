#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k, a[100][100], b[100][100], m[100][100];
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        return 0;
    }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            m[i][j] = 0;
            for(k = 0; k < c1; k++) {
                m[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
