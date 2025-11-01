#include <stdio.h>

struct comp {
    float r;
    float i;
};

struct comp getnum() {
    struct comp x;
    printf("enter real part: ");
    scanf("%f", &x.r);
    printf("enter imag part: ");
    scanf("%f", &x.i);
    return x;
}

void shownum(struct comp x) {
    printf("%.1f + %.1fi\n", x.r, x.i);
}

struct comp addnum(struct comp p, struct comp q) {
    struct comp t;
    t.r = p.r + q.r;
    t.i = p.i + q.i;
    return t;
}

struct comp subnum(struct comp p, struct comp q) {
    struct comp t;
    t.r = p.r - q.r;
    t.i = p.i - q.i;
    return t;
}

int main() {
    struct comp a, b, c, d;
    printf("enter first complex num:\n");
    a = getnum();
    printf("enter second complex num:\n");
    b = getnum();
    c = addnum(a, b);
    d = subnum(a, b);
    printf("sum = ");
    shownum(c);
    printf("difference = ");
    shownum(d);
    return 0;
}
