#include <stdio.h>

int main() {
    FILE *f;
    char line[100];
    f = fopen("myfile.txt", "r");
    while(fgets(line, 100, f)) {
        printf("%s", line);
    }
    fclose(f);
    return 0;
}
