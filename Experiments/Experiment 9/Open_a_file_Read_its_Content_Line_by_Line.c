#include <stdio.h>

int main() {
    FILE *f;
    f = fopen("myfile.txt", "w");
    fprintf(f, "Hello\nHow are you\nGood day");
    fclose(f);
}
