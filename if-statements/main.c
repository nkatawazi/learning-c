#include <stdio.h>

int max(int num1, int num2);

void main()
{
    printf("Max result: %d", max(40, 10));
}

int max(int num1, int num2)
{
    int result;

    if(num1 > num2) 
    {
        result = num1;
    }
    else 
    {
        result = num2;
    }

    return result;
}