#include <stdio.h>

void main() {
    float value;
    printf("Enter a value: ");
    scanf("%f", &value);
    float result = (3 * value * value * value * value * value) + (2 * value * value * value * value) - (5 * value * value * value) - (value * value) + (7 * value) - 6;
    printf("\nResult: %.2f", result);
}
