#include <stdio.h>

int main() {
    float tempCelsius, tempFahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &tempCelsius);

    tempFahrenheit = (tempCelsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", tempFahrenheit);

    return 0;
}
