#include <stdio.h>

int main()
{
    char binary[100];
    int i = 0;

    printf("Enter binary number: ");
    scanf("%s", binary);

    while(binary[i] != '\0'){
        if(binary[i] == '0')
            binary[i] = '1';
        else if(binary[i] == '1')
            binary[i] = '0';
        else{
            printf("Invalid input\n");
            return 0;
        }
        i++;
    }

    printf("1's complement is %s\n", binary);

    return 0;
}
