#include <stdio.h>

int main() {
    char s[300], temp[100];
    int i = 0, j = 0, k;
    scanf("%[^\n]", s);

    while(1) {
        if(s[i] != ' ' && s[i] != '\0') {
            temp[j++] = s[i];
        } else {
            for(k = j - 1; k >= 0; k--) {
                printf("%c", temp[k]);
            }
            if(s[i] == ' ') {
                printf(" ");
            }
            j = 0;
        }

        if(s[i] == '\0') {
            break;
        }

        i++;
    }

    return 0;
}
