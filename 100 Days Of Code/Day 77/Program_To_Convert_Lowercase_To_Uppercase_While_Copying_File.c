#include <stdio.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    if(in == NULL) {
        return 0;
    }

    out = fopen("output.txt", "w");
    if(out == NULL) {
        fclose(in);
        return 0;
    }

    while((ch = fgetc(in)) != EOF) {
        if(ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    return 0;
}
