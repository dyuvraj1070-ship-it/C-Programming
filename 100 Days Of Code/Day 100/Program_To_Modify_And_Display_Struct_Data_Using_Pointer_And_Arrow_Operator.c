#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

int main() {
    struct Student s, *p;

    p = &s;

    scanf("%s %d %f", p->name, &p->roll, &p->marks);

    printf("%s %d %.2f", p->name, p->roll, p->marks);

    return 0;
}
