#include <stdio.h>

int main() {
    float rectlength, rectwidth;
    float rectarea, rectperimeter;

    printf("Enter the length of rectangle: ");
    scanf("%f", &rectlength);

    printf("Enter the width of rectangle: ");
    scanf("%f", &rectwidth);

    rectarea = rectlength * rectwidth;
    rectperimeter = 2 * (rectlength + rectwidth);

    printf("Area of rectangle = %.2f\n", rectarea);
    printf("Perimeter of rectangle = %.2f\n", rectperimeter);

    return 0;
}
