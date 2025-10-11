#include <stdio.h>

int main() {
    int arr[100], n, i;
    int pos = 0, neg = 0, odd = 0, even = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++) {
        if(arr[i] > 0)
            pos++;
        if(arr[i] < 0)
            neg++;
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);

    return 0;
}
