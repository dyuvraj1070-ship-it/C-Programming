#include <stdio.h>

int main() {
    char s[100];
    int i = 0, v = 0, c = 0;
    scanf("%s", s);

    while(s[i] != '\0') {
        char ch = s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            v++;
        } else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            c++;
        }
        i++;
    }

    printf("%d %d", v, c);

    return 0;
}
