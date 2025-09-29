#include <stdio.h>

int globalValue = 10;

void printValue() {
    printf("Value inside printValue: %d\n", globalValue);
}

void modifyValue() {
    globalValue = 25;
}

int main() {
    printf("Value in main before modify: %d\n", globalValue);
    printValue();
    modifyValue();
    printf("Value in main after modify: %d\n", globalValue);
    return 0;
}
