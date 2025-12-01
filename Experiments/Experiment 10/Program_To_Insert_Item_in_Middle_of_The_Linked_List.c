#include <stdio.h>
#include <stdlib.h>

struct node{
    int d;
    struct node *n;
};

int main() {
    struct node *h=0,*a,*b,*m;

    a = malloc(sizeof(struct node));
    a->d = 10;
    a->n = 0;
    h = a;

    b = malloc(sizeof(struct node));
    b->d = 30;
    b->n = 0;
    a->n = b;

    m = malloc(sizeof(struct node));
    m->d = 20;
    m->n = b;
    a->n = m;

    a = h;
    while(a){
        printf("%d ", a->d);
        a = a->n;
    }
}
