#include <stdio.h>

void main() {
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    float withTax = amount * 1.05f;
    printf("With tax added: %.2f", withTax);
}