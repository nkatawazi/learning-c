#include <stdio.h>

void main()
{
    int age = 3;

    int *pAge = &age;

    //we're going to get the physical entity stored at that location by using * on the pointer variable
    //just getting the value that its pointing to
    printf("%d\n", *pAge);
    printf("%d\n", *&age);
    printf("%d", *&*&age);
}