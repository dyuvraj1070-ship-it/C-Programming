#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r;
    scanf("%d", &r);

    if(r == ADMIN) {
        printf("Welcome, Admin");
    } else if(r == USER) {
        printf("Welcome, User");
    } else if(r == GUEST) {
        printf("Welcome, Guest");
    }

    return 0;
}
