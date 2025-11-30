#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    struct Employee e[100], temp;
    int n, i;
    FILE *fp;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s %d %f", e[i].name, &e[i].id, &e[i].salary);
    }

    fp = fopen("employees.bin", "wb");
    if(fp == NULL) {
        return 0;
    }

    fwrite(e, sizeof(struct Employee), n, fp);
    fclose(fp);

    fp = fopen("employees.bin", "rb");
    if(fp == NULL) {
        return 0;
    }

    for(i = 0; i < n; i++) {
        fread(&temp, sizeof(struct Employee), 1, fp);
        printf("%s %d %.2f\n", temp.name, temp.id, temp.salary);
    }

    fclose(fp);

    return 0;
}
