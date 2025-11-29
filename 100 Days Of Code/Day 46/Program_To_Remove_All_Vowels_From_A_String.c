#include <stdio.h>

int main() {
    char s[200], r[200];
    int i = 0, j = 0;

    scanf("%[^\n]", s);

    while(s[i] != '\0') {
        char ch = s[i];
        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')) {
            r[j++] = ch;
        }
        i++;
    }

    r[j] = '\0';

    printf("%s", r);

    return 0;
}
