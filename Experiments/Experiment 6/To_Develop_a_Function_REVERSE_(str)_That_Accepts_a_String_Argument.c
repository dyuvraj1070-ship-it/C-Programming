#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int i, len = strlen(str);
    char temp;
    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char s[100];
    fgets(s, 100, stdin);

    // Remove newline if present
    int l = strlen(s);
    if (s[l - 1] == '\n') s[l - 1] = '\0';

    reverse(s);
    printf("%s\n", s);

    return 0;
}
