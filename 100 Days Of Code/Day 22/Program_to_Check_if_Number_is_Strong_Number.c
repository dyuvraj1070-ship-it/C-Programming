#include <stdio.h>

int factorial(int n){
    int fact = 1, i;
    for(i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num, temp, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0){
        rem = temp % 10;
        sum = sum + factorial(rem);
        temp = temp / 10;
    }

    if(sum == num)
        printf("%d is a strong number\n", num);
    else
        printf("%d is not a strong number\n", num);

    return 0;
}
