#include <stdio.h>

int isprime(int num) {
    int i;
    if(num <= 1)
        return 0;
    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int start, end, i;
    scanf("%d%d", &start, &end);

    for(i = start; i <= end; i++) {
        if(isprime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
