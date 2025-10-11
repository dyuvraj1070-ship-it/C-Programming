#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q, i, j, k;

    scanf("%d%d", &m, &n);
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d%d", &p, &q);
    for(i=0; i<p; i++) {
        for(j=0; j<q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    if(n != p) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    for(i=0; i<m; i++) {
        for(j=0; j<q; j++) {
            C[i][j] = 0;
            for(k=0; k<n; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    printf("Matrix A:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for(i=0; i<p; i++) {
        for(j=0; j<q; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("Product Matrix:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
