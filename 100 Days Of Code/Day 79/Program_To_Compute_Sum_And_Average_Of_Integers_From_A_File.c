#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");
    if(fp == NULL) {
        return 0;
    }

    while(fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if(count == 0) {
        printf("0 0");
    } else {
        printf("%d %.2f", sum, (float)sum / count);
    }

    return 0;
}
