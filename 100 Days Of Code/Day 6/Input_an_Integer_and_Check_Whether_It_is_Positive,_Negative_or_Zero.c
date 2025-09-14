#include <stdio.h>

int main() {
    int testNumber;

    printf("Enter an integer: ");
    scanf("%d", &testNumber);

    if(testNumber >= 0) {
        if(testNumber == 0) {
            printf("The number is Zero\n");
        } else {
            printf("The number is Positive\n");
        }
    } else {
        printf("The number is Negative\n");
    }

    return 0;
}
