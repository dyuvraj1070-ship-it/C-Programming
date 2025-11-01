#include <stdio.h>

int main() {
    int n, i;
    float a = 2, b = 3, sum = 0;
    printf("enter n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        sum = sum + (a/b);
        a = a + 2;
        b = b + 4;
    }
    printf("sum = %.2f\n", sum);
    return 0;
}
