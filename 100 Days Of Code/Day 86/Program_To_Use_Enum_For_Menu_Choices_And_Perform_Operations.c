#include <stdio.h>

enum Choice { ADD, SUBTRACT, MULTIPLY };

int main() {
    enum Choice ch;
    int a, b;

    scanf("%d %d", &a, &b);
    scanf("%d", &ch);

    switch(ch) {
        case ADD:
            printf("%d", a + b);
            break;
        case SUBTRACT:
            printf("%d", a - b);
            break;
        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}
