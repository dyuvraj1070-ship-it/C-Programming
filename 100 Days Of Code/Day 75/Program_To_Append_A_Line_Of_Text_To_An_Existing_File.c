#include <stdio.h>

int main() {
    FILE *fp;
    char line[300];

    fp = fopen("info.txt", "a");
    if(fp == NULL) {
        return 0;
    }

    scanf("%[^\n]", line);

    fprintf(fp, "%s\n", line);

    fclose(fp);

    return 0;
}
