#include <stdio.h>

int main() {
    char s[100], r[100];
    int i = 0, j = 0;
    scanf("%s", s);

    while(s[i] != '\0') {
        i++;
    }

    i--;

    while(i >= 0) {
        r[j++] = s[i--];
    }

    r[j] = '\0';

    printf("%s", r);

    return 0;
}
