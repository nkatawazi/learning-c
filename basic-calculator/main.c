#include <stdio.h>

void main()
{
    double number1;
    double number2;

    printf("Enter first number: ");
    scanf("%lf", &number1);
    printf("Enter second number: ");
    scanf("%lf", &number2);

    printf("Answer: %f", number1 + number2);
}