#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

int main() {
    struct Student a, b;

    scanf("%s %d %f", a.name, &a.roll, &a.marks);
    scanf("%s %d %f", b.name, &b.roll, &b.marks);

    if(strcmp(a.name, b.name) == 0 && a.roll == b.roll && a.marks == b.marks) {
        printf("Identical");
    } else {
        printf("Not Identical");
    }

    return 0;
}
