#include <stdio.h>

int main() {
    int x = 5;

    {
        int y = 10;
        printf("Inside block 1 - x: %d\n", x);
        printf("Inside block 1 - y: %d\n", y);
    }

    // printf("Outside block 1 - y: %d\n", y); // Error: y not accessible here

    {
        int z = 20;
        printf("Inside block 2 - x: %d\n", x);
        printf("Inside block 2 - z: %d\n", z);
    }

    // printf("Outside block 2 - z: %d\n", z); // Error: z not accessible here

    printf("Outside all blocks - x: %d\n", x);

    return 0;
}
