#include <stdio.h>

int main() {
    int limit = 10000;
    int a, b, c, d, count;

    for (int num = 1; num <= limit; num++) {
        count = 0;
        for (a = 1; a * a * a < num; a++) {
            for (b = a; b * b * b < num; b++) {
                if (a * a * a + b * b * b == num) {
                    count++;
                }
            }
        }
        if (count > 1) {
            printf("%d\n", num);
        }
    }
    return 0;
}
