#include <stdio.h>

struct book {
    int id;
    char title[50];
    char author[50];
    float price;
};

void show(struct book b) {
    printf("\nbook id: %d", b.id);
    printf("\ntitle: %s", b.title);
    printf("\nauthor: %s", b.author);
    printf("\nprice: %.2f\n", b.price);
}

int main() {
    struct book x;
    printf("enter book id: ");
    scanf("%d", &x.id);
    printf("enter title: ");
    scanf("%s", x.title);
    printf("enter author: ");
    scanf("%s", x.author);
    printf("enter price: ");
    scanf("%f", &x.price);
    show(x);
    return 0;
}
