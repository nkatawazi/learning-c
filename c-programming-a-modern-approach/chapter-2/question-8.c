#include <stdio.h>

float calculateAmount(float loanAmount, float interestRate, float monthlyPayment);

void main() {
    float loanAmount;
    float interestRate;
    float monthlyPayment;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    float firstMonthBalance = calculateAmount(loanAmount, interestRate, monthlyPayment);
    float secondMonthBalance = calculateAmount(firstMonthBalance, interestRate, monthlyPayment);
    float thirdMonthBalance = calculateAmount(secondMonthBalance, interestRate, monthlyPayment);

    printf("Balance Remaining after first payment: %.2f\n", firstMonthBalance);
    printf("Balance Remaining after second payment: %.2f\n", secondMonthBalance);
    printf("Balance Remaining after third payment: %.2f\n", thirdMonthBalance);
}

float calculateAmount(float loanAmount, float interestRate, float monthlyPayment) {
    float monthlyInterestRate = 1 + (interestRate / 12.0f / 100.0f);
    return (loanAmount * monthlyInterestRate) - monthlyPayment;
}