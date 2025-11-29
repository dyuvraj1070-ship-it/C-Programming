#include <stdio.h>

int main() {
    char s1[200], s2[200];
    int count1[256] = {0}, count2[256] = {0};
    int i = 0;

    scanf("%s", s1);
    scanf("%s", s2);

    while(s1[i] != '\0') {
        count1[(int)s1[i]]++;
        i++;
    }

    i = 0;

    while(s2[i] != '\0') {
        count2[(int)s2[i]]++;
        i++;
    }

    for(i = 0; i < 256; i++) {
        if(count1[i] != count2[i]) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
