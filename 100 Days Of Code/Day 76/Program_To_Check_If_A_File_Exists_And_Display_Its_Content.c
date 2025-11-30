#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100], line[300];

    scanf("%s", filename);

    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("File not found");
        return 0;
    }

    while(fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
