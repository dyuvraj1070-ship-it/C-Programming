#include <stdio.h>

int globalVar = 50;

void myFunction() {
    int localVar = 20;
    printf("Inside function - localVar: %d\n", localVar);
    printf("Inside function - globalVar: %d\n", globalVar);
}

int main() {
    myFunction();

    // printf("Outside function - localVar: %d\n", localVar); // This will cause an error
    printf("Outside function - globalVar: %d\n", globalVar);

    return 0;
}
