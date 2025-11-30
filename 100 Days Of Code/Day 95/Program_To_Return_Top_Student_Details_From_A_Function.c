#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    struct Student top = s[0];
    int i;

    for(i = 1; i < n; i++) {
        if(s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    struct Student s[100], best;
    int n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    best = getTopStudent(s, n);

    printf("%s %d %.2f", best.name, best.roll, best.marks);

    return 0;
}
