#include <stdio.h>

int main() {
    char s[200];
    int i = 0, spaces = 0, digits = 0, special = 0;

    scanf("%[^\n]", s);

    while(s[i] != '\0') {
        char ch = s[i];
        if(ch == ' ') {
            spaces++;
        } else if(ch >= '0' && ch <= '9') {
            digits++;
        } else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

        } else {
            special++;
        }
        i++;
    }

    printf("%d %d %d", spaces, digits, special);

    return 0;
}
