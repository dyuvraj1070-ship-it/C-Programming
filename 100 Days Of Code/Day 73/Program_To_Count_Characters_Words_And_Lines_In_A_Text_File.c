#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0, inWord = 0;

    fp = fopen("info.txt", "r");
    if(fp == NULL) {
        return 0;
    }

    while((ch = fgetc(fp)) != EOF) {
        characters++;

        if(ch == '\n') {
            lines++;
        }

        if(ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else {
            if(inWord == 0) {
                words++;
                inWord = 1;
            }
        }
    }

    fclose(fp);

    printf("%d %d %d", characters, words, lines);

    return 0;
}
