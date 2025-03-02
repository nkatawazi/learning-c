#include <stdio.h>

//prototyped method definition so i dont get errors
int cube(int value);

void main()
{
    printf("result: %d", cube(3));
}

int cube(int value) {
    return value * value * value;
}