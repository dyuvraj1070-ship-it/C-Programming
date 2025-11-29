#include <stdio.h>

int main() {
    char s[200], ch;
    int i = 0, count = 0;

    scanf("%s", s);
    scanf(" %c", &ch);

    while(s[i] != '\0') {
        if(s[i] == ch) {
            count++;
        }
        i++;
    }

    printf("%d", count);

    return 0;
}
