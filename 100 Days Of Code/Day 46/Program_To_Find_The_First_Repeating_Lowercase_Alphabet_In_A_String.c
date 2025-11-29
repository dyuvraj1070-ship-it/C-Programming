#include <stdio.h>

int main() {
    char s[200];
    int count[26] = {0};
    int i = 0;

    scanf("%s", s);

    while(s[i] != '\0') {
        int index = s[i] - 'a';
        count[index]++;
        if(count[index] == 2) {
            printf("%c", s[i]);
            return 0;
        }
        i++;
    }

    return 0;
}
