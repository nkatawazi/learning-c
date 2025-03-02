#include <stdio.h>
#include <stdlib.h>

double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

void main()
{
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter an operator: ");
    //the space at the start of scanf here is deliberate
    scanf(" %c", &op);

    printf("Enter a number: ");
    scanf("%lf", &num2);

    if(op == '+')
    {
        printf("%f", add(num1, num2));
    }
    else if (op == '-')
    {
        printf("%f", subtract(num1, num2));
    }
    else if (op == '*')
    {
        printf("%f", multiply(num1, num2));
    }
    else if (op == '/')
    {
        printf("%f", divide(num1, num2));
    }
    else
    {
        printf("unknown operator.");
    }
}

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    return num1 - num2;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    return num1 / num2;
}