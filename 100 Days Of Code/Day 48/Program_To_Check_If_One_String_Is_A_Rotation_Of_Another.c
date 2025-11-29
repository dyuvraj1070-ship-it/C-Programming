#include <stdio.h>

int main() {
    char s1[200], s2[200], t[400];
    int i, j, len1 = 0, len2 = 0, found = 0;
    scanf("%s %s", s1, s2);

    while(s1[len1] != '\0') len1++;
    while(s2[len2] != '\0') len2++;

    if(len1 != len2) {
        printf("Not Rotation");
        return 0;
    }

    for(i = 0; i < len1; i++) t[i] = s1[i];
    for(i = 0; i < len1; i++) t[len1 + i] = s1[i];
    t[2 * len1] = '\0';

    for(i = 0; i <= 2 * len1 - len2; i++) {
        for(j = 0; j < len2; j++) {
            if(t[i + j] != s2[j]) break;
        }
        if(j == len2) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("Rotation");
    } else {
        printf("Not Rotation");
    }

    return 0;
}
