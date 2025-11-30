#include <stdio.h>

int main() {
    char s[200], t[200];
    int count[26] = {0}, i = 0;

    scanf("%s", s);
    scanf("%s", t);

    while(s[i] != '\0') {
        count[s[i] - 'a']++;
        i++;
    }

    i = 0;

    while(t[i] != '\0') {
        count[t[i] - 'a']--;
        i++;
    }

    for(i = 0; i < 26; i++) {
        if(count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}
