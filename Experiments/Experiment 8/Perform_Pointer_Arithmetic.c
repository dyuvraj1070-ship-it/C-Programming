#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    printf("Original address: %p\n", p);
    p++;  // Increment pointer
    printf("After increment: %p\n", p);
    p--;  // Decrement pointer
    printf("After decrement: %p\n", p);

    return 0;
}
