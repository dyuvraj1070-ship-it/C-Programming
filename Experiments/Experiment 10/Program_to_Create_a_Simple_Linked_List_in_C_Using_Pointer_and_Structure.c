#include <stdio.h>
#include <stdlib.h>

struct node{
    int d;
    struct node *n;
};

int main() {
    struct node *h=0,*t;
    t = malloc(sizeof(struct node));
    t->d = 10;
    t->n = 0;
    h = t;

    t = malloc(sizeof(struct node));
    t->d = 20;
    t->n = 0;
    h->n = t;

    t = h;
    while(t){
        printf("%d ", t->d);
        t = t->n;
    }
}
