#include <stdio.h>

void main() {
    int areaCode, firstThree, lastFour;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%3d) %3d-%4d", &areaCode, &firstThree, &lastFour);
    printf("You entered : %d.%d.%d\n", areaCode, firstThree, lastFour);
}