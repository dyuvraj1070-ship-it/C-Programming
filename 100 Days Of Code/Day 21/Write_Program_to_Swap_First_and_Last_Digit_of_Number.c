#include <stdio.h>

int main()
{
    int num, first, last, temp, digits = 0, pow10 = 1, newnum;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while(temp >= 10){
        temp = temp / 10;
        pow10 = pow10 * 10;
        digits++;
    }
    first = temp;

    newnum = last * pow10 + (num % pow10) / 10 * 10 + first;

    printf("Number after swapping first and last digit is %d\n", newnum);

    return 0;
}
