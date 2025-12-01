#include <stdio.h>

int main() {
    FILE *f;
    f = fopen("myfile.txt", "w");
    fprintf(f, "This is a new file");
    fclose(f);
    return 0;
}
