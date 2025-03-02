#include <stdio.h>

void main()
{
    char name[] = "Jan";
    int age = 35;

    printf("This person is named %s.\nHe is %d years old.\n", name, age);

    age = 70;

    printf("Now he is %d years old.", age);
}