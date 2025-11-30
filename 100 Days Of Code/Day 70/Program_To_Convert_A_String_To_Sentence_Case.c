#include <stdio.h>

int main() {
    char s[300];
    int i = 0;

    scanf("%[^\n]", s);

    if(s[0] >= 'a' && s[0] <= 'z') {
        s[0] = s[0] - 32;
    }

    i = 1;
    while(s[i] != '\0') {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
        i++;
    }

    printf("%s", s);

    return 0;
}
