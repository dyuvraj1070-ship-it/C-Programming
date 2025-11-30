#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[100];
    enum Gender g;
};

int main() {
    struct Person p;

    scanf("%s", p.name);
    scanf("%d", &p.g);

    if(p.g == MALE) {
        printf("Male");
    } else if(p.g == FEMALE) {
        printf("Female");
    } else if(p.g == OTHER) {
        printf("Other");
    }

    return 0;
}
