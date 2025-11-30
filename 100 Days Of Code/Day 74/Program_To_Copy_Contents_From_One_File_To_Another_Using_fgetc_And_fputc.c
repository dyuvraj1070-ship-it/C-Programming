#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcname[100], destname[100];
    int ch;

    scanf("%s", srcname);
    scanf("%s", destname);

    src = fopen(srcname, "r");
    if(src == NULL) {
        return 0;
    }

    dest = fopen(destname, "w");
    if(dest == NULL) {
        fclose(src);
        return 0;
    }

    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    return 0;
}
