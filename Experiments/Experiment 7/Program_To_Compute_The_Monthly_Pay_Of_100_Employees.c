#include <stdio.h>

struct emp {
    char name[50];
    float basic;
    float da;
    float gross;
};

int main() {
    struct emp e[100];
    int n, i;
    printf("enter number of employees: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        printf("enter name of emp %d: ", i+1);
        scanf("%s", e[i].name);
        printf("enter basic pay: ");
        scanf("%f", &e[i].basic);
        e[i].da = 0.52 * e[i].basic;
        e[i].gross = e[i].basic + e[i].da;
    }
    printf("\nname\tgross salary\n");
    for(i=0;i<n;i++) {
        printf("%s\t%.2f\n", e[i].name, e[i].gross);
    }
    return 0;
}
