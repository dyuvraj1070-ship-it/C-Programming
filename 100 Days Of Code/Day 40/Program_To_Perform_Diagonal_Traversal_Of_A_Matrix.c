#include <stdio.h>

int main() {
    int r, c, i, j, a[100][100];
    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int k = 0; k < r + c - 1; k++) {
        i = 0;
        j = k;
        while(i < r && j >= 0) {
            if(j < c) {
                printf("%d ", a[i][j]);
            }
            i++;
            j--;
        }
    }

    return 0;
}
