#include <stdio.h>

int fact_rec(int num) {
    if(num == 0)
        return 1;
    else
        return num * fact_rec(num - 1);
}

int fact_nonrec(int num) {
    int i, f = 1;
    for(i = 1; i <= num; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int n, r, i, j;
    printf("n\t r\t Recursive Binomial \t Non-recursive Binomial\n");

    for(n = 0; n <= 5; n++) {
        for(r = 0; r <= n; r++) {
            int comb_rec = fact_rec(n) / (fact_rec(r) * fact_rec(n - r));
            int comb_nonrec = fact_nonrec(n) / (fact_nonrec(r) * fact_nonrec(n - r));
            printf("%d\t %d\t %d\t\t\t %d\n", n, r, comb_rec, comb_nonrec);
        }
    }

    return 0;
}
