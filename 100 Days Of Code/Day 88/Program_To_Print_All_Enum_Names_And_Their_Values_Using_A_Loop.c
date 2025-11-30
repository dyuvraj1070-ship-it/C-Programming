#include <stdio.h>

enum Items { ONE, TWO, THREE, FOUR, FIVE };

int main() {
    enum Items i;

    for(i = ONE; i <= FIVE; i++) {
        if(i == ONE)  printf("ONE %d\n", i);
        if(i == TWO)  printf("TWO %d\n", i);
        if(i == THREE)printf("THREE %d\n", i);
        if(i == FOUR) printf("FOUR %d\n", i);
        if(i == FIVE) printf("FIVE %d\n", i);
    }

    return 0;
}
