#include <stdio.h>

int main() {
    char s[200];
    int i = 0, last = 0;

    scanf("%[^\n]", s);

    if(s[0] != ' ') {
        printf("%c. ", s[0]);
    }

    while(s[i] != '\0') {
        if(s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0') {
            last = i + 1;
            break;
        }
        i++;
    }

    i = last;
    while(s[i] != '\0') {
        printf("%c", s[i]);
        i++;
    }

    return 0;
}
