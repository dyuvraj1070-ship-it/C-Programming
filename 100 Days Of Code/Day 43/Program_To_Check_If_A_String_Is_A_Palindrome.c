#include <stdio.h>

int main() {
    char s[100];
    int i = 0, j;
    scanf("%s", s);

    while(s[i] != '\0') {
        i++;
    }

    j = i - 1;
    i = 0;

    while(i < j) {
        if(s[i] != s[j]) {
            printf("Not Palindrome");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome");

    return 0;
}
