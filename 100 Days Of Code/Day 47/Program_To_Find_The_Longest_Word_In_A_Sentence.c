#include <stdio.h>

int main() {
    char s[300], word[100], longest[100];
    int i = 0, j = 0, maxLen = 0, currLen = 0;

    scanf("%[^\n]", s);

    while(1) {
        if(s[i] != ' ' && s[i] != '\0') {
            word[j++] = s[i];
            currLen++;
        } else {
            word[j] = '\0';
            if(currLen > maxLen) {
                maxLen = currLen;
                int k = 0;
                while(word[k] != '\0') {
                    longest[k] = word[k];
                    k++;
                }
                longest[k] = '\0';
            }
            j = 0;
            currLen = 0;
        }

        if(s[i] == '\0') {
            break;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}
