#include <stdio.h>

void main() {
    float value;
    printf("Enter a value: ");
    scanf("%f", &value);
    float result = ((((3 * value + 2) * value - 5) * value - 1) * value + 7) * value - 6;
    printf("\nResult: %.2f", result);
}

