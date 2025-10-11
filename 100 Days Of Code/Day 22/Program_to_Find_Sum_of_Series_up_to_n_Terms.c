#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0;
    int numerator = 1, denominator = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i == 1){
            sum = sum + 1;  // first term is 1
            numerator = 3;
            denominator = 4;
        } else {
            sum = sum + (float)numerator / denominator;
            numerator = numerator + 2;
            denominator = denominator + 2;
        }
    }

    printf("Sum of series up to %d terms = %.2f\n", n, sum);

    return 0;
}
