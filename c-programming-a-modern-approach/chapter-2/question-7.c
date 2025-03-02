#include <stdio.h>

void main() {
    int dollarAmount = 0;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollarAmount);

    int twentyBills = dollarAmount / 20;
    dollarAmount -= (20 * twentyBills);

    int tenBills = dollarAmount / 10;
    dollarAmount -= (10 * tenBills);

    int fiveBills = dollarAmount / 5;
    dollarAmount -= (5 * fiveBills);

    int oneBills = dollarAmount / 1;

    printf("$20 bills: %d\n", twentyBills);
    printf("$10 bills: %d\n", tenBills);
    printf("$5 bills: %d\n", fiveBills);
    printf("$1 bills: %d\n", oneBills);
}
