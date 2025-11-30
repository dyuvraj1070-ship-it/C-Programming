#include <stdio.h>

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    enum Month m;
    scanf("%d", &m);

    if(m == JAN || m == MAR || m == MAY || m == JUL || m == AUG || m == OCT || m == DEC) {
        printf("31");
    } else if(m == APR || m == JUN || m == SEP || m == NOV) {
        printf("30");
    } else if(m == FEB) {
        printf("28");
    }

    return 0;
}
