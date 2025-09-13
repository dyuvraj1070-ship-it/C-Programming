#include <stdio.h>

int main() {
    char inputChar;

    printf("Enter a character: ");
    scanf(" %c", &inputChar);

    if(inputChar == 'a' || inputChar == 'e' || inputChar == 'i' || inputChar == 'o' || inputChar == 'u' ||
       inputChar == 'A' || inputChar == 'E' || inputChar == 'I' || inputChar == 'O' || inputChar == 'U') {
        printf("%c is a Vowel\n", inputChar);
    } else {
        printf("%c is a Consonant\n", inputChar);
    }

    return 0;
}
