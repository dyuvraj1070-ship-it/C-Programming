#include <stdio.h>

int main() {
    char s[1000];
    int last[256], i = 0, start = 0, maxlen = 0;
    scanf("%s", s);

    for(i = 0; i < 256; i++) last[i] = -1;

    i = 0;
    while(s[i] != '\0') {
        unsigned char ch = s[i];
        if(last[ch] >= start) start = last[ch] + 1;
        last[ch] = i;
        if(i - start + 1 > maxlen) maxlen = i - start + 1;
        i++;
    }

    printf("%d", maxlen);

    return 0;
}
