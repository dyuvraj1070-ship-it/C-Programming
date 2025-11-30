#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

int main() {
    struct Student s[100], topp;
    int n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    topp = s[0];

    for(i = 1; i < n; i++) {
        if(s[i].marks > topp.marks) {
            topp = s[i];
        }
    }

    printf("%s %d %.2f", topp.name, topp.roll, topp.marks);

    return 0;
}
