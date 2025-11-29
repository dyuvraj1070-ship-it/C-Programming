#include <stdio.h>

int main() {
    char s[200];
    int i = 0, j, k, n = 0;

    scanf("%s", s);

    while(s[n] != '\0') {
        n++;
    }

    for(i = 0; i < n; i++) {
        for(j = i; j < n; j++) {
            for(k = i; k <= j; k++) {
                printf("%c", s[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
