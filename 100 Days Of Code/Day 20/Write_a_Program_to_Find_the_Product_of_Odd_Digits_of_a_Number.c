#include <stdio.h>

int main()
{
    int num, rem, product = 1, found_odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        rem = num % 10;
        if(rem % 2 != 0){
            product = product * rem;
            found_odd = 1;
        }
        num = num / 10;
    }

    if(found_odd)
        printf("Product of odd digits is %d\n", product);
    else
        printf("No odd digits found\n");

    return 0;
}
