#include <stdio.h>
#include <string.h>

void main() {
    int numbers[16];
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4], &numbers[5], &numbers[6], &numbers[7], &numbers[8], &numbers[9], &numbers[10], &numbers[11], &numbers[12], &numbers[13], &numbers[14], &numbers[15]);
    printf("%2d\t%2d\t%2d\t%2d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("%2d\t%2d\t%2d\t%2d\n", numbers[4], numbers[5], numbers[6], numbers[7]);
    printf("%2d\t%2d\t%2d\t%2d\n", numbers[8], numbers[9], numbers[10], numbers[11]);
    printf("%2d\t%2d\t%2d\t%2d\n", numbers[12], numbers[13], numbers[14], numbers[15]);

    int rowSums[4];
    rowSums[0] = numbers[0] + numbers[1] + numbers[2] + numbers[3];
    rowSums[1] = numbers[4] + numbers[5] + numbers[6] + numbers[7];
    rowSums[2] = numbers[8] + numbers[9] + numbers[10] + numbers[11];
    rowSums[3] = numbers[12] + numbers[13] + numbers[14] + numbers[15];

    int colSums[4];
    colSums[0] = numbers[0] + numbers[4] + numbers[8] + numbers[12];
    colSums[1] = numbers[1] + numbers[5] + numbers[9] + numbers[13];
    colSums[2] = numbers[2] + numbers[6] + numbers[10] + numbers[14];
    colSums[3] = numbers[3] + numbers[7] + numbers[11] + numbers[15];

    int diagonalSums[2];
    diagonalSums[0] = numbers[0] + numbers[5] + numbers[10] + numbers[15];
    diagonalSums[1] = numbers[3] + numbers[6] + numbers[9] + numbers[12];

    printf("\nRow Sums: %d %d %d %d", rowSums[0], rowSums[1], rowSums[2], rowSums[3]);
    printf("\nColumn Sums: %d %d %d %d", colSums[0], colSums[1], colSums[2], colSums[3]);
    printf("\nDiagonal Sums: %d %d", diagonalSums[0], diagonalSums[1]);
}