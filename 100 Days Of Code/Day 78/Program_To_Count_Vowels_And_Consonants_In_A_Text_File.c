#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int v = 0, c = 0;

    fp = fopen("info.txt", "r");
    if(fp == NULL) {
        return 0;
    }

    while((ch = fgetc(fp)) != EOF) {
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
            v++;
        } else if(ch >= 'a' && ch <= 'z') {
            c++;
        }
    }

    fclose(fp);

    printf("%d %d", v, c);

    return 0;
}
