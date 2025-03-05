#include <stdio.h>

void main() {
    int itemNumber;
    float unitPrice;
    int month, day, year;
    printf("Enter item number: ");
    scanf("%d", &itemNumber);
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit Price\tPurchase Date\n");
    printf("%-5d\t$%8.2f\t%.2d/%.2d/%.4d", itemNumber, unitPrice, month, day, year);
}